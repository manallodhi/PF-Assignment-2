/*A program that takes input of integers repeatedly until
user enters a zero digit then
it prints the number of positive and negative integers.
Output:
Enter a number: 13
Enter a number: -21
Enter a number: -51
Enter a number: -69
Enter a number: 22
Enter a number: -76
Enter a number: -9
Enter a number: 0
Positive numbers are: 4
Negative numbers are: 2 */

#include <iostream>
using namespace std;

int main(){
 int pos_num=0;
 int neg_num=0 ;
 int number ;

 cout << "Enter '0' to access counts of all the positive and negative number you input :" << endl;

 do
 {
  cout << "Enter Number : " ;
  cin >> number ;
  if(number>0){
    pos_num++;
  }
  if(number<0){
    neg_num++;
  }
  }while(number!=0);

  cout << "Total Positive numbers : " << pos_num << endl ;
  cout << "Total Negative numbers : " << neg_num << endl ;

  return 0;
}
