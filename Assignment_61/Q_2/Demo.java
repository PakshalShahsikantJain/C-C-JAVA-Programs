import java.lang.*;
import java.util.*;

class DemoMatrix
{
    public int i = 0;
    public int j = 0;
    public int iCnt = 0;

    public int Frequency(int arr[][],int iNo)
    {
        for(i = 0;i<arr.length;i++)
        {
            for(j = 0;j < arr[i].length;j++)
            {
                if(arr[i][j] == iNo)
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
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
        for(int i = 0;i< arr.length;i++)
        {
            System.out.println("Row with Index : "+ i);
            for(int j = 0;j< arr[i].length;j++)
            {
                System.out.println("Enter The Element :"+ i +" ,"+ j);
                arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Enter Number You Want to Count");
        int Value = sobj.nextInt();

        DemoMatrix dobj = new DemoMatrix();
        int Ret = dobj.Frequency(arr, Value);

        System.out.println("Frequency of Entered Number is"+ Ret);
    }
}