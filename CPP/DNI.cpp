#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  unsigned int casos = 0;
  char letras[] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B',
                   'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
  string frase = "";
  string let = "";
  int num = 0;
  cin >> casos;
  cin.ignore();
  for (unsigned int i = 0; i < casos; i++) {
    getline(cin, frase);
    let = frase;
    let.resize(let.size() - 1);
    num = atoi(let.c_str());
    if (frase[frase.length() - 1] == letras[num % 23]) {
      cout << "valid" << endl;
    } else {
      cout << "invalid" << endl;
    }
  }
