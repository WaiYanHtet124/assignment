public class Palindrome {

  public static void main(String[] args) {
    int i, reverse, result, temp, count = 0;
    for (i = 0; i < 1000; i++) {
      reverse = 0;
      result = 1;
      temp = i;
      while (temp != 0) {
        result = temp % 10;
        reverse = (reverse * 10) + result;
        temp = temp / 10;
      }
      if (i == reverse) {
        count++;
        if (count % 10 == 0) {
          System.out.println(i + " ");

        } else
          System.out.print(i + " ");
      }

    }
  }

}