#include <stdio.h>
#include <iostream>
#include "hangmanGame.h"

using namespace std;

int main()
{
	int userAnswer = 0;

	cout << "\nWelcome to the hangman game!!\n\n1)Start\n2)Exit\n";
	cin >> userAnswer;
	system("cls");

	while (userAnswer == 1)
	{
		if (hangmanGame())
		{
			cout << "\nPlay again?\n1)Yes\n2)No\n";
			cin >> userAnswer;
			system("cls");
		}
	}
	return 0;
}