import java.lang.*;
import java.util.*;

class MyArray
{
    public int i = 0;
    public int j = 0;

    public void Display(int arr1[],int arr2[])
    {
        System.out.println("Even Elements of First Array Are : ");
        for(i = 0;i < arr1.length;i++)
        {
            if((arr1[i] % 2) == 1)
            {
                System.out.print(arr1[i] + "\t");
            }
        }

        System.out.println();

        System.out.println("Even Elements of Second Array Are : ");
        for(j = 0;j < arr2.length;j++)
        {
            if((arr2[j] % 2) == 1)
            {
                System.out.print(arr2[j] + "\t");
            }
        }
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