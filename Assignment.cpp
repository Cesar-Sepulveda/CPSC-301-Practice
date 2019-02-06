#include <iostream>
using namespace std;

void reverseArray(int arr[] ,int size){
  for (int i = 0, i < size, ++i){
    arr[i] = arr[size - i];
  }
}

int main(){
  int myArr[10];
  for(int i = 0; i < 10, ++i){
    myArr[i] = i;
    cout << myArr[i];
  }
  reverseArray(myArr, 10)
  for(int i = 0; i < 10, ++i){
    cout << myArr[i];
  }
  return 0;
}
