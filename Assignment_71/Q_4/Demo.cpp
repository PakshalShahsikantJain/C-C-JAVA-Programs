using namespace std;

#include<iostream>

template<class T>
T Max(T *arr,int Size)
{
    int i = 0;
    T Max = 0;

    Max = arr[i];
    for(i = 0; i < Size;i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }

    return Max;
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

    int iRet = Max(arr,No);
    cout<<"Maximum Number in Array is : "<<iRet<<"\n";

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

    float fRet = Max(brr,No1);
    cout<<"Maximum Number in Array is : "<<fRet<<"\n";

    return 0;
}
