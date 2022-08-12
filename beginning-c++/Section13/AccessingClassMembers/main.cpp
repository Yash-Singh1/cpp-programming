#include <iostream>

using namespace std;

class Player {
public:
  string name;
  int hp;
  void talk(string str) {
    cout << name << ": " << str << endl;
  }
  void kill() {
    hp = 0;
  }
};

int main() {
  Player person;
  person.name = "Frank";
  person.hp = 80;

  cout << "Frank's name: " << person.name << endl;
  cout << "Frank's health: " << person.hp << endl;
  person.talk("yo sup");

  cout << endl;
  Player *franky = new Player;
  franky->name = "Franky";
  franky->hp = 100;

  cout << "Franky's name: " << franky->name << endl;
  cout << "Franky's health: " << franky->hp << endl;
  franky->talk("yo i work too");
  franky->kill();
  cout << "Franky's new health: " << franky->hp << endl;

  cout << endl;
  return 0;
}
