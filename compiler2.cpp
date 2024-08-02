#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int length = str.length();
    int spaceCount = 0;

    for (char c : str)
    {
        if (c == ' ')
        {
            spaceCount++;
        }
    }

    int lengthWithoutSpaces = length - spaceCount;


    cout << "Length of the string: " << length << endl;
    cout << "Number of spaces: " << spaceCount << endl;
    cout << "Length of the string without spaces: " << lengthWithoutSpaces << endl;

    return 0;
}
