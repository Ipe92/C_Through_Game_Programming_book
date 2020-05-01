// Referencing
// Demonstrates using references

#include <iostream>

using namespace std;

int main()
{
	int myScore = 1000;
	int& mikesScore = myScore;

	cout << "myScore is: " << myScore << "\n";
	cout << "mikesScore is: " << mikesScore << "\n\n";

	cout << "Adding 500 to myScore\n";
	myScore += 500;
	cout << "myScore is: " << myScore << "\n";

	cout << "mikeScore is: " << mikesScore << "\n\n";

	cout << "Adding 500 to mikesScore\n";
	mikesScore += 500;
	cout << "myScore is: " << myScore << endl;
	cout << "mikesScore is: " << mikesScore << endl;
	return 0;
}