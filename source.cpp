// Name: Andrew Pinkerton
// Program Description: OOP Practice
// Date: Oct 18, 2023

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student {

public: 

	// lets make a constructor. It will give an initial value to our variables. this is not required,
	// but it is good practice
	student()
	{
		fName = "";
		lName = "";
		major = "";
		gpa = 0;
		// it will place the variables in a "safe state"
	}

	// this is accessible outside of the class
	// typically, this is where you will put your functions

	// I will create get and set functions to gain access to the variable below
	// set will set a value into our variable
	// get will return a value to main or wherever you want

	void setFirstName(string text) // DOESNT MATTER FOR VECTOR, ARRAY, OR NORMAL VARIABLE
	{
		fName = text;
	}
	void setLastName(string text)
	{
		lName = text;
	}
	void setMajor(string text)
	{
		major = text;
	}
	void setGPA(double number)
	{
		gpa = number;
	}
	
	// get functions

	string getFirstName()
	{
		return fName;
	}
	string getLastName()
	{
		return lName;
	}
	string getMajor()
	{
		return major;
	}
	double getGPA()
	{
		return gpa;
	}
	
private: 
	// this is only acccessible inside of the class
	// typically, you will put your variables in this section
	string fName, lName, major;
	double gpa;


};


int main()
{
	// create instance of my class
	vector<student> atu;

	// I want to read in 3 sets of values and store them into my variables

	string sTemp;
	double dTemp;

	for (int a = 0; a < 3; a++)
	{
		student info;



		cout << "Enter First Name: ";
		cin >> sTemp;
		info.setFirstName(sTemp);

		cout << "Enter your last name: ";
		cin >> sTemp;
		info.setLastName(sTemp);

		cin.ignore();

		cout << "Enter your major: ";
		getline(cin, sTemp);
		info.setMajor(sTemp);

		cout << "Enter your GPA: ";
		cin >> dTemp;
		info.setGPA(dTemp);

		atu.push_back(info);

	}

	cout << endl;

	for (int a = 0; a < 3; a++)
	{
		cout << "Name: " << atu[a].getFirstName() << " " << atu[a].getLastName() << endl;
		cout << "Major: " << atu[a].getMajor() << endl;
		cout << "GPA: " << atu[a].getGPA() << endl << endl;

	}



}