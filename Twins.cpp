#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    int total_sum = 0;
    int your_sum = 0;
    int brother_sum = 0;
    for(int i = 0; i<N;i++)
    {
        cin>>arr[i];
        total_sum = total_sum + arr[i];
    }
    sort(arr,arr+N,greater<int>());
    int m = 0;
    int count = 0;
    while (your_sum < total_sum || your_sum == total_sum)
    {
    
       your_sum = your_sum + arr[m];
       total_sum = total_sum - arr[m];
       count++;
       m++;
    }
    cout<<count;
    
    
}

