import java.lang.*;
import java.util.*;

class DemoString
{
    public int i = 0;
    public int j = 0;

    void StrCatStr(String str,String Dest,int iCnt)
    {
        char arr[] = str.toCharArray();
        char brr[] = Dest.toCharArray();

        for(i = 0;i<arr.length;i++)
        {
            System.out.print(arr[i]);
        }
        System.out.print(" ");

        for(j = 0;j<= iCnt;j++)
        {
            System.out.print(brr[j]);
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

        System.out.println("Enter Number To Concat Characters From Second String");
        int Value = sobj.nextInt();

        StringBuffer s = new StringBuffer();
        s.append(str);

        StringBuffer s2 = new StringBuffer();
        s2.append(str2);

        DemoString dobj = new DemoString();
        dobj.StrCatStr(str, str2,Value);
    }
}