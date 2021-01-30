#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j][1] == arr[i][0])
            {
                counter++;
            }
        }
        for (int k = i+1; k < n; k++)
        {
            if (arr[k][0] == arr[i][1])
            {
                counter++;
            }
        }
    }

    cout<<counter<<endl;
}