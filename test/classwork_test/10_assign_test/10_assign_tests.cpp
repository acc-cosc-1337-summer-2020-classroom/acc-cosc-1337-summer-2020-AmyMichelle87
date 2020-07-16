#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "employee.h"
#include "engineer.h"
#include "sales_employee.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

//this is correct syntax but the other classes/constructors need to be fixed. 
TEST_CASE("Test class function Engineer::get_pay()"){
    Employee *engineer = new Engineer(1500, 400); 
    
    double result = engineer -> get_pay(); 
    REQUIRE(result == 1900);
    delete engineer; 
    engineer = nullptr; 

}

TEST_CASE("Test class function SalesPerson::get_pay()"){
    Employee *salesEmp = new SalesEmployee(40, 10, 500);

    double result = salesEmp -> get_pay();
    REQUIRE(result == 900);
    delete salesEmp; 
    salesEmp = nullptr; 
}

