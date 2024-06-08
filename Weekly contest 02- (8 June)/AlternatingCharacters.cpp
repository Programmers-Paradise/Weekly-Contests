#include<bits/stdc++.h>
using namespace std;

int alternatingCharacters(string temp) {
    int len = temp.length();
    int ans = 0;
    for (int i = 0; i < len - 1; i++) {
        if (temp[i] == temp[i+1]) {
            ans++;
        }
    }
    return ans;
}

int main () {

  int n;
  cin >> n;
  int b[n];
  string temp;
  for (int i= 0; i < n; i++) {
    cin >> temp;
    b[i] = alternatingCharacters(temp);
  }
  for (int i = 0; i < n; i++) {
    cout << b[i] << endl;
  }

  return 0;
}