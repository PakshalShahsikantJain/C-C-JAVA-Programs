import java.lang.*;
import java.util.*;

class MyArray
{
    public int i = 0;
    public int j = 0;
    public int iCnt = 0;
    public int iCnt2 = 0;

    public int Difference(String str)
    {
        char arr[] = str.toCharArray();
        for(i = 0;i < arr.length;i++)
        {
            if((arr[i] >= 'A')&&(arr[i] <= 'Z'))
            {
                iCnt++;            
            }
            else if((arr[i] >= 'a')&&(arr[i] <= 'z'))
            {
                iCnt2++;            
            }
        }

        System.out.println(iCnt + "-" + iCnt2);
        return iCnt - iCnt2;
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Characters");
        String str = sobj.nextLine();

        MyArray mobj = new MyArray();
        int Ret = mobj.Difference(str);
        System.out.println("Difference is : "+ Ret);
    }
}