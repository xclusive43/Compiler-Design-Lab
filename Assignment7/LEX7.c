
/*lex program to count number of words* present in a text file*/
%{ 
#include<stdio.h> 
#include<string.h> 
char a[30];
int count = 1; 
char c;
 
%} 

  /* Rules Section*/
%% 
 
    	if(!strcmp(a,"int") ||!strcmp(a,"bool")  ||!strcmp(a,"char") ||!strcmp(a,"double")||!strcmp(a,"long")||
	   !strcmp(a,"sort")||!strcmp(a,"printf")||!strcmp(a,"scanf")||!strcmp(a,"main")  ||!strcmp(a,"if")  ||
	   !strcmp(a,"else")||!strcmp(a,"elseif")||!strcmp(a,"for")  ||!strcmp(a,"while") ||!strcmp(a,"do")  ||
	   !strcmp(a,"return")||!strcmp(a,"struct")||!strcmp(a,"void")||!strcmp(a,"float")||!strcmp(a,"switch")
	   ||!strcmp(a,"break")||!strcmp(a,"default")||!strcmp(a,"case")||!strcmp(a,"auto")||!strcmp(a,"signed")
	   ||!strcmp(a,"enum")||!strcmp(a,"strcmp")||!strcmp(a,"length")||!strcmp(a,"typedef")||!strcmp(a,"const")
	   ||!strcmp(a,"continue")||!strcmp(a,"short")||!strcmp(a,"union")||!strcmp(a,"voltile")||!strcmp(a,"static")
	   ||!strcmp(a,"calloc")||!strcmp(a,"malloc")||!strcmp(a,"true")||!strcmp(a,"false")||!strcmp(a,"")||!strcmp(a,"volatile")){
		 {printf("it's a keyword\n"); exit(0);} 
	}
	else{
	   {printf("it's not a keyword\n"); exit(0);} 
	}
    
%% 
  
int yywrap(void){} 
  
int main() 
{    
    // The function that starts the analysis 
    printf("Enter Any Word:");
    scanf("%s",&a);
    yylex(); 
  
    return 0; 
} 

