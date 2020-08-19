#include <iostream>

using namespace std;

int main()
{
    int score;
    
    cout << "Enter Grade: ";
    cin >> score;

    if(score == 100) {
        cout << "Grade: " << score << " A" << endl;
        cout << "Perfect Score!" << endl;           
    } else if(score >= 90) {
        cout << "Grade: " << score << " A" << endl;        
    } else if(score < 90 && score >= 80) {
        cout << "Grade: " << score << " B" << endl;        
    } else if(score < 80 && score >= 70) {
        cout << "Grade: " << score << " C" << endl;        
    } else if(score < 70 && score >= 60) {
        cout << "Grade: " << score << " D" << endl;        
    } else if(score < 60) {
        cout << "Grade: " << score << " F" << endl;        
    }

    return 0;
};