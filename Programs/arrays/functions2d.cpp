#include <iostream>
using namespace std;
void arrfunction(int arr[3][4],int row ,int col){
//printing 
cout<<"printing the arrays in 2D"<<endl;
  for (int row_index=0;row_index<row;row_index++){
         for (int col_index=0;col_index<col;col_index++){
          cout<<arr[row_index][col_index]<<" ";
            } 
             cout<<endl;
        }
        
    }
int main()
{
    int arr[3][4];
    int row= 3;
    int col=4;
   
    for (int row_index=0;row_index<row;row_index++){
         for (int col_index=0;col_index<col;col_index++){
          cout<<"Enter input for arr["<<row_index<<"]["<<col_index<<"]: "<<endl;
          cin>>arr[row_index][col_index] ;
    } 
    cout<< endl;
}
    arrfunction(arr,row,col);

  

return 0;
}