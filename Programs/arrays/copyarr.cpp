#include <iostream>
using namespace std;
void copyArray(char actualarr[], char copyarra[]){
int aIndex=0;
int bIndex=0;
while (actualarr[aIndex]!='\0'){
    copyarra[bIndex]= actualarr[aIndex];
aIndex++;
bIndex++;
 
}
}

int main (){
    char actual[100]="Tokyo Revengers";
    char ans[100];
    copyArray(actual,ans);
    cout<<"Printing the desired result : "<<ans<<endl;
    return 0;
}