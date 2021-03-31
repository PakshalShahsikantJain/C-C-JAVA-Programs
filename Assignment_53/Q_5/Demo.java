import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public int iCnt = 0;
    public void Display(int arr[])
    {
        System.out.println("Elements Are");
        for(iCnt = 0;iCnt < arr.length;iCnt++)
        {
            if((arr[iCnt] % 11) == 0)
            {
                System.out.println(arr[iCnt]);
            }
        }
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of Elements");
        int Size = sobj.nextInt();

        if(Size < 0)
        {
            Si
        }

        int arr[] = new int[Size];

        System.out.println("Enter Array Elements");

        for(int i = 0;i < arr.length;i++)
        {
            arr[i] = sobj.nextInt();
        }

        ArrayDemo obj;
        obj = new ArrayDemo();
        obj.Display(arr);
    }
}