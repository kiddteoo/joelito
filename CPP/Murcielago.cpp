#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string word;
  int a = 0;
  int e = 0;
  int y = 0;
  int o = 0;
  int u = 0;
  cin >> word;
  for (int i = 0; i < word.length(); i++) {
    if (word[i] == 'a' && a == 0)
      a++;
    if (word[i] == 'e' && e == 0)
      e++;
    if (word[i] == 'i' && y == 0)
      y++;
    if (word[i] == 'o' && o == 0)
      o++;
    if (word[i] == 'u' && u == 0)
      u++;
  }

  if (a == 1 && e == 1 && y == 1 && o == 1 && u == 1) {
    cout << "TOTES" << endl;
  } else {
    cout << "FALTEN" << endl;
  }
}
