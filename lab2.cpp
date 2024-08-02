#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;


    cout<<"Input the String: ";
    getline(cin, str);

    int length= str.length();
    int space=0;

    for(char c:str)
    {
        if(c == '')
        {
             space++;
        }

    }
    int lengthWithoutSpace = length-space;

    cout<<"length"<<endl;
    cout<<"length without space"<<lengthWithoutSpace;
    cout<<"length with space"<<endl;

    return 0;





}
