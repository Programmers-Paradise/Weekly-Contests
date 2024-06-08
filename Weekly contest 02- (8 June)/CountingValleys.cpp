#include<bits/stdc++.h>
using namespace std;

int countingValleys(int n, char *str) {
    int b[n];
    int x = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'U') {
            x++;
            b[i] = x;
        } else {
            x--;
            b[i] = x;
        }
    }
    x = 0;
    for (int i =0; i < n; i++) {
        if(b[i] < 0 && b[i+1] == 0) {
            x++;
        }
    }

    return x;

}

int main () {

  int n;
  cin >> n;
  char str[n+1];
  scanf("%s", str);

  cout << countingValleys(n, str);

  return 0;
}