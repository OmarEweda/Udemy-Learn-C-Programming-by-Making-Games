/**/

#include <iostream>
#include <cmath>
#include <random>

#define MAX_RANGE  100
#define MIN_RANGE  0

bool wannaPlayAgain();
const int secretNumGen(const int lower, const int upper);
int numbOfTrials(const int upper);
void playGame();


int main(){
    std::cout << "Welcome to Number Guesser Game" << std::endl;
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

const int secretNumGen(const int lower, const int upper){
    static std::random_device rd;
    static std::mt19937 secretNum(rd());
    
    std::uniform_int_distribution<> dis(lower, upper);
    
    return dis(secretNum);
}

int numbOfTrials(const int upper){
    int result = static_cast<int>(std::ceil(std::log(upper)));

    return result;
}

void playGame(){
    int guess = 0;
    int numOfGuesses = numbOfTrials(MAX_RANGE);
    const int secretNum = secretNumGen(MIN_RANGE, MAX_RANGE);
    bool gameOver= false;
    do{        
        std::cout << "Range is between " << MIN_RANGE << " and " << MAX_RANGE << ". Enter your guess!" << std::endl << "Number of trials = " << numOfGuesses << std::endl;
        std::cin >> guess; 
        if (guess == secretNum &&
            numOfGuesses > 0){
            std::cout << "Congrats on your correct guess" << std::endl;
            gameOver = true; 
        }
        else{
            numOfGuesses--;

            if(guess > secretNum){
                std::cout << "Guess is too high. Remaining trials = " << numOfGuesses << std::endl;
            }
            else{
                std::cout << "Guess is too low. Remaining trials = " << numOfGuesses << std::endl;
            }
        }

        if (!numOfGuesses){
            gameOver = true;
            std::cout << "Out of trials. Secret Number = "<< secretNum <<" . Game over. Better Luck next time" << std::endl;
            return;
        }    
    }while(!gameOver);
    return;
}