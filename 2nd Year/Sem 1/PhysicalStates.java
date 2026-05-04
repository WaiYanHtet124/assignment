import java.util.Scanner;

public class PhysicalStates {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Temperature (degree): ");
        double degree = in.nextDouble();
        if(degree<0){
            System.out.println("This is Solid.");
        }
        else if(degree>0 && degree<100){
            System.out.println("This is liquid.");
        } else {
            System.out.println("This is Gaseous state.");
        }

    }
}