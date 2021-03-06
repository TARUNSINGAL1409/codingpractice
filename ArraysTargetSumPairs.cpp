/*
    Arrays - Target Sum Pairs
    
    Enter elements of an array.
    Input a number target.
    Print all paris of numbers which sum to target.
*/

#include<iostream>

using namespace std;

int main()
{
    int n,arr[100],target;
    
    cout<<"Enter size of array : ";
    cin>>n;
    
    cout<<"\nEnter elements of array :\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<"\nEnter target number : ";
    cin>>target;
    
    cout<<"\nPairs of numbers whose sum is "<<target<<" are :";
    
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if((arr[i]+arr[j])==target)
                cout<<endl<<arr[i]<<" and "<<arr[j]<<endl;
            
    return 0;
}