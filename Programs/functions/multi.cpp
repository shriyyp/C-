#include<iostream>
using namespace std;
int getmultiplication(int x, int y, int z){
int result=x*y*z;
return result;
}
int main()
{
    int multians= getmultiplication (5,30,5);
    cout<<multians<<endl;
    return 0;
}