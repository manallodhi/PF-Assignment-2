/*A program that takes the input of two numbers from user as a starting and ending then prints all even numbers between them and show the product of all odd numbers. (Use for loop)
Output:
Enter starting number: 7
Enter ending number: 25
Even numbers between 7 and 15 are
8, 10, 12, 14, 16, 18, 20, 22, 24
7*9*11*13*….*/

#include <iostream>
using namespace std;

int main() {
    int start, end ;
    int product =1;

    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    cout << "Even numbers between " << start << " and " << end << " are: ";
    for (int i = start ; i <=end ; i++) {
      if (i % 2 == 0)
      {
        cout << i << " , " ;
      }
    }
    cout << endl;
    cout << "Product of odd numbers between " << start << " and " << end << " is: ";
    for (int i =start; i<=end; i++) {
     if (i % 2 != 0)
      {
        product *= i;
      }
    }
    cout << product << endl;
    return 0;
}

