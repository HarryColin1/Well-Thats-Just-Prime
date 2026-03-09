#include <iostream>
#include "src/prime.hpp"
#include <vector>

using namespace std;

int main()
{
  Factorizer factorizer;
  int userNumber;

  cout << "Enter a positive integer greater than 1: ";
  cin >> userNumber;

  vector<int> factors = factorizer.getPrimeFactors(userNumber);

  if (factors.empty())
  {
    cout << "No prime factors for numbers <= 1." << endl;
  }
  else
  {
    cout << "Prime factors of " << userNumber << " are: ";
    for (int factor : factors)
    {
      cout << factor << " ";
    }
    cout << endl;
  }

  return 0;
}