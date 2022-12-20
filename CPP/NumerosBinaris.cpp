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

void toBin(int n) {
  int binaryNum[32];
  int i = 0;
  if (n == 0)
    cout << "0";
  while (n > 0) {
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
  }
  for (int j = i - 1; j >= 0; j--)
    cout << binaryNum[j];
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  setlocale(LC_ALL, "");
  cin.tie(NULL);
  cout.tie(NULL);
  unsigned int casos = 0;
  string frase = "";
  cin >> casos;
  cin.ignore();
  for (unsigned int i = 0; i < casos; i++) {
    getline(cin, frase);
    int arr[2];
    for (int j = 0; j < frase.length(); j++) {
      if (frase[j] == '-') {
        int k = 0;
        char *token = strtok(((char *)frase.c_str()), "-");
        while (token != NULL) {
          arr[k] = stoi(string(token));
          token = strtok(NULL, "-");
          k++;
        }
        int res = arr[0] - arr[1];
        toBin(res);
      }
      if (frase[j] == '+') {
        char *token = strtok(((char *)frase.c_str()), "+");
        int k = 0;
        while (token != NULL) {
          arr[k] = stoi(string(token));
          token = strtok(NULL, "+");
          k++;
        }
        int res = arr[0] + arr[1];
        toBin(res);
      }
    }
  }
}