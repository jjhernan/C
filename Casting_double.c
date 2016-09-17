#include <stdio.h>
int main (){
	int a,b;
	double cociente;

	printf("Ingrese 2 valores: \n");
	scanf("%d %d",&a,&b);
	if(b==0){
		printf("Error, no se puede dividir entre 0");
	}
	else{
		cociente =  (double) a/b;
		printf("%d /%d= %lf \n",a,b,cociente);
	}
		return 0;
}
