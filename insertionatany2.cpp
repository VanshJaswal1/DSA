#include<iostream>
using namespace std;

int main()
{
     int arr[10]= { 1,2,3,4,5};
     int index = 1;
     int n = 5;
     int value = 6;
     for(int i = 5 ; i<index ; i--){
        arr[i] = arr[i-1];
     }
      arr[index] = value;
      n++;
      for(int j =0 ; j<=5 ; j++) {
        cout<< arr[j];
          }

    return 0;
}