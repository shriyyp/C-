#include <iostream>
using namespace std ;
int main(){
    char arr[10]="warm";
    cout<<arr[3]<<endl;
    cout<<"printing the fifth index : ";
    int ascii=arr[5];//garbage value will assigned 
    cout<<ascii<<endl;
    // char arr[5];
    // arr[0]= 'w';

    //  arr[1]= 'a';
    //   arr[2]= 'r';
    //    arr[3]= 'm';
    //    cout<<arr<<endl;//only in case of char it prints this otherwise adresss is o/
    return 0;
}