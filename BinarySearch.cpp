/*Binary search*/

#include<iostream>
#include<cmath>
using namespace std; 

int main(){

    int A[5];

    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter element";
        cin>>A[i];
    }
    
    int low=0;
    int high=4;
    int x,mid;

    cout<<"What to find?";
    cin>>x;
    
    while (low<=high)
    {
        mid=floor((low+high)/2);

        if (A[mid]==x)
        {
            cout<<"Element is at index"<<mid;
            break;
        }

        else if (A[mid]<x)
        {
            low=mid+1;
        }

        else if (A[mid]>x)
        {
            high=mid-1;
        }      
    }
}