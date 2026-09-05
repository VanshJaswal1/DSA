#include<iostream>
using namespace std;

int main()
{
    int arr [10] = { 1,2,3,4,5};
    for(int i = 2 ; i<=3 ; i++){
        arr[i] = arr[i+1];
    }
    for(int j = 0 ; j<4 ; j++) {
    cout<<arr[j];
    }
    
    return 0;
}