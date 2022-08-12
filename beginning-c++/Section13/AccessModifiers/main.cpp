#include <iostream>

using namespace std;

class Player {
private:
  string name;
  int health;
  int xp;
public:
  void talk(string str) {
    cout << name << ": " << str << endl;
  }
  bool is_dead();
};

int main() {
  Player frank;
  // frank.name = "Frank";
  // cout << frank.health << endl;
  frank.talk("Sup buddy");

  cout << endl;
  return 0;
}
