#include<bits/stdc++.h>
using namespace std;

int saveThePrisoner(int n, int m, int s) {
    return (m + s - 2) % n + 1;
}


int main () {
  int t;
  cin >> t;
  int arr[t];
  for (int i = 0; i < t; i++) {
    int prisoners, candies , startFrom;
    cin >> prisoners >> candies >> startFrom;
    arr[i] = saveThePrisoner(prisoners, candies, startFrom);
  }

  for (int i = 0; i < t; i++) {
    cout << arr[i] << endl;
  }


  return 0;
}