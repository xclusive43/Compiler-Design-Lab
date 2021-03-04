//Write a C program to identify whether a given line is a comment or not --> //,/**/,
/*Written By Ajay Prajapati-->18MCA02*/
#include<stdio.h>
#include<string.h>
main(){
	 char a[100];
	printf("enter some text:\n");
    scanf("%[^\n]%*c",a);
	printf("%s\n",a);
	
        if(a[0]=='/'){
		   	 if(a[1]=='/' || a[1]=='*'){
		   		printf("Comment");
			   }
			   else{
			   	printf("not Comment");
			   }
			   
		   }
		   else{
			   	printf("not Comment");
			   }
		
}





//	//printf("%d",strlen(a));
	//for(int i=0;i<strlen(a);i++){	 
		//printf("%c\n",a[i]);
	//	}

