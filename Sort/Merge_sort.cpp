/*Bubble Sort{O(n^2)}*/

#include<bits/stdc++.h>
using namespace std;

//global data(so we don't need to pass in functions)
const int N= 1e5+10; //10^5+10=100,010
int a[N];

void merge(int l,int r,int mid) //To merge the devided array  
{   
    //sub array size
    int l_size=mid-l+1;
    int r_size=r-mid;

    //sub array with one extra position
    int L[l_size+1];
    int R[r_size+1];

    //copy the data to sub arrays
    for(int i=0;i<l_size;i++)
    {
        L[i]=a[i+l];
    }

    for(int i=0;i<r_size;i++)
    {
        R[i]=a[i+mid+1];
    }

    L[l_size]=R[r_size]= INT_MAX; /*putting Max int(32bit) = 2,147,483,647 in last position(which is empty) of 
                                    subarrays {INT_MAX(<climits>)} {so don't need exta code for coping the 
                                    remaining elemnts (if there any) (after merging)}*/

    //Initial index of the sub arrays
    int l_index=0;
    int r_index=0;

    //Merge array [left..right]
    for(int i=l;i<=r;i++)
    {
        if(L[l_index]<=R[r_index])
        {
            a[i]=L[l_index];
            l_index++;
        }

        else
        {
            a[i]=R[r_index];
            r_index++;
        }
    }
}

void merge_sort(int l,int r) //devides the array and then sorts
{
    int mid=(l+r)/2;
    
    if(l==r)
    {
        return;
    }
    merge_sort(l,mid);
    merge_sort(mid+1,r);

    merge(l,r,mid);

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
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    merge_sort(0,n-1); //(l,r)

    cout<<"Sorted array using merge sort:"<<endl;
    print(a,n);

    return 0;
}

