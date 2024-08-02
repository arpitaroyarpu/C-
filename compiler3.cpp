#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char needChar;
    int numChar;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character: "<< endl;
    cin >> needChar;

    for(int i = 0; i < str.length(); i++)
    {

        if(str[i] == needChar)
        {
            numChar ++;
        }
    }
    cout << "Character In string: " << numChar << endl;
    return 0;


}
