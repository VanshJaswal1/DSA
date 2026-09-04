 #include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};

    for(int i = 0; i < 3; i++)
    {
        if(arr[i] > arr[i+1])
        {
            cout << "not sorted";
            return 0;
        }
    }

    cout << "sorted";

}