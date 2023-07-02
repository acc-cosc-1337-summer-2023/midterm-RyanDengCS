#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test1 seconds since 1970")
{
	int test1 = 1570846218;
	REQUIRE(get_hours(test1) == 2);
	REQUIRE(get_minutes(test1) == 10);
	REQUIRE(get_seconds(test1) == 18);

	int test2 = 1570875018;
	REQUIRE(get_hours(test2) == 10);
	REQUIRE(get_minutes(test2) == 10);
	REQUIRE(get_seconds(test2) == 18);
}