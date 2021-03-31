import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public int iCnt = 0;
    public int Digit = 0;
    public int Mult = 1;

    public int Display(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        {
            Digit = iNo % 10;
            Mult = Mult * Digit;
            iNo = iNo / 10;
        }
        return Mult;
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj;
        sobj = new Scanner(System.in);

        System.out.println("Enter Number");
        int Value = sobj.nextInt();

        ArrayDemo obj;
        obj = new ArrayDemo();
        int Ret = obj.Display(Value);
        System.out.println("Multiplication is : " + Ret);
    }
}