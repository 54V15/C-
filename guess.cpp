#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    int random = 4;
    cout << "I'm thinking of a number! Try to guess it" << endl;
    int guess = -1;
   
    while (guess != random)
    {
        cin >> guess;
        if (guess != random)
        {
            cout << "Nope! Guess Again!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    cout << "Yay! You got it" << endl;
    return 0;
}