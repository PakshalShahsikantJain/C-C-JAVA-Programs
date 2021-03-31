import java.lang.*;
import java.util.*;

import javax.lang.model.util.ElementScanner14;

class MyArray
{
    public int i = 0;
    public int iCnt = 0;

    public int CountVowels(String str)
    {
        char arr[] = str.toCharArray();
        for(i = 0;i < arr.length;i++)
        {
            if((arr[i] == 'a')||(arr[i] == 'e')||(arr[i] == 'o')||(arr[i] == 'u')||(arr[i] == 'i'))
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
        int Ret = mobj.CountVowels(str);
        System.out.println("Count of Vowels is : "+ Ret);
    }
}