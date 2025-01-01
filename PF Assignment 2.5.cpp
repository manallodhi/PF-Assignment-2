/*Write a program in C++ to display the pattern using digits with left justified and the highest columns appears in first row in descending order. Go to the editor
Sample Output: (Note: Use Nested do-while loop)
 Input number of rows: 5
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/

#include <iostream>
using namespace std;

int main()
{
  int rows ;
  cout << "Enter the rows number : " ;
  cin >> rows ;
    // keep track of the rows start from what the user inputs for rows
    // and end with 1 always
    for(int i = rows ; i >= 1 ; i--){
        //keep track of the columns
        for(int j = i ; j >= 1 ; j--){
            cout << j << " " ;
        }
      cout << endl;
    }

return 0;
}
