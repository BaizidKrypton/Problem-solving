#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);

    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>v2[i];
    }

    vector<int> ans;

    int l=0,r=0;
    while(l<n || r<m)
    {
        if(l<n && r<m)
        {
            if(v1[l]<=v2[r])
            {
                ans.push_back(v1[l]);
                l++;
            }
            else
            {
                ans.push_back(v2[r]);
                r++;
            }
        }
        else if(l<n && r>=m)
        {
            ans.push_back(v1[l]);
            l++;
        }
        else
        {
            ans.push_back(v2[r]);
            r++;
        }
    }

    for(int x:ans)
    {
        cout<<x<<" ";
    }

    return 0;
}