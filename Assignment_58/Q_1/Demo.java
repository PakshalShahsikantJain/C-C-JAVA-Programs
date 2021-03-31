import java.lang.*;
import java.util.*;

class DemoPattern
{
    public int i  = 0;
    public int j = 0;
    public char ch = '\0';
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
            for(j = 1;j <= iCol;j++)
            {
                for(ch = 'A';ch <= 'D';ch++)
                {
                    System.out.print(ch + "\t");
                }
                break;
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

        System.out.println("Enter Col Number");
        int Value2 = sobj.nextInt();

        DemoPattern dobj = new DemoPattern();
        dobj.Display(Value, Value2);
    }
}