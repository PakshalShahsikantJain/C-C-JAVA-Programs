import java.lang.*;
import java.util.*;

class DemoString
{
    public int i = 0;
    public int j = 0;

    boolean StrCatStr(String str,String Dest)
    {
        char arr[] = str.toCharArray();
        char brr[] = Dest.toCharArray();

        while((arr[i] <= arr.length)||(brr[j]<= brr.length))
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

        System.out.println("Enter String");
        String str = sobj.nextLine();

        System.out.println("Enter Second String");
        String str2 = sobj.nextLine();

        StringBuffer s = new StringBuffer();
        s.append(str);

        StringBuffer s2 = new StringBuffer();
        s2.append(str2);

        DemoString dobj = new DemoString();
        boolean bRet = dobj.StrCatStr(str, str2);

        if(bRet == true)
        {
            System.out.println("Strings Are same");
        }
        else
        {
            System.out.println("Strings are Not Same");
        }
    }
}