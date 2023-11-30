#include <iostream>
using namespace std;

int main()

{
    srand((unsigned)time(0));
    cout << "Malcolms Blackjack Game.\n";
    int cash, nChoice = 0;

    cout << "press (1) to continue and (0) to end" << endl;
    cin >> nChoice;

    while (nChoice == 1)
    {
        cout << "\n" << "Please place your money: $";
        cin >> cash;
        int dealer1 = rand() % 13 + 1;
        int dealer2 = rand() % 13 + 1;
        int player1 = rand() % 13 + 1;
        int player2 = rand() % 13 + 1;
        cout << "\n" << "The dealer has ";


        switch (dealer1) {
        case 1: cout << "Ace and ";
            break;
        case 11: cout << "Jack and ";
            break;
        case 12: cout << "Queen and ";
            break;
        case 13: cout << "King and ";
            break;
        default: cout << dealer1 << " and ";
            break;
        }
        switch (dealer2) {
        case 1: cout << "Ace";
            break;
        case 11: cout << "Jack";
            break;
        case 12: cout << "Queen";
            break;
        case 13: cout << "King";
            break;
        default: cout << dealer2;
            break;
        }
        cout << "\n" << "\n" << "You have ";
        switch (player1) {
        case 1: cout << "Ace and ";
            break;
        case 11: cout << "Jack and ";
            break;
        case 12: cout << "Queen and ";
            break;
        case 13: cout << "King and ";
            break;
        default: cout << player1 << " and ";
            break;
        }
        switch (player2) {
        case 1: cout << "Ace";
            break;
        case 11: cout << "Jack";
            break;
        case 12: cout << "Queen";
            break;
        case 13: cout << "King";
            break;
        default: cout << player2;
            break;
        }

        cout << "\n";

        int d_total = dealer1 + dealer2;

        int p_total = player1 + player2;

        if ((player1 == 1) && (player2 == 10 | 11 | 12 | 13)) {

            cout << "Blackjack! You Win $ " << cash * 2 << "!!" << endl;
        }

         
         else if ((player2 == 1) && (player1 == 10 | 11 | 12 | 13)){
                cout << "Blackjack! You Win $ " << cash * 2 << "!!" << endl;
        }
        else {
            if (p_total > d_total) {
                cout << "\n" << "You Win $" << cash * 2 << "!!" << endl;
            }
            else {
                cout << "\n" << "You lose" << endl;
            }
        }
    }






    return 0;

}
