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

bool replace(std::string &str, const std::string &from, const std::string &to) {

  size_t start_pos = 0;
  start_pos = str.find(from);
  if (start_pos == std::string::npos)
    return false;
  str.replace(start_pos, from.length(), to);
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  setlocale(LC_ALL, "");
  cin.tie(NULL);
  cout.tie(NULL);
  unsigned int casos = 0;
  string last = "";
  string nom = "";
  cin >> casos;
  cin.ignore();
  for (unsigned int i = 0; i < casos; i++) {
    getline(cin, nom);
    replace(nom, "Ò", "O");
    replace(nom, "À", "A");
    replace(nom, "Í", "I");
    replace(nom, "Ú", "U");

    int size = nom.length();
    unsigned int j = 0;
    for (j = size; j > 0; j--) {
      if (nom[j] == ' ' && nom[j + 1] == 'i') {
        unsigned int k = j + 3;
        int p = 0;
        while (k < nom.length()) {
          last[p] = nom[k];
          p++;
          k++;
        }
        break;
      }
    }
    nom.resize(j);
    char *token = strtok(((char *)nom.c_str()), ",");
    int l = 0;
    string arr[100];
    while (token != NULL) {
      arr[l] = token;
      token = strtok(NULL, ",");
      l++;
    }

    for (unsigned int k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++) {
      if (arr[k][0] == ' ') {
        arr[k].erase(0, 1);
      }
    }
    for (unsigned int k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++) {
      if (arr[k][0] != ' ') {
        if (arr[k][0] >= 65 and arr[k][0] <= 90) {
          cout << arr[k][0];
        }
        if (arr[k][0] >= 97 and arr[k][0] <= 122) {
          char d = toupper(arr[k][0]);
          cout << d;
        }
      }
    }
    if (last[0] >= 65 and last[0] <= 90) {
      cout << last[0] << endl;
    }
    if (last[0] >= 97 and last[0] <= 122) {
      char d = toupper(last[0]);
      cout << d << endl;
      ;
    }
  }
}
