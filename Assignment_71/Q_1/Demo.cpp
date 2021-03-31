using namespace std;

#include<iostream>

template<class T>
T Multiplication(T No1,T No2)
{
    T Mult = 0;

    Mult = No1 * No2;
    
    return Mult;
}

int main()
{
    int No1 = 0;
    int No2 = 0;

    cout<<"Enter First Number To Multiply"<<"\n";
    cin>>No1;

    cout<<"Enter Second Number To Multiply"<<"\n";
    cin>>No2;

    int Ret = Multiplication(No1,No2);
    cout<<"Mmultiplication is : "<<Ret<<"\n";

    float No3 = 0.0;
    float No4 = 0.0;

    cout<<"Enter First Number To Multiply"<<"\n";
    cin>>No3;

    cout<<"Enter Second Number To Multiply"<<"\n";
    cin>>No4;

    float fRet2 = Multiplication(No3,No4);
    cout<<"Mmultiplication is : "<<fRet2<<"\n";

    return 0;
}