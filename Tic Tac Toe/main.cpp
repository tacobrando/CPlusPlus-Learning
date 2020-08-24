#include <iostream>

using namespace std;

char squares[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player;

bool gameOver = true;
bool player2Turn = false;

void board();
void turn(char num, char symbol);
void gameCheck();

int main() 
{   
    cout << "Welcome! This is a simple tic tac toe game (W.I.P)" << endl;
    cout << "Press Enter to continue" << endl;
    cin.ignore();
    gameOver = false;
    while(!gameOver) {
        board();
        cout << "Note: enter 'q' to quit the game during a tie or whenever" << endl;
        if(!player2Turn){ 
            cout << "Player 1 it's your turn! You are 'X': ";
            cin >> player;
            turn(player, 'X');
            player2Turn = true;
        } else if(player2Turn) {
            cout << "Player 2 it's your turn! You are 'O': ";
            cin >> player;
            turn(player, 'O');
            player2Turn = false;
        }
        gameCheck();

    }
    cout << "You Win!" << endl;

    return 0;
}
void turn(char num, char symbol){
    switch(num){
        case '1': squares[0][0] = symbol;
            break;
        case '2': squares[0][1] = symbol;
            break;
        case '3': squares[0][2] = symbol;
            break;
        case '4': squares[1][0] = symbol;
            break;
        case '5': squares[1][1] = symbol;
            break;
        case '6': squares[1][2] = symbol;
            break;
        case '7': squares[2][0] = symbol;
            break;
        case '8': squares[2][1] = symbol;
            break;
        case '9': squares[2][2] = symbol;
            break;
        case 'q': exit(1);
            break;
    }
}

void board() {
    cout << "     |     |    " << endl;
    cout << "  " << squares[0][0] << "  |  " << squares[0][1] << "  |  " << squares[0][2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << squares[1][0] << "  |  " << squares[1][1] << "  |  " << squares[1][2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << squares[2][0] << "  |  " << squares[2][1] << "  |  " << squares[2][2] << endl;
    cout << "     |     |     " << endl << endl;
}

void gameCheck() {
    if((squares[0][0] == squares[0][1] && squares[0][0] == squares[0][2]) || 
       (squares[1][0] == squares[1][1] && squares[1][0] == squares[1][2]) ||
       (squares[2][0] == squares[2][1] && squares[2][0] == squares[2][2]) ||
       (squares[0][0] == squares[1][0] && squares[0][0] == squares[2][0]) ||
       (squares[0][1] == squares[1][1] && squares[0][1] == squares[2][1]) ||
       (squares[0][2] == squares[1][2] && squares[0][2] == squares[2][2]) ||
       (squares[0][0] == squares[1][0] && squares[0][0] == squares[2][0]) ||
       (squares[0][1] == squares[1][1] && squares[0][1] == squares[2][1]) ||
       (squares[0][0] == squares[1][1] && squares[0][0] == squares[2][2]) ||
       (squares[0][2] == squares[1][1] && squares[0][2] == squares[2][0])
      )
    {
        gameOver = true;
        board();
    }
}