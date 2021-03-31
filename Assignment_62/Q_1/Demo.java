import java.lang.*;
import java.util.*;

class DemoMatrix
{
    public int i = 0;
    public int j = 0;

    public void Display(int arr[][],int brr[][])
    {
        for(i = 0;i < arr.length;i++)
        {
            System.out.println();
            for(j = 0;j < brr.length;j++)
            {
                brr[i][j] = arr[j][i];
                System.out.print(brr[i][j] + "\t");
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

        System.out.println("Enter Col Number");
        int Col = sobj.nextInt();

        int arr[][] = new int[Row][Col];
        int brr[][] = new int[Row][Col];

        System.out.println("Enter Elemnts");
        for(int i= 0;i < arr.length;i++)
        {
            System.out.println("Column with Index : "+ i);
            for(int j = 0;j < arr.length;j++)
            {
                System.out.println("Enter The Element :"+ i +" ,"+ j);
                arr[i][j] = sobj.nextInt();
            }
        }

        DemoMatrix dobj = new DemoMatrix();
        dobj.Display(arr,brr);
    }
}