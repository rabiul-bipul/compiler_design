#include<bits/stdc++.h>
using namespace std;


void average(int a[],int s)
{

    float avg=0,sum=0;

    cout << "Array: ";
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;


    for(int i=0; i<s; i++)
    {
        sum=sum+a[i];
    }

    avg =sum/s;
    cout<<"the average value of the elements is : "<<avg;
}


int main()
{

    int arr[]= {2,6,3,9,78};
    int n = sizeof(arr) / sizeof(arr[0]);
    average(arr,n);

}
