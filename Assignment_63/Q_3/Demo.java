import java.lang.*;
import java.util.*;

class DemoMatrix
{
    public int i = 0;
    public int j = 0;

    public void Display(int arr[][],int brr[][])
    {
        System.out.print("Main Matrix : ");
        for(i = 0;i < arr.length;i++)
        {
            System.out.println();
            for(j = 0;j < arr.length;j++)
            {
                brr[i][j] = arr[j][i];
                System.out.print(arr[i][j] + "\t");
            }
        }

        System.out.println();
        
        System.out.print("Transposed Matrix : ");
        for(i = 0;i < arr.length;i++)
        {
            System.out.println();
            for(j = 0;j < arr.length;j++)
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
        int Value = sobj.nextInt();

        System.out.println("Enter Column Number");
        int Value2 = sobj.nextInt();

        int arr[][] = new int[Value][Value2];
        int brr[][] = new int[Value][Value2];

        System.out.println("Enter The Elements");
        for(int i = 0;i < arr.length;i++)
        {
            System.out.println("Row No of Index is" + i);
            for(int j = 0;j < arr.length;j++)
            {
                System.out.println("Enter Elements in Row no"+ i +" , "+j);
                arr[i][j] = sobj.nextInt();
            }
        }

        DemoMatrix dobj = new DemoMatrix();
        dobj.Display(arr,brr);
    }
}