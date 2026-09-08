#include<iostream>
#include <vector>
using namespace std;

int main()
{    vector<int> arr = {1,2,3,4,5,6};
     arr.insert(arr.begin()+ 2 , 7);
     for(int i = 0; i< arr.size(); i++){
        cout<<arr[i];
     }

    
    return 0;
}