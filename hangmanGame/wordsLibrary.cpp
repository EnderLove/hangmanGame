#include <string>
#include <stdlib.h>
#include <time.h>
#include "wordsLibrary.h"

using namespace std;

string getWord()
{
	srand(time(0));

	string words[] = { "tree", "genkoz", "endergod", "pilcoxbayo" };

	size_t length = sizeof(words) / sizeof(words[0]);

	int randomWord = (rand() % length);

	return words[randomWord];
}
