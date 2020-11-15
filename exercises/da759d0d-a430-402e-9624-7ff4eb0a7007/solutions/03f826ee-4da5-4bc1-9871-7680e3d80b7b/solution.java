import java.util.Scanner;

class solution { 
public static void main (String[] args){

	Scanner s = new Scanner(System.in);
	float a,b,c; 
	boolean isTriangle=true; 

	a = s.nextFloat();
	b = s.nextFloat();
	c = s.nextFloat();

	if((a>=(b+c))||(b>=(a+c))||(c>=(a+b))) 
		isTriangle=false; 

	if(isTriangle==true)
		System.out.println("YES");

	else
		System.out.println("NO");
	}
}
