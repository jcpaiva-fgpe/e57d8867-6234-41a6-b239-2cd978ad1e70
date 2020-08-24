import java.util.*;

public class solution{
    public static void main(String[] args){
    	int Num, rem, quot, i=1, j;
    	
    	int bin_num[] = new int[100];  
    	Scanner SC = new Scanner(System.in); 
    	Num = SC.nextInt();  
         
    	quot = Num;  
         
    	while(quot != 0)  {  
    		bin_num[i++] = quot%2;  
    		quot = quot/2;  
    	}  
		
		String Str = "";

		for(j=i-1; j>0; j--)  {  
			Str = Str + bin_num[j];	
		}  
		i = Str.length()-1;
		
		while(Str.charAt(i)=='0') {
           i--;
		}

		int length = 0;
		int ctr = 0;

		for(; i>=0; i--){
			if(Str.charAt(i)=='1'){
				length = Math.max(length, ctr);
				ctr = 0;
			} 
			else{
				ctr++;
			}
		}

		length = Math.max(length, ctr);
		System.out.println(length);
    }
}
