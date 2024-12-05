#include <iostream>
using namespace std;
int swap(int,int);
int main()
{
    int a,b;
    cout<<"Enter 2 numbers= ";
    cin>>a>>b;
    swap(a,b);
    return 0;
}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping, A= "<<a<<"B= "<<b;
    return 0;
}