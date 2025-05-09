
#include<iostream>
using namespace std;
struct Student{
	int id;
	char name[50];
	float gpa,percent;
	int marks[5];
};
int marksSum(void);

int main()
{
	cout<<"Total Marks: "<<marksSum();
	return 0;
}

int marksSum(void)
{
	Student s;
	cout<<"Enter Student ID: ";
	cin>>s.id;
	cout<<"Enter Student Name: ";
	cin>>s.name;
	cout<<"Enter Student GPA: ";
	cin>>s.gpa;
	cout<<"Enter Student Percentage: ";
	cin>>s.percent;
	cout<<"Enter 5 Marks: ";
	for(int i=0;i<5;i++)
	{
	cin>>s.marks[i];
	}
	int total=0;
	for(int i=0;i<5;i++)
	{
	total+=s.marks[i];
	}
	return total;
}
