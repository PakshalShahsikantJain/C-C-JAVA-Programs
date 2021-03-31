import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public void Difference(int arr[])

    {
        int iCnt = 0;

        for(iCnt = 0;iCnt < arr.length;iCnt++)
        {
            if((arr[iCnt] % 5) == 0)
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
        int arr[] = {85,66,3,80,15,88};
        ArrayDemo obj;
        obj = new ArrayDemo();
        obj.Difference(arr);
    }
    
}

