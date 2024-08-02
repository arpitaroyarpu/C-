#include<iostream>
#include<string>

using namespace std;

int main(){
string str, str2;
char c;
int i=0;

cout<<"Enter Your Name: ";
getline(cin,str);

cout<<"Enter a character: ";
cin>>c;

int length = str.length();

for(int i=length-1; i>=1; i--)
{
    str2 = str2+str[i];
}
str2+=c;
cout<<str2<<endl;

return 0;
}
