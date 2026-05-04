public class Emirp {

  public static void main(String[] args) {
    int C=0;
    System.out.println("First 100 Emirp: ");
       for(int i=12;i<400;i++){
         if(Prime(i) && revPrime(i)){
           C++;
           if(C%10==0){
           System.out.println(i+" ");
           }
           else System.out.print(i+" ");
         }
       }
  }
  
  public static int reverse(int num){
    int revNum=0;
    while(num!=0){
      revNum=revNum*10+(num%10);
      num=num/10;
    }
    return revNum;
  }
  
  public static boolean Prime(int num){
    boolean result=false;
    int i=2,flag=0;
    if(num==0 || num==1){
      result=false;
    }
    else {
      while(i<=num/2){
        if(num%i==0)
          flag=1;
          i++;
        
      }
      if(flag==1){
        result=false;
      }
      else result=true;
    }
    return result;
  }
  public static boolean revPrime(int num){
    boolean Y=false;
    int n=reverse(num);
    if(Prime(n)){
      Y=true;
    }
    else Y=false;
    return Y;
  }

}