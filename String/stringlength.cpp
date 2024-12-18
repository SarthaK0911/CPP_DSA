#include <iostream>
using namespace std;
int main() {
    char name[5]="abc";
    int count=0,i;
    for(i=0;name[i]!='\0';i++)
    {
        count++;
    }
cout<<count;
    return 0;
}