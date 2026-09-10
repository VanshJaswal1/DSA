#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{     vector<int> arr = {0};
   sort(arr.begin(),arr.end());

  
    int zero = 0;
      for(int i = 0 ; i<arr.size(); i++) {
    if(  arr[i] == 0){
        zero++;
    }  }
    
    int j = zero;
    int i = 0;
    while(j<arr.size()){
        swap(arr[i],arr[j]);
        i++;
        j++;
    }
    
    for(int i = 0 ; i <arr.size(); i++) {
        cout<< arr[i];
    }
    return 0;
}