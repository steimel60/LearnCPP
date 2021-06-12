#include <iostream>
#include <string>
using namespace std;

int main(){
  int arr[] = {3,6,1,2,4,5,36,654,5,7,45};
  int arr2[5];

  //print predefined array
  for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
    cout << arr[i] << endl;
  }

  //set values of array
  for (int i=0; i<sizeof(arr2)/sizeof(arr2[0]); i++){
    arr2[i] = i;
  }

  //print values from above
  for (int i=0; i<sizeof(arr2)/sizeof(arr2[0]); i++){
    cout << arr2[i] << endl;
  }

}

/*

*/
