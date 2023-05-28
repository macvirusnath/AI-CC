import java.util.Scanner;
class SelectionSort
{
  public static void main(String args[])
  {
     Scanner sc = new Scanner(System.in);
     int[] arr=new int[5];
     int temp;
     System.out.println("enter the array elements");
     for(int i=0;i<5;i++)
     {
      arr[i]=sc.nextInt();
     }
     System.out.println("entered array elements are ");
    for(int i=0;i<5;i++)
    {
     System.out.println(arr[i]+" ");
    }
    System.out.println("sorted array elements are ");
    for(int i=0;i<5;i++)
    {
      for(int j=i+1;j<5;j++)
      if(arr[i]>arr[j])
       {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
       }
    }
  //logic to print the sorted array
   for(int i=0;i<5;i++)
    {
     System.out.println(arr[i]+" ");
    }
    sc.close();
  }
 
}