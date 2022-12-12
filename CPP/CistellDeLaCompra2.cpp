#include <algorithm> // std::sort
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

vector<pair<string, float>> sort(map<string, float> &M) {
  std::vector<pair<string, float>> A;
  for (auto &it : M) {
    A.push_back(it);
  }
  return A;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  unsigned int casos = 0;
  string search = " ";
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
    cin >> search;
     map<string, float> newM;
    for (map<string, float>::iterator it = M.begin(); it != M.end(); it++)
        newM[it->first] = it->second;

    vector<pair<string, float>> vect = sort(newM);
    unsigned int j = 0; 
    for (j = 0; j < casos; j++)
      {
        if(search == vect[j].first)
          break ;
      }
    if (j == casos)
      cout << "NO N'HI HAVIA" << endl;
    if(j == 0)
      cout << "SI, M'HA COSTAT " << vect[j].second << endl;
    if(j != 0 && j < casos){
      cout << "SI, M'HA COSTAT " << vect[j].second << " I TAMBE TINC " << vect[j -1].first << " A " << vect[j-      1].second << endl;
    }
    
}