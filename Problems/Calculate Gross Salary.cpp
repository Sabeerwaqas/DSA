#include <iostream>

using namespace std;

int main() {
	
	/*
	
		Question:
		
		A person basic salary is input through the keyboard. His dearness allowance is 40% of basic salary,
		and house rent allownace is 20% of basic salary. Write a program to calculate his gross salary.
	
	*/
	
    // Declare variables used in the program
    
    int basicSalary;
    float dearnessAllow;
	float rentAllow;

    // Taking user input
    
    cout << "Provide the basic salary of a user:" << endl;
    cin >> basicSalary;

    // Taking dearness allowance and house rent allowance as percentages
    
    cout << "Enter the percentage of dearness allowance:" << endl;
    cin >> dearnessAllow;

    cout << "Enter the percentage of rental allowance:" << endl;
    cin >> rentAllow;

    // Calculate dearness allowance and house rent allowance
    
    dearnessAllow = dearnessAllow / 100;
    rentAllow = rentAllow / 100;

    // Calculate total salary
    
    float totalSalary = basicSalary + (dearnessAllow * basicSalary) + (rentAllow * basicSalary);

    // Output
    
    cout << "***** Output *****" << endl;
    cout << "-----> " << "Basic Salary: " << basicSalary << endl;
    cout << "-----> " << "Dearness allowance: " << dearnessAllow * 100 << " percent" << endl;
    cout << "-----> " << "Rental allowance: " << rentAllow * 100 << " percent" << endl;
    cout << "-----> " << "The total salary will be: " << totalSalary << endl;

    return 0;
}

