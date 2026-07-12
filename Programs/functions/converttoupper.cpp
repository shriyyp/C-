#include <iostream>
using namespace std;
char chtouppercase(char ch)
{
    char ans=ch-'a'+'A';
    return ans;
}
int main()
{
    char result=chtouppercase('h');
    cout<<result<<endl;
    return 0;
}

