#include<iostream>
using namespace std;
int main()
{
    const string password="Hello";
    string input;
    do
    {
        cout <<"Enter the password > " << flush;
        cin >> input;

        if(input != password)
        {
            cout <<" Access Denied" << endl;
        }


    }
    while (input!= password);
    cout <<"Password Accepted " << endl;
    cout <<"Redirecting to the Portal ... " << endl;
    return 0;

}
