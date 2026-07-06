#include <iostream>
using namespace std;
int convertcelcius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
    
}
int main()
{
int far=90;
int ans=convertcelcius(90);
cout<<ans<<endl;
    return 0;
}
