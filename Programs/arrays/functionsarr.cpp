#include <iostream>
using namespace std;
void printarr(int arr[],int size )
{
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<endl;
    }
}
int main ()
{
    int arr[]={10,20,30,40};
    int size =4;
    printarr(arr,size);
    
    return 0;
}