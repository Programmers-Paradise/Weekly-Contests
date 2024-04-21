#include<iostream>
using namespace std;

void rotate(int arr[], int n, int d) {
      int p = 1;
    while (p <= d) {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }

}

int main () {

  int arr[5] = {1, 2, 3, 4, 5};
  int size = 5;
  int d = 2;

  rotate(arr, size, d);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}