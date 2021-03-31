import java.lang.*;
import java.util.*;

class Number
{
    public int iCnt = 0;
    public int Mult = 1;

    public int Display(int arr[])
    {
        System.out.println("Multiplication is : ");
        for(iCnt = 0;iCnt < arr.length;iCnt++)
        {
            if((arr[iCnt] % 2) == 1)
            {
                Mult = Mult * arr[iCnt];
            }
        }
        return Mult;
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

        Number obj = new Number();
        int Ret = obj.Display(arr);
        System.out.println(Ret);
    }
}