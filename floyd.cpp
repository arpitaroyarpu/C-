#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n, row, col, count=1;

    cout<<"Enter the number of lines: ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<< count;
            count++;
        }
        cout<<endl;
    }
}


