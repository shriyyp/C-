#include <iostream>
using namespace std;
int getlength(char arr[]){
    int count=0;
    int index=0;
    while( arr[index]!=0)
    {
        count++;
        index++;

    } 
    return count;}
    void connectarray(char a[],char b[])
    {
      int aIndex=getlength(a);
      int bIndex= 0;
     while(b[bIndex]!='\0')
    {
        a[aIndex]=b[bIndex];
          aIndex++;
          bIndex++;
    }
    a[aIndex]='\0';
    }

int main()
{
    char a[10]="Hello";
  char b[10]="Shriya";
  connectarray(a,b);
  cout<<"printing a:"<<a<<endl;
    return 0;
}