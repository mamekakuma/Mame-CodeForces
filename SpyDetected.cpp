//Mame-Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
long long a,b,c,temp,t,val;
c=b;
cin>>a;
while(a--){
cin>>b;
vector<long long>v;
unordered_map<long long,long long>m;
long long i=1;
while(b--){
cin>>val;
v.push_back(val);
m[val]=i;
i++;
}
sort(v.begin(),v.end());
if(v[0]!=v[1])
    cout<<m[v[0]]<<"\n";
else
   cout<< m[v[v.size()-1]]<<"\n";
}
}