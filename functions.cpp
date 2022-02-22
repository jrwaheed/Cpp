#include <iostream>


using namespace std;


//C++ will not see the function if it is creeated beneath the main. However, you can declare the function prior to the main to  use it. 

void sayHi(string name, int age);
int cube(int number);

int main() {

cout << "top \n";

sayHi("Ursula", 36);

cout << cube(3) << endl;


    return 0;
}


void sayHi (string name, int age){
    cout << "Hello "  << name << endl;
    cout << "You are " << age << endl;
}

int cube (int number){
    int result = number * number * number;

    return result;
}
