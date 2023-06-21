#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[]= {2,6,3,9,78};


    int n = sizeof(arr) / sizeof(arr[0]);


    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout<<endl;

    cout << "Min Element = "<< *min_element(arr, arr + n)<<endl;


    cout << "Max Element = "<< *max_element(arr, arr + n)<<endl;


}
