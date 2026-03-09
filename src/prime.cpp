#include "prime.hpp"
#include <vector>

using namespace std;

vector<int> Factorizer::getPrimeFactors(int number)
{
   vector<int> primeFactors;

   if (number <= 1)
      return primeFactors;

   int divisor = 2;
   while (number > 1)
   {
      if (number % divisor == 0)
      {
         primeFactors.push_back(divisor);
         number /= divisor;
      }
      else
      {
         divisor++;
      }
   }

   return primeFactors;
}