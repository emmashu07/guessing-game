#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
 * Emma Shu: Guessing Game is a game where the user guesses a value between 0 and 100 inclusive. The game
 * will prompt the user to enter a number and proceed to tell whether the number is too high or too low. If
 * guessed, the game will display the number of tries it took. Then, it will ask whether you would like to play
 * again or not.
 */

int main(){
	bool yesno = true;
	int input;
	int randInt;
	int numOfGuesses;
	char yn = 'y';
	
	while (yesno) {
		srand(time(NULL)); //Set random seed to generate a random number later.	
		numOfGuesses = 0; //Reset number of guesses with each iteration.
		cout << "Welcome to Guessing Game, please enter a number between 0 and 100 inclusive to begin." << endl;
		cin >> input; //Read in user's input.
		randInt = rand() % 101; //Generate number between 0 and 100 inclusive;
		while (input != randInt) {
			if(input > randInt) {
				cout << "Your guess is too high." << endl;
				cin >> input;
				numOfGuesses++;
			}
			else if(input < randInt) {
				cout << "Your guess is too low." << endl;
				cin >> input;
				numOfGuesses++;
			}
		}	
		cout << "Congratulations, you have guessed the number! ";
		cout << "You guessed it in " << numOfGuesses << " tries. ";
		cout << "Play again? y/n" << endl; 
		cin >> yn;
		if(yn != 'y') {
			yesno = false; //Continue loop, or end loop.
		}
	
	}
		
	return 0;
}
