#include<iostream>
using namespace std;
int main ()
{
    cout<<(5&4)<<endl;//sbape 0 only 1 1 pe 1 AND
    cout<<(5|4)<<endl;//OR sabpe 1 only 00 :0
    cout<<(~4)<<endl;//0 ka 1 1 ka 0
    cout<<(5^4)<<endl;//XOR same pe 1 dega 
    cout<<(5<<4)<<endl;//right shift one bit 
    cout<<(5>>4)<<endl;//left shift
    return 0 ;
}