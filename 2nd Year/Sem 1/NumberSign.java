import java.util.Scanner;

public class NumberSign {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a one number: ");
        int num = in.nextInt();
        if(num<0){
            System.out.println("This is negative number.");
        }
        else if(num==0){
            System.out.println("This is zero.");
        }
        else{
            System.out.println("This is positive.");
        }
    }
}