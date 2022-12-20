#include <algorithm> // std::sort
#include <iostream>
#include <locale.h>
#include <map>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
#include <wchar.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  setlocale(LC_ALL, "");
  cin.tie(NULL);
  cout.tie(NULL);
  unsigned int casos = 0;
  string frase = "";
  cin >> casos;
  int k = 0;
  cin.ignore();
  for (unsigned int i = 0; i < casos; i++) {
    getline(cin, frase);
    string arr[100];
    char *token = strtok(((char *)frase.c_str()), " ");
    k = 0;
    while (token != NULL) {
      arr[k] = string(token);
      token = strtok(NULL, " ");
      k++;
    }

    for (int j = 0; j < k; j++) {

      if (!arr[j + 1].empty()) {
        if (arr[j].length() < arr[j + 1].length()) {
          cout << arr[j] << "... ";
        } else {
          cout << arr[j] << " ";
        }
      } else {
        cout << arr[j] << " ";
      }
    }
    cout << endl;
  }
}