#include <stdio.h>
#include <stdlib.h>

// this first variable will store the move
int move;
// a variable to be the 'grid' of the hash
char *hash[3][3]={" "," "," "," "," "," "," "," "," "};
// variable to store the awnser to "Want to play again?"
char answer='*';
// variable to show the bot wich move the user is on
int nummove=0;
// variable to store what was the first, second and third user's move
int first=0, sec=0, third=0;

// close the program when called
void abort(void);

// this function appears when the game is over
void end ()
{
	int l, c;
	printf (" Want to play again? (y/n): ");
	scanf ("%s", &answer);
	if (answer=='y')
	{
		system ("cls");
		// cleaning the positions before the user play again
		for (l=0;l<3;l++)
		{
			for (c=0;c<3;c++)
			{
				hash[l][c]=" ";
			}
		}
		// cleaning the register of moves
		first=0;
		sec=0;
		third=0;
		nummove=0;
		move=0;
		// removing the 'y' or 'n'
		answer='*';
		
		main();
	}
	if (answer=='n')
	{
		system ("cls");
		system ("color 9");
		abort();
	}
	else
	{
		system ("cls");
		printf ("\n Please enter a valid answer!");
	}
}

// in this function are the moves of bot, that playing acording by the user's move.
void bot ()
{
	// first move of bot, acording to first user's move
	if (nummove==1)
	{
		if (hash[1][1]=="x")
		{
			hash[0][2]="o";
			first=5;
		}
		if (hash[0][1]=="x")
		{
			hash[1][1]="o";
			first=2;
		}
		if (hash[0][2]=="x")
		{
			hash[1][1]="o";
			first=3;
		}
		if (hash[1][2]=="x")
		{
			hash[1][1]="o";
			first=6;
		}
		if (hash[2][2]=="x")
		{
			hash[1][1]="o";
			first=9;
		}
		if (hash[2][1]=="x")
		{
			hash[1][1]="o";
			first=8;
		}
		if (hash[2][0]=="x")
		{
			hash[1][1]="o";
			first=7;
		}
		if (hash[1][0]=="x")
		{
			hash[1][1]="o";
			first=4;
		}
		if (hash[0][0]=="x")
		{
			hash[1][1]="o";
			first=1;
		}
	}
	
	// second move of bot, acording to second user's move 
	if (nummove==2)
	{
		// if starts in the 5 position
		if (first==5)
		{
			if (hash[2][0]=="x")
			{			
				hash[2][2]="o";
				sec=7;
			}
			if (hash[0][1]=="x")
			{
				hash[2][1]="o";
				sec=2;
			}
			if (hash[0][0]=="x")
			{
				hash[2][2]="o";
				sec=1;
			}
			if (hash[1][0]=="x")
			{
				hash[1][2]="o";
				sec=4;
			}
			if (hash[2][1]=="x")
			{
				hash[0][1]="o";
				sec=8;
			}
			if (hash[2][2]=="x")
			{
				hash[0][0]="o";
				sec=9;
			}
			if (hash[1][2]=="x")
			{
				hash[1][0]="o";
				sec=6;
			}
		}
	
		// if starts in the 2 position
		if (first==2)
		{
			if (hash[0][0]=="x")
			{
				hash[0][2]="o";
				sec=1;
			}
			if (hash[0][2]=="x")
			{
				hash[0][0]="o";
				sec=3;
			}
			if (hash[1][0]=="x")
			{
				hash[0][0]="o";
				sec=4;
			}
			if (hash[1][2]=="x")
			{
				hash[0][2]="o";
				sec=6;
			}
			if (hash[2][0]=="x")
			{
				hash[0][0]="o";
				sec=7;
			}
			if (hash[2][2]=="x")
			{
				hash[0][2]="o";
				sec=9;
			}
			if (hash[2][1]=="x")
			{
				hash[0][2]="o";
				sec=8;
			}
		}
	
		// if starts in the 3 position
		if (first==3)
		{
			if (hash[0][0]=="x")
			{
				hash[0][1]="o";
				sec=1;
			}
			if (hash[0][1]=="x")
			{
				hash[0][0]="o";
				sec=2;
			}
			if (hash[1][0]=="x")
			{
				hash[0][1]="o";
				sec=4;
			}
			if (hash[1][2]=="x")
			{
				hash[2][2]="o";
				sec=6;
			}
			if (hash[2][0]=="x")
			{
				hash[0][1]="o";
				sec=7;
			}
			if (hash[2][1]=="x")
			{
				hash[1][2]="o";
				sec=8;
			}
			if (hash[2][2]=="x")
			{
				hash[1][2]="o";
				sec=9;
			}
		}
		
		// if starts in the 6 position
		if (first==6)
		{
			if (hash[0][0]=="x")
			{
				hash[0][1]="o";
				sec=1;
			}
			if (hash[0][1]=="x")
			{
				hash[0][2]="o";
				sec=2;
			}
			if (hash[0][2]=="x")
			{
				hash[2][2]="o";
				sec=3;
			}
			if (hash[1][0]=="x")
			{
				hash[0][2]="o";
				sec=4;
			}
			if (hash[2][0]=="x")
			{
				hash[2][1]="o";
				sec=7;
			}
			if (hash[2][1]=="x")
			{
				hash[2][2]="o";
				sec=8;
			}
			if (hash[2][2]=="x")
			{
				hash[0][2]="o";
				sec=9;
			}
			
		}
		
		// if starts in the 9 position
		if (first==9)
		{
			if (hash[0][0]=="x")
			{
				hash[0][1]="o";
				sec=1;
			}
			if (hash[0][1]=="x")
			{
				hash[0][2]="o";
				sec=2;
			}
			if (hash[0][2]=="x")
			{
				hash[1][2]="o";
				sec=3;
			}
			if (hash[1][0]=="x")
			{
				hash[2][0]="o";
				sec=4;
			}
			if (hash[2][0]=="x")
			{
				hash[2][1]="o";
				sec=7;
			}
			if (hash[2][1]=="x")
			{
				hash[2][0]="o";
				sec=8;
			}
			if (hash[1][2]=="x")
			{
				hash[0][2]="o";
				sec=6;
			}
			
		}

		// if starts in the 8 position
		if (first==8)
		{
			if (hash[0][0]=="x")
			{
				hash[2][0]="o";
				sec=1;
			}
			if (hash[0][1]=="x")
			{
				hash[0][2]="o";
				sec=2;
			}
			if (hash[0][2]=="x")
			{
				hash[2][2]="o";
				sec=3;
			}
			if (hash[1][0]=="x")
			{
				hash[2][0]="o";
				sec=4;
			}
			if (hash[2][0]=="x")
			{
				hash[2][2]="o";
				sec=7;
			}
			if (hash[2][2]=="x")
			{
				hash[2][0]="o";
				sec=9;
			}
			if (hash[1][2]=="x")
			{
				hash[2][2]="o";
				sec=6;
			}
			
		}

		// if starts in the 7 position
		if (first==7)
		{
			if (hash[0][0]=="x")
			{
				hash[1][0]="o";
				sec=1;
			}
			if (hash[0][1]=="x")
			{
				hash[0][0]="o";
				sec=2;
			}
			if (hash[0][2]=="x")
			{
				hash[0][1]="o";
				sec=3;
			}
			if (hash[1][0]=="x")
			{
				hash[0][0]="o";
				sec=4;
			}
			if (hash[1][2]=="x")
			{
				hash[2][2]="o";
				sec=6;
			}
			if (hash[2][1]=="x")
			{
				hash[2][2]="o";
				sec=8;
			}
			if (hash[2][2]=="x")
			{
				hash[2][1]="o";
				sec=9;
			}
			
		}
		
		// if starts in the 4 position
		if (first==4)
		{
			if (hash[0][0]=="x")
			{
				hash[2][0]="o";
				sec=1;
			}
			if (hash[0][1]=="x")
			{
				hash[0][0]="o";
				sec=2;
			}
			if (hash[0][2]=="x")
			{
				hash[0][0]="o";
				sec=3;
			}
			if (hash[2][1]=="x")
			{
				hash[2][0]="o";
				sec=8;
			}
			if (hash[2][0]=="x")
			{
				hash[0][0]="o";
				sec=7;
			}
			if (hash[2][2]=="x")
			{
				hash[2][0]="o";
				sec=9;
			}
			if (hash[1][2]=="x")
			{
				hash[2][2]="o";
				sec=6;
			}
		}
		
		// if starts in the 1 position
		if (first==1)
		{
			if (hash[0][1]=="x")
			{
				hash[0][2]="o";
				sec=2;
			}
			if (hash[0][2]=="x")
			{
				hash[0][1]="o";
				sec=3;
			}
			if (hash[1][0]=="x")
			{
				hash[2][0]="o";
				sec=4;
			}
			if (hash[1][2]=="x")
			{
				hash[0][2]="o";
				sec=6;
			}
			if (hash[2][0]=="x")
			{
				hash[1][0]="o";
				sec=7;
			}
			if (hash[2][1]=="x")
			{
				hash[2][0]="o";
				sec=8;
			}
			if (hash[2][2]=="x")
			{
				hash[1][2]="o";
				sec=9;
			}
			
		}
	}
	
	// third move of bot, acording to third user's move
	if (nummove==3)
	{
		// if starts in the 5 position
		if (first==5)
		{
			// and the second was in the 7 position
			if (hash[0][0]=="x" && sec==7 || hash[0][1]=="x" && sec==7 || hash[1][0]=="x"  && sec==7 || hash[2][1]=="x" && sec==7)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==7)
				hash[1][0]="o";
				
			// and the second was in the 2 position
			if (hash[0][0]=="x" && sec==2)
			{
			hash[2][2]="o";
				third=1;
			}
			if (hash[1][0]=="x" && sec==2)
			{
				hash[1][2]="o";
				third=4;
			}
			if (hash[2][0]=="x" && sec==2)
			{
				hash[2][2]="o";
				third=7;
			}
			if (hash[1][2]=="x" && sec==2)
			{
				hash[1][0]="o";
				third=6;
			}
			if (hash[2][2]=="x" && sec==2)
			{
				hash[0][0]="o";
				third=9;
			}
			
			// and the second was in the 1 position
			if (hash[2][0]=="x" && sec==1 || hash[0][1]=="x" && sec==1 || hash[1][0]=="x"  && sec==1 || hash[2][1]=="x" && sec==1)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==1)
				hash[1][0]="o";
				
			// and the second was in the 4 position
			if (hash[0][0]=="x" && sec==4 || hash[0][1]=="x" && sec==4 || hash[2][0]=="x"  && sec==4 || hash[2][1]=="x" && sec==4)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==4)
				hash[0][0]="o";
				
			// and the second was in the 8 position
			if (hash[1][0]=="x" && sec==8 || hash[2][0]=="x" && sec==8 || hash[1][2]=="x"  && sec==8 || hash[2][2]=="x" && sec==8)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==8)
				hash[2][2]="o";
				
			// and the second was in the 9 position
			if (hash[1][0]=="x" && sec==9 || hash[1][2]=="x" && sec==9 || hash[2][0]=="x"  && sec==9 || hash[2][1]=="x" && sec==9)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==9)
				hash[2][1]="o";
				
			// and the second was in the 6 position
			if (hash[0][0]=="x" && sec==6)
			{
				hash[2][2]="o";
				third=1;
			}
			if (hash[0][1]=="x" && sec==6)
			{
				hash[2][1]="o";
				third=2;
			}
			if (hash[2][0]=="x" && sec==6)
			{
				hash[0][0]="o";
				third=7;
			}
			if (hash[2][1]=="x" && sec==6)
			{
				hash[0][1]="o";
				third=8;
			}
			if (hash[2][2]=="x" && sec==6)
			{
				hash[0][0]="o";
				third=9;
			}
		}
	
		// if starts in the 2 position
		if (first==2)
		{
			if (hash[1][0]=="x" && sec==1 || hash[2][1]=="x" && sec==1 || hash[1][2]=="x"  && sec==1 || hash[2][2]=="x" && sec==1)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==1)
				hash[1][0]="o";
				
			if (hash[1][0]=="x" && sec==3 || hash[2][1]=="x" && sec==3 || hash[1][2]=="x"  && sec==3 || hash[2][0]=="x" && sec==3)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==3)
				hash[1][2]="o";
				
			if (hash[2][0]=="x" && sec==4 || hash[2][1]=="x" && sec==4 || hash[0][2]=="x"  && sec==4 || hash[1][2]=="x" && sec==4)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==4)
				hash[2][0]="o";
				
			if (hash[0][0]=="x" && sec==6 || hash[1][0]=="x" && sec==6 || hash[2][1]=="x"  && sec==6 || hash[2][2]=="x" && sec==6)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==6)
				hash[0][0]="o";
				
			if (hash[1][0]=="x" && sec==7 || hash[2][1]=="x" && sec==7 || hash[0][2]=="x"  && sec==7 || hash[1][2]=="x" && sec==7)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==7)
				hash[2][1]="o";
				
			if (hash[0][0]=="x" && sec==8 || hash[1][0]=="x" && sec==8 || hash[1][2]=="x"  && sec==8 || hash[2][2]=="x" && sec==8)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==8)
				hash[2][2]="o";
				
			if (hash[0][0]=="x" && sec==9 || hash[1][0]=="x" && sec==9 || hash[1][2]=="x"  && sec==9 || hash[2][1]=="x" && sec==9)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==9)
				hash[2][1]="o";
				
		}

		// if starts in the 3 position
		if (first==3)
		{
			if (hash[1][0]=="x" && sec==1 || hash[2][0]=="x" && sec==1 || hash[1][2]=="x"  && sec==1 || hash[2][2]=="x" && sec==1)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==1)
				hash[1][0]="o";
			
			if (hash[1][0]=="x" && sec==2 || hash[2][0]=="x" && sec==2 || hash[1][2]=="x"  && sec==2 || hash[2][1]=="x" && sec==2)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==2)
				hash[1][2]="o";
			
			if (hash[0][0]=="x" && sec==4 || hash[2][0]=="x" && sec==4 || hash[1][2]=="x"  && sec==4 || hash[2][2]=="x" && sec==4)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==4)
				hash[2][0]="o";
			
			if (hash[0][1]=="x" && sec==6 || hash[1][0]=="x" && sec==6 || hash[2][0]=="x"  && sec==6 || hash[2][1]=="x" && sec==6)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==6)
				hash[0][1]="o";
			
			if (hash[0][0]=="x" && sec==7 || hash[1][0]=="x" && sec==7 || hash[1][2]=="x"  && sec==7 || hash[2][2]=="x" && sec==7)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==7)
				hash[2][2]="o";
			
			if (hash[0][0]=="x" && sec==8 || hash[0][1]=="x" && sec==8 || hash[2][0]=="x"  && sec==8 || hash[2][2]=="x" && sec==8)
				hash[1][0]="o";
			if (hash[1][0]=="x" && sec==8)
				hash[2][0]="o";
			
			if (hash[0][0]=="x" && sec==9 || hash[0][1]=="x" && sec==9 || hash[2][0]=="x"  && sec==9 || hash[2][1]=="x" && sec==9)
				hash[1][0]="o";
			if (hash[1][0]=="x" && sec==9)
				hash[2][1]="o";
			
		}

		// if starts in the 6 position
		if (first==6)
		{
			if (hash[0][2]=="x" && sec==1 || hash[1][0]=="x" && sec==1 || hash[2][0]=="x"  && sec==1 || hash[2][2]=="x" && sec==1)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==1)
				hash[2][0]="o";
				
			if (hash[0][0]=="x" && sec==2 || hash[1][0]=="x" && sec==2 || hash[2][1]=="x"  && sec==2 || hash[2][2]=="x" && sec==2)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==2)
				hash[2][2]="o";
				
			if (hash[0][1]=="x" && sec==3 || hash[1][0]=="x" && sec==3 || hash[2][1]=="x"  && sec==3 || hash[2][0]=="x" && sec==3)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==3)
				hash[0][1]="o";
				
			if (hash[0][1]=="x" && sec==4 || hash[0][0]=="x" && sec==4 || hash[2][1]=="x"  && sec==4 || hash[2][2]=="x" && sec==4)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==4)
				hash[0][0]="o";
				
			if (hash[1][0]=="x" && sec==7 || hash[0][0]=="x" && sec==7 || hash[0][2]=="x"  && sec==7 || hash[2][2]=="x" && sec==7)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==7)
				hash[0][0]="o";
				
			if (hash[0][2]=="x" && sec==8 || hash[0][1]=="x" && sec==8 || hash[2][0]=="x"  && sec==8 || hash[1][0]=="x" && sec==8)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==8)
				hash[0][2]="o";
				
			if (hash[0][0]=="x" && sec==9 || hash[0][1]=="x" && sec==9 || hash[2][1]=="x"  && sec==9 || hash[1][0]=="x" && sec==9)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==9)
				hash[2][1]="o";
			
		}
	
		// if starts in the 9 position
		if (first==9)
		{
			if (hash[0][2]=="x" && sec==1 || hash[1][2]=="x" && sec==1 || hash[1][0]=="x"  && sec==1 || hash[2][0]=="x" && sec==1)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==1)
				hash[2][0]="o";
			
			if (hash[1][0]=="x" && sec==2 || hash[0][0]=="x" && sec==2 || hash[1][2]=="x"  && sec==2 || hash[2][1]=="x" && sec==2)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==2)
				hash[2][1]="o";
			
			if (hash[0][0]=="x" && sec==3 || hash[0][1]=="x" && sec==3 || hash[2][0]=="x"  && sec==3 || hash[2][1]=="x" && sec==3)
				hash[1][0]="o";
			if (hash[1][0]=="x" && sec==3)
				hash[2][1]="o";
			
			if (hash[0][0]=="x" && sec==4 || hash[0][1]=="x" && sec==4 || hash[1][2]=="x"  && sec==4 || hash[2][1]=="x" && sec==4)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==4)
				hash[1][2]="o";
			
			if (hash[0][1]=="x" && sec==6 || hash[1][0]=="x" && sec==6 || hash[0][0]=="x"  && sec==6 || hash[2][1]=="x" && sec==6)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==6)
				hash[2][1]="o";
			
			if (hash[0][0]=="x" && sec==7 || hash[0][2]=="x" && sec==7 || hash[1][2]=="x"  && sec==7 || hash[1][0]=="x" && sec==7)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==7)
				hash[1][0]="o";
			
			if (hash[0][0]=="x" && sec==8 || hash[0][1]=="x" && sec==8 || hash[1][0]=="x"  && sec==8 || hash[1][2]=="x" && sec==8)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==8)
				hash[1][2]="o";
			
		}
	
		// if starts in the 8 position
		if (first==8)
		{
			if (hash[1][0]=="x" && sec==1 || hash[0][1]=="x" && sec==1 || hash[1][2]=="x"  && sec==1 || hash[2][2]=="x" && sec==1)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==1)
				hash[0][1]="o";
				
			if (hash[0][0]=="x" && sec==2 || hash[1][0]=="x" && sec==2 || hash[1][2]=="x"  && sec==2 || hash[2][2]=="x" && sec==2)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==2)
				hash[2][2]="o";
				
			if (hash[0][1]=="x" && sec==3 || hash[1][0]=="x" && sec==3 || hash[1][2]=="x"  && sec==3 || hash[2][0]=="x" && sec==3)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==3)
				hash[0][1]="o";
				
			if (hash[0][0]=="x" && sec==4 || hash[0][1]=="x" && sec==4 || hash[1][2]=="x"  && sec==4 || hash[2][2]=="x" && sec==4)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==4)
				hash[0][0]="o";
				
			if (hash[0][1]=="x" && sec==6 || hash[1][0]=="x" && sec==6 || hash[2][0]=="x"  && sec==6 || hash[0][2]=="x" && sec==6)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==6)
				hash[2][0]="o";
				
			if (hash[1][0]=="x" && sec==7 || hash[0][2]=="x" && sec==7 || hash[0][1]=="x"  && sec==7 || hash[1][2]=="x" && sec==7)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==7)
				hash[1][0]="o";
				
			if (hash[0][0]=="x" && sec==9 || hash[1][0]=="x" && sec==9 || hash[1][2]=="x"  && sec==9 || hash[0][1]=="x" && sec==9)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==9)
				hash[1][2]="o";
			
		}
	
		// if starts in the 7 position
		if (first==7)
		{
			if (hash[0][1]=="x" && sec==1 || hash[0][2]=="x" && sec==1 || hash[2][1]=="x"  && sec==1 || hash[2][2]=="x" && sec==1)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==1)
				hash[2][1]="o";
			
			if (hash[0][2]=="x" && sec==2 || hash[1][0]=="x" && sec==2 || hash[1][2]=="x"  && sec==2 || hash[2][1]=="x" && sec==2)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==2)
				hash[2][1]="o";
			
			if (hash[0][0]=="x" && sec==3 || hash[1][0]=="x" && sec==3 || hash[1][2]=="x"  && sec==3 || hash[2][2]=="x" && sec==3)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==3)
				hash[2][2]="o";
			
			if (hash[0][1]=="x" && sec==4 || hash[0][2]=="x" && sec==4 || hash[1][2]=="x"  && sec==4 || hash[2][1]=="x" && sec==4)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==4)
				hash[2][1]="o";
			
			if (hash[0][1]=="x" && sec==6 || hash[1][0]=="x" && sec==6 || hash[0][2]=="x"  && sec==6 || hash[2][1]=="x" && sec==6)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==6)
				hash[1][0]="o";
			
			if (hash[0][2]=="x" && sec==8 || hash[0][1]=="x" && sec==8 || hash[1][0]=="x"  && sec==8 || hash[1][2]=="x" && sec==8)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==8)
				hash[1][0]="o";
			
			if (hash[0][0]=="x" && sec==9 || hash[0][2]=="x" && sec==9 || hash[1][0]=="x"  && sec==9 || hash[1][2]=="x" && sec==9)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==9)
				hash[1][0]="o";
			
		}
		
		// if starts in the 4 position
		if (first==4)
		{
			if (hash[0][1]=="x" && sec==1 || hash[1][2]=="x" && sec==1 || hash[2][1]=="x"  && sec==1 || hash[2][2]=="x" && sec==1)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==1)
				hash[0][1]="o";
				
			if (hash[0][2]=="x" && sec==2 || hash[1][2]=="x" && sec==2 || hash[2][0]=="x"  && sec==2 || hash[2][1]=="x" && sec==2)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==2)
				hash[0][2]="o";
				
			if (hash[0][1]=="x" && sec==3 || hash[1][2]=="x" && sec==3 || hash[2][0]=="x"  && sec==3 || hash[2][1]=="x" && sec==3)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==3)
				hash[1][2]="o";
				
			if (hash[0][1]=="x" && sec==6 || hash[0][2]=="x" && sec==6 || hash[2][0]=="x"  && sec==6 || hash[2][1]=="x" && sec==6)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==6)
				hash[2][0]="o";
				
			if (hash[0][2]=="x" && sec==7 || hash[0][1]=="x" && sec==7 || hash[1][2]=="x"  && sec==7 || hash[2][1]=="x" && sec==7)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==7)
				hash[2][1]="o";
				
			if (hash[0][0]=="x" && sec==8 || hash[0][1]=="x" && sec==8 || hash[1][2]=="x"  && sec==8 || hash[2][2]=="x" && sec==8)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==8)
				hash[0][0]="o";
				
			if (hash[0][0]=="x" && sec==9 || hash[2][1]=="x" && sec==9 || hash[1][2]=="x"  && sec==9 || hash[0][1]=="x" && sec==9)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==9)
				hash[1][2]="o";
			
		}

		// if starts in the 1 position
		if (first==1)
		{
			if (hash[1][0]=="x" && sec==2 || hash[2][1]=="x" && sec==2 || hash[1][2]=="x"  && sec==2 || hash[2][2]=="x" && sec==2)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==2)
				hash[1][0]="o";
				
			if (hash[1][0]=="x" && sec==3 || hash[2][0]=="x" && sec==3 || hash[1][2]=="x"  && sec==3 || hash[2][2]=="x" && sec==3)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==3)
				hash[1][0]="o";
			
			if (hash[0][1]=="x" && sec==4 || hash[1][2]=="x" && sec==4 || hash[2][2]=="x"  && sec==4 || hash[2][1]=="x" && sec==4)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==4)
				hash[0][1]="o";
			
			if (hash[0][1]=="x" && sec==6 || hash[1][0]=="x" && sec==6 || hash[2][2]=="x"  && sec==6 || hash[2][1]=="x" && sec==6)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==6)
				hash[1][0]="o";
			
			if (hash[0][1]=="x" && sec==7 || hash[0][2]=="x" && sec==7 || hash[2][1]=="x"  && sec==7 || hash[2][2]=="x" && sec==7)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==7)
				hash[0][1]="o";
			
			if (hash[0][1]=="x" && sec==8 || hash[1][0]=="x" && sec==8 || hash[2][2]=="x"  && sec==8 || hash[1][2]=="x" && sec==8)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==8)
				hash[0][1]="o";
			
			if (hash[0][2]=="x" && sec==9 || hash[0][1]=="x" && sec==9 || hash[2][0]=="x"  && sec==9 || hash[2][1]=="x" && sec==9)
				hash[1][0]="o";
			if (hash[1][0]=="x" && sec==9)
				hash[2][0]="o";
		}	
	}
	
	// fourth move of bot, acording to fourth user's move
	if (nummove==4)
	{
		// if starts in the 5 position
		if (first==5)
		{
			// and the second was in the 7 position
			if (hash[0][1]=="x" && sec==7)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==7)
				hash[0][1]="o";
			if (hash[0][0]=="x" && sec==7)
				hash[2][1]="o";
			// if the second was in the 2 position
			// and the third was in the 1 position
			if (hash[1][0]=="x" && sec==2 && third==1 || hash[2][0]=="x" && sec==2 && third==1)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==2 && third==1)
				hash[2][0]="o";
			// and the third was in the 4 position
			if (hash[0][0]=="x" && sec==2 && third==4 || hash[2][0]=="x" && sec==2 && third==4)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==2 && third==4)
				hash[0][0]="o";
			// and the third was in the 7 position
			if (hash[0][0]=="x" && sec==2 && third==7 || hash[1][0]=="x" && sec==2 && third==7)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==2 && third==7)
				hash[1][0]="o";
			// and the third was in the 6 position
			if (hash[2][0]=="x" && sec==2 && third==6 || hash[2][2]=="x" && sec==2 && third==6)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==2 && third==6)
				hash[2][2]="o";
			// and the third was in the 9 position
			if (hash[1][0]=="x" && sec==2 && third==9 || hash[2][0]=="x" && sec==2 && third==9)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==2 && third==9)
				hash[1][0]="o";
			// if the second was in the 1 position
			// and the third was in the 6 position
			if (hash[2][0]=="x" && sec==1 || hash[2][1]=="x" && sec==1)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==1)
				hash[2][1]="o";
			// if the second was in the 4 position
			// and the third was in the 9 position
			if (hash[2][0]=="x" && sec==4 || hash[2][1]=="x" && sec==4)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==4)
				hash[2][1]="o";
			// if the second was in the 8 position
			// and the third was in the 1 position
			if (hash[2][0]=="x" && sec==8 || hash[1][0]=="x" && sec==8)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==8)
				hash[1][0]="o";
			// if the second was in the 9 position
			// and the third was in the 2 position
			if (hash[2][0]=="x" && sec==9 || hash[1][0]=="x" && sec==9)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==9)
				hash[1][0]="o";
			// if the second was in the 6 position
			// and the third was in the 1 position
			if (hash[2][0]=="x" && sec==6 && third==1 || hash[2][1]=="x" && sec==6 && third==1)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==6 && third==1)
				hash[2][1]="o";
			// and the third was in the 2 position
			if (hash[0][0]=="x" && sec==6 && third==2 || hash[2][0]=="x" && sec==6 && third==2)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==6 && third==2)
				hash[0][0]="o";
			// and the third was in the 7 position
			if (hash[2][1]=="x" && sec==6 && third==7 || hash[2][2]=="x" && sec==6 && third==7)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==6 && third==7)
				hash[2][1]="o";
			// and the third was in the 8 position
			if (hash[2][0]=="x" && sec==6 && third==8 || hash[2][2]=="x" && sec==6 && third==8)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==6 && third==8)
				hash[2][2]="o";
			// and the third was in the 9 position
			if (hash[2][0]=="x" && sec==6 && third==9 || hash[2][1]=="x" && sec==6 && third==9)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==6 && third==9)
				hash[2][1]="o";
		}
	
		// if starts in the 2 position
		if (first==2)
		{
			// and the second was in the 1 position
			if (hash[2][1]=="x" && sec==1 || hash[2][2]=="x" && sec==1)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==1)
				hash[2][1]="o";
			// and the second was in the 2 position
			if (hash[2][0]=="x" && sec==3 || hash[2][1]=="x" && sec==3)
				hash[1][0]="o";
			if (hash[1][0]=="x" && sec==3)
				hash[2][0]="o";
			// and the second was in the 4 position
			if (hash[2][1]=="x" && sec==4 || hash[1][2]=="x" && sec==4)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==4)
				hash[1][2]="o";
			// and the second was in the 6 position
			if (hash[1][0]=="x" && sec==6 || hash[2][1]=="x" && sec==6)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==6)
				hash[2][1]="o";
			// and the second was in the 7 position
			if (hash[1][0]=="x" && sec==7 || hash[1][2]=="x" && sec==7)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==7)
				hash[1][2]="o";
			// and the second was in the 8 position
			if (hash[0][0]=="x" && sec==8 || hash[1][0]=="x" && sec==8)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==8)
				hash[0][0]="o";
			// and the second was in the 9 position
			if (hash[1][0]=="x" && sec==9 || hash[1][2]=="x" && sec==9)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==9)
				hash[1][0]="o";
		}
	
		// if starts in the 3 position
		if (first==3)
		{
			// and the second was in the 1 position
			if (hash[2][2]=="x" && sec==1 || hash[2][0]=="x" && sec==1)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==1)
				hash[2][2]="o";
			// and the second was in the 2 position
			if (hash[2][1]=="x" && sec==2|| hash[2][0]=="x" && sec==2)
				hash[1][0]="o";
			if (hash[1][0]=="x" && sec==2)
				hash[2][1]="o";
			// and the second was in the 4 position
			if (hash[0][0]=="x" && sec==4|| hash[1][2]=="x" && sec==4)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==4)
				hash[1][2]="o";
			// and the second was in the 6 position
			if (hash[1][0]=="x" && sec==6|| hash[2][0]=="x" && sec==6)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==6)
				hash[1][0]="o";
			// and the second was in the 7 position
			if (hash[1][0]=="x" && sec==7|| hash[1][2]=="x" && sec==7)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==7)
				hash[1][0]="o";
			// and the second was in the 8 position
			if (hash[0][1]=="x" && sec==8|| hash[2][2]=="x" && sec==8)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==8)
				hash[0][1]="o";
			// and the second was in the 9 position
			if (hash[0][0]=="x" && sec==9|| hash[2][0]=="x" && sec==9)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==9)
				hash[0][0]="o";
			
		}
		
		// if starts in the 6 position
		if (first==6)
		{
			// and the second was in the 1 position
			if (hash[1][0]=="x" && sec==1 || hash[2][2]=="x" && sec==1)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==1)
				hash[2][2]="o";
			
			// and the second was in the 2 position
			if (hash[1][0]=="x" && sec==2 || hash[2][1]=="x" && sec==2)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==2)
				hash[1][0]="o";
			
			// and the second was in the 3 position
			if (hash[1][0]=="x" && sec==3 || hash[2][0]=="x" && sec==3)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==3)
				hash[1][0]="o";
			
			// and the second was in the 4 position
			if (hash[2][1]=="x" && sec==4 || hash[2][2]=="x" && sec==4)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==4)
				hash[2][2]="o";
			
			// and the second was in the 7 position
			if (hash[0][2]=="x" && sec==7 || hash[1][0]=="x" && sec==7)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==7)
				hash[0][2]="o";
			
			// and the second was in the 8 position
			if (hash[0][1]=="x" && sec==8 || hash[1][0]=="x" && sec==8)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==8)
				hash[1][0]="o";
			
			// and the second was in the 9 position
			if (hash[0][0]=="x" && sec==9 || hash[1][0]=="x" && sec==9)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==9)
				hash[1][0]="o";
		}
		
		// if starts in the 9 position
		if (first==9)
		{
			// and the second was in the 1 position
			if (hash[1][0]=="x" && sec==1 || hash[1][2]=="x" && sec==1)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==1)
				hash[1][2]="o";
			// and the second was in the 2 position
			if (hash[1][0]=="x" && sec==2|| hash[1][2]=="x" && sec==2)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==2)
				hash[1][0]="o";
			// and the second was in the 3 position
			if (hash[0][0]=="x" && sec==3|| hash[2][0]=="x" && sec==3)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==3)
				hash[0][0]="o";
			// and the second was in the 4 position
			if (hash[0][1]=="x" && sec==4|| hash[2][1]=="x" && sec==4)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==4)
				hash[0][1]="o";
			// and the second was in the 6 position
			if (hash[1][0]=="x" && sec==6|| hash[0][0]=="x" && sec==6)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==6)
				hash[0][0]="o";
			// and the second was in the 7 position
			if (hash[0][0]=="x" && sec==7|| hash[0][2]=="x" && sec==7)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==7)
				hash[0][2]="o";
			// and the second was in the 8 position
			if (hash[0][1]=="x" && sec==8|| hash[0][0]=="x" && sec==8)
				hash[1][0]="o";
			if (hash[1][0]=="x" && sec==8)
				hash[0][0]="o";
			
		}

		// if starts in the 8 position
		if (first==8)
		{
			// and the second was in the 1 position
			if (hash[1][0]=="x" && sec==1 || hash[1][2]=="x" && sec==1)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==1)
				hash[1][2]="o";
			// and the second was in the 2 position
			if (hash[1][0]=="x" && sec==2 || hash[1][2]=="x" && sec==2)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==2)
				hash[1][2]="o";
			// and the second was in the 3 position
			if (hash[1][0]=="x" && sec==3 || hash[1][2]=="x" && sec==3)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==3)
				hash[1][0]="o";
			// and the second was in the 4 position
			if (hash[0][1]=="x" && sec==4 || hash[1][2]=="x" && sec==4)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==4)
				hash[1][2]="o";
			// and the second was in the 6 position
			if (hash[1][0]=="x" && sec==6 || hash[0][1]=="x" && sec==6)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==6)
				hash[0][1]="o";
			// and the second was in the 7 position
			if (hash[0][1]=="x" && sec==7 || hash[0][2]=="x" && sec==7)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==7)
				hash[0][1]="o";
			// and the second was in the 8 position
			if (hash[0][0]=="x" && sec==9 || hash[0][1]=="x" && sec==9)
				hash[1][0]="o";
			if (hash[1][0]=="x" && sec==9)
				hash[0][1]="o";
			
		}
		
		// if starts in the 7 position
		if (first==7)
		{
			// and the second was in the 1 position
			if (hash[0][2]=="x" && sec==1 || hash[2][2]=="x" && sec==1)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==1)
				hash[0][2]="o";
			// and the second was in the 2 position
			if (hash[1][0]=="x" && sec==2|| hash[1][2]=="x" && sec==2)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==2)
				hash[1][2]="o";
			// and the second was in the 3 position
			if (hash[1][0]=="x" && sec==3|| hash[1][2]=="x" && sec==3)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==3)
				hash[1][0]="o";
			// and the second was in the 4 position
			if (hash[0][2]=="x" && sec==4|| hash[1][2]=="x" && sec==4)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==4)
				hash[1][2]="o";
			// and the second was in the 6 position
			if (hash[2][1]=="x" && sec==6|| hash[0][1]=="x" && sec==6)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==6)
				hash[0][1]="o";
			// and the second was in the 8 position
			if (hash[0][1]=="x" && sec==8|| hash[0][2]=="x" && sec==8)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==8)
				hash[0][1]="o";
			// and the second was in the 9 position
			if (hash[0][0]=="x" && sec==9|| hash[0][2]=="x" && sec==9)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==9)
				hash[0][2]="o";
			
		}
		// if starts in the 4 position
		if (first==4)
		{
			// and the second was in the 1 position
			if (hash[2][2]=="x" && sec==1 || hash[1][2]=="x" && sec==1)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==1)
				hash[1][2]="o";
			// and the second was in the 2 position
			if (hash[1][2]=="x" && sec==2 || hash[2][1]=="x" && sec==2)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==2)
				hash[2][1]="o";
			// and the second was in the 3 position
			if (hash[0][1]=="x" && sec==3 || hash[2][1]=="x" && sec==3)
				hash[2][0]="o";
			if (hash[2][0]=="x" && sec==3)
				hash[2][1]="o";
			// and the second was in the 6 position
			if (hash[2][1]=="x" && sec==6 || hash[0][1]=="x" && sec==6)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==6)
				hash[0][1]="o";
			// and the second was in the 7 position
			if (hash[1][2]=="x" && sec==7 || hash[0][2]=="x" && sec==7)
				hash[0][1]="o";
			if (hash[0][1]=="x" && sec==7)
				hash[1][2]="o";
			// and the second was in the 8 position
			if (hash[1][2]=="x" && sec==8 || hash[0][1]=="x" && sec==8)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==8)
				hash[1][2]="o";
			// and the second was in the 9 position
			if (hash[0][1]=="x" && sec==9 || hash[2][1]=="x" && sec==9)
				hash[0][0]="o";
			if (hash[0][0]=="x" && sec==9)
				hash[0][1]="o";
			
		}
	
		// if starts in the 1 position
		if (first==1)
		{
			// and the second was in the 2 position
			if (hash[2][1]=="x" && sec==2|| hash[2][2]=="x" && sec==2)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==2)
				hash[2][1]="o";
			// and the second was in the 3 position
			if (hash[2][2]=="x" && sec==3 || hash[2][0]=="x" && sec==3)
				hash[1][2]="o";
			if (hash[1][2]=="x" && sec==3)
				hash[2][2]="o";
			// and the second was in the 4 position
			if (hash[2][2]=="x" && sec==4|| hash[1][2]=="x" && sec==4)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==4)
				hash[1][2]="o";
			// and the second was in the 6 position
			if (hash[0][1]=="x" && sec==6|| hash[2][1]=="x" && sec==6)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==6)
				hash[2][1]="o";
			// and the second was in the 7 position
			if (hash[0][2]=="x" && sec==7|| hash[2][2]=="x" && sec==7)
				hash[2][1]="o";
			if (hash[2][1]=="x" && sec==7)
				hash[2][2]="o";
			// and the second was in the 8 position
			if (hash[1][0]=="x" && sec==8|| hash[1][2]=="x" && sec==8)
				hash[2][2]="o";
			if (hash[2][2]=="x" && sec==8)
				hash[1][2]="o";
			// and the second was in the 9 position
			if (hash[0][1]=="x" && sec==9|| hash[2][1]=="x" && sec==9)
				hash[0][2]="o";
			if (hash[0][2]=="x" && sec==9)
				hash[0][1]="o";
		}
	}

}

