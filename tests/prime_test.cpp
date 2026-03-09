#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"
#include <iostream>
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