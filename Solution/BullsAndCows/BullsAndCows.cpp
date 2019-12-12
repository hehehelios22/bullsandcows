#include <iostream>
#include <string>



void PrintIntro();
void PlayGame();
std::string GetGuess();
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
		std::string Guess = GetGuess();
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}



std::string GetGuess() 
{
	// get a guess from the player 
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}




void PrintIntro() {

	// introduce the game


	constexpr int WORD_LENGTH = 9;
	std::cout << "Eluwina. A fun game for the whole family: Bulls and Cows. The word game." << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of? :D\n";
	std::cout << std::endl;
	return;
}



bool AskToPlayAgain()
{

	std::cout << "Do you want to play again? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
