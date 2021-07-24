/*
Alexus Dooley
CSC215
07/23/21
Create a Professor list using arrays and have the user guess a number 1-10 and see if the guess matches a number chosen by a random number generator*/


//establish necessary libriaries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


//claim standard namespace
using namespace std;



//establish variable type being used, in this case it is integers
int main(){

	//declare the user input variable
	int guess;

	//set maximum for how many items can be in the array
	const int maxMarvelHeroes = 10;
	string marvelHeroes[maxMarvelHeroes];

	//set the start number of how many items are initially in the array
	int numHeroes = 0;

	//set initial number for tries/guesses/attempts
	int tries = 0;

	//label the different items in the array
	marvelHeroes[numHeroes++] = " 1) Iron Man";
	marvelHeroes[numHeroes++] = " 2) Hulk";
	marvelHeroes[numHeroes++] = " 3) Hawkeye";
	marvelHeroes[numHeroes++] = " 4) Black Widow";
	marvelHeroes[numHeroes++] = " 5) Thor";
	marvelHeroes[numHeroes++] = " 6) Spider-man";
	marvelHeroes[numHeroes++] = " 7) Black Panther";
	marvelHeroes[numHeroes++] = " 8) Doctor Strange";
	marvelHeroes[numHeroes++] = " 9) Captain America";
	marvelHeroes[numHeroes++] = " 10) Ant-Man";

	//tell the user of the possible answers
	cout << "Welcome to my guessing software \n";
	cout << "My software will generate a random number that corresponds with a Marvel Superhero\n";
	cout << "I would like for you to try and guess the number and hero that my software has chosen in the least amount of tries possible\n";
	cout << "Below is a list of the possible Marvel Superheroes that my software can choose from and the numbers they correspond with: \n";

	//create a for loop so that everything can be displayed in order
	for (int i = 0; i < numHeroes; ++i)
	{
		cout << marvelHeroes[i] << endl;
	}
	

	//seed random number generator
	srand(time(NULL));

	//declare variable start number
	int someNum = 0; someNum = numHeroes;

	//establish a range for possible numbers guessed between 1 and 10 
	someNum = rand() % 10 + 1;


	//Do-while loop  for tries and guesses of the user
	do
	{
		//try increments
		++tries;
		cout << "---------------------------------------------------------------------------------------------------------------\n";
		cout << " Attempt Number: " << tries << "\n";
		cout << "Enter your guess:  \n";
		cin >> guess;

		//set parameters for if the guess is less than the random number generated
		if (guess < someNum)
		{
			cout << "Ooof sorry, the number you guessed is lower than the number guessed by my software \n";
			cout << " Please try again\n";
		}

		//set parameters for if the guess is more than the random number generated
		else if (guess > someNum)
		{
			cout << "Whoa-nilly, that guess is higher than the number guessed by my software \n";
			cout << "Please try again\n";
		}

		//set correct guess parameters
		else if (guess == someNum)
		{
			cout << " Congratulations!! You guessed correctly! You have won a brand new\n";
			cout << " ......\n";
			cout << " Pencil !!!!!\n";
			cout << " Thanks for Playing!\n";
			cout << "......Okay Bye.\n";
			cout << " Are you STILL here you weirdo??\n";
			cout << "Go on get out of here! Skidaddle! \n";
			cout << "See ya doll face ;* ";
		}
	}

	//set the loop condition
	while (guess != someNum);


	return 0;
}