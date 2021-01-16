// **************** BUGS/OPTIMIZATIONS *********************
//1) When user types in char as input during menu select, game goes into character selection 
//2) "Invalid input. Choose again." loop
//3) Menu to be it's own function
//4) Character selection to be it's own function
//5) Computer would select a same character as user
//6) Create header files for functions
//
//**************** In the future ***************************
// 1) Level Up System


#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
#include <conio.h>
using namespace std;



void fightHeader()
{
		Sleep(100);
		system("cls");
		cout	<< "****************************\n"
				<< "*     F   I  G  H  T       *\n"
				<< "****************************\n";
		Sleep(100);
		system("cls");
		cout	<< "****************************\n"
				<< "*      F I  G  H  T       *\n"
				<< "****************************\n";
		Sleep(100);
		system("cls");
		cout	<< "****************************\n"
				<< "*       F I G H  T         *\n"
				<< "****************************\n";
		Sleep(100);
		system("cls");
		cout	<< "****************************\n"
				<< "*        F I G H T         *\n"
				<< "****************************\n";
		Sleep(100);
		system("cls");
		cout	<< "****************************\n"
				<< "*          FIGHT!          *\n"
				<< "****************************\n";

}

void headerPlay()
{

	cout << "****************************\n"
		 << "*          Play            *\n"
		 << "****************************\n";

}

// Takes in user name, com name, opponent hp
void attack(string *a, string *b, int *x, int *y)
{
	string attacker(*a), opponent(*b);
	cout << attacker << "hits " << opponent << "!";



}

void moveset(string *x)
{
	string character(*x);

	//switch(character)



}

void playerBattleMenuInput(int *userHealth, int *comHealth, int *answer, 
						   string *user, string *com)
{
	// declare variables
	int  a(*userHealth), b(*comHealth), x(*answer), damage(0);
	string comName(*com), userName(*user);

	srand(time(NULL));

	// generate #1-6 to assign to num
	damage = rand() % 99;

	
		switch(x)
		{
		case 1:


			cout << "Opponent health = " << b << " and user health = " << a << "\n"
				 << "OMG!!! " << userName << " attacked " << comName <<"!~\n\n";
			b = b- damage;
			cout << userName << " dealt " << damage << " damage to " << comName << "!!\n"
				 << comName << " now has " << b << " health left! \n"; 

			break;
		case 2:
			cout << "skip";

			break;
		default:
			cout << "\nInvalid Input. Choose again. \n";
			cin.ignore();
			fflush(stdin);
			break;
		
		}

}

void battleScene(string *x, string *y)
{
	// declare variables
	int level(99), userHealth(99), comHealth(99), answer(0), damage(0);
	string user(*x), com(*y);

	// show fancy fight transition
	fightHeader();

		cout << "*			   	            \n"
		   	 << "*       !!!!!!!!!          \n"
			 << "*       !!Enemy!!          \n"
		   	 << "*       !!!!!!!!!          \n"
		   	 << "*__________________________\n"
			 << "* " << com << "            \n"
			 << "*     HP = " << comHealth << " / 99\n" // computer hp out of 99
			 << "*__________________________\n"
			 << "*		========            \n"
			 << "*		=VERSUS=            \n"
			 << "*		========            \n"
			 << "*			   	            \n"
		   	 << "*         !!!!!!!          \n"
			 << "*         !!YOU!!          \n"
		   	 << "*         !!!!!!!          \n"
			 << "*__________________________\n"
			 << "* " << user << "           \n"
			 << "*     HP = " << userHealth << " / 99\n" // userHealth out of 99
			 << "*__________________________\n"
			 << "*				            \n"
			 << "*				            \n"
			 << "***************************\n"
			 << "*	1) Attack               \n"
			 << "*                          \n"
			 << "*  2) Skip turn            \n"
			 << "*                          \n"
			 << "***************************\n";

		cin >> answer;

		playerBattleMenuInput(&userHealth, &comHealth, &answer, &user, &com);
}


void battleTransition()
{

		// Battle Scene
		system("cls");
		cout	<< "****************************\n"
				<< "*                    Prepar*\n"
				<< "****************************\n";	
		Sleep(100);
		system("cls");
		cout	<< "****************************\n"
				<< "*                 Preparing*\n"
				<< "****************************\n";
		Sleep(100);
		system("cls");
		cout	<< "****************************\n"
				<< "*              Preparing Bat\n"
				<< "****************************\n";
		Sleep(100);
		system("cls");
		cout	<< "****************************\n"
				<< "*          Preparing Battle*\n"
				<< "****************************\n";
		Sleep(100);
		system("cls");
		cout	<< "****************************\n"
				<< "*     Preparing Battle     *\n"
				<< "****************************\n";


}

void menuExit()
{
	 cout <<"****************************\n"
		  <<"*    See you next time!    *\n"
		  <<"****************************\n";
}

