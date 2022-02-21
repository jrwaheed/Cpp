#include <iostream>
#include "HeaderFile.h"
using namespace std;
using std::cout;


int main(){
    double another = add(1.2, 3.4);

    int result = add(3,4);
    cout <<'\n';
    cout << '\n' + result <<" is the total" <<'\n';
    cout << "lets see how this works " << another << '\n';

    auto totalofthree = add(1.1, 2.2);

    cout << '\n' << testMethod(42,6);
}