#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

struct User;

// Beschreibung der Kanten/Beziehungen der User
struct Connection {
  User *_user1;
  User *_user2;

  // Meta Informationen
  unsigned int _numChats;
};

// Datentyp des Knotens
struct User {
  string _username;
  unsigned short _alter;
  string _studienGang;
  string _studienOrt;


  User(string name, unsigned short alter, string studienGang) {
    _username = name;
    _alter = alter;
    _studienGang = studienGang;
  }
  // Vector mit Zeigern auf die Freunde
  vector<User *> _friends;

  void addFriend(const User * user) {

  }

};

struct SocialNet {
  vector<User*> _users;  // Liste der Nutzer im Netzwerk
  unsigned long _numConnections;  // Anzahl der Freundschaften
  // map<string, vector<User*>> studienGang;

  void addUser(string name, unsigned short alter, string studienGang) {

  }
  void addUser(User* user) {
    _users.push_back(user);
  }
  vector<User*> getUserByStudy(string studienGang) {

  }
  void connectUsers(User* user1, User* user2) {
    user1->addFriend(user2);
    user2->addFriend(user1);
    _numConnections++;
  }

  void printNetwork() {
    
  }

  User* getUserByName(string name) {

  }

  unsigned int getUserNumber() {
    
  }

};

int main() {
  cout << "Hello Social Net\n";

  SocialNet network;

  User* user1 = new User("Frank", 22, "ET");
  User* user2 = new User("Olivia", 21, "ET");
  network.addUser(user1);
  network.addUser(user2);
  network.connectUsers(user1, user2);

}