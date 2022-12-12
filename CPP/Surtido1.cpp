#include <iostream>
#include <string>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int casos = 0;
  string frase = "";
  string str[500];
  cin >> casos;
  int casos2 = 0;
  for (int i = 0; i < casos; i++) {
    cin >> casos2;
    cin.ignore();
    string str[casos2];
    int seen[casos2];
    for (int j = 0; j < casos2; j++) {
      getline(cin, str[j]);
    }
    for (int l = 0; l < casos2; l++) {
      seen[l] = 0;
    }
    int count = 0;
    int small = 0;
    for (int k = 0; k < casos2; k++) {
      if (seen[k] == 0) {
        count = 0;
        for (int p = k; p < casos2; p++)
          if (str[p] == str[k]) {
            count += 1;
            seen[p] = 1;
          }
      }
      small = count;
      if (count < small)
        small = count;
    }
    cout << small << endl;
  }
}