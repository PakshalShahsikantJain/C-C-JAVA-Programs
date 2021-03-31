import java.lang.*;
import java.util.*;

class Numbers
{
    public int iCnt = 0;

    public int Display(int arr[],int iNo)
    {
        for(iCnt = arr.length -1; iCnt >= 0 ;iCnt--)
        {
            if(arr[iCnt] == iNo)
            {
                break;
            }
        }

        if(iCnt == -1)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
    }
}

class Demo
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of Elements");
        int Size = sobj.nextInt();

        int arr[] = new int[Size];
        
        System.out.println("Enter Array Elements");
        for(int i = 0;i < arr.length;i++)
        {
            arr[i] = sobj.nextInt();
        }

        System.out.println("Enter Number to Search");
        int Value = sobj.nextInt();

        Numbers obj = new Numbers();
        int Ret = obj.Display(arr,Value);
        System.out.println("Output : " + Ret);
    }
}