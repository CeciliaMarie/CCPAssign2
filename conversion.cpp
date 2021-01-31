#include <iostream>
#include <string>
using namespace std;

//reads input from user
void readInput(double &feet, double &inches, bool &run){
  string exit;
  cout << "Do you want to convert a number (type exit to quit)? " << endl;
  cin >> exit;
  if(exit == "exit"){ //if the user wants to exit run is set to false
    run = false;
  }
  else{ //otherwise the user is prompted for feet and inches
    cout << "Enter feet: " << endl;
    cin >> feet;
    cout << "Enter inches: " << endl;
    cin >> inches;
  }

}

//outputs the conversion of feet and inch into meters and centimeters
void readOutput(double &meters, double &cm){
  cout << "Converted into meters: " << meters << endl << "Converted into centimeters  " << cm << endl;
}

//converts inches into feet and adds it to the original amount of feet
void InchToFt(double &feet, double inches){
  feet = feet + inches/12.0;
}

//converts feet into meters;
void FtToMeters(double &feet, double &meters){
  meters = feet*0.3048;
}

//converts meters into centimeters
void MetersToCm(double &meters, double &cm){
  cm = meters*100;
}

int main(int argc, char** argv){
  double feet;
  double inches;
  double meters;
  double cm;
  bool run = true;

  //continues to get user input and calculate while the user wants to
  while(run){
    readInput(feet, inches, run);
    InchToFt(feet, inches);
    FtToMeters(feet, meters);
    MetersToCm(meters, cm);
    //if the user wants to continue it prints the converted meters and cm
    if(run != false){
      readOutput(meters, cm);
    }
  }
  return 0;
}
