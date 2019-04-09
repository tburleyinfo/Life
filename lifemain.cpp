#include<iostream>
#include "lifeboard.h"
#include <unistd.h>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	int a;
	bool boolean;
	while (a == a)
	{
		if (argv[1]) 
		{
			cout << "batch mode" << endl; 
			ifstream ifs; 
			ifs.open(argv[1]);
			if (!ifs) {
				cout << "Could not open" << endl;
				return 1;			
			}

			char casenumber;				
			Life Lifegrid; 
			
			while(casenumber != 'q'){
				ifs >> casenumber;
				if (casenumber == 'a')
				{
					int x, y;
					ifs >> x >> y;
					Lifegrid.add(x, y);
					Lifegrid.display();
					
				} 

				else if (casenumber == 'r')
				{
					int x, y;
					ifs >> x >> y;
					Lifegrid.remove(x,y);
					Lifegrid.display();

				}

				else if (casenumber == 'n') 
				{ 
					Lifegrid.act();
					Lifegrid.display();

					break;		
				}

				else if (casenumber == 'p')
				{      
					while (true){
						Lifegrid.display();
						Lifegrid.act();
						usleep(150000);
						system("clear");
						casenumber = '\0';		
					}
				}
				else if (casenumber == 'q') return 0;
			}
			return 0;
		}

			system("clear");
		cout << " interactive mode" << endl; 
		{ 

			Life Lifegrid;
			Lifegrid.display();
			int x,y;
			char casenumber;
			bool boolean = true;

			while(boolean = true){
				cin >> casenumber;
				if (casenumber == 'a')
				{
					cin >> x >> y;
					Lifegrid.add(x,y);
					Lifegrid.display();
					casenumber = '\0';
				} 

				else if (casenumber == 'r')
				{
					cin >> x >> y; 
					Lifegrid.remove(x, y);
					Lifegrid.display();

					casenumber = '\0';
				}

				else if (casenumber == 'n') 
				{ 
					Lifegrid.act();
					Lifegrid.display();

					break;		
				}

				else if (casenumber == 'p')
				{      
					while (true){
						Lifegrid.display();
						Lifegrid.act();
						usleep(150000);
						system("clear");
						casenumber = '\0';		
					}
				}
				else if (casenumber == 'q') return 0;

			}

			return 0;
		}
	}
}
