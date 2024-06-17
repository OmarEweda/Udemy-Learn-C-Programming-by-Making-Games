/*The game of 8 is played by 2 players. The game starts with the initial number 8 (from here on refered to as the initial number). 
The first player will choose a number from 1 to 3 (from here on refered to as the chosen number). 
If the player inputs something outside of the 1 to 3 range it should be an error and the player must choose again. 
The initial number is subtracted by the chosen number. Then the next player's turn happens. 
The next player cannot choose the number that the last player chose. 
If the initial number goes to 0 on your turn, then you win. 
Otherwise if the number goes below 0, your opponent wins. 
The player should always see what choices are available to him when prompted to enter his choice. 
After the game is over, the user should be prompted whether they want to play again.*/

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

#define INIT_NUMBER  8

void playGame();
int makeChoice(std::array<int,3> chosen, int& previous);
bool checkForZero(const int& value);
bool checkForLoser(const int& value);
void switchPlayer(const std::array<std::string, 2>& players, std::string& player);
bool wannaPlayAgain();

int main(){
    std::cout << "Welcome to The Game of Eight" << std::endl;
    game:
    playGame();
    
    if(wannaPlayAgain()){
        goto game;
    }
    else{
        std::cout << "See you again, Number guesser!" << std::endl;
        return 0;
    }
}


bool wannaPlayAgain(){
    bool letsPlay = false;
    int choice;
    std::cout << "Wanna play a game? 1 for yes ,0 for no" << std::endl;
    std::cin >> choice;
    if (choice == 0 || choice == 1){
        letsPlay = (choice == 1)? 1 : 0;
    }
    else{
        std::cout << "Wrong choice." << std::endl;
        return false;
    }
    return letsPlay;
}


bool checkForZero(const int& value)
{
    bool zeroFlag = ((value == 0)? 1 : 0);
    return zeroFlag;
}

bool checkForLoser(const int& value)
{
    bool loserFlag = ((value < 0)? 1 : 0);
    return loserFlag;
}



int makeChoice(std::array<int,3> chosen, int& previous){
    // static int previous = 0;
    std::vector<int> available;
    int selection = 0;
    
    for (auto &&i : chosen)
    {   
        if(i != previous){
            available.push_back(i);
        }        
    }
    
    for (auto &&i : available)
    {
        std::cout << i << " ";
    }
    
    std::cout << std::endl;

    selection:
    std::cin >> selection;
    if (std::find(available.begin(), available.end(), selection) == available.end()){
        std::cout << "Wrong selection. Please, try again!" << std::endl;
        goto selection;
    }
    else{
        previous = selection;
        available.clear(); 
    }
    return selection;
}

void playGame(){
    const std::array<int,3> chosenNumbers = {1, 2, 3};
    const std::array<std::string, 2> players = {"P1", "P2"};        
    std::string currentPlayer = players [0];
    int initNumber = INIT_NUMBER;
    bool gameOver= false;
    int previous = 0;

    do{
        std::cout << "Player: "<< currentPlayer << " Make a choice from available selection: ";
        int choice = makeChoice(chosenNumbers, previous);
        initNumber -= choice;
        if(checkForZero(initNumber)){
            std::cout << "Player: " << currentPlayer << " has won, Congrats!" << std::endl;
            gameOver = true;                                             
        }
        else{
            if(checkForLoser(initNumber)){
                std::cout << "Player: " << currentPlayer << " has lost, Better Luck next time!" << std::endl;
                gameOver = true;
            }
            else{
            switchPlayer(players, currentPlayer);
            }
        }        
    }while(!gameOver);
    return;
}

void switchPlayer( const std::array<std::string, 2>& players, std::string& currPlayer){
   currPlayer = (players[0] == (currPlayer))? players[1] : players [0];
}
