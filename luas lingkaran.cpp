#include <stdio.h>
int main()
{
	int jari;
	float luas, keliling;
	printf ("input jari-jari lingkaran :");
	scanf ("%i", &jari);
	
	//rumus
	luas = 3.14*jari*jari;
	keliling =2*3.14*jari;
	
	printf ("\nluas dan keliling lingkaran");
	printf ("\njari-jari \t = %i",jari);
	printf ("\nluas \t = %.2f",luas);
	printf ("\n keliling \t = %.2f",keliling);
	
	return 0;
}
