#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <assert.h>
#include <stdlib.h>

int Input_num_lines (void);

int Input_num_numbers (void);

void NULL_ptr (int * arr);


void dynamic_array (void)
{

    int count = 0;

    int lines = Input_num_lines ();

    int* adr[lines] = {};


    while (count < lines ) {

        int max = Input_num_numbers ();

        int* arr = (int*) calloc (max , sizeof (int));

        NULL_ptr (arr);

        printf ("Введите значения\n");

        int i = 0;

        while (i < max && scanf ("%d" , & *(arr + i)) == 1) {

            adr[count] = arr;

            i++;
        }

        for (int j = 0 ; j < max ; j++)

            printf ("%d " , *((adr[count]) + j));

        free(arr);

        printf ("\n");

        count++;

    }
}


int Input_num_lines (void)
{
    int lines = 0;

    printf ("Введите число строчек : ");

    scanf (" %d" , &lines);

    printf ("\n");

    while (getchar() != '\n');

    return lines;
}


int Input_num_numbers (void)
{
    int max = 0;

    printf ("Введите максимальное количество чисел в строке : ");


        while (1) {


            if (scanf (" %d" , &max) != 1) {

                printf ("Некорректный ввод , попробуйте ещё раз ");

                while (getchar() != '\n');

            }

            else {

                while (getchar() != '\n');

                break;
            }
        }

    return max;
}

void NULL_ptr (int* arr)
{
     if (arr == NULL) {

            printf ("Выделить такое количество памяти не удалось");

            exit (EXIT_FAILURE);
        }
}















