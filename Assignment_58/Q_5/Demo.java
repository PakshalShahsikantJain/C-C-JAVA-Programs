import java.lang.*;
import java.util.*;

class DemoPattern
{
    public int i = 0;
    public int j = 0;
    public int iCnt = 1;

    void Display(int iRow,int iCol)
    {
        if((iRow < 0)&&(iCol < 0))
        {
            iRow = -iRow;
            iCol = -iCol;
        }
        for(i = 1;i<=iRow;i++)
        {
            System.out.println();
            for(j = 1;j<=iCol;j++)
            {
                System.out.print(iCnt + "\t");
                iCnt++;
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

        System.out.print("Output is : ");

        DemoPattern obj = new DemoPattern();
        obj.Display(Value, Value2);
    }
}