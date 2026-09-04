#include<iostream>
using namespace std;

int main()
{    // sum of arrays 
    int arr[] = {10,20,30,40};
    int sum = 0;
    for(int i = 0 ; i<=3;i++){
        sum = sum + arr[i];
    }
    cout<<sum;
    //maximum 
    int max = arr[0];
     for(int i =0 ; i<3;i++){
       if(arr[i] > max) {
            max= arr[i];
        }
    }
    cout << "Maximum = " << max;
    cout<<endl;
   // linear search
   int target = 30;
   int count = 0;
   for(int i = 0 ; i<4 ; i++) {
    if(arr[i]== target) {
        
        count++;
    }
    
 
   }
    cout<<count;
    }
