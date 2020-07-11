 //cpp
#include "tic_tac_toe.h"
#include<iostream> 

using std::cout; 

bool TicTacToe::game_over(){
    if(check_column_win() == true || check_diagonal_win() == true || check_row_win() == true){
        set_winner();
        return true; 
    }else if(check_board_full() == true){
        winner = "C"; 
        cout<<"Its a tie!!!";
        return true; 
    }
    return false;
}

bool TicTacToe::check_board_full()const{
    for(auto peg: pegs){
        if(peg == " "){
            return false; 
        }
    }
    return true; 
}

//Mark board fills the position and has validation for user input. 
 void TicTacToe::mark_board(int position){
         if(pegs[position-1] == " "){
             pegs[position-1] = player; 
             set_next_player();
         }  
     else{
         cout<<"Error\nPosition already filled. Please try again\n\n";
        }
     
 }

void TicTacToe::set_next_player(){
    if(player == "X"){

        player = "O";

    }else{

        player = "X";

    }
}

void TicTacToe::clear_board(){

    for(std::size_t i = 0; i < pegs.size(); i++){
        pegs[i] = " "; 
    }
}
 void TicTacToe::start_game(std::string first_player){ 

    player = first_player; 
    clear_board();
    
    }

void TicTacToe::display_board()const{
        for(std::size_t i = 0; i < pegs.size(); i += 3){
            std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
        }
     }

     
//checks for column wins 
bool TicTacToe::check_column_win(){
         if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X"){
             cout<<"Player X is the winner!!";
             return true; 
         }
         else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X"){
             cout<<"Player X is the winner!!";
             return true; 
         }else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X"){
             cout<<"Player X is the winner!!";
             return true;
         }else if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O"){
             cout<<"Player O is the winner!!";
             return true; 
         }
         else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O"){
             cout<<"Player O is the winner!!";
             return true; 
         }else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"){
             cout<<"Player O is the winner!!";
             return true;
         }else {
             return false; 
         }
      
     }


//checks for row wins 
bool TicTacToe::check_row_win(){

       if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X"){
            cout<<"Player X is the winner!!";
             return true; 
         }
         else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X"){
            cout<<"Player X is the winner!!";
             return true; 
         }else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"){
             cout<<"Player X is the winner!!";
             return true;
         }else if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O"){
              cout<<"Player O is the winner!!";
             return true; 
         }
         else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O"){
             cout<<"Player O is the winner!!";
             return true; 
         }else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"){
             cout<<"Player O is the winner!!";
             return true;
         }else {
             return false; 
         }
    }


    //checks for diagonal wins 
bool TicTacToe::check_diagonal_win(){

        if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X"){
            cout<<"Player X is the winner!!";
             return true; 
         }
         else if(pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X"){
             cout<<"Player X is the winner!!";
             return true; 
         }else if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O"){
             cout<<"Player O is the winner!!";
             return true; 
         }
         else if(pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O"){
            cout<<"Player O is the winner!!";
             return true; 
         }else {
             return false; 
         }
}
//sets the winner 
void TicTacToe::set_winner(){
    if(player == "X"){
        winner = "O";
    }else {
        winner = "X";
    }
}