// Void function because I don't need to return shit fuck you all 
void menuAbout()
{
    cout << "****************************\n"
		<< "*           About          *\n"
		<< "****************************\n"
		<< "It's the year 3018 A.D. ....\n"
		<< "Wealthy savages have created a fight club\n"
		<< "where every living being that currently exists\n"
		<< "or existed have been summoned to battle each other\n"
		<< "in a turn based fighting tournament!\n"
		<< "\nChoose a fighter and see who comes out on top...\n"
		<< "....U N i V e R S a L  F i G H t  C L u B \n\n";

}

// Computer generates a random fighter
void generateComFighter(string *x, string *y)
{	
		string roster[6] = { "A Kodiak bear (Ursus arctos midendorffi)", "Charles Manson", "Mike Tyson", 
			"Pikachu", "VY Canis Majoris", "Anime"}, tempComFighter = *y;
		int num(0), i(0);
		bool match = true;

		// get current time
		srand(time(NULL));

		// generate #1-6 to assign to num
		num = rand() % 5;

		// A function to delete the element that the player has originally chosen
/*		while (match != true)
		{
			for (i; i < 5; i++)
			{
				if (tempComFighter == roster[i])
				{
					delete roster[i];
				}
			}
		
		
		
		}*/
		

		// assign random opponent to comFighter by reference
		// so currently, the computer generates a random character by using a random number between 1 and 6
		// and assigns it to string x
		*x = roster[num];
};

int main()
{
	bool gameOn = true;
	int answer(0), fighter(0);
	string playerFighter(""), comFighter("???"), psuedoInput("");
	char pause;

	while (gameOn != false)
	{
		system("cls");
		cout << "****************************\n"
			 << "*       TITLE SCREEN       *\n"
			 << "****************************\n"
			 << "-Main Menu-\n"
			 << "1) Play\n"
			 << "2) About\n"
			 << "3) Exit\n"
			 << "4) Debug\n"
			 << "\nEnter a choice\n";
		cin >> answer;

		switch(answer)
		{
// Player Select
		case 1:
			
			playerFighter = "";
			comFighter = "???";
			system("cls");

			// Character Selections
			cout	<< "****************************\n"
					<< "*    SELECT YOUR FIGHTER   *\n"
					<< "****************************\n"
					<< "Select your fighter\n"
					<< "1. A Kodiak bear (Ursus arctos midendorffi)\n"
					<< "2. Charles Manson\n"
					<< "3. Mike Tyson\n"
					<< "4. Pikachu\n"
					<< "5. VY Canis Majoris\n"
					<< "6. Anime\n\n";
			cin >> fighter;

			// Computer Selection/Transition to Battle Scene
			switch(fighter)
			{
			case 1:
				
		    // Clear console
			system("cls");

			// Assign user choice to variable playerFighters
			playerFighter = "A Kodiak bear (Ursus arctos midendorffi)";

			headerPlay();
			cout << "\nPlayer has chosen " << playerFighter << "!!\n\n";
			system("pause");

			system("cls");
			// Generate Computer Fighter
			generateComFighter(&comFighter, &playerFighter);
			headerPlay();
			cout << "\nComputer has chosen " << comFighter << "!!\n\n";
			system("pause");

			// Battle Scene
			battleTransition();
			battleScene(&playerFighter, &comFighter);

			// Victory Screen (Implement levling up system?) 



			break;






			case 2:
			system("cls");
			playerFighter = "Charles Manson";
			headerPlay();

			cout << "\n" << playerFighter << " versus " << comFighter << endl
				 << "\nPlayer has chosen " << playerFighter << endl;
			break;

			case 3:
			system("cls");
			playerFighter = "Mike Tyson";

			headerPlay();

			cout		<< "\n" << playerFighter << " versus " << comFighter << endl
					<< "\nPlayer has chosen " << playerFighter << endl;
				break;

			case 4:
			system("cls");
			playerFighter = "Pikachu";
			headerPlay();

			cout << "\n" << playerFighter << " versus " << comFighter << endl
			     << "\nPlayer has chosen " << playerFighter << endl;
			
			break;

			case 5:
			system("cls");
			playerFighter = "VY Canis Majoris";
			headerPlay();

			cout << "\n" << playerFighter << " versus " << comFighter << endl
			   	 << "\nPlayer has chosen " << playerFighter << endl;
			break;

			default:

			cout << "\nInvalid Input. Choose again. \n";
		 	break;
				
			}
			break;


// About the Game
		case 2:
			system("cls");
			menuAbout();
			break;


// Exit Game
		case 3:
			system("cls");
			menuExit();
			gameOn = false;
			break;
		case 4:
			system("cls");
			//battleScene();
			break;
// Error Handling
		default:
			cout << "\nInvalid Input. Choose again. \n";
			cin.ignore();
			fflush(stdin);
			break;
		
		}	
		system("pause"); 
	}	
	return 0;
}