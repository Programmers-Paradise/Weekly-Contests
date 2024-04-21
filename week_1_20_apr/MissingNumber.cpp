#include<iostream>
using namespace std;

int main () {

  long long n;
  int s = 0;
  cin >> n;
  for (int i = 1; i < n; i++) {
    int a;
    cin >> a;
    s += a;
  }

  int sumOfNaturalNumbers = (n * (n + 1) )/ 2;

  cout << sumOfNaturalNumbers - s ;

  return 0;
}