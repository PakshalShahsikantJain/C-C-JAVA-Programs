import java.lang.*;
import java.util.*;

class DemoMatrix
{
    public int i = 0;
    public int j = 0;
    public int Sum = 0;

    public void Display(int arr[][],int iRow,int iCol)
    {
        for(i = 0;i < iRow;i++)
        {
            System.out.println();
            for(j = 0; j < iCol;j++)
            {
                if((i == 1)||(j == 1)||(i == iRow)||(j == iCol))
                {
                    Sum = Sum + arr[i][j];
                }
                System.out.print(arr[i][j] + "\t");
            }
        }
        System.out.println("Summation of Border Element is" + Sum);
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Row Number");
        int row = sobj.nextInt();

        System.out.println("Enter Column Number");
        int Col = sobj.nextInt();

        int arr[][] = new int[row][Col];
        
        System.out.println("Enter Elements");
        for(int i = 0;i < arr.length;i++)
        {
            System.out.println("Row With Index : "+i);
            for(int j = 0; j < arr.length;j++)
            {
                System.out.println("Enter Elements in Index"+ i + " , "+ j);
                arr[i][j] = sobj.nextInt();
            }
        }

        DemoMatrix dobj = new DemoMatrix();
        dobj.Display(arr,row,Col);
    }
}