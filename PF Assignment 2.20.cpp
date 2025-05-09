#include<iostream>
#include<math.h>
using namespace std;
void Sumofsquare(double a, double b, double c);
double Sum(double a, double b, double c);
double Squareroot(double num);

int main()
{
    double a, b, c;
    cout<<"Enter three values a, b, c: ";
    cin>>a>>b>>c;
    Sumofsquare(a, b, c);
    return 0;
}

void Sumofsquare(double a, double b, double c)
{
    cout<<"Square root of "<< a << " = " <<Squareroot(a)<< endl;
    cout<<"Square root of "<< b << " = " <<Squareroot(b)<< endl;
    cout<<"Square root of "<< c << " = " <<Squareroot(c)<< endl;
    cout<<"Sum of square roots = "<<Sum(Squareroot(a), Squareroot(b), Squareroot(c))<< endl;
}

double Squareroot(double num)
{
    return sqrt(num);
}

double Sum(double a, double b, double c)
{
    double sum=a+b+c;
    return sum;
}


