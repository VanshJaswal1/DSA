#include<iostream>
using namespace std;

int main()
{   // reverse a array 
    int arr[] = {10,20,30,40};
    int Arr[4];
    int j= 0;
   for(int i = 3; i>=0; i-- ){
        Arr[j] = arr[i];
    j++;
   }
   for(int j = 0 ; j<=3 ; j++){
    cout<<Arr[j];
    
   }
  
    return 0;
}