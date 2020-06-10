#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

//TEST CASE 1: Test Get Sales Tax
TEST_CASE("Verify that calling the get_sales_tax_amount function with param 10 returns the value .675"){
	REQUIRE(get_sales_tax_amount(10) == .675);
}

TEST_CASE("Verify that calling the get_sales_tax_amount function with param 20 returns the value 1.35"){
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}

//TEST CASE 2: Test Get Tip Amount 
TEST_CASE("Verify that calling the get_tip_amount function with params 20 and 15% returns the value 3"){
	REQUIRE(get_tip_amount(20, 15) == 3);
}
TEST_CASE("Verify taht calling the get_tip_amount function with params 20 and 20% returns the value 4"){
	REQUIRE(get_tip_amount(20, 20) == 4);
}
