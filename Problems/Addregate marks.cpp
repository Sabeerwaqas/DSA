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
	
	// Function declaration for getting marks
	
		// Subject 1
	
		void subOneFunc(string subOne, int subOneMarks){
			
		cout << "Subject=> " << subOne << " " << "Marks=> " << subOneMarks << endl; 
		
			}
	
		// Subject 2
	
		void subTwoFunc(string subTwo, int subTwoMarks){
			
		cout << "Subject=> " << subTwo << " " << "Marks=> " << subTwoMarks << endl; 
			
			}
	
		// Subject 3
	
		void subThreeFunc(string subThree, int subThreeMarks){
			
		cout << "Subject=> " << subThree << " " << "Marks=> " << subThreeMarks << endl; 
			
		}
	
		// Subject 4
	
		void subFourFunc(string subFour, int subFourMarks){
			
		cout << "Subject=> " << subFour << " " << "Marks=> " << subFourMarks << endl; 
			
		}
	
		// Subject 5
	
		void subFiveFunc(string subFive, int subFiveMarks){
			
		cout << "Subject=> " << subFive << " " << "Marks=> " << subFiveMarks << endl; 
			
		}




int main(){
	
	string subOne = "Data Communication";
	int subOneMarks = 75;
	
	string subTwo = "Statistics";
	int subTwoMarks = 70;
	
	string subThree = "Algorithms";
	int subThreeMarks = 80;
	
	string subFour = "DSA";
	int subFourMarks = 70;
	
	string subFive = "Programming";
	int subFiveMarks = 70;
	
	int totalMarks;
	int percentage;
	
	cout << "Enter the name and marks of the first subject: " << endl;
	subOneFunc(subOne, subOneMarks);
	cout << " " << endl;
	cout << "Enter the name and marks of the second subject: " << endl;
	subTwoFunc(subTwo, subTwoMarks);
	cout << " " << endl;
	cout << "Enter the name and marks of the third subject: " << endl;
	subThreeFunc(subThree, subThreeMarks);
	cout << " " << endl;
	cout << "Enter the name and marks of the fourth subject: " << endl;
	subFourFunc(subFour, subFourMarks);
	cout << " " << endl;
	cout << "Enter the name and marks of the fiftht subject: " << endl;
	subFiveFunc(subFive, subFiveMarks);
	
	totalMarks = subOne + subTwo + subThree + subFour + subFive;
	cout << "Total marks: " << totalMarks << endl;
	cout << "Percentage: " << toatalMarks * 100 / 500 << endl;
	
	return 0;
}
