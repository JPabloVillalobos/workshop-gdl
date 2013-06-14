#include<stdio.h>
#include <string.h>
//este programa busca el rfc y la fecha para poder cambiar el active 
main()
{
 FILE*fwriter;
 
 char buffer[256];
 char rfc[256]="23456XTEDG";
 char fecha[20]="30/15/2013";
 char active[2]="Y";
 char desactive[2]="N";
 
 fwriter=fopen("C:/Users/Usuario/Desktop/workshop/Loans2.txt", "r+");
	if (fwriter == NULL)
		perror("Error no hay archivo \n");
	while(feof(fwriter) == 0 )
	{
		fgets(buffer,256,fwriter);
		if ((strstr(buffer,rfc)) && (strstr(buffer,fecha))){
			if(strrchr(buffer,active[2])){
				fputc(desactive[2],fwriter);
				printf("%s",buffer);
				printf("RFC encontrado");
				break;
			}
		}
	}
 	fclose (fwriter);
}