#include <iostream>
using namespace std;
int main () {
  float mat, cie, hum, lin, red; //notas
  float media;

  cin >> mat;
  cin >> cie; 
  cin >> lin;
  cin >> red;
  cin >> hum;

  if (red >= 200) {
    media = ((mat*3) + (cie*2) + (lin*2) + (red*2) + (hum*1)) / 10;
  } else {
    media = -1;
  }

  cout << media << endl;

  return 0;
}