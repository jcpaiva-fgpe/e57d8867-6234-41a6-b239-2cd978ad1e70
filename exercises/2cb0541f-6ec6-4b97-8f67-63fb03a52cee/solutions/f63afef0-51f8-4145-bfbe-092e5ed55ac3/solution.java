import java.util.Scanner;

class solution { 
public static void main (String[] args){

	Scanner s = new Scanner(System.in);
	int xa,ya,xb,yb; 

	xa = s.nextInt();
	ya = s.nextInt();
	xb = s.nextInt();
	yb = s.nextInt();

	if(xa==xb || ya==yb || (Math.abs(xa-xb)==Math.abs(ya-yb))) 
	     System.out.println("CATCH"); 
	else 
		System.out.println("NOT CATCH"); 
	}
}
