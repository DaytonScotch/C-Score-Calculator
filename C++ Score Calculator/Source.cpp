#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)

{
	//Variables declared for the exam scores, sum, and average
	const int number_scores = 5;

	float CS2250_score,
		CS2255_score,
		CS4448_score,
		STAT2210_score,
		MTH2215_score,
		sum,
		average;


	cout << "This program will give the average\n";
	cout << "of five final exam scores." << endl;

	//Get the five exam scores from the user
	cout << "\nEnter the final exam score for CS2250:     ";
	cin >> CS2250_score;

	cout << "Enter the final exam score for CS2255:     ";
	cin >> CS2255_score;

	cout << "Enter the final exam score for CS4448:     ";
	cin >> CS4448_score;

	cout << "Enter the final exam score for STAT2210:     ";
	cin >> STAT2210_score;

	cout << "Enter the final exam score for MTH2215:     ";
	cin >> MTH2215_score;


	//Calculate the average of the five scores
	sum = CS2250_score + CS2255_score + CS4448_score + STAT2210_score + MTH2215_score;
	average = sum / number_scores;

	//Present the average to the user
	cout << setprecision(2) << fixed;
	cout << "\nThe average of the five final exam scores is ";
	cout << average << endl;

	//terminate program
	return 0;
}