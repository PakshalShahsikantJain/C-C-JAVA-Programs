import java.lang.*;
import java.util.*;

class Numbers
{
    public int iCnt = 0;

    public void Display(int arr[],int No1,int No2)
    {
        System.out.println("Elements are");
        for(iCnt = 0;iCnt < arr.length;iCnt++)
        {
            if((arr[iCnt] > No1)&&(arr[iCnt] < No2))
            {
                System.out.println(arr[iCnt]);
            }
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

        System.out.println("Enter Starting Number");
        int Value1 = sobj.nextInt();
        System.out.println("Enter Ending Number");
        int Value2 = sobj.nextInt();

        Numbers obj = new Numbers();
        obj.Display(arr,Value1,Value2);
    }
}