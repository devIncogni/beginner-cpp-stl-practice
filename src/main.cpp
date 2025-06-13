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
  std::cout << std::floor(std::log10(N)) + 1;
}

int main() {
  numberOfDigitsIn(54648);
  numberOfDigitsSmartlyIn(54648);
  return 0;
}
