#include <iostream>
#include <string>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5};
  int arr2[5];

  arr[0] = 12;
  cout << arr[0] << endl;

  cout << sizeof(arr)/sizeof(arr[0]);
}
