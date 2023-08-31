#include<iostream>
using namespace std;
#include<vector>
bool check(vector<int>&v)
{
    int totalsum=0;
    for(int i=0;i<v.size();i++){
        totalsum=v[i]+totalsum;
    }
    int perfixsum=0;
    for(int i=0;i<v.size();i++)
    {
        perfixsum=perfixsum+v[i];
        int suffixsum=totalsum-perfixsum;
        if(perfixsum==suffixsum){return true;}
    }
    return false;
}
int main()
{
    vector<int>v;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    cout<<check(v);
    return 0;
}