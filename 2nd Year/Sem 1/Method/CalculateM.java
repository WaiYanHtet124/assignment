package Method;
public class CalculateM {

	  public static void main(String[] args) {
	    System.out.println("i      m(i)");
	         for(int i=10;i<=100;i++){
	           double result=calculateM(i);
	           System.out.println(i+"    "+result);
	         }
	  }
	    public static double calculateM(int num){
	      double sum=0.0,m;
	      int j;
	      for(j=0;j<num;j++){
	        m=4.0/(2*j+1);
	        if(j%2==0){
	          sum+=m;
	        }
	        else sum-=m;
	      }
	      return sum;
	    }
	}