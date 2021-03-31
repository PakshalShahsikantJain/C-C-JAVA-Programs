import java.lang.*;
import java.util.*;

class MyArray
{
    public int i = 0;

    public void Display(int arr[])
    {
        System.out.println("Output : ");
        for(i = 0;i < arr.length;i++)
        {
            if(arr[i] < 35)
            {
                System.out.println(arr[i] + " : " + "Fail");
            }
            else if(arr[i] < 50)
            {
                System.out.println(arr[i] + " : " + "Pass Class");
            }
            else if(arr[i] < 60)
            {
                System.out.println(arr[i] + " : " + "Second Class");
            }
            else if(arr[i] < 70)
            {
                System.out.println(arr[i] + " : " + "First Class");
            }
            else if(arr[i] > 70)
            {
                System.out.println(arr[i] + " : " + "First Class Destinction");
            }
        }
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter How many Elements you want in Array");
        int No = sobj.nextInt();

        int arr[] = new int[No];

        System.out.println("Enter Elements in Array");
        for(int i = 0;i < arr.length;i++)
        {
            arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.Display(arr); 
    }
}