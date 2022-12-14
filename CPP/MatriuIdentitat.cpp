#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int casos = 0;
  cin >> casos;
  int arr[casos][casos];
  for (int i = 0; i < casos; i++) {
    for (int j = 0; j < casos; j++) {
      arr[i][j] = 0;
    }
  }
  for (int i = 0; i < casos; i++) {
    for (int j = 0; j < casos; j++) {
      if (i == j)
        cout << "1"
             << " ";
      else
        cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
