import java.util.Scanner;

public class Triangle {

  public static void main(String[] args) {
    @SuppressWarnings("resource")
    Scanner sc = new Scanner(System.in);
    int i, j, count = 0, n;
    System.out.print("Enter number of rows: ");
    n = sc.nextInt();
    for (i = 1; i <= n; i++) {
      for (j = 1; j <= i; j++) {
        System.out.print(++count + " ");
      }
      System.out.println();
    }

  }

}