#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;
    cout<<"Type of input: "<<typeid(str).name()<<endl;

    int n = stoi(str);
    cout<<n<<endl;
    cout<<"Type of output: "<<typeid(n).name()<<endl;
}
