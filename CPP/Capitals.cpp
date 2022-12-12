#include <cstring>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int casos = 0;
  size_t pos = 0;
  int casos2 = 0;
  string pais = "";
  string delimiter = "-";
  string capital = "";
  string search = "";
  cin >> casos;
  map<string, string> arr;
  map<string, string>::iterator it;
  for (int i = 0; i < casos; i++) {
    cin >> casos2;
    map<string, string> arr;
    map<string, string>::iterator it;
    cin.ignore();
    for (int j = 1; j < casos2; j++) {
      getline(cin, pais);
      while ((pos = pais.find(delimiter)) != string::npos) {
        capital = pais.substr(0, pos);
        pais.erase(0, pos + delimiter.length());
      }
//cout << "PAIS " << capital << std::endl;
      //cout << "CAPITAL " << pais << std::endl;
      arr[capital] = pais;
    }
    getline(std::cin, search);
    //cout << "SEARCH: " << search << endl;
    it = arr.find(search);
    if (it != arr.end()) {
      cout << it->second << endl;
    } else {
      cout << "NO HO SE" << endl;
    }
  }
}