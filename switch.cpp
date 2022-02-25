#include <iostream>
 using namespace std;

 string getDayOfTheWeek(int dayNum){
     string dayName;

//Notice in the switch statements, the condition is the same for all the various cases.

  switch (dayNum){
     case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Bogus entry";
  }
  


     return dayName;
 }

 int main(){

cout << getDayOfTheWeek(10) << endl;

     return 0;
 }