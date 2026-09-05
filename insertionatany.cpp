#include<iostream>
using namespace std;

int main()
{
     int arr[] = {1,2,3,4,5};
     int Arr[6];
     Arr[0] = arr[0];
     Arr[1] = 6;
     for(int i =1;  i<=4 ; i++ ) {
        Arr[i + 1 ] = arr[i];
     }
       for(int j = 0 ; j<=5; j++) {
        cout<<Arr[j];
       }
    
    return 0;
}