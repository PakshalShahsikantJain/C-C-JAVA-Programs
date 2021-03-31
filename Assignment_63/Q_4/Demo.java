import java.lang.*;
import java.util.*;

class DemoMatrix
{
    public int i = 0;
    public int j = 0;
    public int Sum = 0;
    public int Root = 0;

    public void Display(int arr[][])
    {
        for(i = 0;i < arr.length;i++)
        {
            System.out.println();
            for(j = 0; j < arr.length;j++)
            {
                if(i == j)
                {
                    Sum = Sum + arr[i][j];
                }
                Root = (arr[i][j] * arr[i][j]) + arr[i][j];
                System.out.print(arr[i][j] + "\t");
            }
        }
        System.out.println();
        System.out.println("Summation of Diagonal Elemet is / Trace of Matrix is : "+ Sum);       
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
        for(int i = 0;i < arr.length;i++)
        {
            System.out.println("Row With Index No" + i);
            for(int j = 0;j < arr.length;j++)
            {
                System.out.println("Enter Elements in Row No" + i+","+ j);
                arr[i][j] = sobj.nextInt();
            }
        }

        DemoMatrix dobj = new DemoMatrix();
        dobj.Display(arr);
    }
}