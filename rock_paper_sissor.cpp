#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // random number generator

    int userChoice, computerChoice;
    char playAgain;

    do {
        cout << "\n==== ROCK PAPER SCISSORS ====\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Enter your choice (1-3): ";
        cin >> userChoice;

        if (userChoice < 1 || userChoice > 3) {
            cout << "Invalid choice! Try again.\n";
            continue;
        }

        computerChoice = rand() % 3 + 1;

        cout << "Computer chose: ";
        if (computerChoice == 1) cout << "Rock\n";
        else if (computerChoice == 2) cout << "Paper\n";
        else cout << "Scissors\n";

        if (userChoice == computerChoice) {
            cout << "It's a Draw!\n";
        }
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2)) {
            cout << "You Win! 🎉\n";
        }
        else {
            cout << "Computer Wins! 🤖\n";
        }

        cout << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}
