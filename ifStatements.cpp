#include <iostream>
using namespace std;


int getMax(int num1, int num2, int num3)
 {
     int result;

     if (num1 >= num2 && num1 >=num3) {
         result = num1;
     } else if (num2 >= num1 && num2 > num3) {
         result = num2;
     } else {
         result = num3;
         }

     return result;
 }


int main()
{

cout << getMax(53456, 166, 166) << endl;

/*
    bool isMale = false;
    bool isTall = false;

    if (isMale && isTall){
        cout << "You are a male and tall" << endl;
    } else if ( isMale && !isTall) {
        cout << "You are male and not tall" << endl;
    } else if (!isMale && !isTall){
        cout << "You are female and short"  << endl;
    } else {
        cout << "You are a tall woman" << endl;
    }
*/







    return 0;
}