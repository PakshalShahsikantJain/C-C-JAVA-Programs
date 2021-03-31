import java.lang.*;
import java.util.*;

class DemoString
{
    public int i = 0;
    public int j = 0;

    public void Display(int arr[][])
    {
        for(i = arr.length;i > 0;i--)
        {
            for(j = arr.length;j > 0;j--)
            {
                System.out.print(arr[i][j] + "\t");
            }
        }
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Row Number");
        int Row = sobj.nextInt();

        System.out.println("Enter Column Number");
        int Col = sobj.nextInt();

        int arr[][] = new int[Row][Col];

        System.out.println("Enter Elements");
        for(int i = 0;i<arr.length;i++)
        {
            System.out.println("Row With Index"+i);
            for(int j = 0;j<arr.length;j++)
            {
                System.out.println("Enter The Element"+ i +","+j);
                arr[i][j] = sobj.nextInt();
            }
        }

        DemoString dobj = new DemoString();
        dobj.Display(arr);
    }
}