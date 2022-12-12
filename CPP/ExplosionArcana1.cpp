#include <iostream>

using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int ini = 0;
  int q = 0;
  int sum1 = 0;
  cin >> ini;
  cin >> q;
  int aux = 0;
  int val = ini;
  for (int i = 0; i < q; i++) {
    aux = aux + val;
    sum1 = sum1 + aux;
  }
  cout << sum1 << endl;
}