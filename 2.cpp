#include <iostream>

using namespace std;

int func(int x) {
  if (x < 2) {
    return x;
  } else {
    int num1 = 0;
    int num2 = 1;   

    while (num2 < x) {
      int num3 = num1 + num2;
      num1 = num2;
      num2 = num3;
    }

    if (num2 == x) {
      return 1;
    } else {
      return 0;
    }
  }
}

int main() {
  cout << "Digite um numero: ";
  int num;
  cin >> num;

  if (func(num) == 1) {
    cout << "Pertence a sequencia de Fibonacci";
  } else {
    cout << "Nao pertence a sequencia de Fibonacci";
  }
}