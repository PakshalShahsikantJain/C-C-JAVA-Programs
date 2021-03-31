import java.lang.*;
import java.util.*;

class DemoPattern
{
    public int i = 0;
    public int j = 0;

    public void Display(int iRow,int iCol)
    {
        if((iRow < 0)&&(iCol < 0))
        {
            iRow = -iRow;
            iCol = -iCol;
        }
        for(i = 0;i<iRow;i++)
        {
            System.out.println();
            for(j = 0;j<iCol;j++)
            {
                if((j % 2) == 0)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("#\t");
                }
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