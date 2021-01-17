#include <iostream>
#include <vector>
#include<ctype.h>
#include <string>
using namespace std;
int main()
{

    string s;
    cin >> s;
    vector<char> s1;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        
    }
    for (int i = 0; i < s.size(); i++)
    {
       
        
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
        {
        }
        else
        {
            s1.push_back(s[i]);
        }
    }
    for (auto v : s1)
    {
        cout <<"."<< v;
    }
}