#include <iostream>
using namespace std;
int main () {
  float saldo, credito;

  cin >> saldo;

  if (saldo < 0){
    credito = saldo;
  } else if (saldo < 200) {
    credito = saldo * 0.1;
  } else if (saldo < 400) {
    credito = saldo * 0.15;
  } else if (saldo < 800) {
    credito = saldo * 0.2;
  } else if (saldo < 1600) {
    credito = saldo * 0.25;
  } else if (saldo >= 1600) {
    credito = saldo * 0.3;
  }

  cout << saldo << endl;
  cout << credito << endl;
  
  return 0;
}