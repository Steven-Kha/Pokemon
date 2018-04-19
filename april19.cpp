//add throwing pokeball
// have a counter of limited pokeballs
// allow Pokemon ball caught when hp is down by 25%

#include <iostream>
#include <Windows.h>
#include <MMSystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using std::cout;
using std::cin;
using std::string;



void buffer(int charhp, int mewhp);
void atk(char move, int charhp, int mewhp);
void atk2(int charhp, int mewhp);
int main(){
	// Main Street Colosseum - Pokémon Batt.wav
	//PlaySound("C:\\Public\\Public Documents\\Hwk4\\Main Street Colosseum - Pokémon Batt.wav", NULL, SND_ASYNC);
	cout << "A wild Charmander appears!" <<
		"\nGo Mew!\n\n";
	int charhp = 16;
	int mewhp = 10;
	
	buffer(charhp, mewhp);
	/*cout << "A while Charmander appears!" <<
		"\n Go Mew!\n" << "Charmander: 10 HP\n" <<
		"Squirtle: 10 HP \n\n" << "Choose attack letter:\n" <<
		"A: Fire Punch: 2 power\n" << "B: Water Gun: 2 power\n" <<
		"C: Bullet seed: 2 power\n";
	char move;
	cin >> move;
	atk(move);*/

	/*int ar[3] = { 0, 1, 2};

	for (int i = 0; i < 3; i++)
	{
		cout << ar[i] << " ";
	}*/

	system("pause");
	return 0;
}
void buffer(int charhp, int mewhp){
	if (charhp <= 0){
		cout << "----------------------------------------\n" << 
			"Wild Charmander fainted!\n" <<
		"Mew gained 626 exp points!\n" <<
		"----------------------------------------\n"; 
		system("pause");
		exit(1);
	}

	if (mewhp <= 0){
		cout << "----------------------------------------\n"
		<< "Mew fainted!\n" <<
		"You blacked out!\n" <<
		"----------------------------------------\n"; 
		system("pause");
		system ("cls");
		main();
	}
	
	cout << "----------------------------------------\n";
	cout << "Charmander [HP: " << charhp << "]: \n";
	for (double i = 1; i < charhp+1; i=i+1.6){
		cout << "[ ]";} //display HP with boxes 
	cout << "\n\n" << "Mew [HP: " << mewhp << "]: \n";
	for (int i = 1; i < mewhp+1; i++){
		cout << "[ ]";}
	cout << "\n\n"; 
	
	cout << "Choose attack letter:\n" <<
		"A: Fire Punch: 2 power\n" << "B: Water Gun: 2 power\n" <<
		"C: Tackle: 2 power\n" <<
		 "----------------------------------------\n\n";
	char move;
	cout << "Enter a capital letter for the moves above: ";
	cin >> move;
	system("cls");
	atk(move, charhp, mewhp);

}
void atk(char move, int charhp, int mewhp){
	if (move == 'A' || move == 'a'){
		cout << "----------------------------------------\n" 
			<< "Mew used fire punch!\n";
	
		charhp = charhp - 1;
		/*int a, b;
		a = charhp;
		b = charhp - 2; */ //used to change charmander hp with for loop and not reset
						// it back to 10 everytime

		/*for (a; a > b; a--) */ //this will make charmander hp decrease
		/*{
			charhp--;
		} 
		charhp++; */ //but the for loop take away too much so we need to add one more back
		// it is possible to just decrease without for loop?
		// charhp = charhp - 1;

		cout << "\n----------------------------------------" 
			<< "\n\n";

		system("pause");
		
		cout << "----------------------------------------\n";
		cout << "Charmander HP: " << charhp << ": \n";
		for (double i = 1; i < charhp+1; i=i+1.6){
			cout << "[ ]";}
		cout << "\n\n" << "Mew HP: " << mewhp << ": \n";
		for (int i = 1; i < mewhp+1; i++){
			cout << "[ ]";}
		cout << "\n\n----------------------------------------" 
			<< "\n\n";

		system("pause");

		cout << "\nIt's not very effective...\n\n";

		cout << "----------------------------------------" 
			<< "\n\n";

		system("pause");

		system("cls");

		if (charhp > 0 )
		{
			atk2(charhp, mewhp);
		}

		else
		buffer(charhp, mewhp);
		
	}

	else if 
		(move == 'B'|| move == 'b'){
		cout << "----------------------------------------\n" 
		<< "Mew used water gun!\n";
		
		charhp = charhp - 4;

		/*int a, b, c;
		a = charhp;
		b = charhp - 5;

		for (a; a > b; a--)
		{
			charhp--;
		}

		charhp++;*/

		cout << "\n----------------------------------------\n\n";

		system("pause");

		cout << "----------------------------------------\n";
		cout << "Charmander HP: " << charhp << ": \n";
		for (double i = 1; i < charhp+1; i=i+1.6){
			cout << "[ ]";}
		cout << "\n\n" << "Mew HP: " << mewhp << ": \n";
		for (int i = 1; i < mewhp+1; i++){
			cout << "[ ]";}
		cout << "\n\n----------------------------------------\n\n";

		system("pause");

		cout << "\nIt's super effective!\n\n";

		cout << "----------------------------------------\n\n"; 

		system("pause");

		system("cls");

		if (charhp > 0 )
		{
			atk2(charhp, mewhp);
		}

		if (charhp <= 0)
		buffer(charhp, mewhp);

	}
	else if
		(move == 'C' || move == 'c'){
		cout << "----------------------------------------\n" 
		<< "Mew used tackle!\n";
		
		charhp = charhp - 2;

		/*int a, b, c;
		a = charhp;
		b = charhp - 3;

		for (a; a > b; a--)
		{			
			charhp--;
		}

		charhp++;*/

		cout << "\n----------------------------------------\n\n";

		system("pause");

		cout << "Charmander HP: " << charhp << ": \n";
		for (double i = 1; i < charhp+1; i=i+1.6){
			cout << "[ ]";}
		cout << "\n\n" << "Mew HP: " << mewhp << ": \n";
		for (int i = 1; i < mewhp+1; i++){
			cout << "[ ]";}
		cout << "\n\n----------------------------------------\n\n";

		system("pause");


		if (charhp > 0 )
		{
			atk2(charhp, mewhp);
		}

		else
		buffer(charhp, mewhp);
	}
}

