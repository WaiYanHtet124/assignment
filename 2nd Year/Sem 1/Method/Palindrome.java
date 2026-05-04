package Method;
public class Palindrome {

	  public static void main(String[] args) {
	          int i;
	          for(i=0;i<1000;i++){
	            if(isPalindrome(i)){
	              System.out.println(i+" is Palindrome.");
	            }
	          }
	  }
	  public static int Reverse(int num){
	    int temp,reverse=0,result=1;
	    temp=num;
	    while(temp!=0){
	      result=temp%10;
	      reverse=(reverse*10)+result;
	      temp=temp/10;
	    }
	    return reverse;
	  }
	  public static boolean isPalindrome(int n){
	    if(n==Reverse(n)){
	      return true;    
	      }
	    else 
	    return false;
	    
	  }
	  

	}