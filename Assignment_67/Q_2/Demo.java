import java.lang.*;
import java.util.*;

class MyArray
{
    public int i = 0;
    public int j = 0;
    public int Min1 = 0;
    public int Min2 = 0;


    public void Display(int arr1[],int arr2[])
    {
        Min1 = arr1[i];
        for(i = 0;i < arr1.length;i++)
        {
            if(arr1[i] < Min1)
            {
                Min1 = arr1[i];
            }
        }
        System.out.println("Minimum Element in Array One is : " + Min1);
       
        Min2 = arr2[j];
        for(j = 0;j < arr2.length;j++)
        {
            if(arr2[j] < Min2)
            {
                Min2 = arr2[j];
            }
        }
        System.out.println("Mimimum Element in Array Second is : " + Min2);
    }
}

class Demo
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter How Many Elements You Want To Insert In First Array");
        int No = sobj.nextInt();

        System.out.println("Enter How many Elements You Want To Insert In Secobd Array");
        int No2 = sobj.nextInt();

        int arr1[] = new int[No];
        int arr2[] = new int[No2];

        System.out.println("Enter Elements in First Array");
        for(int i = 0;i < No;i++)
        {
            arr1[i] = sobj.nextInt();
        }
        
        System.out.println("Enter Elemnts in Second Array");
        for(int j = 0; j < No2;j++)
        {
            arr2[j] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.Display(arr1, arr2);
    }
}