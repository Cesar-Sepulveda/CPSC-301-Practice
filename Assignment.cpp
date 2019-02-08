#include <iostream>
using namespace std;

void reverseArray(int arr[] ,int size){
  int arrCopy[size];
  for (int i = 0; i < size; ++i){
    arrCopy[i] = arr[(size-1)-i];
  }
  for (int i = 0; i < size; i++){
      arr[i] = arrCopy[i];
  }
}

int main(){
  int myArr[10];
  for(int i = 0; i < 10; ++i){
    myArr[i] = i;
    cout << myArr[i] << " ";
  }
  cout << endl;
  reverseArray(myArr, 10);
  for(int i = 0; i < 10; ++i){
    cout << myArr[i] << " ";
  }
  return 0;
}
