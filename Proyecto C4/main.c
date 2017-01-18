/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: LENOVO
 *
 * Created on 20 de noviembre de 2016, 01:02 AM
 */

#include <stdio.h>
#include <stdlib.h>


#define Fila 10
#define Col 10


void Comprobacion_final();

/*
 * 
 */
int main(int argc, char** argv) {
    char Tablero[Fila][Col];
    int i, j;
    int a;
    int x, y;
    int ganador = -1;


    printf("El juego de conecta 4 :\n");
    puts("");
    printf("Consiste en unir 4 casellas del mismo sombolo ('X' y 'O' ya sea diagonal, vertical o horizontal:\n)");
    puts("");



    for (i = 0; i < Fila; i++) {
        for (j = 0; j < Col; j++) {
            Tablero[i][j] = '\0';
        }
    }


    do {

        for (i = 0; i < Fila; i++) {
            for (j = 0; j < Col; j++) {

                printf("[ %c ]", Tablero[i][j]);
            }

            puts("");
        }

        a = 0;
        for (i = 0; i < Col; i++) {
            printf("  %d ", a);
            a++;
        }
        puts("");

        printf("Jugador uno tu turno:  ");
        scanf("%d", &x);
        //condicion para poner ficha en el tablero
        for (y = (Fila - 1); y >= 0; y--) {
            if (Tablero[y][x] == '\0' && Tablero[y][x] != 'X' && Tablero[y][x] != 'O') {
                Tablero[y][x] = 'X';
                y = -1;
            }
        }

        //imprime tablero actualizado
        for (i = 0; i < Fila; i++) {
            for (j = 0; j < Col; j++) {
                printf("[ %c ]", Tablero[i][j]);
            }
            puts("");
        }

        a = 0;
        for (i = 0; i < Col; i++) {
            printf("  %d ", a);
            a++;
        }
        puts("");
        Comprobacion_final();


        puts("Jugador dos tu turno:   ");
        scanf("%d", &x);
        //condicion para poner ficha en el tablero
        for (y = (Fila - 1); y >= 0; y--) {
            if (Tablero[y][x] == '\0' && Tablero[y][x] != 'X' && Tablero[y][x] != 'O') {
                Tablero[y][x] = 'O';
                y = -1;
            }
        }

        //imprime tablero actualizado
        for (i = 0; i < Fila; i++) {
            for (j = 0; j < Col; j++) {
                printf("[ %c ]", Tablero[i][j]);
            }
            puts("");
        }

        a = 0;
        for (i = 0; i < Col; i++) {
            printf("  %d ", a);
            a++;
        }
        puts("");
        Comprobacion_final();

    } while (Comprobacion_final);
    if(ganador == 1){
        printf("hdchd");
        
    }
    
   


    return (EXIT_SUCCESS);
}
/*

*/
void Comprobacion_final() {
    char Tablero[Fila][Col];
    int i, j; //Para el for, para recorrer el tablero
    int ganador; // -1: no gana nadie, 1: gana X , 0: gana O
    ganador = 1;

    for (i = 0; i < Fila; i++) {//Comprobar si hay cuatro en línea en horizontal
        for (j = 0; j < Col - 3; j++) {
            if (Tablero[i][j] == 'X' && Tablero[i][j + 1] == 'X' && Tablero[i][j + 2] == 'X' && Tablero[i][j + 3] == 'X')
                ganador = 0;
            else if (Tablero[i][j] == '0' && Tablero[i][j + 1] == '0' && Tablero[i][j + 2] == '0' && Tablero[i][j + 3] == '0')
                ganador = 1;
        }
    }
    if (ganador == -1) {
        //Comprobar si hay cuatro en línea en vertical
        for (i = 0; i < Fila - 3; i++) {
            for (j = 0; j < Col; j++) {
                if (Tablero[i][j] == 'X' && Tablero[i + 1][j] == 'X' && Tablero[i + 2][j] == 'X' && Tablero[i + 3][j] == 'X')
                    ganador = 0;
                else if (Tablero[i][j] == '0' && Tablero[i + 1][j] == '0' && Tablero[i + 2][j] == '0' && Tablero[i + 3][j] == '0')
                    ganador = 1;
            }
        }
    }

    if (ganador == 1) {
        //Comprobar si hay cuatro en línea en diagonal 1
        for (i = 0; i < Fila; i++) {
            for (j = 0; j < Col; j++) {
                if (i + 3 < Fila && j + 3 < Col) {
                    if (Tablero[i][j] == 'X' && Tablero[i + 1][j + 1] == 'X' && Tablero[i + 2][j + 2] == 'X' && Tablero[i + 3][j + 3] == 'X')
                        ganador = 0;
                    else if (Tablero[i][j] == '0' && Tablero[i + 1][j + 1] == '0' && Tablero[i + 2][j + 2] == '0' && Tablero[i + 3][j + 3] == '0')
                        ganador = 1;
                }
            }
        }
    }

    if (ganador == 1) {
        //Comprobar si hay cuatro en línea en diagonal 2
        for (i = 0; i < Fila; i++) {
            for (j = 0; j < Col; j++) {
                if (i + 3 < Fila && j - 3 >= 0) {
                    if (Tablero[i][j] == 'X' && Tablero[i + 1][j - 1] == 'X' && Tablero[i + 2][j - 2] == 'X' && Tablero[i + 3][j - 3] == 'X')
                        ganador = 0;
                    else if (Tablero[i][j] == '0' && Tablero[i + 1][j - 1] == '0' && Tablero[i + 2][j - 2] == '0' && Tablero[i + 3][j - 3] == '0')
                        ganador = 1;
                }
            }
        }
    }
}