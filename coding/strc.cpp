#include <iostream>
using namespace std;
struct student
{
	int rollno;
	int marks;
	float avg;
	char grade;
};
int main()
{
	student s;
	cout<<"enter roll number=";
	cin>>s.rollno;
	cout<<"enter mark=";
	cin>>s.marks;
	cout<<"enter averag=";
	cin>>s.avg;
	cout<<"enter grade";
	cin>>s.grade;
	cout<<"rollnumber\n marks \n average \n grade \n"<<s.rollno<<endl<<s.marks<<endl<<s.avg<<endl<<s.grade<<endl;
}
