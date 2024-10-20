#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int max,max_pos,min,min_pos;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    max=v[0];
    max_pos=0;
    min=v[0];
    min_pos=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>max)
        {
            max=v[i];
            max_pos=i;

        }
        if(v[i]<=min)
        {
            min=v[i];
            min_pos=i;
        }

    }
    int swap=max_pos+(n-1-min_pos);
    if(max_pos>=min_pos)
    {
        swap-=1;

    }
    cout<<swap;
    




    return 0;
}