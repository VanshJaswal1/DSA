#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    // printing some thinhg 
    cout<< arr[3]<<endl;
    // printing the whole array 
    for(int i = 0 ; i<=4;i++){
        cout<< arr[i];
    }
    // uopaditing and array
    arr[4] = 20;
    cout<< arr[4]<<endl;
   
    // reversing a array 
    int Arr[] = {1,2,3,4,5,6};
    for(int j = 5 ; j>=0; j--){
        cout<<Arr[j];
    } 
    cout<<endl;

   

     
    // when we need the output {612345}
     
       int ARr[] = {1, 2, 3, 4, 5, 6};

    int ARR[6];

    ARR[0] = ARr[5];

    for(int l = 1; l <= 5; l++) {
        ARR[l] = ARr[l - 1];
    }

    for(int l = 0; l < 6; l++) {
        cout << ARR[l];
    }
}