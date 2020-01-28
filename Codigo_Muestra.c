#include <stdio.h>
#include <math.h>



 int main(){
 	
 	int cont,num1,num2,res;
 	
 	printf("Ingrese un nuemro:  ");
 	scanf("%i",&num1);
 	printf("Ingrese a que exponente desea elevarlo:  ");
 	scanf("%i",&num2);
 	
 	
 	for(cont=0;cont<=num2;cont++){
 		printf("%i^%i = %i\n",num1,cont,res=pow(num1,cont));
	 }
 	system("pause");
 	return 0;
 }

