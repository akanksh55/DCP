#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int b[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            b[i][j]=a[j][i];
    for(int i=0;i<n/2;i++)
        for(int j=0;j<n;j++)
        {
            int temp=b[i][j];
            b[i][j]=b[n-i-1][j];
            b[n-i-1][j]=temp;
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}