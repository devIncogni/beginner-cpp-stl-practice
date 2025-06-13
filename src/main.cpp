#include <algorithm>
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

void bruteForceGCD(int x, int y) {
  int smallest{std::min(x, y)};
  int gcd{1};
  for (int i{2}; i <= smallest; ++i) {
    if (x % i == 0 && y % i == 0) {
      gcd = i;
    }
  }
  std::cout << gcd << '\n';
}

void bruteForceGCD2(int x, int y) {
  int smallest{std::min(x, y)};
  int gcd{1};

  if (std::max(x, y) % smallest == 0) {
    gcd = smallest;
    std::cout << gcd << '\n';
    return;
  }

  for (int i{smallest / 2}; i >= 1; --i) {
    if (x % i == 0 && y % i == 0) {
      gcd = i;
      std::cout << gcd << '\n';
      return;
    }
  }
  std::cout << gcd << '\n';
}

void elegantGCD(int x, int y) {
  int smallest{std::min(x, y)};
  int largest{std::max(x, y)};

  if (x == 0 || y == 0) {
    std::cout << largest << '\n';
  } else {
    elegantGCD(smallest, largest - smallest);
  }
}

void angstormNumber(int N) {
  int copy{N};
  int numberOfDigits{static_cast<int>(std::floor(std::log10(N) + 1))};
  int sum{};

  while (N > 0) {
    int currentDigit{N % 10};
    sum += std::pow(currentDigit, numberOfDigits);
    N /= 10;
  }

  if (sum == copy) {
    std::cout << "TRUE\n";
  } else {
    std::cout << "FALSE\n";
  }
}

int main() {
  numberOfDigitsIn(54648);
  numberOfDigitsSmartlyIn(54648);
  reverseNumber(1200540);

  bruteForceGCD2(10, 5);
  elegantGCD(5, 10);
  angstormNumber(153);
  return 0;
}