// looking if someone won the game
void result ()
{
	// all possibilities for the user to win (the bot won't allow it)
	if (hash[0][0] == "x" && hash[1][1] == "x" && hash[2][2] == "x" || hash[0][2] == "x" && hash[1][1] == "x" && hash[2][0] == "x" || hash[0][0] == "x" && hash[0][1] == "x" && hash[0][2] == "x" || hash[1][0] == "x" && hash[1][1] == "x" && hash[1][2] == "x" || hash[2][0] == "x" && hash[2][1] == "x" && hash[2][2] == "x" || hash[0][0] == "x" && hash[1][0] == "x" && hash[2][0] == "x" || hash[0][1] == "x" && hash[1][1] == "x" && hash[2][1] == "x" || hash[0][2] == "x" && hash[1][2] == "x" && hash[2][2] == "x")
	{
		printf ("\n Congratulations, you won!");
		printf ("\n\n\n     %s | %s | %s  \n   -------------\n     %s | %s | %s  \n   -------------\n     %s | %s | %s  \n\n\n", hash[0][0], hash[0][1], hash[0][2], hash[1][0], hash[1][1], hash[1][2], hash[2][0], hash[2][1], hash[2][2]);
		system ("color a");
		end();
		result();
	}
	// all possibilities for the bot to win
	if (hash[0][0] == "o" && hash[1][1] == "o" && hash[2][2] == "o" || hash[0][2] == "o" && hash[1][1] == "o" && hash[2][0] == "o" || hash[0][0] == "o" && hash[0][1] == "o" && hash[0][2] == "o" || hash[1][0] == "o" && hash[1][1] == "o" && hash[1][2] == "o" || hash[2][0] == "o" && hash[2][1] == "o" && hash[2][2] == "o" || hash[0][0] == "o" && hash[1][0] == "o" && hash[2][0] == "o" || hash[0][1] == "o" && hash[1][1] == "o" && hash[2][1] == "o" || hash[0][2] == "o" && hash[1][2] == "o" && hash[2][2] == "o")
	{
		printf ("\n What a shame!");
		printf ("\n\n\n     %s | %s | %s  \n   -------------\n     %s | %s | %s  \n   -------------\n     %s | %s | %s  \n\n\n", hash[0][0], hash[0][1], hash[0][2], hash[1][0], hash[1][1], hash[1][2], hash[2][0], hash[2][1], hash[2][2]);
		system ("color 4");
		end();
		result();
	}
	// in case of a tie
	if (hash[0][0]!=" " && hash[0][1]!=" " && hash[0][2]!=" " && hash[1][0]!=" " && hash[1][1]!=" " && hash[1][2]!=" " && hash[2][0]!=" " && hash[2][1]!=" " && hash[2][2]!=" ")
	{
		printf ("\n Tie! No winner.");
		printf ("\n\n\n     %s | %s | %s  \n   -------------\n     %s | %s | %s  \n   -------------\n     %s | %s | %s  \n\n\n", hash[0][0], hash[0][1], hash[0][2], hash[1][0], hash[1][1], hash[1][2], hash[2][0], hash[2][1], hash[2][2]);
		system ("color 6");
		end();
		result();
	}
}

