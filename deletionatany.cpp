#include<iostream>
using namespace std;

int main()
{ int arr[] = {1,2,3,4,5};
int Arr[4];
 Arr[0] = arr[0];
 Arr[1] = arr[1];
  for(int i = 2; i<4 ; i++) {
    Arr[i] = arr[i+1] ;

  }
    for(int j = 0; j<=3 ; j++) {
        cout<<Arr[j];
    }
    return 0;
}