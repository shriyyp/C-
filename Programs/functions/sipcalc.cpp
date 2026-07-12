#include <iostream>
#include <cmath>
using namespace std;
void sipcal(int P,int n){
    int annualrate=12;
    double r=annualrate/12*100;
     double h = P * ((pow(1 + r,n) - 1) / r) * (1 + r);
   //P is sip amout ,n months r is 
    cout<<h<<endl;
    }
    
int main()
{
  sipcal(120000,5);
return 0;
}