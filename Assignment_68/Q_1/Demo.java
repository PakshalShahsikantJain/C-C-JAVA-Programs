import java.lang.*;
import java.util.*;

class MyArray
{
    public int i = 0;
    public int Digit = 0;
    public int Rev = 0;

    public void Display(int arr[])
    {
        System.out.println("Elements of First Array Are");
        while(i < arr.length)
        {
            Digit = arr[i] % 10;
            Rev = (Rev * 10) + Digit;
            arr[i] = arr[i] / 10;
            i++;
        }
        System.out.println(arr[Rev] + "\t");
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