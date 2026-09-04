#include<iostream>
using namespace std;

int main()
{
    int arr[] = {40,30,70,20,10};
   for(int i = 0 ; i<=4; i++){
    for(int j = 0; j <=4 ; j++) {
        if(arr[i] > arr[j]){
            int temp = 0;
              temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
             

        }
    }
   }
   for(int k = 0; k <= 4; k++){
    cout << arr[k] ;
}
 
}