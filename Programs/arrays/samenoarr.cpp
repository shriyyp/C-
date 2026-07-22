#include <iostream>
using namespace std;

void printarr(int arr[],int size)
{
    for ( int i=0;i<=size-1;i++)
    {
        arr[i]=-1;
        
    }
}
int main()

{  int size =4;
    int arr[size];
    printarr(arr,size);
     for ( int i=0;i<=size-1;i++)
     {
        cout<<arr[i]<<endl;
     }

    return 0;
    
}