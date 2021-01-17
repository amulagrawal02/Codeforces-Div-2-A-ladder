#include<iostream>
#include<algorithm>
#include<vector>
using namespace  std;
int main()
{
    vector<char> v;
    string s;
    cin>>s;
    for(int i = 0 ; i<s.size();i = i + 2)
    {
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    int m = 0;
    for(auto v1 : v)
    {
        s[m] = v1;
        m = m + 2;
    }
    cout<<s;
    
}  
