public class  AscendingOdd{

  public static void main(String[] args) {
        for(int i=10;i<=99999;i++){
          if(isOdd(i)&& isAscending(i)){
          System.out.println(i+" ");
        }}
}

public static boolean isOdd(int n){
  int D=1;
  boolean odd=true;
  while(n!=0){
    D=n%10;
    n=n/10;
    if(D%2==0){
      odd=false;break;
    }
    else odd=true;
  }
  return odd;
}

public static boolean isAscending(int num){
  boolean Asc=true;
  int d=1,prev=10;
    while(num!=0){
      d=num%10;
      num/=10;
      if(d<prev){
        prev=d;
        Asc=true;
      }
      else {Asc=false;break;}
    }
    
  return Asc;

}  
}