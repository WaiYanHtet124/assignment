public class PalindromePrime {

  public static void main(String[] args) {
    int C=0;
    System.out.println("First 100 Palindromic Prime number: ");
       for(int i=0;i<1000;i++){
         if(Palindrome(i) && Prime(i)){
           C++;
           if(C%10==0){
           System.out.println(i+" ");
           }
           else System.out.print(i+" ");
         }
       }
  }
  public static int reverseNum(int num){
    int revNum=0;
    while(num!=0){
      
      revNum=revNum*10+(num%10);
      num=num/10;
    }
    return revNum;
  }
  public static boolean Palindrome(int num){
    boolean result=true;
    if(num==reverseNum(num)){
      result=true;
    }
    else result=false;
    return result;
  }
  public static boolean Prime(int num){
    boolean result=false;
    int flag=0, i=2;
    if(num==1 || num==0){
      result=false;
    }
    else {
      while(i<=num/2){
        if(num%i==0)
          flag=1;
          i++;
        
    }
      if(flag==1) {
        result=false;
      }
      else result=true;
      
    }
    return result;
  }
    
}