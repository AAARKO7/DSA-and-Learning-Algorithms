/*Binary Search(Recursive)*/

#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int n,int key,int start,int end)
{
    if(start<=end)
    {
        int mid=(start+end)/2; // mid index

        if(a[mid]==key) // if the mid one
        {
            return mid;
        }

        if(a[mid]>key)
        {
            return binarysearch(a,n,key,start,mid-1); // if key is smaller, ignores right side of mid(bigger numbers)
        }

        return binarysearch(a,n,key,start+1,end); // if key is bigger, ignores left side of mid( smaller numbers)
        
    }

    return -1; // if not found

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

    // we need to sort the array coz binary search only works on sorted arrays
    // sort using stl
    int x=sizeof(a)/a[0]; // array size = sizeof(array)/array(1st index)

    sort(a,a+n); // a=start of array, a+n=end of array

    int key; // to find
    cin>>key;

    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int start=0; // start index
    int end=n; // end index

    int result=binarysearch(a,n,key,start,end);
    
    if(result==-1)
    {
        cout<<"Element is not indexed in the array"<<endl;
    }

    else
    {
        cout<<"Element is in index: "<<result<<endl;
    }

    return 0;
}