import java.util.Scanner;
public class Ejer4P4{
	
	public static void main (String[]args){
	
	Scanner reader = new Scanner(System.in);

	int numero1 = 0;
	int numero2 = 0;
	int res= 0;
	
	System.out.println("Introduce el primer numero:");	// primer numero ingresado		
	numero1 = reader.nextInt();
 
	System.out.println("Introduce el segundo numero:");  // segundo nmero ingresado
	numero2 = reader.nextInt();

	

	res = numero1+numero2; // suma de los muneros 
	System.out.println("La suma es " + numero1 + " + " + numero2 + " = " + res);
 
		
	}
}