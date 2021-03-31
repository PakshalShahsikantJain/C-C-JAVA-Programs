import java.lang.*;
import java.util.*;

class ArrayDemo
{
    void Display(int arr[])
    {
        int iCnt = 0;
        System.out.println("Elements are");
        
        for(iCnt = 0;iCnt < arr.length;iCnt++)
        {
            if(((arr[iCnt] % 2 ) == 0)&&((arr[iCnt] % 5) == 0))
            {
                System.out.println(arr[iCnt]);
            }
        }
    }
}

class Demo
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of elements");
		int size = sobj.nextInt();
		int arr[] = new int[size];
		System.out.println("Enter elements");
		for(int i = 0; i < arr.length; i++)
		{
			arr[i] = sobj.nextInt();
		}

		ArrayDemo aobj = new ArrayDemo();
		aobj.Display(arr); 
	}
}
