#include <iostream>

using namespace std;

int main() {
  bool quit {false};

  do {
    cout << "\n--------------------------" << endl;
    cout << "\n\t1. Repeat" << endl;
    cout << "\t2. Learn More" << endl;
    cout << "\t3. Quit" << endl;
    cout << "\nEnter your option: ";
    char option;
    cin >> option;
    switch (option) {
      case '1':
        cout << "You chose to repeat" << endl;
        break;
      case '2':
        cout << "You chose to learn more about this program" << endl;
        cout << "\n--------------------------" << endl;
        cout << "\nThis is a little menu thingy I made while learning C++" << endl;
        break;
      case '3':
        cout << "You chose to quit" << endl;
        quit = true;
        break;
      default:
        cout << "Invalid option" << endl;
    }
  } while (!quit);

  return 0;
}
