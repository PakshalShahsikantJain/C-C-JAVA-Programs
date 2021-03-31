import java.lang.*;
import java.util.*;

class MyArray
{
    public int i = 0;
    public int j = 0;
    public int Sum1 = 0;
    public int Sum2 = 0;

    public void Display(int arr1[],int arr2[])
    {
        for(i = 0;i < arr1.length;i++)
        {
            Sum1 = Sum1 + arr1[i];   
        }
        for(j = 0;j < arr2.length;j++)
        {
            Sum2 = Sum2 + arr2[j];
        }
        System.out.println("Summation of First Array And Second Array is : "+ Sum1+" , "+Sum2);
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter How Many Elements You Want in First Array");
        int No = sobj.nextInt();

        System.out.println("Enter How Many Elements you Want in Second Array");
        int No2 = sobj.nextInt();

        int arr1[] = new int[No];
        int arr2[] = new int[No2];

        System.out.println("Enter Elements in First Array : ");
        for(int i = 0;i < arr1.length;i++)
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.println("Enter Elements in Second Array : ");
        for(int j = 0;j < arr2.length;j++)
        {
            arr2[j] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.Display(arr1, arr2);
    }   
}