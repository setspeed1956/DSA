#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a negative number: ";
  cin >> n;

  // Get the absolute value of the number.
  int abs_n = abs(n);

  // Get the binary representation of the absolute value.
  string binary = "";
  while (abs_n > 0) {
    binary = to_string(abs_n % 2) + binary;
    abs_n /= 2;
  }

  // Invert all the bits.
  for (int i = 0; i < binary.length(); i++) {
    if (binary[i] == '1') {
      binary[i] = '0';
    } else {
      binary[i] = '1';
    }
  }

  // Add 1 to the result.
  binary[0] = '1';

  // Print the binary representation of the negative number.
  cout << "The binary representation of " << n << " is " << binary << endl;

  return 0;
}