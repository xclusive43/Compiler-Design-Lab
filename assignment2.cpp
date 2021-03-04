/*Written By AJAY PRAJAPATI --> 18MCA02
 Q1.Write a Program to identify whether a given string is keyword or not.*/
#include <stdio.h> 
#include <string.h> 
int keywordchecker(char a[]);
void display(int c);
main(){
	
	char string[10];
	while(1){
		
		int b;
		printf("\nEnter your choice:\n1.continue 2.exit : \n");
		scanf("%d",&b);
		if(b==1){
		printf("\nEnter a String: ");
	    scanf("%s",&string);
		   int a =	keywordchecker(string);
		   display(a);
        }
		else if(b==2){
			 break;
		}
		else{
			break;
		}

       
	}

   //main();
}

int keywordchecker(char a[]){
	printf("%s : ",a);
	if(!strcmp(a,"int") ||!strcmp(a,"bool")  ||!strcmp(a,"char") ||!strcmp(a,"double")||!strcmp(a,"long")||
	   !strcmp(a,"sort")||!strcmp(a,"printf")||!strcmp(a,"scanf")||!strcmp(a,"main")  ||!strcmp(a,"if")  ||
	   !strcmp(a,"else")||!strcmp(a,"elseif")||!strcmp(a,"for")  ||!strcmp(a,"while") ||!strcmp(a,"do")  ||
	   !strcmp(a,"return")||!strcmp(a,"struct")||!strcmp(a,"void")||!strcmp(a,"float")||!strcmp(a,"switch")
	   ||!strcmp(a,"break")||!strcmp(a,"default")||!strcmp(a,"case")||!strcmp(a,"auto")||!strcmp(a,"signed")
	   ||!strcmp(a,"enum")||!strcmp(a,"strcmp")||!strcmp(a,"length")||!strcmp(a,"typedef")||!strcmp(a,"const")
	   ||!strcmp(a,"continue")||!strcmp(a,"short")||!strcmp(a,"union")||!strcmp(a,"voltile")||!strcmp(a,"static")
	   ||!strcmp(a,"calloc")||!strcmp(a,"malloc")||!strcmp(a,"true")||!strcmp(a,"false")||!strcmp(a,"")||!strcmp(a,"volatile")){
		return 1;
	}
	else{
	  return 0;	
	}
	
	
}

void display(int c){
	if(c==1){
		printf("KeyWord\n");
	}
	else if(c==0){
		printf("not a KeyWord\n'");
	}
}
