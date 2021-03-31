import java.lang.*;
import java.util.*;

class DemoString
{
    public int i = 0;

    public boolean check(String str)
    {
        char arr[] = str.toCharArray();

        for(i = 0;i < arr.length-1 ;i++)
        {
            if((arr[i] == 'a')||(arr[i] == 'e')||(arr[i] == 'i')||(arr[i] == 'o')||(arr[i] == 'u'))
            {
                break;
            }
        }

        if((arr[i] == 'a')||(arr[i] == 'e')||(arr[i] == 'i')||(arr[i] == 'o')||(arr[i] == 'u'))
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

        DemoString obj = new DemoString();
        boolean bRet = obj.check(str);

        if(bRet == true)
        {
            System.out.println("String Contains Vowels");
        }
        else
        {
            System.out.println("String Does Not Contains Vowels");
        }
    }
}