#include <iostream>
using namespace std;
int main () {
  int numero, alg1, alg2, alg3, alg4, alg5, alg6;
  string cor1, cor2;

  cin >> cor1;
  cin >> cor2;
  cin >> numero;

  alg1 = numero / 100000;
  alg2 = (numero % 100000) / 10000;
  alg3 = ((numero % 100000) % 10000) / 1000;
  alg4 = (((numero % 100000) % 10000) % 1000) / 100;
  alg5 = ((((numero % 100000) % 10000) % 1000) % 100) / 10;
  alg6 = ((((numero % 100000) % 10000) % 1000) % 100) % 10;

  if ((alg1 == alg6) and (alg2 == alg5) and (alg3 == alg4)) {
    cout << cor1 << endl;
  } else {
    cout << cor2 << endl;
  }

  return 0;
}