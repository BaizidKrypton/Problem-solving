#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int b=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                b++;
            }
        }

        int l=0,r=0;
        int cnt=0;
        int ans=0;
        while(r<n)
        {
            if(s[r]=='B')
            {
                cnt++;
            }

            if(r-l+1==k)
            {
                if(s[l]=='B' || r==n-1)
                {
                    if(cnt>0)
                    {
                        b-=cnt;
                        cnt=0;
                        ans++;
                    }
                    if(b==0)
                    {
                        break;
                    }
                    r++;
                    l=r;
                }
                else
                {
                    r++;
                    l++;
                }
            }
            else
            {
                r++;
            }
        }
        if(b>0)
        {
            cout<<ans+1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }

    return 0;
}