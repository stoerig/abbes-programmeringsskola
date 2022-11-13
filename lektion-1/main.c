#include <stdio.h> //samma sak som import i Java. Vi använder stdio.h (standard input output) för att skriva till output
#include <stdbool.h> // bool (true false) är inte en standard inkluderad typ i C. man använde 0 och 1 back in the days.

#define NUMBER_OF_NUMBERS 10

// den här funktionen tar en array med NUMBER_OF_NUMBERS element, och anropar metoden "input_function" på alla element.
// den parametern, input_function är något som heter en. FUNCTION POINTER. det är alltså en adress till en funktion.
// så när den sen anropas på numret i array, så anropas funktionen som vilken funktion som helst.
void map(int numbers[NUMBER_OF_NUMBERS], void (*input_function)(int*))
{
	for (int i = 0; i < NUMBER_OF_NUMBERS; i++)
	{
		input_function(&numbers[i]);
	}
}


// Hjälp-funktioner som printar arrayen
bool is_last_iteration(int iteration, int array_size)
{
	return iteration == array_size - 1;
}

void print_numbers_array(int numbers[])
{
	printf("[");
	for (int i = 0; i < NUMBER_OF_NUMBERS; i++)
	{
		printf("%d", numbers[i]);
		if (!is_last_iteration(i, NUMBER_OF_NUMBERS)){ // vi printar ett mellanrum mellan numrerna
			printf(" ");
		}
	}
	printf("]\n");
}

// en exempel funktion som tar emot en pointer/pekare/adress till en int och gångrar den med fyra
void quadruple_it(int *num)
{
	*num = *num * 4;
	// *num betyder: ge mig minnet som num pekar på (alltså inten) så nu har vi den på vänster sida som vilken variabel som helst.
	// *num * 4 betyder: ge mig minnet som num pekar på, alltså inten, och gångra det med 4)
	// hela uttrycket  *num = *num * 4; betyder: lägg resultatet av num gånger fyra, i minnet som num pekar på.
	

	// hade det varit en vanlig int och inte en pointer till en int, hade du skrivit det såhär:
	// num = num * 4
	// men det här med pekaren gör alltså precis samma sak.
}

int main(int argc, char** argv)
{
	int numbers[NUMBER_OF_NUMBERS] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	print_numbers_array(numbers);
	map(numbers, quadruple_it);
	// anropa map-funktionen med en funktion som delar talet int pointern pekar på med fyra. 
	// Du ska alltså få listan att se likadan ut igen.
	print_numbers_array(numbers);

	return 0;
}


