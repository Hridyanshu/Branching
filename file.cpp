#include<iostream>
using namespace std;
class Student
{
	public:
	void input()
	{
		string name;
		int roll_no;
		cout<<"Please enter the name and roll number of the student"<<endl;
		cin>>name>>roll_no;
	}
};
int main()
{
	Student obj1;
	obj1.input();
	return 0;
}

