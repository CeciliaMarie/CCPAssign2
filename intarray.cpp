#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){

  int numberArray[10]; //initualizes and sets array to 10
  int testNeg = 0;
  unsigned int i;

  for(i = 0; i < 10; ++i){
    numberArray[i] = -1;
  }

  i = 0;

  //while the user dosen't input a negative number 
  //all numbers are added and the first negative number is added
  while((i < 10) && (testNeg >= 0)){
    cout << "Enter a nonnegative number (enter a negative to stop entering): " <<  endl;
    cin >> testNeg;
    numberArray[i] = testNeg;
    ++i;
  }

  //prints out the array but only the numbers the user put in
  for(i = 0; i < 10; ++i){
    if(numberArray[i] >= 0){
      //prints out the array execpt for negative -1s
      cout << numberArray[i] << endl;
    }
  }

  return 0;
}
