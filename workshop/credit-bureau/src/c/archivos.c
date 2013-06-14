#include<stdio.h>
#include <string.h>
//este programa agrega una nueva cuenta de cliente en loans
main()
{
 FILE*fwriter;
 
 char buffer[256];
 char rfc[256]="\n23456XTEDG|117|JITENDER|INDIA|35000|30/6/2013|VERY GOOD|Y";
 
 fwriter=fopen("C:/Users/Usuario/Desktop/workshop/Loans.txt", "r+");
	if (fwriter == NULL)
		perror("Error no hay archivo");
		
	fseek(fwriter,0,SEEK_END);
	fprintf(fwriter,rfc);
	printf("Loan añadido");
	 
		
 	fclose (fwriter);
}