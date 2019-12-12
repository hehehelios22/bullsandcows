#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();
// the entry point of our application


int main()
{
	bool bPlayAgain = false; 
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();

	}
	while (bPlayAgain);
	return 0; // exit the application
}


void PlayGame()
{
	// loop for the number of turns asking for guesses 
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)

	{
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
	}
}



string GetGuess() 
{
	// get a guess from the player 
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}




void PrintIntro() {

	// introduce the game


	constexpr int WORD_LENGTH = 9;
	cout << "Eluwina. A fun game for the whole family: Bulls and Cows. The word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of? :D\n";
	cout << endl;
	return;
}



bool AskToPlayAgain()
{

	cout << "Do you want to play again? ";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
