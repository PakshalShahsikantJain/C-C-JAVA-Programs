import java.lang.*;
import java.util.*;

class DemoString
{
    public int iCnt = 0;
    public int i = 0;
    int Display(String str)
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

        System.out.println("Enter String");
        String str = sobj.nextLine();

        DemoString dobj = new DemoString();
        int Ret = dobj.Display(str);
        System.out.println("Number of Capital Letter Are : "+ Ret);
    }
}