
/*lex program to count number of words* present in a text file*/
%{ 
#include<stdio.h> 
#include<string.h> 
#define FILE_READ "file.txt"
int count = 1; 
char c;
FILE * filp;
%} 

  /* Rules Section*/
%% 

 filp = fopen(FILE_READ, "r");
    if(filp == NULL)
        printf("file not found\n");
    while((c = fgetc(filp)) != EOF) {
        if(c == ' ')
            count++;
    }
    {printf("words = %d\n", count);} 
%% 
  
int yywrap(void){} 
  
int main() 
{    
    // The function that starts the analysis 
    yylex(); 
  
    return 0; 
} 

