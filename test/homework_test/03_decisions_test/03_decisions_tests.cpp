#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
//Test cases for get_grade_points function 
TEST_CASE("Test letter grade function with A"){
	REQUIRE(get_grade_points("A") == 4);
}

TEST_CASE("Test letter grade function with B"){
	REQUIRE(get_grade_points("B") == 3);
}

TEST_CASE("Test letter grade function with C"){
	REQUIRE(get_grade_points("C") == 2);
}

TEST_CASE("Test letter grade function with D"){
	REQUIRE(get_grade_points("D") == 1);
}

TEST_CASE("Test letter grade function with F"){
	REQUIRE(get_grade_points("F") == 0);
} 
//Test cases for calculate_gpa function 
TEST_CASE("calculate_gpa function with 12 and 45"){
	REQUIRE(calculate_gpa(12, 45) == 3.75);
}
TEST_CASE("calculate_gpa function with 120 and 390 "){
	REQUIRE(calculate_gpa(120, 390) == 3.25);
}
TEST_CASE("calculate_gpa function with 90 and 180"){
	REQUIRE(calculate_gpa(90, 180) == 2.00);
}