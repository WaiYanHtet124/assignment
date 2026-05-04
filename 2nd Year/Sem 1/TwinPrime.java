public class TwinPrime {

  public static void main(String[] args) {
    int i,j;
    System.out.println("Twin Primes less than 1000 : ");
    for(i=0;i<1000;i++){
      
      for(j=0;j<1000;j++){
        if((Prime(i)&&Prime(j))&& twoDiffer(i,j)){
          System.out.println("("+i+","+j+")");
        }
      }
    }
  }
    public static boolean Prime(int n){
      boolean a=true;
      int flag=0,i=2;
      if(n==1 || n==0){
        a=false;
      }
      else {
        while(i<=n/2){
          if(n%i==0)
            flag=1;
              i++;
        }
        if(flag==1) a=false;
        else a=true;
      }
      return a;
    }
    public static boolean twoDiffer(int n1,int n2){
      boolean D=false;
      if(n2-n1==2){
        D=true;
      }
      else D=false;
      return D;
    }
}