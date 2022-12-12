#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string casos = "";
  int num1 = 0;
  size_t pos = 0;
  int num2 = 0;
  string delimiter =" ";
  string pais;
  int multi = 0;

  int result = 0;

  getline(cin, casos);
  while ((pos = casos.find(delimiter)) != string::npos) {
    num2 = stoi(casos.substr(0, pos));
    casos.erase(0, pos + delimiter.length());
  }
  num1 = stoi(casos);
  int arr[num2][num1];
  int resu[num2][num1];
  for (int i = 0; i < num2; i++) {
    for (int j = 0; j < num1; j++){
      cin >> arr[i][j];
    }
  }
  cin >> multi;
  for (int i = 0; i < num2; i++) {
    for (int j = 0; j < num1; j++){
      result = arr[i][j] * multi;
      resu[i][j] = result;
      cout << resu[i][j] << " ";
    }
    cout << endl;
  }
}