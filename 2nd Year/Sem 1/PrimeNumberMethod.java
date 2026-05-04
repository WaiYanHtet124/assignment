
public class PrimeNumberMethod {
	static boolean isPrime(int number){
		boolean result = false;
		int prime=1,i=2;
		while(i<number/2){
			if(number%i==0){
				result=false;
			}
		}
	}
}
