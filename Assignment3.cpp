/*
  Written By Ajay Prajapati --> 18MCA02 
  Q3.Write a Program to identify whether a given string is identifiers or not.
*/

#include<stdio.h>
#include<string.h>

bool checkIdentifer(char str1[]);

void display(bool res);

main(){
	char str[10];
   
  	printf("Enter String : \n");
	scanf("%s",&str);
	
    bool result = checkIdentifer(str);
	display(result);
 
	 
	 
}

bool checkIdentifer(char str1[]){
	int len = strlen(str1);
	int counter=0;
	 
	if(str1[0]=='_' || str1[0]=='*' || 
	  (str1[0]>='a'&& str1[0]<='z') || 
	  (str1[0]>='A'&& str1[0]<='Z') ||
	  str1[0]=='$' || str1[0]=='*')
		{
			for(int i=0;i<len;i++){
				if(str1[i]=='!' || str1[i]=='@' || str1[i]=='#' || str1[i]=='%'
				|| str1[i]=='^' || str1[i]=='&' || str1[i]=='(' || str1[i]==')'
				|| str1[i]=='<' || str1[i]==',' || str1[i]=='>' || str1[i]=='.' 
				|| str1[i]=='?' || str1[i]=='/' || str1[i]==':' || str1[i]==';'
				|| str1[i]=='"' || str1[i]=='+' || str1[i]=='=' || str1[i]=='-'
				|| str1[i]==' '){
					counter++;
				}
				
			} 
			
			if(counter>0){
				return false;
			}
			else{
				return true;
			}
			
		  	
		}
		
	else{
	 	return false;
	 }
	 

	
}


void display(bool res){
	if(res==true){
		printf("Identifer\n");
	}
	else{
		printf("Not a Identifer\n");
	}
}
