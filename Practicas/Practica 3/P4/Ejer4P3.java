import java.util.Scanner;
public class Ejer4P3 {

	public static void main (String [] args){

        int a;
        
		Scanner aa = new Scanner(System.in); 
		System.out.println("Meses del año");
		System.out.println("\t1. Enero");
		System.out.println("\t2. Febrero");
		System.out.println("\t3. Marzo");
		System.out.println("\t4. Abril");
		System.out.println("\t5. Mayo");
		System.out.println("\t6. Junio");
		System.out.println("\t7. Julio");
		System.out.println("\t8. Agosto");
		System.out.println("\t9. Septiembre");
		System.out.println("\t10. Octubre");
		System.out.println("\t11. Noviembre");
		System.out.println("\t12. Diciembre");

        System.out.println("Elija una opcion");
        a = aa.nextInt(); // se queda esperando el ingreso de teclado

// Switch Para elejir un opcion de las que esta adentro 
		switch(a){
			case 1:
			System.out.println("El mes de enero tiene 31 dias");
			break;
			case 2:
			System.out.println("El mes de febrero tiene 28 dias y 29 en años bisiestos que ocurre cada 4 años");
			break;
			case 3:
			System.out.println("El mes de marzo tiene 31 dias");
			break;
			case 4:
			System.out.println("El mes de abril tiene 30 dias");
			break;
			case 5:
			System.out.println("El mes de mayo tiene 31 dias");
			break;
			case 6:
			System.out.println("El mes de junioi tiene 30 dias");
			break;
			case 7:
			System.out.println("El mes de julio tiene 31 dias");
			break;
			case 8:
			System.out.println("El mes de agosto tiene 31 dias");
			break;
			case 9:
			System.out.println("El mes de septiembre tiene 30 dias");
			break;
			case 10:
			System.out.println("El mes de octubre tiene 31 dias");
			break;
			case 11:
			System.out.println("El mes de noviembre tiene 30 dias");
			break;
			case 12:
			System.out.println("El mes de diciembre tiene 31 dias");
			break;
			default:
			System.out.println("Opcion no vlida");
			break;

		}


	}
}