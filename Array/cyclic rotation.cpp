#include <iostream>
using namespace std;
int main() {
    int a[2][2],i,j,b[2][2],sum[2][2];
    cout<<"Enter 1st array= ";
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        cin>>a[i][j];
    }
    }
    cout<<"Enter 2nd array= ";
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        cin>>b[i][j];
    }
    }
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
    }
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        cout<<sum[i][j]<<" ";
    }
    cout<<endl;
    }

    return 0;
}