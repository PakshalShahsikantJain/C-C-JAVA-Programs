import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public int iCnt = 0;
    public int Digit = 0;
    public int Even = 0;
    public int ODD = 0;

    public int Display(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        {
            Digit = iNo % 10;
            if((Digit % 2) == 0)
            {
                Even = Even + Digit;
            }
            else
            {
                ODD = ODD + Digit;
            }
            iNo = iNo / 10;
        }
        return Even - ODD;
    }
}

class Demo
{
    public static void main(String args[])
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