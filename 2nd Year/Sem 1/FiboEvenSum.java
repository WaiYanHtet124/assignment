import java.util.Scanner;
public class FiboEvenSum {

  public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.print("Enter number : ");
            int n=sc.nextInt();
            int num1=0,num2=1,num3=0,sum=0,count=0;
            System.out.print("\nThe Fibonacci Series is : ");
            int i=0;
            while(count<n){
              System.out.print(num1+" ");
              num3=num1+num2;
              if(i%2!=0){
                sum+=num3;count++;
              }
              num1=num2;
              num2=num3;
              i++;
              
              
            }
            System.out.println("\nSum = "+sum);
  }

}