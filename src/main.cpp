#include <cmath>
#include <cstdlib>
#include <iostream>

void numberOfDigitsIn(int N) {

  int counter{};
  while (N > 0) {
    int digit{N % 10};
    N /= 10;
    counter += 1;
  }
  std::cout << counter << '\n';
}

void numberOfDigitsSmartlyIn(int N) {
  std::cout << std::floor(std::log10(N)) + 1 << '\n';
}

void reverseNumber(int N) {
  int currentDigit{};
  int sum{0};
  int i{};
  while (N > 0) {
    currentDigit = N % 10;
    sum = ((sum * 10) + currentDigit);
    N /= 10;
  }
  std::cout << sum << '\n';
}



int main() {
  numberOfDigitsIn(54648);
  numberOfDigitsSmartlyIn(54648);
  reverseNumber(1200540);
  return 0;
}
