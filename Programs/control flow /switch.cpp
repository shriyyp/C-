#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout<<"Enter your grade : ";
    cin>>grade;
    switch(grade){
     case'A':cout<<"Your marks lies between 90 to 100";
     break;
     case'B':cout<<"Your marks lies between 80 to 90";
      break;
     case'C':cout<<"Your marks lies between 80 to 70";
      break;
     case'D':cout<<"Your marks lies between 70 to 60";
      break;
     case'E':cout<<"Your marks lies between 60 to 50";
      break;
     default: cout<<"Your marks ranges between 0 to 50 ";
 }
    return 0;
}