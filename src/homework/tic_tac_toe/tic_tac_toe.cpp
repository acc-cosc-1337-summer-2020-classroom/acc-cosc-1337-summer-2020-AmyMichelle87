//cpp
#include "tic_tac_toe.h"
#include<iostream> 

using std::cout; 

bool TicTacToe::game_over(){

    return check_board_full();
}

bool TicTacToe::check_board_full()const{
    for(auto peg: pegs){
        if(peg == " "){
            return false; 
        }
    }
    return true; 
}

 void TicTacToe::mark_board(int position){
     pegs[position-1] = player; 
     set_next_player();
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

bool TicTacToe::check_column_win(){
    
         bool win; 
         if(pegs[1] == player && pegs[4] == player && pegs[7] == player){
             win = true; 
         }
         else if(pegs[2] == player && pegs[5] == player && pegs[8] == player){
             win = true; 
         }else if(pegs[3] == player && pegs[6] == player && pegs[9] == player){
             win = true;
         }else {
             win = false; 
         }
     
         return win; 
     }

bool TicTacToe::check_row_win(){

        bool win; 
        if(pegs[0] == player && pegs[1] == player && pegs[2] == player){
            win = true; 
        }else if(pegs[3] == player && pegs[4] == player && pegs[5] == player){
            win = true; 
        }else if(pegs[6] == player && pegs[7] == player && pegs[8] == player){
            win = true; 
        }else {
            win = false; 
        }

        return win; 
    }
bool TicTacToe::check_diagonal_win(){

    bool win; 
    if(pegs[1] == player && pegs[5] == player && pegs[9] == player){
        win = true; 
    }else if(pegs[7] == player && pegs[5] == player && pegs[3] == player){
        win = true; 
    }else {
        win = false; 
    }
   
    return win; 
}

void TicTacToe::set_winner(){
    if(player == "X"){
        winner = "O";
    }else {
        winner = "X";
    }
}