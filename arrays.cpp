#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    // tha above will create an array of 5
    // every element in array store int elements which are stored as continous memory

    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // we can also use for loop

    for(int i=1;i<=5;i++)
    {
        cin>>arr[i-1];
    }

    // output

    for(int j=1;j<=5;j++)
    {
        cout<<arr[j-1]*arr[j-1]<<" ";
    }
    // the datatypes in the array should be same
    // oth is stored in any memory index then all remaining elements will be stored sequentially

    // 2d arrays
    cout<<"\n\n\n"; 
    int ar[3][3];
    for(int i1=1;i1<=3;i1++)
    {
        for(int j1=1;j1<=3;j1++)
        {
            cin>>ar[i1-1][j1-1];
        }
    }

    // output is 
    cout<<"\n\n\n";
    for(int i2=1;i2<=3;i2++)
    {
        for(int j2=1;j2<=3;j2++)
        {
            cout<<ar[i2-1][j2-1]<<" ";
        }
        cout<<endl;
    }

}