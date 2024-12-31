/*12. Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (.(n*n).
Sample Output: (Use While loop)
Input the value for the nth term: 5
1*1 = 1
2*2 = 4
3*3 = 9
4*4 = 16
The sum of the above series is: 30*/


#include <iostream>
using namespace std;

int main()
{
  int sum = 0 ;
  int square ;
  int i = 1;
  int n ;
  cout << "Enter the Nth term : " ;
  cin >> n ;
  while(i<=n)
  {
    square = i*i ;
    cout << i << " * " << i << " = " << square << endl;
    sum+=square;
    i++ ;
  }
  cout << "The sum of the above series is = " << sum ;
  return 0;
}
