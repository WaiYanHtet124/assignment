import java.util.*;
public class Test_Result {

  public static void main(String[] args) {
    // TODO Auto-generated method stub
Scanner sc=new Scanner(System.in);
int s1,s2,s3,s4,s5;

System.out.print("Enter the marks of subject1:");
s1 =sc.nextInt();

System.out.print("Enter the marks of subject2:");
s2 =sc.nextInt();

System.out.print("Enter the marks of subject3:");
s3 =sc.nextInt();

System.out.print("Enter the marks of subject4:");
s4 =sc.nextInt();

System.out.print("Enter the marks of subject5:");
s5 =sc.nextInt();
System.out.println();
System.out.println("Student Result.");

System.out.println("Subject1:"+s1);
System.out.println("Subject2:"+s2);
System.out.println("Subject3:"+s3);
System.out.println("Subject4:"+s4);
System.out.println("Subject5:"+s5);

if(s1>49 && s2>49 && s3>49 && s4>49 && s5>49  ) {
  System.out.println("Passed.");
}
else {
  System.out.println("Fail.");
}
System.out.println();
if(s1<49) {
  System.out.println("Subject1 is fail.");
}
if(s2<49) {
  System.out.println("Subject2 is fail.");
}
if(s3<49) {
  System.out.println("Subject3 is fail.");
}
if(s4<49) {
  System.out.println("Subject4 is fail.");
}
if(s5<49) {
  System.out.println("Subject5 is fail.");
}
  }

}