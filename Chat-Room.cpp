#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int j = 0;
    int start = 1;
    int end = 0;
    char arr[] = {'h','e','l','l','o'};
    int count = s.size();
    for(int i = 0; i<s.size() ;i++)

    {
            if (s[i] != arr[j])
            {
                s.replace(i,1,"");
                i--;
            }
            else
            {
                j++;
            }
           start++;     
    }
    
   if (s == "hello")
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
   
   
    
}