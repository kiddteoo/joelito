#include <iostream>
#include <string>
using namespace std;

void mostFrequent(string arr[], int n) {
  string str;
  int maxcount = 0;
  for (int p = 0; p < n; p++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (arr[p] == arr[j])
        count++;
    }
    if (count > maxcount) {
      maxcount = count;
      str = arr[p];
    }
  }
  cout << str << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int casos = 0;
  int casos2 = 0;
  string pais;
  string arr[400];
  cin >> casos;
  for (int i = 0; i < casos; i++) {
    cin >> casos2;
    cin.ignore();
    int j = 0;
    string arr[400];
    for (j = 0; j < casos2; j++) {
      getline(cin, arr[j]);
    }
    mostFrequent(arr, j);
  }
}
