#include <iostream>
#include <string>
using namespace std;

//sets both values to 0
void zeroBoth(int &int1, int &int2){
  int1 = 0;
  int2 = 0;
}

int main(int argc, char** argv){

  int int1;
  int int2;
  //prints out the result of zeroBoth
  cout << zeroBoth(int1, int2) << endl;

  return 0;
}
