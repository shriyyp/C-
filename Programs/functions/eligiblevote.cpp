#include <iostream>
using namespace std;
void vote(int x){
    if (x<18){
       cout<<"not eligible ";
        }
        else {
            cout<<"You are eligible";
        }
      
    }   
int main()
{
 vote(20);

return 0;
}
