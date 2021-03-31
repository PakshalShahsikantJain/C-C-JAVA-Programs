import java.lang.*;
import java.util.*;

class DemoPattern
{
    public int i = 0;
    public int j = 0;

    void Display(int iRow,int iCol,String str)
    {
        char arr[] = str.toCharArray();

        if((iRow < 0)&&(iCol < 0))
        {
            iRow = -iRow;
            iCol = -iCol;
        }
        for(i = 1;i <= iRow;i++)
        {
            System.out.println();
            for(j = 0;j < arr.length;j++)
            {
               System.out.print(arr[j] + "\t");
            }
        }
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("ENter String");
        String str = sobj.nextLine();

        System.out.println("Enter Row Number");
        int Value = sobj.nextInt();

        System.out.println("Enter Col Number");
        int Value2 = sobj.nextInt();

        DemoPattern dobj = new DemoPattern();
        dobj.Display(Value,Value2,str);
    }
}