

#include "globals.h"
#include "GameState.h"


//constructor
GameState::GameState(){
    // The constructor. It initializes:
    selectedRow=0;
    selectedColumn=0;
    moveValid=true;
    gameOver=false;
    winCode=0;
    turn=true;
    //     gameBoard locations to Empty (see globals.h)
    for(int i=0;i<boardSize;i++){
        for(int j=0;j<boardSize;j++){
            gameBoard[i][j]=Empty;
        }
    }
}
// Return the selected row (in the range 0..boardSize-1)
    int GameState::get_selectedRow(){
        return selectedRow;
    }    

    // Return the selected column (in the range 0..boardSize-1)
    int GameState::get_selectedColumn(){
        return selectedColumn;
    } 
    
    // Set the selected row to value in the range (in the range 0..boardSize-1)
    // An out of range value is ignored and the function just returns
    void GameState::set_selectedRow(int value){
        if(value>=0&&value<=boardSize-1){
            selectedRow=value;
        }
    }    

    // Set the selected column in the range (in the range 0..boardSize-1)
    // An out of range value is ignored and the function just returns
    void GameState::set_selectedColumn(int value){
        if(value>=0&&value<=boardSize-1){
            selectedColumn=value;
        }
    }  
    
    // Get the moveValid value
    bool GameState::get_moveValid(){
    return moveValid;   
    }

    // Set the moveValid variable to value
    void GameState::set_moveValid(bool value){
        moveValid=value;
    }

    // Get the gameOver value
    bool GameState::get_gameOver(){
        return gameOver;
    }

    // Set the gameOver variable to value
    void GameState::set_gameOver(bool value){
        gameOver=value;
    }

    // Get the winCode [0..8]
    int GameState::get_winCode(){
        return winCode;
    }
    
    // Set the winCode to value in the range (0..8)
    // An out of range value is ignored and the function just returns
    void GameState::set_winCode(int value){
        if(value>=0&&value<=8){
            winCode=value;
        }
    }
    
    // Get the value of turn
    bool GameState::get_turn(){
        return turn;
    }

    // Set the value of turn
    void GameState::set_turn(bool value){
        turn=value;
    }
    
    // Get the game board value at the board location at row and col
    // This method checks that row, col and value are in range/valid
    // and if not it returns Empty
    int GameState::get_gameBoard(int row, int col){
        if(row>=0&&col>=0&&row<=boardSize-1&&col<=boardSize-1){
            return gameBoard[row][col];
        }
        return Empty;
    }

    // Set the game board value at the board location at row and col to value
    // This method checks that row, col and value are in range/valid and if not it
    // just returns
    void GameState::set_gameBoard(int row, int col, int value){
      if(row>=0&&col>=0&&row<=boardSize-1&&col<=boardSize-1&&value>=-1&&value<=1){
          gameBoard[row][col]=value;
      } 
    }