void atk2(int charhp, int mewhp){
	int random = 0; 
	srand (time(NULL)); //intialize random generator

	random = rand() % 10 + 1; //make random number between 1 and 10

	cout << random << "\n";

	if (random < 6){
		cout << "----------------------------------------\n" 
			<< "Charmander used scratch!\n";

		mewhp = mewhp - 2;
		
		cout << "\n----------------------------------------" 
			<< "\n\n";

		system("pause");
		
		cout << "----------------------------------------\n";
		cout << "Charmander HP: " << charhp << ": \n";
		for (double i = 1; i < charhp+1; i=i+1.6){
			cout << "[ ]";}
		cout << "\n\n" << "Mew HP: " << mewhp << ": \n";
		for (int i = 1; i < mewhp+1; i++){
			cout << "[ ]";}

		cout << "\n\n----------------------------------------" 
			<< "\n\n";

		system("pause");

		system("cls");

		buffer(charhp, mewhp);	
	}

	else if (random >= 6){ // if you don't put <= this program closes at 6
		cout << "----------------------------------------\n" 
			<< "Charmander used fissure!\nA one hit KO move!\n\n";
		system ("pause");

		cout << "\n... But it missed!\n";
		
		cout << "\n----------------------------------------" 
			<< "\n\n";

		system("pause");

		system("cls");

		buffer(charhp, mewhp);	


	}

}