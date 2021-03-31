import java.lang.*;
import java.util.*;

class DemoPattern
{
    public int i = 0;
    public int j = 0;

    void Display(int iRow,int iCol,String str)
    {
        if((iRow < 0)&&(iCol < 0))
        {
            iRow = -iRow;
            iCol = -iCol;
        }

        char arr[] = str.toCharArray();

        for(i = 0;i < iRow;i++)
        {
            System.out.println();
            for(j = 0;j < iCol;j++)
            {
                if(j >= i)
                {
                    System.out.print(arr[j] + "\t");
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
        
        System.out.println("Enter String");
        String str = sobj.nextLine();

        System.out.println("Enter Row Number");
        int Value = sobj.nextInt();

        System.out.println("Enter Col Number");
        int Value2 = sobj.nextInt();

        DemoPattern obj = new DemoPattern();
        obj.Display(Value, Value2,str);
    }
}