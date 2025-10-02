#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt,pat;
    cin>>txt>>pat;
    int k=pat.size();
    sort(pat.begin(),pat.end());
        
    int l=0,r=0;
    int cnt=0;
    string s="";
        
    while(r<txt.size())
    {       
        if(r-l+1==k)
        {
            string tmp=txt.substr(l,3);
            sort(tmp.begin(),tmp.end());
                
            if(tmp==pat)
            {
                cnt++;
            }
            
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}