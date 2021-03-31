using namespace std;

#include<iostream>

template<class T>
T Min(T *arr,int Size)
{
    int i = 0;
    T Min = 0;

    Min = arr[i];
    for(i = 0; i < Size;i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }

    return Min;
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

    int iRet = Min(arr,No);
    cout<<"Minimum Number in Array is : "<<iRet<<"\n";

    float No1 = 0;
    int j = 0;  
    float brr[20];

    cout<<"Enter Number of Elemens You Want In array\n";
    cin>>No1;

    cout<<"Enter Elements in Array\n";
    for(j = 0; j < No1;j++)
    {
        cin>>brr[j];
    }

    float fRet = Min(brr,No1);
    cout<<"Minimum Number in Array is : "<<fRet<<"\n";

    return 0;
}
