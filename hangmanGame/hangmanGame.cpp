#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string>
#include "hangmanGame.h"
#include "hangManArt.h"
#include "wordsLibrary.h"

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
	string userWord;
	char userCharacter;

	int error = 0;

	size_t length = originalWord.length();

	userWord.resize(length);

	for (int i = 0; i < length; i++)
	{
		userWord[i] = '_';
	}

	while (!checkWin(userWord, length))
	{
		hangManArt(error);
		cout << "\n\n";
		cout << userWord;

		printf("\n\nEnter a character: ");
		cin >> userCharacter;

		if (originalWord.find(userCharacter) != string::npos)
		{
			for (int i = 0; i < length; i++)
			{
				if (userCharacter == originalWord[i])
				{
					userWord[i] = userCharacter;
				}
				else if (userWord[i] != '_')
				{
					continue;
				}
			}
		}
		else
		{
			error++;
			//system("cls");
		}

		system("cls");
	}


	return 0;
}