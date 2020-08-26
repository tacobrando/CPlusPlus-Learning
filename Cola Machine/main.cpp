#include <iostream>

using namespace std;

string options[5] = { "Coka Cola", "Cream Soda", "Sprite", "Lemonade", "Fanta"};

int main()
{
    int userOption;

    cout << "Drink Options: " << endl;

    for(int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << options[i] << endl;
    }

    cout << "Input Number: ";
    cin >> userOption;

    switch(userOption){
        case 1:
            cout << "You have chosen " << options[0] << endl;
            break;
        case 2:
            cout << "You have chosen " << options[1] << endl;
            break;
        case 3:
            cout << "You have chosen " << options[2] << endl;
            break;
        case 4:
            cout << "You have chosen " << options[3] << endl;
            break;
        case 5:
            cout << "You have chosen " << options[4] << endl;
            break;

        default:
            cout << "Error. choice was not valid, here is your money back" << endl;
            break;
    }

    return 0;
}

