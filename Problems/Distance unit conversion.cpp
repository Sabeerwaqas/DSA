#include <iostream>
#include <string>

using namespace std;

	/*
		Question:
		
		The distance between two cities in KM is input through the keyboard.
		Write a program to convert and print this distance in meters, and miles
	*/

int main(){
	
	// Variable declaration
	
	string cityOne;
	string cityTwo;
	int distance;
	int meter;
	int miles;
	
	// Getting names of cities

	cout << "Input the name of the first city: " << endl;
	cin >> cityOne;
	
	cout << "Input the name of the second city: " << endl;
	cin >> cityTwo;
	
	// Getting distance
	
	cout << "Enter the distance between the two provided cities in KM: " << endl;
	cin >> distance;
	
	// To convert from KM to Meter;
	
	meter = distance * 1000;
		
	cout << "**** The distance between " << cityOne << " and " << cityTwo <<
	" from KM to meter is the below:" << endl;
	cout << meter << " m"  << endl;
	
	// To conversion from KM to miles
	
	miles = distance * 0.621371;
	
	cout << "**** The distance between " << cityOne << " and " << cityTwo <<
	" from KM to miles is the below: " << endl;
	cout << miles << " miles"  << endl;
	
	
	
	
	
	
	return 0;
}
