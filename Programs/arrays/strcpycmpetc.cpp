#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char actual[]="everytime";
    char ans[100];
    cout <<"length of actual char array :"<<strlen(actual)<<endl;
    strcpy(ans,actual);
      ans [0]='h';
    cout<<ans<<endl;
    if (strcmp (actual,ans)==0)
    {
        cout<<"char array are same "<<endl;
    }
    else {
        cout<<"they are not same "<<endl;
    }
    return 0;
}