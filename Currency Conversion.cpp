#include <iostream>
using namespace std;

 // Function Prototypes
void displayMenu(int&);
float conv_1(float, int);             
float conv_2(float, int);
float conv_3(float, int);

int main(){
	              
	   //variables            
    	float value;
        int choice;
	
	do{
		 
		//Calling function to display menu
	    displayMenu(choice);
	     
	     
   	 //Menu selection validation
	 while(!(cin>>choice) || choice< 1 || choice> 7){
	 	cout<<"Error! Select valid option from menu. \n\n";
	    	cin.clear();	 
	        cin.ignore(222,'\n');
	  	displayMenu(choice);
	 	
	 }
	 
	 if(choice !=7 ){
	 	cout<<"Enter the value you want to convert: ";
	 
	 
	 	//Validating value entered for conversion 
	 	while(!(cin>> value) || value<0){
	 		
	 		cout<<"Error! Enter a positive numeric value: ";
	 		 cin.clear();
	 		 
	 		 cin.ignore(222,'\n');
	 		 
		 }
	 	
	 	//Responding to user's menu selection by calling functions
	 	if(choice==1 || choice==2)
	 	 cout<<"\n The converted value is:"<<" "<< conv_1(value, choice) <<endl;
	 	 
	 	 else if(choice==3 || choice==4)
	 	 cout<<"\n The converted value is:"<<" "<< conv_2(value, choice) <<endl;
	 	 
	 	  else if(choice==5 || choice==6)
	 	 cout<<"\n The converted value is:"<<" "<< conv_3(value, choice) <<endl;
	 		 			 	
	 }
	    
}
         while(choice!=7);
  return 0;
 }


    /*defining function
     This function displays Menu on call
    and take user's choice */
void displayMenu(int& selection){
          
     cout<<"\n Select an option from menu : \n";
	    	cout<<"1. pkr_dollar   \n\n";
  	    	cout<<"2. dollar_pkr   \n\n";
	    	cout<<"3. pkr_euro     \n\n";
	    	cout<<"4. euro_pkr     \n\n";
	    	cout<<"5. pkr_yen      \n\n";
	    	cout<<"6. yen_pkr      \n\n";
	    	cout<<"7. Exit         \n\n";
	    	
	    	cout<<"Enter here: ";
	          	          
	      }
	      	
			  
			        
   /* Definition of all three conversion functions, 
   all of them take two arguments and convert currencies. */  
     
 float conv_1(float value, int choice){
   	  float conv;
      float convfact1= 178.25;
 	
         if(choice==1){
 	       conv= value/convfact1;
 	     return conv;
       }
 	else if(choice==2){	  
 	       conv= value*convfact1;
 	    return conv;
	   }	   
 }
 
 
  float conv_2(float value, int choice){
    	float conv;
    	float convfact2= 202.74;
 	
         if(choice==3){
 	      conv= value/convfact2;
 	   return conv;
   }
 	else if(choice==4){	  
 	      conv= value*convfact2;
 	   return conv;
   }
}
  
  
  float conv_3(float value, int choice){
    	float conv;
    	float convfact3=1.55 ;
 	
    if(choice==5){
 	  conv= value/convfact3;
 	   return conv;
       }
 	else if(choice==6){	  
 	  conv= value*convfact3;
 	   return conv;
	   }	   
 }
 

