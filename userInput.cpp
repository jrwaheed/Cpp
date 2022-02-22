#include <iostream>

using namespace std;

int main ()
{
/*
int age;
cout << "Enter your age: " << endl;
cin >> age;

cout << "Your age is " << age << " years old."<< endl;
*/
//Getting a string 
string name;
cout << "Please enter your name: ";
getline (cin, name);

cout << "Hello " << name << endl;

return 0;

}
