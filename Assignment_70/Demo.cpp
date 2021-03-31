#include<iostream>
using namespace std;

class Array
{
    protected:
    int *Arr;
    int size;

    public:
     Array(int value = 10)
    {
        cout<<"Inside Connstructor\n";

        this->size = value;
        this->Arr = new int[size];
    }

    Array(Array &ref)
    {
        cout<<"Inside copy connstructor\n";

        this->size = ref.size;
        this->Arr = new int[this->size];

        for(int i = 0;i<size;i++)
        {
            this->Arr[i] = ref.Arr[i];
        }
    }

    ~Array()
    {
        cout<<"Inside Destructor\n";

        delete []Arr;
    }
    inline void Accept();
    inline void Display();
};

void Array::Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0;i<this->size;i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are\n";

    for(int i = 0;i<this->size;i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}
class ArrSearch : public Array
{
    public:
    ArrSearch(int no = 10) : Array(no)
    {}
    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int SumAll();
    int EvenCount();
    int OddCount();
};
int ArrSearch::SearchFirst(int value)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }
    
    if(i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}
int ArrSearch::Frequency(int value)
{
    int icnt = 0;

    for(int i = 0; i<size; i++)
    {
        if(Arr[i] == value)
        {
            icnt++;
        }
    }

    return icnt;
}
int ArrSearch::SearchLast(int value)
{
    int i = 0;

    for(i = size-1;i >= 0 ;i--)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == -1)
    {
        return -1;
    }
    else
    {
        return i;
    }
}
int ArrSearch::EvenCount()
{
    int i = 0;
    int iCnt2 = 0;

    for(i = 0;i < size;i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iCnt2++;
        }
    }

    return iCnt2;
}
int ArrSearch::OddCount()
{
    int i = 0;
    int iCnt3 = 0;

    for(i = 0; i < size;i++)
    {
        if((Arr[i] % 2) == 1)
        {
            iCnt3++;
        }   
    }

    return iCnt3;
}
int ArrSearch::SumAll()
{
    int i = 0;
    int Sum = 0;

    for(i = 0;i < size;i++)
    {
        Sum = Sum + Arr[i];
    }

    return Sum;
}

int main()
{
    int No = 0;
    int No2 = 0;
    int No3 = 0;
    int Value = 0;

    cout<<"Enter How Elements You Want in Array"<<"\n";
    cin>>No;
    
    ArrSearch sobj1(No);
    sobj1.Accept();
    sobj1.Display();

    cout<<"Enter Value To Count Frequency of\n";
    cin>>Value;

    int iret = sobj1.Frequency(Value);
    cout<<"Frequency is "<<iret<<"\n";
    
    cout<<"Enter Value To Search Occurance of\n";
    cin>>No2;

    int iret2 = sobj1.SearchFirst(No2);
    cout<<"First occurance is at : "<<iret2<<"\n";
    cout<<"\n";

    int iRet3 = sobj1.EvenCount();
    cout<<"Count of Even Element is : "<<iRet3<<"\n";
    cout<<"\n";

    int iRet4 = sobj1.OddCount();
    cout<<"Count of ODD Element is : "<<iRet4<<"\n";
    cout<<"\n";

    int iRet5 = sobj1.SumAll();
    cout<<"Summation of All Elements is : "<<iRet5<<"\n";

    cout<<"Enter Value To Search Last Occurance of\n";
    cin>>No3;
    int iRet6 = sobj1.SearchLast(No3);
    cout<<"Last Occurancec is At Position : "<<iRet6<<"\n";
    
    return 0;
} 