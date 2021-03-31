using namespace std;

#include<iostream>

template<class T>
T SearchFirst(T *arr,int Size,T No)
{
    int i = 0;

    for(i = 0; i < Size;i++)
    {
        if(arr[i] == No)
        {
            break;
        }
    }
    
    if(i == Size)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}

int main()
{
    int arr[30];
    int i = 0;
    int No = 0;
    int No2 = 0;

    cout<<"Enter How Many Elements You Want In Array\n";
    cin>>No;

    cout<<"Enter Elements in Array\n";
    for(i = 0;i < No;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter Element You Want To Search of\n";
    cin>>No2;

    int iRet = SearchFirst(arr,No,No2);
    cout<<"Element is at Position : "<<iRet<<"\n";
    
    float brr[30];
    int j = 0;
    int No3 = 0;
    float No4 = 0;

    cout<<"Enter How Many Elements You Want In Array\n";
    cin>>No3;

    cout<<"Enter Elements in Array\n";
    for(j = 0;j < No3;j++)
    {
        cin>>brr[j];
    }

    cout<<"Enter Element You Want To Search\n";
    cin>>No4;

    float fRet = SearchFirst(brr,No3,No4);
    cout<<"Element is at Position : "<<fRet<<"\n";

    return 0;
}