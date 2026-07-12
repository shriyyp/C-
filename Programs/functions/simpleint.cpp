#include <iostream>
using namespace std;
int simpleint(int p,int q,int t){
   
    int SR=p*q*t/100;
    return SR;
}
    

int main()
{ 
    int result =  simpleint(100,29,5);
    cout<<result<<endl;

return 0;
}