#include <iostream>

using namespace std;

int main ()
{
char grade = 'F';
string phrase = "learning everday. Hoping to become a better engineer";
int age = -42;
double temperature = 134.5345;
bool isMale =false;

phrase[0] = 'z';

string newSubString = phrase.substr(8, 100);

cout << "See how this works \n";
cout <<  newSubString << endl;



return 0;

}
