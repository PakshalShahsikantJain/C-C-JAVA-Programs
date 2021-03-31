import java.lang.*;
import java.util.*;

import javax.lang.model.util.ElementScanner14;

class MyArray
{
    public int i = 0;
    public void ArrayReplace(String str)
    {
        char arr[] = str.toCharArray();
        for(i = 0;i < arr.length;i++)
        {
            if(arr[i] == 'B')
            {
                System.out.print("b\t");
            }
            else if(arr[i] == 'N')
            {
                System.out.print("n\t");
            }
            else if(arr[i] == 'A')
            {
                System.out.print("a\t");
            }
            else if(arr[i] == 'G')
            {
                System.out.print("g\t");
            }
            else if(arr[i] == 'R')
            {
                System.out.print("r\t");
            }
            else
            {
                System.out.print(arr[i] + "\t");
            }
        }

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
        mobj.ArrayReplace(str);
    }
}