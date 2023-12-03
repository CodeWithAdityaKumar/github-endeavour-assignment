#include <iostream>

using namespace std;

int main() {
  int number;
  long long factorial = 1;

  cout << "Enter a number: ";
  cin >> number;

  if (number < 0) {
    cout << "Factorial of negative numbers is not defined." << endl;
    return 1;
  }

  for (int i = 1; i <= number; i++) {
    factorial *= i;
  }

  cout << "Factorial of " << number << " is: " << factorial << endl;

  return 0;
}
