import java.lang.*;
import java.util.*;

class Count
{
    public int iCnt = 0;
    public int i = 0;

    public int ArrayCapital(String str)
    {
        char arr[] = str.toCharArray();

        for(i = 0;i < arr.length;i++)
        {
            if((arr[i] >= 'A')&&(arr[i] <= 'Z'))
            {
                iCnt++;
            }
        }

        return iCnt;
    }
}

class Demo 
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Characters");
        String str = sobj.nextLine();

        Count cobj = new Count();
        int Ret = cobj.ArrayCapital(str);
        System.out.println("No Of Capital Letters are : "+ Ret);
    }
}