// this function show the game, and ask for the user's move
void scoreboard ()
{
	printf (" The game is like this:");
	printf ("\n\n\n     %s | %s | %s  \n   -------------\n     %s | %s | %s  \n   -------------\n     %s | %s | %s  \n\n\n", hash[0][0], hash[0][1], hash[0][2], hash[1][0], hash[1][1], hash[1][2], hash[2][0], hash[2][1], hash[2][2]);
	printf (" Make your move: ");
	scanf ("%d", &move);
}

// this function make the move of user acording him input
void moveuser ()
{
	system("cls");
	switch (move)
	{
		case 1:
			if (hash[0][0]==" ")
			{
				hash[0][0]="x";
				nummove+=1;
				bot();
				result();
				printf ("\n The bot has also played!");
				scoreboard();
				moveuser();
			}
			else
			{
				printf ("\n The place is already taken!\n\n");
				scoreboard();
				moveuser();
			}
			break;
		case 2:
			if (hash[0][1]==" ")
			{
				hash[0][1]="x";
				nummove+=1;
				bot();
				result();
				printf ("\n The bot has also played!");
				scoreboard();
				moveuser();
			}
			else
			{
				printf ("\n The place is already taken!\n\n");
				scoreboard();
				moveuser();
			}
			break;
		case 3:
			if (hash[0][2]==" ")
			{
				hash[0][2]="x";
				nummove+=1;
				bot();
				result();
				printf ("\n The bot has also played!");
				scoreboard();
				moveuser();
			}
			else
			{
				printf ("\n The place is already taken!\n\n");
				scoreboard();
				moveuser();
			}
			break;
		case 4:
			if (hash[1][0]==" ")
			{
				hash[1][0]="x";
				nummove+=1;
				bot();
				result();
				printf ("\n The bot has also played!");
				scoreboard();
				moveuser();
			}
			else
			{
				printf ("\n The place is already taken!\n\n");
				scoreboard();
				moveuser();
			}
			break;
		case 5:
			if (hash[1][1]==" ")
			{
				hash[1][1]="x";
				nummove+=1;
				bot();
				result();
				printf ("\n The bot has also played!");
				scoreboard();
				moveuser();
			}
			else
			{
				printf ("\n The place is already taken!\n\n");
				scoreboard();
				moveuser();
			}
			break;
		case 6:
			if (hash[1][2]==" ")
			{
				hash[1][2]="x";
				nummove+=1;
				bot();
				result();
				printf ("\n The bot has also played!");
				scoreboard();
				moveuser();
			}
			else
			{
				printf ("\n The place is already taken!\n\n");
				scoreboard();
				moveuser();
			}
			break;
		case 7:
			if (hash[2][0]==" ")
			{
				hash[2][0]="x";
				nummove+=1;
				bot();
				result();
				printf ("\n The bot has also played!");
				scoreboard();
				moveuser();
			}
			else
			{
				printf ("\n The place is already taken!\n\n");
				scoreboard();
				moveuser();
			}
			break;
		case 8:
			if (hash[2][1]==" ")
			{
				hash[2][1]="x";
				nummove+=1;
				bot();
				result();
				printf ("\n The bot has also played!");
				scoreboard();
				moveuser();
			}
			else
			{
				printf ("\n The place is already taken!\n\n");
				scoreboard();
				moveuser();
			}
			break;
		case 9:
			if (hash[2][2]==" ")
			{
				hash[2][2]="x";
				nummove+=1;
				bot();
				result();
				printf ("\n The bot has also played!");
				scoreboard();
				moveuser();
			}
			else
			{
				printf ("\n The place is already taken!\n\n");
				scoreboard();
				moveuser();
			}
			break;
		default:
		{
			printf ("\n This position is invalid!\n");
			scoreboard();
			moveuser();
		}
		
	}	
}

// the main function, introduce the game and read the first move
void main ()
{
	system ("color 9");
	printf ("\n Welcome to Hash! The first move is yours :D. (You are the \"x\")\n\n   \n     1 | 2 | 3  \n   -------------\n     4 | 5 | 6  \n   -------------\n     7 | 8 | 9  \n\n\n To insert a move, enter the position number you wish to play as shown above. \n\n What position do you want to start playing in? ");
	scanf ("%d", &move);
	moveuser();
}
