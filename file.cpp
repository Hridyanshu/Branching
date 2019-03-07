#include<iostream>
using namespace std;
class Student
{
<<<<<<< HEAD
	public:
	void input()
	{
		string name;
		int roll_no;
		cout<<"Please enter the name and roll number of the student"<<endl;
		cin>>name>>roll_no;
=======
	string name;
	int roll_no;
	void display()
	{
		cout<<name<<roll_no<<endl;
>>>>>>> b1b4e62... Added a member function to display the result
	}
};
int main()
{
	Student obj1;
	obj1.input();
	return 0;
}

