#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[n-1]%10==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}