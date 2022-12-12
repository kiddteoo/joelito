#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

bool palindromo(string frase) {
  int inicio = 0;
  int fin = frase.length() - 1;
  while (frase[inicio] == frase[fin]) {
    if (inicio >= fin)
      return true;
    inicio++;
    fin--;
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int casos = 0;
  int igual = 0;
  string frase = "";
  string frase2 = "";
  int count = 0;
  int aux = 0;
  cin >> casos;
  cin.ignore();
  for (int i = 0; i < casos; i++) {
    getline(cin, frase);
    transform(frase.begin(), frase.end(), frase.begin(), ::tolower);
    frase.erase(remove(frase.begin(), frase.end(), ' '), frase.end());
    bool esPal = palindromo(frase);
    if (esPal == true)
      cout << "SI" << endl;
    if (esPal == false)
      cout << "NO" << endl;
  }
}