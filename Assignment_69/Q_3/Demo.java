import java.lang.*;
import java.util.*;

class MyArray
{
    public int i = 0;
    public int j = 0;
    public int iCnt = 0;

    public int CountChar(String str)
    {
        char arr[] = str.toCharArray();
        for(i = 0;i < arr.length;i++)
        {
            if((arr[i] == 'B')||(arr[i] == 'b'))
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

        MyArray mobj = new MyArray();
        int Ret = mobj.CountChar(str);
        System.out.println("Count of Character is : "+ Ret);
    }
}