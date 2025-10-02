#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int i=0;
        long long sum=0;
        int cnt=0;
        while(i<n)
        {
            if(v[i]<0)
            {
                cnt++;
                while(v[i]<=0 && i<n)
                {
                    sum+=(v[i]*(-1));
                    i++;
                }
            }
            else
            {
                sum+=v[i];
                i++;
            }
        }
        cout<<sum<<" "<<cnt<<endl;
    }

    return 0;
}