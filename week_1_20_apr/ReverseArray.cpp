#include<iostream>
using namespace std;

void reverse(int arr[], int size) {
  int s= 0, e= size - 1;
  while ( s <= e) {
    swap(arr[s], arr[e]);
    s++;
    e--;
  }
}

int main () {

  int arr[] = {1, 2, 5, 4, 6};
  int size = sizeof(arr)/sizeof(arr[0]);

  reverse(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}