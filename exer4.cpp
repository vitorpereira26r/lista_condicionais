#include <iostream>
using namespace std;
int main () {
  float n1, n2, n3, n4, menor, soma;

  cin >> n1 >> n2 >> n3 >> n4;

  menor = n4;

  if (n1 < menor){
    menor = n1;
  } else if (n2 < menor) {
    n2 = menor;
  } else if (n3 < menor) {
    n3 = menor;
  }

  soma = (n1 + n2 + n3 + n4) - menor;

  cout << soma << endl;
  
  return 0;
}