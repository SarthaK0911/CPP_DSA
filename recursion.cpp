#include <iostream>
using namespace std;
int sumn(int);
int main()
{
    int n,sum;
    cout<<"Enter the number= ";
    cin>>n;
    sum=sumn(n);
    cout<<"Sum on numbers are= "<<sum;
}
int sumn(int a)
{
    int sum=0;
    if(a==0)
    return 0;
    sum=sum+sumn(a-1);
    return sum;
}