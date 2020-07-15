#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "employee.h"
#include "engineer.h"
#include "sales_employee.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test class function Engineer::get_pay()"){
	Employee* emp1 = new Engineer();
	emp1 -> get_pay();
	REQUIRE(get_pay() ==  1900);
}