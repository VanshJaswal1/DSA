#include<iostream>
using namespace std;

int main()
{
     int arr[] = {3,4,5,6,7};
     int Arr[5];
     for( int i = 1 ; i<=4; i++) {
        Arr[i] = arr[i];
     }
     for(int j = 1 ; j<=4; j++) {
        cout << Arr[j];
     }
    return 0;
}