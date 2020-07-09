#include "tic_tac_toe.h"


int main() 
{
	std::string choice; 
	TicTacToe tic_tac_toe; 

	using std::cout; using std::cin; using std::string; 
	do{

		string player; 
		cout<<"Enter X or O: "; 
		cin>>player; 
		

		tic_tac_toe.start_game(player);

			do{

				int position; 
				cout<<"Enter position from 1 to 9: ";
				cin>>position; 

				//validation for correct input
				if(position < 0 || position > 9){
					cout<<"Invalid postion. \n Please try again";
				}
				
				tic_tac_toe.mark_board(position);
				tic_tac_toe.display_board();

			}while(tic_tac_toe.game_over() == false);

				cout<<"\n\nWould you like to play agian (y/n)\n\n?";
				cin>>choice;
	}while(choice != "n" || choice != "N");

	cout<<"\n\nGame Over!";
	return 0;
}