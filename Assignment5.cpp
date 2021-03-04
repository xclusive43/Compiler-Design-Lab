/*Assignment 5 : Your program should read the given input. If the given input matches with any operator 
symbol, then display the word for that particular symbol. If the given input is not an Operator, print "given input is not an operator".

Example: 
Input - Enter any operator : +
Output : addition
*/

#include<stdio.h>
 
 main(){
   
   char op[10];
   printf("\n Enter any Operator: ");
   scanf("%s",&op);
    
    switch(op[0]){
    	case '+': if(op[1]=='+') printf("\n Increment operator");
    			if(op[1]=='=') printf("\n Add AND assignment operator.");
			     else printf("\n  Addition");
			break;
			
		case '-': if(op[1]=='-') printf("\n Decrement operator.");
				  if(op[1]=='=') printf("\n Subtract AND assignment operator.");
			      else printf("\n  Substraction");
			break;
			
		case '/':if(op[1]=='=') printf("\n Divide AND assignment operator. ");
				 else printf("\n Division");
			break;
				
		case '*':printf("\n Multiplication");
			break;
			
		case'%': if(op[1]=='=') printf("\n Modulus AND assignment operator. ");
				 else printf("\n Modulus");
			break;
			
	    case'=': if(op[1]=='=') printf("\nEqual to");
			else printf("\n Assignment");
			break;
				
		case'|': if(op[1]=='|') printf("\n Logical OR");
		 		 if(op[1]=='=') printf("\n Bitwise inclusive OR and assignment operator.");
                 else printf("\n Bitwise OR");
			break;
			
		case'&': if(op[1]=='&')printf("\nLogical AND");
				 if(op[1]=='=')printf("\nBitwise AND assignment operator.");
				 else printf("\n Bitwise AND");
			break;	
			
		case'!': if(op[1]=='=') printf("\nNot Equal");
				else printf("\n Bit Not");
			break;	
			
		case'<': if(op[1]=='=') printf("\n Less than or equal");
				 if(op[1]=='<') printf("\n Binary Left Shift Operator");
			     if(op[2]=='=') printf("\n Left shift AND assignment operator");
					else printf("\nLess than");
			break;
			
		case'>': if(op[1]=='=') printf("\n Greater than or equal");
				 if(op[1]=='>') printf("\n Binary Right Shift Operator");
				 if(op[2]=='=') printf("\n Right shift AND assignment operator.");
				 else printf("\n Greater than");
			break;	
			
		case'^': if(op[1]=='=') printf("\n Bitwise exclusive OR and assignment operator.");
				 else printf("\n Binary XOR Operator ");
			break;
			
		case'~':  printf("\n Binary One's Complement Operator.");
			break;
			
		case'*=':  printf("\n Multiply AND assignment operator. ");
			break;
			
		default: printf("\n Given input is not an operator.");	
	}
   

}
