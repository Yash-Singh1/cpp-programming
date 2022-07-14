#include <iostream>
#include <string>

using namespace std;

int main()
{
  string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

  string message;
  cout << "Enter your message: ";
  getline(cin, message);

  for (size_t i{0}; i < message.length(); ++i)
  {
    size_t pos{alphabet.find(message[i])};
    if (pos != string::npos)
    {
      message[i] = key[pos];
    }
  }

  cout << "Encrypted message: " << message << endl;

  for (size_t i{0}; i < message.length(); ++i)
  {
    size_t pos{key.find(message[i])};
    if (pos != string::npos)
    {
      message[i] = alphabet[pos];
    }
  }

  cout << "Decrypted message: " << message << endl;

  cout << endl;
  return 0;
}
