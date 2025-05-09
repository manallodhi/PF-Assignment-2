
#include<iostream>
using namespace std;
void table(int [5]);
int main()
{
	int arr[5];
	cout<<"Enter 5 numbers: ";
	for(int i=0;i<5;i++)
	{
	    cin>>arr[i];
	}
	table(arr);
	return 0;
}

void table(int arr[5])
{
	for(int i=0;i<5;i++)
    {
    	cout<<"Table of "<<arr[i]<<":\n";
		for(int j=1;j<=10;j++)
		{
		    cout<<arr[i]<<" * "<<j<<" = "<<arr[i]*j<<endl;
		}
		cout<<endl;
		}
}
