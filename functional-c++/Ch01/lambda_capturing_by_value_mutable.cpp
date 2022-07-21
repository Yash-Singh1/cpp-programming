#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

auto main() -> int {
    vector<int> vect;
    for (int i{0}; i < 10; ++i) {
        vect.push_back(i);
    }

    cout << "Orginal Data:" << endl;
    for_each(
        begin(vect),
        end(vect),
        [](int n){
            cout << n << " ";
        }
    );
    cout << endl;

    int a = 1;
    int b = 2;

    for_each(begin(vect), end(vect), [=](int &x) mutable {
        const int old = x;
        x *= 2;
        a = b;
        b = old;
    });

    cout << "Squared Data:" << endl;
    for_each(
        begin(vect),
        end(vect),
        [](int n){
            cout << n << " ";
        }
    );
    cout << endl << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
