import java.lang.*;
import java.util.*;

class DemoPattern
{
    public int i = 0;
    public int j = 0;

    public void Display(int iRow,int iCol)
    {
        for(i = 1; i <= iRow;i++)
        {
            System.out.println();
            for(j = 1;j <= iCol;j++)
            {
                if((i == 1)||(j == 1)||(i == iRow)||(j == iCol))
                {
                    System.out.print("*\t");
                }
                else if(i+j == 7)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print(" \t");
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

        System.out.println("Enter Number of Row's");
        int No = sobj.nextInt();

        System.out.println("Enter Number of Columns");
        int No2 = sobj.nextInt();

        DemoPattern dobj = new DemoPattern();
        dobj.Display(No,No2);
    }
}