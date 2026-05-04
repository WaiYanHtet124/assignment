package Method;
import java.util.Scanner;
public class Pattern {

  public static void main(String[] args) {
           @SuppressWarnings("resource")
    Scanner in=new Scanner(System.in);
           System.out.print("Enter number : ");
           int num=in.nextInt();
           displayPattern(num);
  }
  public static int displayPattern(int n){
    int j = 1;
    for(int i=1;i<=n;i++){
      for(int s=n-i+1;s>0;s--){
        System.out.print(" ");
      }
      for( j=i;j>=1;j--){
        System.out.print(j);
        
      }
      System.out.println();
    }
    return j;
  }

}