#include <iostream>
using namespace std;
int getl(char arr[]){
    int index =0;
    while(arr[index]!='\0'){
        index ++;
    }
   return index;
}
bool comparearray(char a[], char b[]) {
    int aindex=0;
    int bindex=0;
    int alength=getl(a);
    while (aindex<=alength){
        if (a[aindex]!=bindex){
            return false;
        }
        else {
            aindex++;
           bindex++;
        }
    }
    return true;
}
int main(){
    char arr[]="Revengers";
    char brr[]="yoyo";
    cout<<  comparearray (arr,brr)<<endl;
    return 0;
}