#include <iostream>
using namespace std;


int main(){

int numberGrid[3][2] = {
                      {1,2},
                      {3,1},
                      {6,0}

};

for(int i = 0; i < 3; i++){
  for(int j = 0; j < 2; j++){
    cout << " here is the number: " << numberGrid[i][j];
  }
  cout << endl;
}
/*fdgfdgdfgfdg
*/
return 0;
}