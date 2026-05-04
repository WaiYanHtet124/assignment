package Method;
import java.util.Scanner;

public class PascalTriangle {

  public static void main(String[] args) {
    @SuppressWarnings("resource")
    Scanner in = new Scanner(System.in);
    System.out.print("Enter number : ");
    int n = in.nextInt();
    pascalTriangle(n);
  }

  public static int pascalTriangle(int num) {
    int C = 0;
    for (int line = 1; line <= num; line++) {
      for (int j = 0; j <= num - line; j++) {
        System.out.print(" ");
      }
      C = 1;
      for (int i = 1; i <= line; i++) {
        System.out.print(C + " ");
        C = C * (line - i) / i;
      }
      System.out.println();

    }
    return C;

  }

}