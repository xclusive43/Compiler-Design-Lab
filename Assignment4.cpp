/*write a prgram to count the number of whitespaces and newline
written by Ajay Prajapati*/
#include<stdio.h>
#include<string.h>

main(){
	 
	 char data[100];
	 int whitespace=0,newline=0;
	 printf("enter a paragraph and press dot and hit enter save:\n");
	 scanf("%[^.]",data);
	 
	for(int  i=0;i<strlen(data);i++){
		
		if(data[i]=='\n'){
			newline++;
			whitespace++;
		}
		if(data[i]==' '){
			whitespace++;
		}
		
		 
	}
	
	printf("new Line : %d\nwhitescape : %d",newline,whitespace);
	 
}
