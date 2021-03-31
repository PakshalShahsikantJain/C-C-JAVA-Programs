import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public int Difference(int arr[])

    {
        int iCnt = 0;
        int Even = 0;
        int ODD = 0;

        for(iCnt = 0;iCnt < arr.length;iCnt++)
        {
            if((arr[iCnt] % 2) == 0)
            {
                Even = Even + arr[iCnt];
            }
            else
            {
                ODD = ODD + arr[iCnt];
            }
        }
        return Even - ODD;
    }
}

class Demo
{
    public static void main(String args[]) 
    {
        int arr[] = {85,66,3,80,93,88 };
        ArrayDemo obj;
        obj = new ArrayDemo();
        int Ret = obj.Difference(arr);
        System.out.println(Ret);
    }
    
}

