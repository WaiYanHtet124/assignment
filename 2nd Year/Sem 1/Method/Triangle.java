package Method;
import java.util.Scanner;

public class Triangle {

  public static void main(String[] args) {
    @SuppressWarnings("resource")
    Scanner sc = new Scanner(System.in);

    System.out.print("Input number of rows : ");
    int n = sc.nextInt();

    triangle(n);

  }

  public static void triangle(int n) {
    int i, j, C = 0;
    for (i = 1; i <= n; i++) {
      for (j = 1; j <= i; j++) {
        System.out.print(++C + " ");
      }
      System.out.println();
    }
  }

}