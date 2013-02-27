/* main.cpp */
#include <iostream>
using namespace std;

/* possible outcomes */
enum outcomes {draw, player1, player2};

int main() 
{
	cout << "Welcome to Tic Tac Toe" << endl;

	/* assign 0 to each possible outcome */ 
	int numberWins[sizeof(outcomes)] = {0};

	/* whether or not player will play or quit after completed game */
	bool playAgain = false;

	while (!done) {
		cout << "Begin!" << endl;

		int winner = PlayGame(); // actual gameplay

		/* increment number of times the "winner" player has won */
		numberWins[winner]++;

		/* display winner and how many times won */
		printWinner(numberWins, winner);

		/* check whether to quit or replay */
		done = playAgain();
	}

	cout << "GAME OVER" << endl;

	return 0;
}
