#include <iostream>
#include <string>
using namespace std;

//returns the cost with the tax added on
float addTax(float taxRate, float cost){
  return cost + taxRate * cost;
}

int main(int argc, char** argv){

  double taxRate = 0.08; //taxRate test value
  double cost = 10.0; //cost test value
  //prints out the result of addTax
  cout << addTax(taxRate, cost) << endl;;

  return 0;
}
