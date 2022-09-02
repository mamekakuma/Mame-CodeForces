//Mame-Kakuma
#include<bits/stdc++.h>
using namespace std;
int main()
{
#define int long long
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n,a,k;
    cin>>n;
    while(n--)
    {
        cin>>a>>k;
        bool bul=true;
        vector<int>v;
        for(int i=1 ; i<=a ; i++)
            v.push_back(i);
        if(a%2==0)
        {
            if(k>((a-1)/2))
            {
                cout<<-1<<"\n";
                bul=false;
            }
            else
            {
                int ii=1;
                for(int y=0 ; y<k ; y++)
                {
                    v.insert(v.begin()+ii,v[v.size()-1]);
                    v.pop_back();
                    ii+=2;
                }
            }
        }
        else
        {
            if  (k>(a/2))
            {
                cout<<-1<<"\n";
                bul=false;
            }
            else
            {
                int ii=1;
                for(int y=0 ; y<k ; y++)
                {
                    v.insert(v.begin()+ii,v[v.size()-1]);
                    v.pop_back();
                    ii+=2;
                }
            }
        }
        if (bul)
        {
            for(auto x : v)
                cout<<x<<" ";
            cout<<"\n";
        }
    }
}