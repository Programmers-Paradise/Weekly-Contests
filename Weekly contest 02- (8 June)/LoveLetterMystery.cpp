#include<bits/stdc++.h>
using namespace std;

int loveLetter(string letter) {
    int ans = 0;
    int s=0, e=letter.length() - 1;
    while (s <= e) {
        ans += abs(letter[s] - letter[e]);
        s++;
        e--;
    }
    return ans;
}

int main () {

  int n;
  cin >> n;
  int ans[n];
  string letter;
  for (int i = 0; i < n; i++) {
    cin >> letter;
    ans[i] = loveLetter(letter);
  }

  for (int i =0; i < n; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}