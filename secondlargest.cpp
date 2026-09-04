#include<iostream>
using namespace std;

int main()
{   // largest 
    int arr[] = {2,3,4,7,8};
   int largest = 0;
   for(int i = 0 ; i<=4; i++) {
       if( largest = arr[i]){
        largest = arr[i];
       }
   }
   cout<<largest<<endl;
// second largest 

    int Arr[] = {2, 3, 4, 7, 8};

    int Largest = 0;
    int secondlargest = 0;

    for(int i = 0; i <= 4; i++)
    {
        if(arr[i] > Largest)
        {
            secondlargest = Largest;
            Largest = arr[i];
        }
        else if(arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }

    cout << "Largest: " << Largest << endl;
    cout << "Second largest: " << secondlargest << endl;
}

