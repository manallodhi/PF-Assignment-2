/*Write a program using both continue and break statement using any loop.
 This program starts the counter from 2 to 25 and skip the values of 13, 16,
 and 19. This program must be terminated when counter reaches 23*/

 #include <iostream>
 using namespace std;

 int main()
 {
   for(int i = 2 ; i <= 25 ; i++){
    if(i==13 || i==16 || i==19){
        continue;
    }
    else if(i==23){
        break;
    }else{
        cout << i << endl;
    }
   }
   return 0;
 }
