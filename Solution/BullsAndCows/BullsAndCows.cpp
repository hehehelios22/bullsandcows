#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrint();
// the entry point of our application


int main()
{
	
	PrintIntro();
	// loop for the number of turns asking for guesses 
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
		
	{
		GetGuessAndPrint();
		cout << endl;
	}
	return 0;
}



string GetGuessAndPrint() 
{
	// get a guess from the player 
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	// repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;
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