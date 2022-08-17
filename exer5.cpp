#include <iostream>
using namespace std;
int main () {
  int pais, codigoproduto;
  float peso_g, peso_kg, precobruto, imposto, precototal;

  cin >> codigoproduto;
  cin >> peso_kg;
  cin >> pais;

  peso_g = peso_kg * 1000;

  if ((codigoproduto = 1) || (codigoproduto = 2) || (codigoproduto = 3) || (codigoproduto = 4)){
    precobruto = 10 * peso_g;
  } if ((codigoproduto = 5) || (codigoproduto = 6) || (codigoproduto = 7)) {
    precobruto = 25 * peso_g;
  } if ((codigoproduto = 8) || (codigoproduto = 9) || (codigoproduto = 10)) {
    precobruto = 35 * peso_g;
  }

  if (pais = 1){
    imposto = precobruto;
  } else if (pais = 2) {
    imposto = 1.15 * precobruto;
  } else if (pais = 3) {
    imposto = 1.25 * precobruto;
  }

  precototal = precobruto + imposto;

  cout << peso_g << endl << precobruto << endl << imposto << endl << precototal << endl;
  
  return 0;
}