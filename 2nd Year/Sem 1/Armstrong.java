public class Armstrong {

  public static void main(String[] args) {

    System.out.println("Armstrong number between 1 and 1000:");
    int i;
    for (i = 0; i < 1000; i++) {
      int Snum = 0, count = 0, temp, temp1, digit2;
      temp = i;
      while (temp != 0) {
        count++;
        temp = temp / 10;
      }
      temp1 = i;
      while (temp1 != 0) {
        digit2 = temp1 % 10;
        Snum += Math.pow(digit2, count);
        temp1 = temp1 / 10;
      }
      if (Snum == i) {
        System.out.print(i+" ");
        
      }
    }
  }

}