#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int output[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        output[arr[i] - 1] = i + 1; 
    }
    
    for(auto i : output)
    {
        cout<<i<<" ";
    }

    
}