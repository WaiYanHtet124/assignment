import java.util.Scanner;
public class Eg1 {
public static void main(String[] args) {
	int lottery=(int)(Math.random()*100);
	Scanner in=new Scanner(System.in);
	
	System.out.println("Enter your lottery number:");
	int Lot=in.nextInt();
	int D1,D2,d1,d2;
	D1=lottery/10;
	D2=lottery%10;
	d1=Lot/10;
	d2=Lot%10;
	
	if(lottery==Lot){
		System.out.println("You won $10000");
	}
	else if((D1==d2)&&(D2==d1)){
		System.out.println("You won $3000");
	}
	else if((D1==d1)||(D1==d2)||(D2==d1)||(D2==d2)){
		System.out.println("You won $1000");
	}
	else{
		System.out.println("Try again");
	}
}
}
