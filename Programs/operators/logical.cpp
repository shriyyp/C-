#include <iostream>
using namespace std;
int main()
{
    bool cond1=true;
    bool cond2= true;
    bool cond3= true;
    if (cond1 && cond2 && cond3)
    {
        cout<<"All ARE OKAY"<<endl;
    }
    else {
        cout<<"NOT OKAY"<<endl;//&& yani if one galat :false
    }
    return 0;
}