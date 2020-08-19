#include <iostream>

using namespace std;

int main() 
{
    int num;
    int iterations = 0;
    cout << "Enter a number other than " << iterations << ": ";
    cin >> num;

    while (num != iterations){
        iterations++;
        if(iterations == 10){
            cout << "Wow, you're more patient then I am, you win.";
            return 0;
        } else {
            cout << "Enter a number other than " << iterations << ": ";
            cin >> num;
        }
    }
    cout << "Hey! You weren't supposed to choose " << iterations << '!';
    
    return 0;
}