#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int l=0,r=0;
        int cnt=0;
        int ans=0;
        while(r<n)
        {
            if(v[r]<=q)
            {
                cnt++;
            }
            else
            {
                if(cnt>=k)
                {
                    int x=cnt-k+1;
                    ans+=((x*(x+1))/2);
                }
                cnt=0;
            }

            if(r==n-1 && cnt>=k)
            {
                int x=cnt-k+1;
                ans+=((x*(x+1))/2);
            }
            r++;
        }
        cout<<ans<<endl;
    }

    return 0;
}