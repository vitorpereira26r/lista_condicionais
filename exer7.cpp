#include <iostream>
using namespace std;
int main () {
  int n, alg1, alg2, alg3, alg4, alg5, pares, impares;
  pares = 0;
  impares = 0;

  cin >> n;

  alg1 = n / 10000;
  alg2 = (n % 10000) / 1000;
  alg3 = ((n % 10000) % 1000) / 100;
  alg4 = (((n % 10000) % 1000) % 100) / 10;
  alg5 = (((n % 10000) % 1000) % 100) % 10;

  if (alg1 % 2 = 0){
    pares++;
  } else {
    impares++;
  }
  return 0;
}