#include <iostream>

using namespace std;

int main() {
  int soma = 0, indice = 13;

  for(int k = 0; k < indice; k++ ) {
    soma += k;
  }

  cout << soma << endl;
}