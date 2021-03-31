using namespace std;

#include<iostream>

template<class T>
T Addition(T *arr,int Size)
{
    int i = 0;
    T Sum = 0;

    for(i = 0; i < Size;i++)
    {
        Sum = Sum + arr[i];
    }

    return Sum;
}

int main()
{
    int No = 0;
    int i = 0;  
    int arr[30];

    cout<<"Enter Number of Elemens You Want In array\n";
    cin>>No;

    cout<<"Enter Elements in Array\n";
    for(i = 0; i < No;i++)
    {
        cin>>arr[i];
    }

    int iRet = Addition(arr,No);
    cout<<"Addition of Array is : "<<iRet<<"\n";

    float No1 = 0;
    int j = 0;  
    float brr[20];

    cout<<"Enter Number of Elemens You Want In array\n";
    cin>>No1;

    cout<<"Enter Elements in Array\n";
    for(j = 0; j < No;j++)
    {
        cin>>brr[j];
    }

    float fRet = Addition(brr,No1);
    cout<<"Addition of Array is : "<<fRet<<"\n";

    return 0;
}
