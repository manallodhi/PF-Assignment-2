/*Write a program in C++ to make such a pattern like right angle triangle using number which will repeat the number for that row. Go to the editor
Sample Output: (Hint: Use Nested while-loop)
  Input number of rows: 5
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;

int main(){
 int rows ;
 cout << "Enter Rows number : " ;
 cin >> rows ;
 for(int i = 1 ; i <= rows ; i++){
    for(int j = 1 ; j <= i ; j++){
        cout << i ;
    }
   cout << endl ;
 }
 return 0 ;
}
