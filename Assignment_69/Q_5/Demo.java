import java.lang.*;
import java.util.*;

class MyArray
{
    public int i = 0;
    public int j = 0;

    public void Display(int arr[])
    {
        System.out.println("Output : ");
        for(i = 0;i < arr.length;i++)
        {
            System.out.println();
            for(j = 0; j < arr[i];j++)
            {
                System.out.print("*\t");
            }
        }
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter How Many Elements You Want To Insert In Array : ");
        int No = sobj.nextInt();

        int arr[] = new int[No];

        System.out.println("Enter Elements in Array");
        for(int i = 0;i < No;i++)
        {
            arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.Display(arr);
    }
}