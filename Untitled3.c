/*
   This program will tell the user the number of days in the given month and year even if it's an leap year.
   
   Author: Victor Manuel Gastelum Huitzil
   Date: 29/08/18
   E-mail: A01411985@itesm.mx

*/
#include<stdio.h>

int main(){
	
	//Declaration of the variables
	int month;
	int year;
	
	//I ask the user for the month and the year
	printf("Hi!, give a month and a year");
	scanf("%i%i", &year, &month);
	
	//If the input it's inside the range then the program will continue
	if((month>0) && (month<13)){
		
		switch(month){
		        
		        //These are cases for the months that have 31 days
		        case 1:
		        case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
		        	printf("The month has 31 days \n");
		        break;
		        
		        //These are cases for the months that have 30 days
		        case 4:
				case 6:
				case 9:
				case 11:
				    printf("The month has 30 days \n");
				break;
				
				// This is the case if the user enters February
				case 2:
					
					//In case that the year is a Leap year
					//Within the "if" I will find if is a leap year 
					//through a division, since the leap year it's multiple of four I will use a MOD function
				    if((month==2) && (year%4==0)){
	                printf("The month has 29 days \n");
					
				    //If it's not a Leap-Year
					}else{
		            printf("The month has 28 days \n");	
		}
    }
	}
	// If the user input an invalid number I'll let him know
	else{
		printf("Error 404 :(, that's an invalid number");
	}
    
    
    //This will detect if it's a leap year or not
    if(year%4==0){
    	printf("The year has 366 days \n");
    	
    	}else{
    		printf("The year has 365 days \n");
		}
	
return 0;
}
