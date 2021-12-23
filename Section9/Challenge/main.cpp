#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Welcome to collection manager. You will be provided a menu from which you can choose options to proceed." << endl;

    vector<int> state;
    bool repeat{true};

    while (repeat)
    {
        char option;
        cout << "\n----------------------------" << endl;
        cout << "\n\tP - print numbers" << endl;
        cout << "\tA - add a number" << endl;
        cout << "\tM - display mean" << endl;
        cout << "\tS - display least" << endl;
        cout << "\tL - display largest" << endl;
        cout << "\tF - find occurrences of a number" << endl;
        cout << "\tC - clear the list" << endl;
        cout << "\tD - remove duplicates" << endl;
        cout << "\tR - repeat this menu" << endl;
        cout << "\tQ - quit" << endl;
        cout << "\nEnter your option: ";
        cin >> option;
        switch (option)
        {
        case 'p':
        case 'P':
            cout << "You chose to print the numbers." << endl;
            if (state.size() == 0)
            {
                cout << "\n[] - the list is empty" << endl;
            }
            else
            {
                cout << "[ ";
                for (auto number : state)
                {
                    cout << number << " ";
                }
                cout << "]" << endl;
            }
            break;
        case 'a':
        case 'A':
        {
            cout << "You chose to add an integer to the state." << endl;
            int newNumber{0};
            cout << "\nWhat integer would you like to add? ";
            cin >> newNumber;
            state.push_back(newNumber);
            cout << newNumber << " added" << endl;
            break;
        }
        case 'm':
        case 'M':
        {
            cout << "You chose to display the mean." << endl;
            if (state.size() == 0)
            {
                cout << "Unable to calculate the mean - no data" << endl;
            }
            else
            {
                int total{0};
                for (auto dataPoint : state)
                {
                    total += dataPoint;
                }
                cout << "The mean of the data is " << total / state.size() << endl;
            }
            break;
        }
        case 's':
        case 'S':
        {
            cout << "You chose to display the smallest number in the state." << endl;
            if (state.size() == 0)
            {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            }
            else
            {
                int minimum{state[0]};
                for (auto dataPoint : state)
                {
                    if (dataPoint < minimum)
                    {
                        minimum = dataPoint;
                    }
                }
                cout << "The minimum is " << minimum << endl;
            }
            break;
        }
        case 'l':
        case 'L':
        {
            cout << "You chose to display the largest number in the state." << endl;
            if (state.size() == 0)
            {
                cout << "Unable to determine the largest number - list is empty" << endl;
            }
            else
            {
                int maximum{state[0]};
                for (auto dataPoint : state)
                {
                    if (dataPoint > maximum)
                    {
                        maximum = dataPoint;
                    }
                }
                cout << "The maximum is " << maximum << endl;
            }
            break;
        }
        case 'f':
        case 'F':
        {
            cout << "You chose to find the occurrences of a given number in the state." << endl;
            int find{0};
            cout << "\nWhat number would you like to find the occurrences of? ";
            cin >> find;
            int count{0};
            for (auto dataPoint : state)
            {
                if (dataPoint == find)
                {
                    count++;
                }
            }
            cout << find << " occurs " << count << " times in the state." << endl;
            break;
        }
        case 'c':
        case 'C':
        {
            cout << "You chose to clear the state." << endl;
            bool done{false};
            while (!done)
            {
                char sure;
                cout << "\nAre you sure you would like to clear the state? You will not be able to recover it. (y/N): ";
                cin >> sure;
                switch (sure)
                {
                case 'y':
                case 'Y':
                    state.clear();
                    cout << "Erased all elements from the state." << endl;
                    done = true;
                    break;
                case 'n':
                case 'N':
                    cout << "Operation canceled." << endl;
                    done = true;
                    break;
                default:
                    cout << "Invalid option. Please choose y for yes or n for no" << endl;
                }
            }
            break;
        }
        case 'd':
        case 'D':
        {
            cout << "You chose to remove all duplicates." << endl;
            vector<int> newVector;
            for (auto dataPoint : state)
            {
                bool found{false};
                for (auto currentPoint : newVector)
                {
                    if (dataPoint == currentPoint)
                    {
                        found = true;
                    }
                }
                if (!found)
                {
                    newVector.push_back(dataPoint);
                }
            }
            state = newVector;
            cout << "Removed all duplicates." << endl;
            break;
        }
        case 'r':
        case 'R':
            cout << "You chose to repeat this menu." << endl;
            break;
        case 'q':
        case 'Q':
        {
            cout << "You chose to quit the collection manager." << endl;
            repeat = false;
            break;
        }
        default:
            cout << "You entered an invalid option. Please try again." << endl;
        }
    }

    cout << endl;
    return 0;
}
