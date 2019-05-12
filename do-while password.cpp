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
    string username;
    do
    {
        cout <<"Enter your username > : " << flush;
        cin >> username;
        if(username != "Vignesh")
        {
            cout <<"Sorry, you do not have sufficient power to enter this portal! " << endl;
        }
    }
    while (username != "Vignesh");

    cout << " Welcome to the Portal, Vignesh!" << endl;
    return 0;

}
