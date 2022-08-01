#include<iostream>
using namespace std; 

int main(){

    int A[5]={1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        cout<<A[i];
    }

    int x;
    cout<<"What to find?";
    cin>>x;

    for (int i = 0; i < 5; i++)
    {
        if(A[i]==x){
            cout<<"Element is at index "<<i;
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}