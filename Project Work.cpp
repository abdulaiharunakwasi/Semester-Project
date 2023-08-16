#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    string myChoices[3] = {"Rock", "Paper", "Scissor"};
    string playAgain;

    do {
        cout << "Choose your move (0=Rock, 1=Paper, 2=Scissor): ";
        int userChoice;
        cin >> userChoice;

        if (userChoice < 0 || userChoice > 2) {
            cout << "Invalid choice. Please choose 0, 1, or 2." << endl;
            continue;
        }

        srand(time(0));
        int computerChoice = rand() % 3;

        cout << "You chose: " <<userChoice << endl;
        cout << "Computer chose: " <<computerChoice << endl;

        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 0 && computerChoice == 2) ||
                   (userChoice == 1 && computerChoice == 0) ||
                   (userChoice == 2 && computerChoice == 1)) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }

        cout << "Do you want to play again? (YES/NO): ";
        cin >> playAgain;
    } while (playAgain == "YES" || playAgain == "yes");

    cout << "Thank you for playing!" << endl;

    return 0;
}
