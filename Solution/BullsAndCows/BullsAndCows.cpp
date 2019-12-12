#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();
string PrintBack();
void PlayGame();
// the entry point of our application


int main()
{
	
	PrintIntro();
	PlayGame();
	return 0;
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
	cout << "Eluwina. A fn game for the whole family: Bulls and Cows. The word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of? :D\n";
	cout << endl;
	return;
}