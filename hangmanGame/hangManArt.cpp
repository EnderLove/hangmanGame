#include "hangManArt.h"
#include <string>
#include <iostream>

using namespace std;

void showArt(string hangMan[])
{
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << hangMan[i] << endl;
	}
}

void hangManArt(int error)
{

	string hangMan01[] = { {"+ - - - +"},
						   {"        |"},
						   {"        |"},
						   {"        |"},
						   {"        |"},
						   {"        |"}
	};
	string hangMan02[] = { {"+ - - - +"},
					       {"    |   |"},
					       {"        |"},
					       {"        |"},
					       {"        |"},
					       {"        |"}
	};
	string hangMan03[] = { {"+ - - - +"},
					       {"    |   |"},
					       {"    O   |"},
					       {"        |"},
					       {"        |"},
					       {"        |"}
	};
	string hangMan04[] = { {"+ - - - +"},
						   {"    |   |"},
						   {"    O   |"},
						   {"    |   |"},
						   {"        |"},
						   {"        |"}
	};
	string hangMan05[] = { {"+ - - - +"},
						   {"    |   |"},
						   {"    O   |"},
						   {"   /|   |"},
						   {"        |"},
						   {"        |"}
	};
	string hangMan06[] = { {"+ - - - +"},
						   {"    |   |"},
						   {"    O   |"},
						   {"   /|\\  |"},
						   {"        |"},
						   {"        |"}
	};
	string hangMan07[] = { {"+ - - - +"},
						   {"    |   |"},
						   {"    O   |"},
						   {"   /|\\  |"},
						   {"   /    |"},
						   {"        |"}
	};
	string hangMan08[] = { {"+ - - - +"},
						   {"    |   |"},
						   {"    O   |"},
						   {"   /|\\  |"},
						   {"   / \\  |"},
						   {"        |"}
	};

	
	switch (error)
	{
	//case 1:showArt(hangMan01); break;
	case 1:showArt(hangMan02); break;
	case 2:showArt(hangMan03); break;
	case 3:showArt(hangMan04); break;
	case 4:showArt(hangMan05); break;
	case 5:showArt(hangMan06); break;
	case 6:showArt(hangMan07); break;
	case 7:showArt(hangMan08); break;

	default:
		showArt(hangMan01); break;
		break;
	}
}