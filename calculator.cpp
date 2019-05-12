#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout <<"Enter Your Option Below, " << endl;
    cout <<"\t1.Add " << endl;
    cout <<"\t2.Subract " << endl;
    cout << "\t3.Multiply"<< endl;
    cout << "\t4.Divide" << endl;
    int Add;
    int Subract;
    int Multiply;
    int Divide;
    int Option;
    cout <<" Your Option : " << flush;
    cin>> Option;
    if(Option == 1)
    {
        int Add1;
        int Add2;
        cout <<" Enter the first number :" << flush;
        cin>> Add1;
        cout <<"Enter the second number :" << flush;
        cin>> Add2;
        int Add3=Add1+Add2;
        cout<<"Answer = "<< Add3<<endl;

    }
    else if(Option == 2)
    {
        int Subract1;
        int Subract2;
         cout <<" Enter the first number :" << flush;
        cin>> Subract1;
        cout <<"Enter the second number :" << flush;
        cin>> Subract2;
        int Subract3=Subract1-Subract2;
        cout<<"Answer = "<< Subract3<<endl;

        }
    else if (Option == 3)
    {
        int Multiply1;
        int Multiply2;
         cout <<" Enter the first number :" << flush;
        cin>> Multiply1;
        cout <<"Enter the second number :" << flush;
        cin>> Multiply2;
        int Multiply3=Multiply1*Multiply2;
        cout<<"Answer = "<< Multiply3<<endl;

    }
    else if (Option == 4)
    {
         float Divide1;
        float Divide2;
         cout <<" Enter the first number :" << flush;
        cin>> Divide1;
        cout <<"Enter the second number :" << flush;
        cin>> Divide2;
        float Divide3=Divide1/Divide2;
        cout<<"Answer = "<< Divide3<<endl;

    }




    return 0;
}
