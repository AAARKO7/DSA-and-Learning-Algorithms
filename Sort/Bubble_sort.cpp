/*Bubble Sort{O(n^2)}*/

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])  // a[i]<a[j] for max to min
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{   
    int n;
    cin>>n;
    
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    bubble_sort(a,n);

    cout<<"Sorted array after Bubble sort:"<<endl;

    print(a,n);

    return 0;
}
