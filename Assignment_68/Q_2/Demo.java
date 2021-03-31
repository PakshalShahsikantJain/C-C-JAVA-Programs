import java.lang.*;
import java.util.*;

class MyArray
{
    public int i = 0;
    public int Sum = 0;
    public int Digit = 0;

    public void Display(int arr[])
    {
        for(i = 0;i < arr.length;i++)
        { 
            Sum = Sum + arr[i] % 10;
        }
        arr[i] = arr[i] / 10;

        System.out.println(Sum);
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter How Many Elements You Want in First Array");
        int No = sobj.nextInt();

        int arr[] = new int[No];
        System.out.println("Enter Elements in First Array : ");
        for(int i = 0;i < arr.length;i++)
        {
            arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.Display(arr);
    }   
}