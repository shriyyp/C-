#include <iostream>
using namespace std;
int getlength(char arr[]){
    int count = 0;
    int index = 0;
while (arr[index]!='\0')
{
    count++;
    index++;
}
return count;
}
int main(){
    char arr[10]="jump";
    cout<<getlength(arr)<<endl;


    return 0;
}