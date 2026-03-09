#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"
#include <vector>

using namespace std;

Factorizer factorizer;

TEST_CASE("Prime factorization works correctly")
{
    SECTION("Zero returns empty vector")
    {
        vector<int> result = factorizer.getPrimeFactors(0);
        REQUIRE(result.empty());
    }

    SECTION("One returns empty vector")
    {
        vector<int> result = factorizer.getPrimeFactors(1);
        REQUIRE(result.empty());
    }

    SECTION("100 returns [2,2,5,5]")
    {
        vector<int> result = factorizer.getPrimeFactors(100);
        vector<int> expected = {2,2,5,5};
        REQUIRE(result == expected);
    }

    SECTION("17 returns [17]")
    {
        vector<int> result = factorizer.getPrimeFactors(17);
        vector<int> expected = {17};
        REQUIRE(result == expected);
    }

    SECTION("24 returns [2,2,2,3]")
    {
        vector<int> result = factorizer.getPrimeFactors(24);
        vector<int> expected = {2,2,2,3};
        REQUIRE(result == expected);
    }

    SECTION("Negative number returns empty vector")
    {
        vector<int> result = factorizer.getPrimeFactors(-5);
        REQUIRE(result.empty());
    }
}