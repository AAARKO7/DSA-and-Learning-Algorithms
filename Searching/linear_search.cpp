/*Linear Search*/

#include<bits/stdc++.h>
using namespace std;

int linearsearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
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

    int key; // to find
    cin>>key;

    int result=linearsearch(a,n,key);
    
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