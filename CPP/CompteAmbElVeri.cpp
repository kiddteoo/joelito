#include <iostream>

using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int casos = 0;
  int hp, rammus, twitch, rondas, twitch_kill, rammus_kill = 0;
  cin >> casos;
  for (int i = 0; i < casos; i++) {
    hp = 0;
    rammus = 0;
    twitch = 0;
    rondas = 0;
    twitch_kill = 0;
    rammus_kill = 0;
    cin >> hp;
    cin >> rammus;
    cin >> twitch;
    while (hp > 0) {
      if ((hp - rammus) <= 0) {
        rammus_kill = 1;
      }
      hp = hp - rammus;
      if ((hp - twitch) <= 0) {
        twitch_kill = 1;
      }
      hp = hp - twitch;
      rondas += 1;
    }
    if (rammus_kill == 1)
      cout << "RAMMUS " << rondas << endl;
    else if (twitch_kill == 1)
      cout << "TWITCH " << rondas << endl;
  }
}