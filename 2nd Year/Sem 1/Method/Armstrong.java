package Method;
public class Armstrong {

	  public static void main(String[] args) {
	          int i;
	          System.out.println("Armstrong number between 1 and 1000 : ");
	          for(i=0;i<1000;i++){
	            if(isArmstrong(i)){
	              System.out.print(i+" ");
	            }
	          }
	  }
	  public static int DigitCount(int num){
	    int count=0;
	    int temp;
	    temp=num;
	    while(temp!=0){
	      
	      count++;
	      temp=temp/10;
	    }
	    return count;
	  }
	  public static int Calculate(int a){
	    int C=DigitCount(a);
	    int temp,digit,Snum=0;
	    temp=a;
	    while(temp!=0){
	      digit=temp%10;
	      Snum+=Math.pow(digit,C);
	      temp=temp/10;
	    }
	    
	    return Snum;
	  }
	  public static boolean isArmstrong(int num){
	         int a=Calculate(num);
	         if(a==num){
	           return true;
	         }
	         else return false;
	  }
	}