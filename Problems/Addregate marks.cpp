#include <iostream>
#include <string>

using namespace std;

	/*
	Question:
	
	If the marks obtained by a student in five different subjects is input through
	the keyboard. Write a program to find  out the aggregate marks and percentage 
	obtained by the student. Assume that the minimum marks that can be obtained by
	a student is 100.
	*/
	

int main(){
	
	// Subject 1
	
	string subOne;
	int subOneMarks;
	
	// Subject 2
	
	string subTwo;
	int subTwoMarks;
	
	// Subject 3
	
	string subThree;
	int subThreeMarks;
	
	// Subject 4
	
	string subFour;
	int subFourMarks;
	
	// Subject 5
	
	string subFive;
	int subFiveMarks;
	
	int totalMarks = 500;
	int marksObtained;
	int percentage;
	
	// Getting Subject 1 details:
	
	cout << "Enter the name and marks of the first subject: " << endl;
	cout << "Subject's name: ";
	cin >> subOne;
	
	cout << " " << endl;

	cout << "Subject's marks: ";
	cin >> subOneMarks;
	
	cout << " " << endl;
	
	// Getting Subject 2 details:
	
	cout << "Enter the name and marks of the second subject: " << endl;
	cout << "Subject's name: ";
	cin >> subTwo;
	
	cout << " " << endl;

	cout << "Subject's marks: ";
	cin >> subTwoMarks;
	
	cout << " " << endl;
	
	// Getting Subject 3 details:
	
	cout << "Enter the name and marks of the third subject: " << endl;
	cout << "Subject's name: ";
	cin >> subThree;
	
	cout << " " << endl;

	cout << "Subject's marks: ";
	cin >> subThreeMarks;
	
	cout << " " << endl;
	
	// Getting Subject 4 details:
	
	cout << "Enter the name and marks of the fourth subject: " << endl;
	cout << "Subject's name: ";
	cin >> subFour;
	
	cout << " " << endl;

	cout << "Subject's marks: ";
	cin >> subFourMarks;
	
	cout << " " << endl;
	
	// Getting Subject 5 details:
	
	cout << "Enter the name and marks of the fifth subject: " << endl;
	cout << "Subject's name: ";
	cin >> subFive;
	
	cout << " " << endl;

	cout << "Subject's marks: ";
	cin >> subFiveMarks;
	
	cout << " " << endl;
		
	marksObtained = subOneMarks + subTwoMarks + subThreeMarks + subFourMarks + subFiveMarks;
	
	cout << "Marks obtained: " << marksObtained << endl;
	
	// Percentage
	
	percentage = marksObtained * 100 / totalMarks;
	
	cout << "Total secured percentage is: " << percentage << " %" << endl;
	
	
	return 0;
}
