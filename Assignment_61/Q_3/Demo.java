import java.lang.*;
import java.util.*;

class DemoMax
{
    public int i = 0;
    public int j = 0;
    public int iMax = 0;

    public int Diagonal(int arr[][])
    {
        for(i = 0;i<arr.length;i++)
        {
            iMax = arr[i][0];
            for(j = 0;j<arr.length;j++)
            {
                if((i == j)&&(arr[i][j] > iMax))
                {
                    iMax = arr[i][j];
                }
            }
        }

        return iMax;
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
            System.out.println("Row with Index : "+ i);
            for(int j = 0;j < arr.length;j++)
            {
                System.out.println("Enter The Element :"+ i +" ,"+ j);
                arr[i][j] = sobj.nextInt();
            }
        }

        DemoMax dobj = new DemoMax();
        int iRet = dobj.Diagonal(arr);

        System.out.println("Maximum Number from Diagonal is"+iRet);
    }
}