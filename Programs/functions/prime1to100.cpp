#include <iostream>
using namespace std;
int i;
bool isprime(int n){
    if(n<=1)
       return false;
    
      for(int i=2;i<n;i++){//or i*i<=n it skips uncessary checks
        if(n%i==0)
        return false;
      }
      return true;
}


int main()
{ 
    if(true){
    for(int i=2;i<=100;i++)
    {
        if(isprime(i))
        cout<<i<<endl;
    }
}
    return 0;
}


