# Labor 25.06.21 -  Soziales Netzwerk

Implementierung einer Struktur für ein Soziales Netzwerk basierend auf dem [Code der letzten Vorlesung](https://github.com/TEL20A/Informatik-2/blob/main/Vorlesungsmaterial/21-06-21/socialNet.cpp):
- `addFriend` vom `struct User` implementieren
- Im `struct SocialNet` sollten mindestens folgende Methoden funktionieren (es können aber noch weiter hinzugefügt werden):
  - `getUserByStudy`
  - `void addUser(string name, unsigned short alter, string studienGang)`, um den User direkt durch Aufruf der Methode zu erstellen und hinzuzufügen
  - `unsigned int getUserNumber()`: Methode welche die Anzahl der Nutzer zurück gibt.
  - `User* getUserByName(string name)`: Methode soll Pointer auf den User mit Namen `string name` zurück geben.
- Erweiterung: Anspeichern des Netzwerks in Datein, damit diese beim Beenden des Programms nicht verloren gehen und beim start wieder geladen werden.
- Erweiterung: Überlegen Sie wie man `struct Connection` nutzen kann um Informationen der Kanten zu speichern. Diese Informationen könnten z.B. die Anzahl der Chats und/oder der letzte Chat zwischen zwei Nutzern sein.