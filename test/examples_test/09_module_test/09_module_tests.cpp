#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Vector size stack variable for copies"){
	Vector v1(3);
	Vector v2 = v1; 

	REQUIRE(v1.Size() == v2.Size());
	

}

TEST_CASE("Test vector heap variabls for copies"){
	Vector v1(3); 
	Vector v2 = v1; 

	REQUIRE(v1.get_element(1) == v2.get_element(1));
	v1.set_element_value(1, 5); 
	REQUIRE(v1.get_element(1) != v2.get_element(1));

}
TEST_CASE("Test vector COPY ASSIGMENT from existing instances"){
	Vector v1(3); 
	Vector v2(3);
	v1[0] = 1; 
	REQUIRE(v1[0] != v2[0]);
	v2 = v1; 
	REQUIRE(v1[0] == v2[0]);
	v1[0] = 5; 
	REQUIRE(v1[0] != v2[0]);


}

