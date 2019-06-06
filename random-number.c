#include <stdio.h>
//#include <cstdlib>
//#include <ctime>

//using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));  //seed random number generator

	int value1 = rand() % 100 + 1;  // random number between 1 and 100
	int value2 = rand() % 100 + 1;
	int operator1;
	int tries = 0;
	int guess;

	if (operator1 = 1);
	{
         operator1 = +;
    }
    else if (operator1 = 2);
    {
         operator1 = -;
    }
    else if (operator1 = 3);
    {
         operator1 = *;
    }
    else (operator1 = 4);
    {
         operator1 = /;
    }

	cout << "\tWelcome to Guess My Number\n\n";

	cout << value1 << operator1 << value2 << = << value1, operator1, value2 << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
