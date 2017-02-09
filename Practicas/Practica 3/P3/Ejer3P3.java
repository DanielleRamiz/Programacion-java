import java.util.Scanner;

public class Ejer3P3{
	public static void main (String  [] args){


		int a ; // Declaracion
		Scanner S = new Scanner(System.in); 
		System.out.println("Introduce un numero");
		a = S.nextInt(); // se queda esperando el ingreso de teclado

		
// if anidado onde se puede cumplir una o atra concicion
		if (a == 1){
			System.out.println(a + "  El Mes del numero es Enero: ");
		}else if (a == 2){
			System.out.println(a + "  El Mes del numero es Febrero ");
		}else if (a == 3){
			System.out.println(a + "  El Mes del numero es Marzo ");
		}else if(a == 4){
			System.out.println(a + "  El Mes del numero es Abril ");
		}else if(a == 5){
			System.out.println(a + "  El Mes del numero es Mayo ");
		}else if (a == 6){
			System.out.println(a + "  El Mes del numero es Junio ");
		}else if(a == 7){
			System.out.println(a + "  El Mes del numero es Julio ");
		}else if (a == 8){
			System.out.println(a + "  El Mes del numero es Agosto ");
		}else if (a == 9){
			System.out.println(a + "  El Mes del numero es Septiembre ");
		}else if(a == 10){
			System.out.println(a + "  El Mes del numero es Octubre ");
		}else if (a == 11){
			System.out.println(a + "  El Mes del numero es Noviembre ");
		}else if (a == 12){
			System.out.println(a + "  El Mes del numero es Diciembre ");
		}else {
			System.out.println(a +"   El numero ingresado no es un mes ");
		}




	}
}