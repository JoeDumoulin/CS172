

#include "Student.h"
#include <string>
#include <iostream>


int main()
{
	Student S1, S2;
	Student S3;

	Student S4("Mary");
	Student S5("Pete", false);


	S1.Name = "Mike";
	S2.Name = "Jill";

	S1.setID(1);
	S2.setID(2);

	string s1 = "joe";
	S3.Name = s1;

	S1.Study();
	S2.ChangeAdvisor("joe");

	cout << "The name of student 1 is : " << S1.Name << endl;


	S1.Register("Mike");
	return 0;
}