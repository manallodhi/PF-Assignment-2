
#include<iostream>
using namespace std;
struct Student{
	int id;
	char name[50];
	float gpa;
	int marks[7];
};
Student S1={100,"Mariam",3.5,{85,90,88,92,76,89,91}};
void print(Student);

int main()
{
	Student S2={101,"Omaima",3.8,{89,82,89,95,80,88,85}};
	print(S2);
	return 0;
}

void print(Student s2)
{
	cout<<"Student 1:"<<endl;
	cout<<"ID: "<<S1.id<<endl;
	cout<<"Name: "<<S1.name<<endl;
	cout<<"GPA: "<<S1.gpa<<endl;
	cout<<"Marks: ";
	for(int i=0;i<7;i++)
	{
		cout<<S1.marks[i]<<" ";
	}
	cout<<endl;
	cout<<"\nStudent 2:"<<endl;
	cout<<"ID: "<<s2.id<<endl;
	cout<<"Name: "<<s2.name<<endl;
	cout<<"GPA: "<<s2.gpa<<endl;
	cout<<"Marks: ";
	for(int i=0;i<7;i++)
	{
	    cout<<s2.marks[i]<<" ";
	}
	cout<<endl;
}
