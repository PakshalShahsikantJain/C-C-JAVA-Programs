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
        for(i = 1;i <= iRow;i++)
        {
            System.out.println();
            for(j = 0;j < iCol;j++)
            {
                System.out.print(i + "\t");
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
        int iRow = sobj.nextInt();

        System.out.println("Enter Column Number");
        int iCol = sobj.nextInt();

        DemoPattern dobj = new DemoPattern();
        dobj.Display(iRow,iCol);
    }
}