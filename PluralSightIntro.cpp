#include <iostream>
using namespace std;
//using std::cout;
//using std::cin;


int main()
{
    int answer = 17;
    int userGuess;

    cout << "Guess the number. Enter your number on the line below. \n";
    cin >> userGuess;

    bool isAnswerCorrect = false;

    while(isAnswerCorrect == false){

         
        if (answer < userGuess) {
            cout <<"Ha! You suck. That number is too high. \n";
            cin >> userGuess;
        }   
        if (answer > userGuess) {
            cout <<"Ha! You suck. That number is too low. \n";
            cin >> userGuess;
        }   
        if (answer == userGuess) {
            cout <<"Well done Sir. " << userGuess << " is the correct answer. \n";
            isAnswerCorrect = true;
        }
        return 0;
    }
}

        
    


/*
    int userProvidedOne = 8;
    int userProvidedTwo;

    cout <<userProvidedOne;

    cout << "Type in a integer \n";
    cin >> userProvidedOne;

    cout <<"User. Please provide another number \n";
    cin >> userProvidedTwo;

    if(userProvidedOne > userProvidedTwo) {
        cout << userProvidedOne << "is greater than " << userProvidedTwo;
    }

    if(userProvidedOne < userProvidedTwo) {
        cout << userProvidedOne << "is less than " << userProvidedTwo;
    }

     if(userProvidedOne == userProvidedTwo) {
        cout << userProvidedOne << "is equal to " << userProvidedTwo;
    }
*/
