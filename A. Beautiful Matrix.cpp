#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                m = i;
                n = j;
            }
        }
        
    }
    int count = 0;
    while (m != 2 || n!= 2)
    {
        if(m > 2)
        {
            m--;
            count++;
        }
        else if(m<2)
        {
            m++;
            count++;
        }

        else if(n > 2)
        {
            n--;
            count++;
        }
        else if(n <2)
        {
            n++;
            count++;
        }

    }
    cout<<count<<endl;
    


    
}