#include <iostream>
using namespace std; 
#include "lifeboard.h"

Life::Life()
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			board[i][j] = BLANK;
} 

void Life::display()
{ 

	cout <<"+";
	for (int j = 0; j < SIZE; j++) cout << "-"; 
	cout << "+";
	cout << endl;

	for (int i = 0; i < 40; i++) {
		cout << "|"; 
		for (int j = 0; j < 40; j++) cout << board[i][j];
		cout << "|" << endl;
	}

	cout << "+";
	for (int m = 0; m < SIZE; m++)
		cout << "-"; 
	cout << "+";
	cout << endl;
}


void Life::add(int a, int b)
{                
	board[a][b]= 'x';
}


void Life::remove(int a, int b) 
{
	board[a][b] =  BLANK;
}

void Life::switchboard(){
	for(int a =0; a < SIZE; a++)
	{
		for(int b = 0; b < SIZE; b++)
		{
			board2[a][b] = board[a][b];
		}
	}
}

void Life::act(){ 
	switchboard(); 
	for(int a = 0; a < SIZE; a++)
	{
		for(int b = 0; b < SIZE; b++)
		{
			int living = 0;
			for(int c = -1; c < 2; c++)
			{
				for(int d = -1; d < 2; d++)
				{
					if(!(c == 0 && d == 0))
					{
						if (board2[a+c][b+d] == 'x'){
							++living;
						}
					}
				}
			}

			if (board[a][b] == 'x')
			{

				if ((living == 2) || (living == 3))
					board[a][b] = 'x';
			}
			if(living < 2)
			{
				board[a][b] = BLANK;
			}
			else if(living == 3)
			{
				board[a][b] = 'x';
			}
			else if(living  > 3)
			{
				board[a][b] = BLANK;
			}

		}
	}
}




