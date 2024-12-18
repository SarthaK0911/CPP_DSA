#include <iostream>
using namespace std;
int main() {
    int n=7;
    int current=0,i,w=4,arr[7]={3,8,2,5,7,6,12};
    //cout<<"Enter the size of subarray= ";
    //cin>>w;
    for(i=0;i<w;i++)
    {
        current=current+arr[i];
    }
    int max=current;
    for(i=1;i<=n-w;i++)
    {
        current=current-arr[i-1]+arr[i+w-1];
        if(current>max)
    {
        max=current;
    }
    }
    cout<<"The maximun of the subarray is "<<max;

    return 0;
}