#include <iostream>
using namespace std;
int insert(int*, int, int ,int);
int main() {
    int arr[10],k,n,item,i;
    cout<<"Enter the size of array= ";
    cin>>n;
    cout<<"Enter the elements of the array= ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position to insert the item= ";
    cin>>k;
    cout<<"Enter the item to insert= ";
    cin>>item;
    insert(arr,k,n,item);

    return 0;
}
int insert(int arr[],int k,int n,int item)
{
    int j=n;
    while(j>k)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[k]=item;
    n+=1;
    cout<<"Inserted successfully";
    for(j=0;j<n;j++)
    {
        cout<<endl<<arr[j]<<endl;
    }
    return 0;
}