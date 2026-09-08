    #include<iostream>
    #include <vector>
    using namespace std;

    int main()
    {
        vector<int>arr = {10,20,30,40};
        cout<<arr[1];
        arr.push_back(50);
        //   cout<<arr[4];
        arr.pop_back();
        for(int i = 0 ; i<arr.size(); i++){
            cout<<arr[i];
        }

        return 0;
    }