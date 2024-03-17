#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    srand(time(NULL));


    int secretNumber = rand() % 100 + 1;
    int guess;

     cout << setw(40) << "************!Welcome to the Guess the Number game!**************" << endl<<endl;

    while (true) {

        cout << "Guess the number (between 1 and 100): ";
        cin >> guess;

        if (cin.fail()) {
            cout << "Uff! Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        if (guess == secretNumber) {
            cout << "******************Congratulations! You guessed the correct number:****************** " << secretNumber << endl;
            break;
        }
        else if (guess > secretNumber) {
            cout << "======uff!Too high! Try again.======" << endl;
        }

        else {
            cout <<"======uff!Too low! Try again.========" << endl;
        }
    }

    return 0;
}
