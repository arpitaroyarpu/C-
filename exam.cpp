#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int upperc=0;
    int lowerc=0;
    int vowel=0;
    int c=0;
    int sc=0;
    int d=0;
    int len = s.size();
    for(int i=0; i<len; i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            upperc++;
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                vowel++;
            }
            else
            {
                c++;
            }
        }
        else if(s[i] >= 97 && s[i] <= 122)
        {
            lowerc++;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                vowel++;
            }
            else
            {
                c++;
            }
        }
        else if(s[i] >= 48 && s[i] <= 57){
            d++;
        }
        else{
            sc++;
        }

    }
    cout << "Total uppercase letter  : " << upperc << endl;
    cout << "Total lowercase letter  : " << lowerc << endl;
    cout << "Total vowels : " << vowel << endl;
    cout << "Total consonants : " << c << endl;
    cout << "Total special characters : " << sc << endl;
    cout << "Total digits  : " << d << endl;
}
