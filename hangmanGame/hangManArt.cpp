#include "hangManArt.h"
#include <string>
#include <iostream>

using namespace std;

void showArt(string hangMan[])
{
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << hangMan[i] << endl;
	}
}

void hangManArt(int error, string userWord)
{

	string hangMan01[] = { {"   + - - - +"},
						   {"           |"},
						   {"           |"},
						   {"           |"},
						   {"           |"},
						   {"           |"},
						   {"=================="}
	};
	string hangMan02[] = { {"   + - - - +"},
					       {"       |   |"},
					       {"           |"},
					       {"           |"},
					       {"           |"},
					       {"           |"},
						   {"=================="}
	};
	string hangMan03[] = { {"   + - - - +"},
					       {"       |   |"},
					       {"       O   |"},
					       {"           |"},
					       {"           |"},
					       {"           |"},
						   {"=================="}
	};
	string hangMan04[] = { {"   + - - - +"},
						   {"       |   |"},
						   {"       O   |"},
						   {"       |   |"},
						   {"           |"},
						   {"           |"},
						   {"=================="}
	};
	string hangMan05[] = { {"   + - - - +"},
						   {"       |   |"},
						   {"       O   |"},
						   {"      /|   |"},
						   {"           |"},
						   {"           |"},
						   {"=================="}
	};
	string hangMan06[] = { {"   + - - - +"},
						   {"       |   |"},
						   {"       O   |"},
						   {"      /|\\  |"},
						   {"           |"},
						   {"           |"},
						   {"=================="}
	};
	string hangMan07[] = { {"   + - - - +"},
						   {"       |   |"},
						   {"       O   |"},
						   {"      /|\\  |"},
						   {"      /    |"},
						   {"           |"},
						   {"=================="}
	};
	string hangMan08[] = { {"   + - - - +"},
						   {"       |   |"},
						   {"       O   |"},
						   {"      /|\\  |"},
						   {"      / \\  |"},
						   {"           |"},
		                   {"=================="}
	};

	
	switch (error)
	{
	//case 1:showArt(hangMan01); break;
	case 1:showArt(hangMan02); cout << "\n" << userWord << "\n\n"; break;
	case 2:showArt(hangMan03); cout << "\n" << userWord << "\n\n"; break;
	case 3:showArt(hangMan04); cout << "\n" << userWord << "\n\n"; break;
	case 4:showArt(hangMan05); cout << "\n" << userWord << "\n\n"; break;
	case 5:showArt(hangMan06); cout << "\n" << userWord << "\n\n"; break;
	case 6:showArt(hangMan07); cout << "\n" << userWord << "\n\n"; break;
	case 7:showArt(hangMan08); cout << "\n" << userWord << "\n\n"; break;

	default:
		showArt(hangMan01); cout << "\n" << userWord << "\n\n"; break;
		break;
	}
}