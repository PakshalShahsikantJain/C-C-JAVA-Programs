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
        for(i = 0;i < iRow;i++)
        {
            System.out.println();

            for(j = iCol;j > 0 ;j--)
            {
                System.out.print(j + "\t");
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

        System.out.print("Output is : ");

        DemoPattern  dobj = new DemoPattern();
        dobj.Display(Value, Value2);
    }


} 