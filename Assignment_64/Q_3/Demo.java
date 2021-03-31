import java.lang.*;
import java.util.*;

class DemoPattern
{
    public int i = 0;
    public int j = 0;

    public void Display(String str,int Row,int Col)
    {
        char arr[] = str.toCharArray();

        for(i = 0 ;i <= Row;i++)
        {
            System.out.println();
            for(j = 0;j <= Col;j++)
            {
                if(i >= j)
                {
                    System.out.print(arr[j] + "\t");
                }
                else
                {
                    System.out.print("#" + "\t");
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

        System.out.println("Enter Column Number");
        int Value2 = sobj.nextInt();

        System.out.println("Output is : ");
        DemoPattern dobj = new DemoPattern();
        dobj.Display(str,Value,Value2);
    }
}