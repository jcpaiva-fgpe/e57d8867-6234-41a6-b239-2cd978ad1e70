import java.util.Scanner;

class solution { 
public static void main (String[] args){

	Scanner s = new Scanner(System.in);
	int n,i=2;
	boolean active = true;

	n = s.nextInt();

	while(i<(n/2+1)){ 
		if(n%i==0){ 
     		System.out.format("%d ", i);
     		active = false;
     	}
     i++; 
	}
	if (active)
		System.out.println("EMPTY");
	else
		System.out.println();
	}
}
