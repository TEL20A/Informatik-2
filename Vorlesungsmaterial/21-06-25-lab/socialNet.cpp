#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct User;

// Beschreibung der Kanten/Beziehungen der User
struct Connection {
  User *_user1;
  User *_user2;

  Connection(User* user1, User* user2)
  {
    _user1 = user1;
    _user2 = user2;
  }
  // Meta Informationen
  unsigned int _numChats;
};

// Datentyp des Knotens
struct User {
  string _username;
  unsigned short _alter;
  string _studienGang;
  string _studienOrt;


  User(string name, unsigned short alter, string studienGang, string StudienOrt) {
    _username = name;
    _alter = alter;
    _studienGang = studienGang;
    _studienOrt = StudienOrt;
  }
  // Vector mit Zeigern auf die Freunde
  vector<User *> _friends;
  vector<Connection *> _friendConnects;

  void addFriend(User* const user) {
    _friends.push_back(user);
  }

  // Zusätzliche Funktion zum vernetzten der Freund mit struct Connection
  void addFriendConnect(Connection* connect) {
    _friendConnects.push_back(connect);
  }

  void printUser() {
    cout << _username << " " << _alter << " " << _studienGang << " " << _studienOrt << endl;
  }

  unsigned int getFriendNumber() {
    return _friends.size();
  }

};

struct SocialNet {
  vector<User*> _users;  // Liste der Nutzer im Netzwerk
  unsigned long _numConnections = 0;  // Anzahl der Freundschaften

  void addUser(string name, unsigned short alter, string studienGang, string StudienOrt) {
    User* user = new User(name, alter, studienGang, StudienOrt);
    addUser(user);
  }
  void addUser(User* user) {
    _users.push_back(user);
  }
  vector<User*> getUserByStudy(string studienGang) {
    vector<User*> users;
    for (auto user : _users)
    {
      if (user->_studienGang == studienGang)
      {
        users.push_back(user);
      }
    }
    return users;
  }
  void connectUsers(User* user1, User* user2) {
    user1->addFriend(user2);
    user2->addFriend(user1);
    _numConnections++;

    // struct Connection benutzen
    // hier zusätzlich um es zu zeigen
    Connection* connect = new Connection(user1, user2);
    // hier bekommen beide Nutzer die gleiche Connection, das diese auf
    // dem Heap angelegt wird und damit beide auf die gleichen Meta Informationen
    // Zugriff haben
    user1->addFriendConnect(connect);
    user2->addFriendConnect(connect);
  }

  void printNetwork()
  {
    string str = "https://dreampuf.github.io/GraphvizOnline/#graph%20G%7B%0A";
    for (auto user : _users)
    {
      if (user->getFriendNumber() > 0)
      {
        for (auto _friend : user->_friends)
        {
          str += "%20%20" + user->_username + "--" + _friend->_username + "%0A";
        }
      }
      else
      {
        str += "%20%20" + user->_username + "%0A";
      }
    }
    str += "%7D";
    cout << str << endl;
  }

  void printNetworkConnects()
  {
    vector<Connection *> connects; // sammle zuerst alle einzigartigen Freunschaften
    string str = "https://dreampuf.github.io/GraphvizOnline/#graph%20G%7B%0A";
    for (auto user : _users)
    {
      if (user->getFriendNumber() > 0)
      {
        for (auto connect : user->_friendConnects)
        {
          // Wenn die connection nicht existiert füge sie zu connects hinzu
          if (find(connects.begin(), connects.end(), connect) == connects.end())
          {
            connects.push_back(connect);
          }
        }
      }
      else
      {
        str += "%20%20" + user->_username + "%0A";
      }
    }
    for (auto connect : connects)
    {
      str += "%20%20" + connect->_user1->_username + "--" + connect->_user2->_username + "%0A";
    }
    str += "%7D";
    cout << str << endl;
  }

  User *getUserByName(string name) {
    for (auto user : _users)
    {
      if (user->_username == name)
      {
        return user;
      }
    }
    return nullptr;
  }

  unsigned int getUserNumber() {
    return _users.size();

  }
  unsigned long getFriendships() {
    return _numConnections;
  }

};

int main() {
  cout << "Hello Social Net\n";

  SocialNet network;

  User* user1 = new User("Frank", 22, "ET","Mannheim");
  User* user2 = new User("Olivia", 21, "ET","Mannheim");
  User* user3 = new User("Steve", 27, "BWL","Mannheim");
  User* user4 = new User("Thorsten", 21, "BWL","Mannheim");

  network.addUser(user1);
  network.addUser(user2);
  network.addUser(user3);
  network.addUser("Thorsten", 21, "BWL","Mannheim");
  network.addUser("Kevin", 21, "BWL","Mannheim");

  if(User* search = network.getUserByName("Thorsten")) {
    cout << "found\n";
    search->printUser();
    network.connectUsers(user1, search);
  }
  else {
    cout << "Not found\n";
  }

  network.connectUsers(user1, user2);
  network.connectUsers(user1, user3);
  network.connectUsers(user2, user3);

  cout << "The network has " << network.getUserNumber() << " users with " <<
  network.getFriendships() <<  " number of friendships\n";

  network.printNetwork();
  network.printNetworkConnects();

  return EXIT_SUCCESS;
}