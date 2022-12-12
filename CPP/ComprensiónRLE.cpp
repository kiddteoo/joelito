#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char **argv) {
  string code;

  int casos = 0;
  cin >> casos;
  for (int j = 0; j < casos; j++) {
    cin >> code;
    for (int i = 0; i < code.length(); i++) {
      int count = 1;

      while (code[i] == code[i + 1] && i < code.length() - 1) {
        count++;
        i++;
      }

      cout << count << " " << code[i] << " ";
    }
    cout << endl;
  }
  
  return 0;
}