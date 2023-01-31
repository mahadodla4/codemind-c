#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        int i,n,sum=0,s1,a;
        cin>>n;
        vector<int>arr;
        for(i=0; i<n-1; i++)
        {
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        for(i=0; i<n-1; i++)
        {
            sum+=arr[i];
        }
        s1=(n*(n+1))/2;
        cout<<(s1-sum)<<endl;
    }
}