import java.lang.*;
import java.util.*;

class DemoMatrix
{
    public int i = 0;
    public int j = 0;

    public void SumRow(int arr[][])
    {
        int iSum = 0;

        for(i = 0;i < arr.length;i++)
        {
            for(j = 0; j < arr.length; j++)
            {
                if(i == j)
                {
                    iSum = iSum + arr[i][j];
                }
            }    
        }
        System.out.println("Summation of Diagonal Element is :"+iSum);
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Rows");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number of Columns");
        int iCol = sobj.nextInt();

        int arr[][] = new int[iRow][iCol];

        System.out.println("Enter the Elements");
        for(int i = 0;i < arr.length;i++)
        {
            System.out.println("Row with Index : "+ i);
            for(int j = 0;j < arr[i].length;j++)
            {
                System.out.println("Enter The Element :"+ i +" ,"+ j);
                arr[i][j] = sobj.nextInt();
            }
        }
        DemoMatrix mobj = new DemoMatrix();
        mobj.SumRow(arr);
    }
}