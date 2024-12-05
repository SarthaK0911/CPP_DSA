#include <iostream>
using namespace std;
int square(int);
int main(){
    int a;
    cout<<"Enter the number= ";
    cin>>a;
    square(a);
    return 0;
}
int square(int a)
{
    int b;
    b=a*a;
    cout<<"Square is= "<<b;
    return 0;
}