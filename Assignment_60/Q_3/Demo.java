import java.lang.*;
import java.util.*;

class DemoString
{
    public int i = 0;
    public int j = 0;
    boolean StrNcpyx(String src,String Dest,int iCnt)
    {
        char arr[] = src.toCharArray();
        char brr[] = Dest.toCharArray();

        while((i <= iCnt)||(j <= iCnt))
        {
            i++;
            j++;
        }

        if(arr[i] == brr[j])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String");
        String str = sobj.nextLine();

        System.out.println("Enter Second String");
        String str2 = sobj.nextLine();

        System.out.println("Enter Number of Character You Want to Check");
        int Value = sobj.nextInt();

        DemoString dobj = new DemoString();
        boolean bRet = dobj.StrNcpyx(str, str2,Value);

        if(bRet == true)
        {
            System.out.println("Strings Are Same");
        }
        else
        {
            System.out.println("Strings are Not Same");
        }
    }
}