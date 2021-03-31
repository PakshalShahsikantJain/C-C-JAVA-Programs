import java.lang.*;
import java.util.*;

class DemoMatrix
{
    public int i = 0;
    public int j = 0;

    public void SumCol(int arr[][])
    {
        int iSum = 0;

        for(i = 0;i < arr.length;i++)
        {
            for(j = 0; j < arr.length; j++)
            {
                iSum = iSum + arr[j][i];
            }
            System.out.println("Summation of Column No :"+ i +"is : "+ iSum);
            iSum = 0;  
        }
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
        
        int j = 0;

        System.out.println("Enter the Elements");
        for(int i = 0;i < arr.length;i++)
        {
            System.out.println("Column with Index : "+ i);
            for(j = 0;j < arr.length;j++)
            {
                System.out.println("Enter The Element :"+ i +" ,"+ j);
                arr[i][j] = sobj.nextInt();
            }
        }
        DemoMatrix mobj = new DemoMatrix();
        mobj.SumCol(arr);
    }
}