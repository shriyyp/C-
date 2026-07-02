#include <iostream>
using  namespace std;
int main()
{
    int budget;
    cout<<"Enter your budget:  ";
    cin>> budget;
    if (budget>2000000)
    {
        cout<<"Congratulations you can buy Scorpio!!"<<endl;

    }
    else{
    cout<< "Sorry you can check something else out!"<<endl;
    }
    return 0;
}
