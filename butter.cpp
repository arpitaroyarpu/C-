#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int c=2;
    int s=18;
    for(int a=0; a<10; a++)
    {
       for(int b=0; b<c/2; b++)
       {
          cout<<"*"<<" ";
       }
       for(int b=0; b<s; b++)
       {
          cout<<" "<<" ";
       }
       for(int b=0; b<c/2; b++)
       {
           cout<<"*"<<" ";
       }
       s=s-2;
       c=c+2;
       cout<<endl;
    }
    for(int a=0; a<10; a++)
    {
       for(int b=0; b<s/2; b++)
       {
          cout<<"*"<<" ";
       }
       for(int b=0; b<s; b++)
       {
          cout<<" "<<" ";
       }
       for(int b=0; b<c/2; b++)
       {
           cout<<"*"<<" ";
       }
       s=s-2;
       c=c+2;
       cout<<endl;
    }

    getch();
}
