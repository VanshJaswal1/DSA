#include<iostream>
using namespace std;

int main()
{ 
    int arr[] = {1,2,3,4,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int expected = 0;
    int actual = 0;

    for(int i = 0; i <= n; i++)
    {
        expected = expected + i;
    }

    for(int i = 0; i < n; i++)
    {
        actual = actual + arr[i];
    }

    cout << "Missing number: " << expected - actual << endl;
    }
   
