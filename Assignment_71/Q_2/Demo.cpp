using namespace std;

#include<iostream>

template<class T>
T Max(T No1,T No2,T No3)
{
    if((No1 >= No2)&&(No1 >= No3))
    {
        return No1;
    }
    else if((No2 >= No1)&&(No2 >= No3))
    {
        return No2;
    }
    else 
    {
        return No3;
    }
}

int main()
{
    int Value = 0;
    int Value1 = 0;
    int Value2 = 0;

    cout<<"Enter First Number"<<"\n";
    cin>>Value;

    cout<<"Enter Second Number\n";
    cin>>Value1;

    cout<<"Enter Third Number\n";
    cin>>Value2;

    int Ret = Max(Value,Value1,Value2);
    cout<<"Maximum Number is : "<<Ret<<"\n";

    float Value3 = 0;
    float Value4 = 0;
    float Value5 = 0;

    cout<<"Enter First Number"<<"\n";
    cin>>Value3;

    cout<<"Enter Second Number\n";
    cin>>Value4;

    cout<<"Enter Third Number\n";
    cin>>Value5;

    float Ret2 = Max(Value3,Value4,Value5);
    cout<<"Maximum Number is : "<<Ret2<<"\n";

    return 0;
}
