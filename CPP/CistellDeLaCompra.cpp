#include <algorithm> // std::sort
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

bool cmp(pair<string, float> &a, pair<string, float> &b) {
  return a.second > b.second;
}

vector<pair<string, float>> sort(map<string, float> &M) {
  std::vector<pair<string, float>> A;
  for (auto &it : M) {
    A.push_back(it);
  }
  sort(A.begin(), A.end(), cmp);
  return A;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  unsigned int casos = 0;
  unsigned int search = 0;
  size_t pos = 0;
  string delimiter = " ";
  string frase = "";
  string frase2 = "";
  float num = 0;
  map<string, float> M;
  map<string, float>::iterator it;
  cin >> casos;
  cin.ignore();
  for (unsigned int i = 0; i < casos; i++) {
    getline(cin, frase);
    while ((pos = frase.find(delimiter)) != string::npos) {
      frase2 = frase.substr(0, pos);
      frase.erase(0, pos + delimiter.length());
    }
    num = atof(frase.c_str());
    M[frase2] = num;
  }
  std::vector<pair<string, float>> A;
  A = sort(M);
  cin >> search;
  cout << "EL MES CAR: " << A[0].first << " " << A[0].second << endl;
  cout << "EL MES BARAT: " << A[casos - 1].first << " " << A[casos - 1].second
       << endl;

  A = sort(M); // reverse mañana
  cout << "EL BUSCAT: " << A[search - 1].first << " " << A[search - 1].second
       << endl;
}