#include <iostream>
#include <string>
using namespace std;

int main(){
  //-------------Take user input--------------------------------------
  int num1, num2;
  cout << "Enter a number: ";
  cin >> num1;



  //------------CHECK INPUT VALIDITY----------------------------------

  //cout << cin.fail(); // prints 1 if invalid input, 0 if valid input

  cin.clear(); //removes error flag, but doesn't fix input
  cin.ignore(1000, '\n'); //ignores 1000 characters and moves to next line


  //-------------Take more user input for simple calc------------------
  cout << "Enter a second number: ";
  cin >> num2;

  
  //---------------------Do stuff wuth iunputs ------------------------
  int sum = num1 + num2;
  cout << "The sum is: " << sum;
}
/*
Inputing wrong type returns error as 0 and ends program
*/
