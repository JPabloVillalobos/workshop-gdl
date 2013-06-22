#include<stdio.h>
#include <string.h>
#include <sys/types.h>
#include <winsock2.h>
#include <unistd.h>
#include <stdlib.h>
//este programa busca el rfc y la fecha para poder cambiar el active 
main()
{
 FILE*fwriter;
 

 char buffer[256];
 char rfc[256]="23456XTEDG";
 char fecha[20]="30/15/2013";
 char Y[2]="Y";
 char N[2]="N";
 int cont1;
 char caracter;

 
 
 fwriter=fopen("C:/Users/Usuario/Desktop/workshop/Loans2.txt", "r+");
	if (fwriter == NULL)
		perror("Error no hay archivo \n");
	while(feof(fwriter) == 0 )
	{
		fgets(buffer,256,fwriter);
		if ((strstr(buffer,rfc)) && (strstr(buffer,fecha))){
				if (printf((caracter = fgetc(fwriter))) == Y[2]){ 
					fputc(N[2], fwriter);
					printf("RFC encontrado y loan cancelado");
					break;
				
				}

		}
	}
 	fclose (fwriter);
}