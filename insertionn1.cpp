#include<iostream>
using namespace std;

int main()
{  // at first
    int arr[] = {1,2,3,4,5,6};
    int Arr[7];
    int target = 10;
    Arr[0]= target;
     for(int i = 1; i<=6; i++){
        Arr[i] = arr[i];
     }
    for(int k = 0; k<=5;k++){
        cout<<Arr[k];
    }
    return 0;
}