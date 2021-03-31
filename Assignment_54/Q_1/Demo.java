import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public int iCnt = 0;
    public int Digit = 0;

    public int Display(int No)
    {
        if(No < 0)
        {
            No = -No;
        }
        
        while(No != 0)
        {
            Digit = No % 10;
            if((Digit % 2) == 0)
            {
                iCnt++;
            }
            No = No / 10;
        }
        return iCnt;
    }
}

class Demo
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        int Value = sobj.nextInt();

        ArrayDemo obj;
        obj = new ArrayDemo();
        int Ret = obj.Display(Value);
        System.out.println(Ret);
    }
}