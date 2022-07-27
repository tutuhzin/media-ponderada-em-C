 #include <stdio.h>
 
int main() {
	
	double x1;
	double x2;
	double peso1;
	double peso2;
	double mp;
	double soma;

  scanf ("%lf %lf %lf %lf", &mp, &x2, &peso1, &peso2, &soma);

  soma=( ( mp * ( peso1 + peso2 ) )- ( x2 * peso2 ) ) / peso1;   // media ponderada; 
  
  printf ("%lf", soma);

	return 0;
}

