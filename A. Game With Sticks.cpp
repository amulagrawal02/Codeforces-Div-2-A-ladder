#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    string  winner = "Akshat";
    int chance = 1;
    int totalInt = n * m;
    while (totalInt != 0)
    {
        totalInt = totalInt - (n + m - 1);
        n = n - 1;
        m = m - 1;
        if(chance % 2 == 0)
        {
            winner = "Malvika";
        }
        else if(chance %2 != 0)
        {
            winner = "Akshat";
        }
        chance++;
    }
    
    cout<<winner<<endl;
}