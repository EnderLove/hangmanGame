#include <iostream>
#include <string>
#include "hangmanGame.h"
#include "hangManArt.h"
#include "wordsLibrary.h"

const char EMPTY_CHAR = '_';

using namespace std;

int checkGameStatus(string userWord, int error)
{
	int find = 0;

	if (userWord.find(EMPTY_CHAR) == string::npos)
	{
		cout << "\nYOU WIN!!!\n";
		return 1;
	}
	else if (error == 7)
	{
		cout << "\nYOU LOSE!!!\n";
		return 1;
	}
	else return 0;
}

bool checkCharInWord(const string& originalWord, string& userWord, char guess)
{
	bool found = false;
	for (size_t i = 0; i < originalWord.size(); i++)
	{
		if (originalWord[i] == guess)
		{
			userWord[i] = guess;
			found = true;
		}
	}
	return found;
}

int hangmanGame()
{
	string originalWord = getWord();
	string userWord(originalWord.length(), EMPTY_CHAR);

	char userGuessChar;

	int error = 0;

	while (!checkGameStatus(userWord, error))
	{ 
		hangManArt(error, userWord);
	
		cout << "\n\nEnter a character: ";
		cin >> userGuessChar;

		if (!checkCharInWord(originalWord, userWord, userGuessChar)) {
			error++;
		}

		system("cls");
	}
	hangManArt(error, userWord);
	return 1;
}