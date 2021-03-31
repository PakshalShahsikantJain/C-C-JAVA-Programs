import java.lang.*;
import java.util.*;

class MyArray
{
    public int i = 0;
    public int Digit = 0;
    public int Rev = 0;
    public int Value = 0;

    public boolean Chk(int arr[])
    {
        Value = arr[];
        for(i = 0;i < arr.length;i++)
        {
            Digit = arr[i] % 10;
            Rev = (Rev * 10) + Digit;
            arr[i] = arr[i] / 10;
        }

        if(Value == Rev)
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

        System.out.println("Enter How Many Elements You Want To Insert In Array : ");
        int No = sobj.nextInt();

        int arr[] = new int[No];

        System.out.println("Enter Elements in Array");
        for(int i = 0;i < No;i++)
        {
            arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        boolean bRet = mobj.Chk(arr);

        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}