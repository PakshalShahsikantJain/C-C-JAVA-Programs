import java.lang.*;
import java.util.*;

class Numbers
{
    public int iCnt = 0;

    public boolean check(int arr[],int iNo)
    {
        for(iCnt = 0;iCnt < arr.length - 1;iCnt++)
        {
            if(arr[iCnt] == iNo)
            {
                break;
            }
        }

        if(arr[iCnt] == iNo)
        {
            return true;
        }
        else
        {
            return false;
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
        boolean bRet = obj.check(arr,Value);

        if(bRet == true)
        {
            System.out.println("Number is present in array");
        }
        else
        {
            System.out.println("Number is Not Present");
        }
    }
}