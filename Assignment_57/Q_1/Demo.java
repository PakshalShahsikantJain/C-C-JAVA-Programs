import java.lang.*;
import java.util.*;

class DemoPattern
{
    void Pattern(int iRow,int iCol)
    {
        int i = 0;
        int j = 0;
        
        if((iRow < 0)&&(iCol < 0))
        {
            iRow = -iRow;
            iCol = -iCol;
        }

        for(i = 0;i<iRow ;i++)
        {
            System.out.println();
            for(j = 0;j<iCol;j++)
            {
                System.out.print("*\t");
            }
        }
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter Row Number");
        int Value = obj.nextInt();
        
        System.out.println("Enter Column Number");
        int Value2 = obj.nextInt();

        System.out.print("Ouput is :");

        DemoPattern dobj = new DemoPattern();
        dobj.Pattern(Value,Value2);
    }
}