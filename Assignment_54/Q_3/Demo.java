import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public int iCnt = 0;
    public int Digit = 0;

    public int Display(int iNo)
    {
        while(iNo != 0)
        {
            Digit = iNo % 10;
            if((Digit > 3)&&(Digit < 7))
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
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