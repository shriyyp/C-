#include <iostream>
using namespace std;
int main()
{
    int height;
    cout<<"enter your height :";
    cin>>height;
    int weight;
    cout<<"enter your weight :";
    cin>>weight;
    
    if (height > 170)
    {
        if (weight > 80){
            cout <<"You should workout ";
        } 
        else {
            cout<<"You are healthy ";
        }
    }
     else {
            cout<<"Not eleigible in the given criteria";
        }
    return 0;
}