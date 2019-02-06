// ClassAverage.cpp
// Solving the class average problem using sentinel controlled repetition
#include <iostream>
using namespace std;

int main()
{
	
		double total = 0; // initialize sum of grades
		double gradeCounter = 0; // initialize # of grades entered so far
		double grade;

		cout<<"Enter grade or -1 to quit: "<<endl;
		cin>>grade;

		// loop until sentinel value read from user
		while (grade != -1)
		{
			total = total + grade; // add grade to total
			gradeCounter = gradeCounter + 1; // increment counter 


			cout<<"Enter grade or -1 to quit: "<<endl;
			cin>>grade;
		}

		// if user entered at least one grade...
		if (gradeCounter != 0)
		{
			// use number with decimal point to calculate average of grades
			double average = (double)total / gradeCounter;

			// display total and average (with two digits of precision)
			cout<<"Total of the grades entered is "<<total<<endl;
			cout<<"Class average is "<<average<<endl;
		}
		else // no grades were entered, so output appropriate message
			cout<<"No grades were entered"<<endl;
		system("pause");
} // end class 
