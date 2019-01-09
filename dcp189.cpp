#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max=-9999;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
        }
    int g[max+1];
    for(int i=0;i<max+1;i++)
        g[i]=0;
    int count=0;
    for(int i=0;i<n;i++)
        {
         g[a[i]]=1;   
        }
    for(int i=0;i<=max;i++)
        {
            if(g[i]==1)
                count++;
        }
    cout<<count;
    return 0;

}