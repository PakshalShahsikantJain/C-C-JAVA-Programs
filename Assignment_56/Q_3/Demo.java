import java.lang.*;
import java.util.*;

class DemoString
{
    public int i = 0;
    public int iCnt = 0;
    public int j = 0;

    public int Difference(String str)
    {
        char arr[] = str.toCharArray();
        for(i = 0; i < arr.length;i++)
        {
            if((arr[i]>= 'A')&&(arr[i] <= 'Z'))
            {
                iCnt++;
            }

            else if((arr[i]>= 'a')&&(arr[i] <= 'z'))
            {
                j++;
            }
        }
        return iCnt - j;
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        DemoString dobj = new DemoString();
        int Ret = dobj.Difference(str);

        System.out.println("Number of Small Characters are : " + Ret);
    }
}