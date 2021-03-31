using namespace std;

#include<iostream>

template<class T>
void DisplayRev(T *arr,int Size,T No)
{
    int i = 0;

    cout<<"Output : \n";
    for(i = Size-1; i >= 0;i--)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
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
    
    DisplayRev(arr,No,No2);
    

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

    DisplayRev(brr,No3,No4);
    return 0;
}