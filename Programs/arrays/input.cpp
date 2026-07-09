#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    for(int i=0;i<=5;i++)
    {
      cout<<"Enter value of arr["<<i<<" ]"<<endl;
      cin>>arr[i];
      cout<<endl;

    }
     for(int i=0;i<=5;i++)
     {
      cout<<arr[i]<<" ";
     }


      return 0;
}