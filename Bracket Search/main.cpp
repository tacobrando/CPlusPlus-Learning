#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int secretNum;
    int guess = rand() % 100 + 1;
    bool gameOver = false;
    cout << "Enter a number from 1 to 100 for the computer to guess: " << endl;
    cin >> secretNum;

    while(!gameOver) {
        srand(unsigned(time(0)));
        string lowOrHigh;
        if(guess != secretNum){
            cout << "The computer guesses: " << guess << endl;
            cout << "Tell the computer if its too 'low' or too 'high':" << endl;
            cin >> lowOrHigh;
            if(lowOrHigh == "low") {
                guess++;
            } else if(lowOrHigh == "high") {
                guess--;
            }
        } else if(guess == secretNum){
            gameOver = true;
        }

    }
    cout << "Computers guess: " << guess << endl;
    cout << "Secret Answer: " << secretNum << endl;
    cout << "The computer Got it!" << endl;

    return 0;
}

    // srand(unsigned(time(0)));
    // int secretNum = rand() % 100 + 1;
    // int guess;
    // int counter = 0;

    // cout << "cheat: " << secretNum << endl;
    // cout << "Guess a number from 1 to 100: " << endl;
    // cin >> guess;
    
    // while(guess != secretNum) {
    //     counter++;
    //     if(guess > secretNum) {
    //         cout << "Too high! Try again: " << endl;
    //         cout << "Tries: " << counter << endl;
    //         cin >> guess;
    //     } else {
    //         cout << "Too low! Try again: " << endl;
    //         cout << "Tries: " << counter << endl;
    //         cin >> guess;
    //     }
    // }
    // cout << "You got it!" << endl;