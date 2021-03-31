import java.lang.*;
import java.util.*;

class DemoPattern
{
    public int i = 0;
    public int j = 0;

    public void Display(int iRow,int iCol)
    {
        for(i = 1;i <= iRow;i++)
        {
            System.out.println();
            for(j = 1; j <= iCol;j++)
            {
                if(i+j == 5)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
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
        int No = sobj.nextInt();

        System.out.println("Enter Column Number");
        int No2 = sobj.nextInt();

        DemoPattern dobj = new DemoPattern();
        dobj.Display(No,No2);
    }
}