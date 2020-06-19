#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify bank account constructor with one parameter"){ 
	BankAccount account(1000);  //instance of the class
	REQUIRE(account.get_balance() == 1000);
}

TEST_CASE("Verfiy bank account deposit"){
	BankAccount account(100); 
	REQUIRE(account.get_balance() == 100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);

	account.deposit(-50);
	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Verify bank account withdraw"){
	BankAccount account(100);
	account.withdraw(25);
	REQUIRE(account.get_balance() == 75);

	account.withdraw(-25);
	REQUIRE(account.get_balance() == 75);

}

TEST_CASE("Test bank account deposit and withdraw"){
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(25);
	REQUIRE(account.get_balance() == 125);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 75);

}