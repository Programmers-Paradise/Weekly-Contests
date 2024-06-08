#include<bits/stdc++.h>
using namespace std;

int chocolateFeast(int n, int c, int m) {
    int noOfChocolate = n / c;
    int noOfWrappers = noOfChocolate;
    while(noOfWrappers >= m) {
        noOfChocolate += noOfWrappers/m;
        noOfWrappers = noOfWrappers/m + noOfWrappers%m;
    }
    return noOfChocolate;
}

int main () {

  int t;
  cin >> t;
  int arr[t];
  for (int i = 0; i < t; i++) {
    int n, c, m;
    cin >> n >> c >> m;
    arr[i] = chocolateFeast(n, c, m);
  }

  for (int i = 0; i < t; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}