import java.util.Scanner;

class solution { 
public static void main (String[] args){

	Scanner s = new Scanner(System.in);
	int a,b,i,j; 
	boolean primo=true; 

	a = s.nextInt();
	b = s.nextInt();

	if (a>b){ 
	     j=a; 
	     a=b; 
	     b=j; 
	} 
	for (j=a;j<=b;j++){ 
		for (i=2;i<=(j/2);i++){ 
	     if (j%i==0){ 
	          primo=false; 
	          break; 
	          } //fine if
	     }//fine for i 
     if (primo)
     	System.out.format("%d ", j);


     primo=true; 
     }
     System.out.println();
	}
}
