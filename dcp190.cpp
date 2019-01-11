#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector <int> test;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int b[2*n];
    for(int i=0;i<2*n;i++)
        b[i]=a[i%n];
    int max=b[0];
    int flag=max;
    int con=0;
    for(int i=1;i<2*n;i++){
        if(max+b[i]<max){
            max=flag;
            flag=0;
        }
        else
            flag=flag+b[i];
    }
    cout<<max<<endl;
    return 0;
}