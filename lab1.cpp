#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, id, section, university;

    cout << "Enter Your Name: ";
    getline(cin, name);
    cin>>name;
    cout<<endl;

    cout << "Enter your ID: ";
    getline(cin, id);
    cin>>id;
    cout<<endl;

    cout << "Enter your section: ";
    getline(cin, section);
    cout<<endl;

    cout << "Enter your university name: ";
    getline(cin, university);
    cout<<endl;


    cout << "\nName: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Section: " << section << endl;
    cout << "University: " << university << endl;

    return 0;
}
