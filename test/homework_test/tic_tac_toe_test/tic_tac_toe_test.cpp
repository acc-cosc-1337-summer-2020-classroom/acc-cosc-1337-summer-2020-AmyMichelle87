#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test first player set to X"){
	TicTacToe ticTacToe; 
	ticTacToe.start_game("X");
	REQUIRE(ticTacToe.get_player() == "X");
}
TEST_CASE("Test first player set to O"){
	TicTacToe ticTacToe; 
	ticTacToe.start_game("O");
	REQUIRE(ticTacToe.get_player() == "O");
}
TEST_CASE("Verify game ends when the board is full"){
	TicTacToe tic_tac_toe; 
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false); 
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == true);
	REQUIRE(tic_tac_toe.get_winner() == "C");

}

TEST_CASE("Verify win by first column"){
	TicTacToe ticTacToe; 
	ticTacToe.start_game("X");

	ticTacToe.mark_board(1);
	ticTacToe.mark_board(2);
	ticTacToe.mark_board(4);
	ticTacToe.mark_board(8);
	ticTacToe.mark_board(7);
	REQUIRE(ticTacToe.game_over() == true);
}
TEST_CASE("Verify win by second column"){
	TicTacToe ticTacToe; 
	ticTacToe.start_game("X");

	ticTacToe.mark_board(2);
	ticTacToe.mark_board(3);
	ticTacToe.mark_board(5);
	ticTacToe.mark_board(7);
	ticTacToe.mark_board(8);
	REQUIRE(ticTacToe.game_over() == true);
}
TEST_CASE("Verify win by third column"){
	TicTacToe ticTacToe; 
	ticTacToe.start_game("X");

	ticTacToe.mark_board(3);
	ticTacToe.mark_board(2);
	ticTacToe.mark_board(6);
	ticTacToe.mark_board(7);
	ticTacToe.mark_board(9);
	REQUIRE(ticTacToe.game_over() == true);
}
TEST_CASE("Verify win by first row"){
	TicTacToe ticTacToe; 
	ticTacToe.start_game("X");

	ticTacToe.mark_board(1);
	ticTacToe.mark_board(5);
	ticTacToe.mark_board(2);
	ticTacToe.mark_board(7);
	ticTacToe.mark_board(3);
	REQUIRE(ticTacToe.game_over() == true);
}
TEST_CASE("Verify win by second row"){
	TicTacToe ticTacToe; 
	ticTacToe.start_game("X");

	ticTacToe.mark_board(4);
	ticTacToe.mark_board(1);
	ticTacToe.mark_board(5);
	ticTacToe.mark_board(7);
	ticTacToe.mark_board(6);
	REQUIRE(ticTacToe.game_over() == true);
}
TEST_CASE("Verify win by third row"){
	TicTacToe ticTacToe; 
	ticTacToe.start_game("X");

	ticTacToe.mark_board(7);
	ticTacToe.mark_board(5);
	ticTacToe.mark_board(8);
	ticTacToe.mark_board(3);
	ticTacToe.mark_board(9);
	REQUIRE(ticTacToe.game_over() == true);
}
TEST_CASE("Test win diagonally from top left"){
	TicTacToe ticTacToe; 
	ticTacToe.start_game("X");

	ticTacToe.mark_board(1);
	ticTacToe.mark_board(8);
	ticTacToe.mark_board(5);
	ticTacToe.mark_board(3);
	ticTacToe.mark_board(9);
	REQUIRE(ticTacToe.game_over() == true);

}
TEST_CASE("Test win diagonally from bottom left"){
	TicTacToe ticTacToe; 
	ticTacToe.start_game("X");

	ticTacToe.mark_board(7);
	ticTacToe.mark_board(8);
	ticTacToe.mark_board(5);
	ticTacToe.mark_board(2);
	ticTacToe.mark_board(3);
	REQUIRE(ticTacToe.game_over() == true);

}