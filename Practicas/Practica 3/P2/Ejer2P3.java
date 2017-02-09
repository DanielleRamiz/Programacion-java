import java.util.Scanner;

public class Ejer2P3 {


	public static void main (String []args){

        int a;

		Scanner sc=new Scanner(System.in);
        System.out.println("Ingresa un numero ");
        a = sc.nextInt();// se queda esperando el ingreso de teclado

        if(a%2==0){// Condicion para poder entrar
             System.out.println(a+" Es par");
        }else{// En el caso de que no cumpla la condicionjava
            System.out.println(a+" Es impar");
        }      
     }

}