#include <iostream>
using namespace std;
void multiple(int num)
{
    for(int i=1;i<=10;i=i+1)
    {
        cout<<num*i<<endl;
    }
}
int main()
{
    int m =5;
    multiple(m);
    
    return 0;
}