#include <iostream>
using namespace std;
int main ()
{
   int arr[5]={1,0,0,0,1};
    for(int i=0;i<5;i++)
    {
        if(arr[i]==1)
        arr[i]=0;
        else 
            arr[i]=1;
        }
    for(int i=0;i<5;i++){
     
     cout<<arr[i]<<"  ";
    }
    return 0;
}