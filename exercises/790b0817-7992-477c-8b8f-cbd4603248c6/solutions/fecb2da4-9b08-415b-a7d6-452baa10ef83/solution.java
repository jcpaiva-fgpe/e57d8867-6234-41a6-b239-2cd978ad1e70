import java.util.Scanner;

class solution { 
public static void main (String[] args){

	Scanner s = new Scanner(System.in);
	double a,b,c,d,j; 
	boolean intersec=true; 

	a = s.nextDouble();
	b = s.nextDouble();
	c = s.nextDouble(); 
	d = s.nextDouble();
	if(a > b){
	     j=a; 
	     a=b; 
	     b=j; 
	} 
	if(c > d){
	     j=c; 
	     c=d; 
	     d=j; 
	} 
	
	if(b < c || d < a) 
		intersec=false; 
	if(intersec)
		System.out.println("INTERSECT"); 
	else System.out.println("NOT INTERSECT"); 
	}
}
