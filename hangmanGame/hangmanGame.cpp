#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string>
#include "hangmanGame.h"
#include "hangManArt.h"
#include "wordsLibrary.h"

const char EMPTY_CHAR = '_';

using namespace std;

int checkWin(string userWord, size_t length)
{
	int find = 0;

	for (int i = 0; i < length; i++)
	{
		if (userWord[i] == '_') find++;
	}

	if (find == 0) return 1;
	else return 0;
}

int hangmanGame()
{
	string originalWord = getWord();

	size_t length = originalWord.length();

	string userWord(length, EMPTY_CHAR);

	char userGuessChar;

	int error = 0;

	while (!checkWin(userWord, length))
	{
		hangManArt(error);
		cout << "\n\n";
		cout << userWord;

		cout << "\n\nEnter a character: ";
		cin >> userGuessChar;

		if (originalWord.find(userGuessChar) != string::npos)
		{
			for (int i = 0; i < length; i++)
			{
				if (userGuessChar == originalWord[i])
				{
					userWord[i] = userGuessChar;
				}
				else if (userWord[i] != EMPTY_CHAR)
				{
					continue;
				}
			}
		}
		else
		{
			error++;
		}

		system("cls");
	}

	return 0;
}