#include <iostream>

using namespace std;

int main()
{
    int userOption;
    string options[5] = { "Coka Cola", "Cream Soda", "Sprite", "Lemonade", "Fanta"};

    cout << "Drink Options: " << endl;

    for(int i = 0; i < 5; i++) {
        cout << i+1 << ". " << options[i] << endl;
    }

    cout << "Input Number: ";
    cin >> userOption;

    switch(userOption){
        case 1:
            cout << "You have chosen " << options[0];
            break;
        case 2:
            cout << "You have chosen " << options[1];
            break;
        case 3:
            cout << "You have chosen " << options[2];
            break;
        case 4:
            cout << "You have chosen " << options[3];
            break;
        case 5:
            cout << "You have chosen " << options[4];
            break;

        default:
            cout << "Error. choice was not valid, here is your money back" << endl;
            break;
    }

    return 0;
}

