
#include "globals.h"
#include "GameState.h"

void playMove(GameState& game_state) {
    
    int row=game_state.get_selectedRow();
    int col=game_state.get_selectedColumn();
    bool availableSpace=false;//checks whether there is space available on the board(if not, game is over)
    if(game_state.get_gameBoard(row,col)==Empty){
       game_state.set_moveValid(true);             
       
       if(game_state.get_turn()==true){
        game_state.set_gameBoard(row,col,X);
       }
       else if(game_state.get_turn()==false){
        game_state.set_gameBoard(row,col,O);
        }
   
       
       
       game_state.set_turn(!game_state.get_turn());
       
       
        for(int i=0;i<boardSize;i++){
            for(int j=0;j<boardSize;j++){
                if(game_state.get_gameBoard(i,j)==Empty){
                    availableSpace=true;
                    break;
                }
                
            }
        }
        if(availableSpace==false){
            game_state.set_winCode(0);
        
            game_state.set_gameOver(1);
            
        }
    
    
    
    for(int i=0;i<boardSize;i++){
        if((game_state.get_gameBoard(i,0)==game_state.get_gameBoard(i,1))&&(game_state.get_gameBoard(i,1)==game_state.get_gameBoard(i,2))&&game_state.get_gameBoard(i,1))
        {
            game_state.set_winCode(i+1); 
            game_state.set_gameOver(1);
        }
          if((game_state.get_gameBoard(0,i)==game_state.get_gameBoard(2,i))&&(game_state.get_gameBoard(2,i)==game_state.get_gameBoard(1,i))&&game_state.get_gameBoard(2,i))
          {
              game_state.set_winCode(i+4);
              game_state.set_gameOver(1);
          }
    }
        if((game_state.get_gameBoard(0,0)==game_state.get_gameBoard(1,1))&&(game_state.get_gameBoard(1,1)==game_state.get_gameBoard(2,2))&&game_state.get_gameBoard(1,1))
        {
            game_state.set_winCode(7);
            game_state.set_gameOver(1);
        }
    if((game_state.get_gameBoard(2,0)==game_state.get_gameBoard(1,1))&&(game_state.get_gameBoard(1,1)==game_state.get_gameBoard(0,2))&&game_state.get_gameBoard(1,1))
    {
        game_state.set_winCode(8);
        game_state.set_gameOver(1);
    }  
   }
    else if(game_state.get_gameBoard(row,col)!=Empty)
        game_state.set_moveValid(false); 
}
        
    
