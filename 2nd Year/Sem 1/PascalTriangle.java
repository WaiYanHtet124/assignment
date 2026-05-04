import java.util.Scanner;
class PascalTriangle {

    
    public static void main(String[] args)
    {
        @SuppressWarnings("resource")
    Scanner in=new Scanner(System.in);
          
        System.out.print("Enter number: ");
        int n = in.nextInt();
          for (int line = 1; line <= n; line++) {
            for (int j = 0; j <= n - line; j++) {

                System.out.print(" ");
            }

            int C = 1;
            for (int i = 1; i <= line; i++) {

                System.out.print(C + " ");
                C = C * (line - i) / i;
            }
            System.out.println();
    }
}
}