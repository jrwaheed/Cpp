#include <iostream>
using namespace std;
//using std:: cin;

int main(){
    int userGuess;
    int correctAnswer = 6;
    bool correctlyAnswered = false;

    cout << "Please guess the correct answer";
    cin >> userGuess;

    while(!correctlyAnswered){

        if(userGuess > correctAnswer){
            cout << "You are too high. Retry below";
            cin >> userGuess;
        }
        
        else if (userGuess < correctAnswer){
            cout <<"You are too low. Retry below";
            cin >> userGuess;

       
        

    }

}
