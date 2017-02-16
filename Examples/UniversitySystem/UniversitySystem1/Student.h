

#include <string>

using namespace std;

class Student
{
private:
	int ID;
	float GPA;
public:
	string Name;
	bool Female;

	//	Faculty Advisor;


	Student(string stu_name, bool female_flag = true)
	{
		Name = stu_name;
		Female = female_flag;
	}

	Student() {}

	// accessors
	int getID()
	{
		return ID;
	}
	void setID(int theID)
	{
		ID = theID;
	}

	int getGPA()
	{
		return GPA;
	}

	void setGPA(float theGPA)
	{
		GPA = theGPA;
	}

	void Study() {}
	void DoHomework() {}
	bool Register(string name) { return true; }
	bool ChangeAdvisor(string name) { return true; }


};
