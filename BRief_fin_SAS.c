#include<stdio.h>
#include<stdlib.h>

// client information function

typedef struct {

    	float Amount;
    	char   ID[8]  ;
    	char   lastName[12] ;
     	char firstName[20] ;

}clientinfo;
clientinfo accounts[100];
int N;
// Add account function 
void addaccount(){

	     float Amount;
	     char   ID[8] ;
	     char   lastName[12] ;
	     char firstName[20] ;
	     printf("please enter the following information :");
	     printf("\nID no :");
	     scanf("%s",ID);
	     printf("last Name:");
	     scanf("%s",lastName);
	     printf("first Name:");
	     scanf("%s",firstName);
	     printf("The Amount:");
	     scanf("%f",&Amount);
	     printf("\n The Amount: %.2f ID no: %s last Name: %s first Name: %s",Amount, ID, lastName,firstName);
          Menu();
	}
	// Add multiple accounts
		
	void add_multiple_acc(){
		int N,i;
	    printf("\n\n Please enter the number of accounts you would like to create: ");
	    scanf("%d",&N);


       	for(i=0;i<=N-1;i++){
	        printf("\n Enter the amount :");
	        scanf("%f",&accounts[i].Amount);
	       	printf("\nID no:");
	       	scanf("%s",accounts[i].ID);
	       	printf("\nlast Name:");
	       	scanf("%s",accounts[i].lastName);
	       	printf("\nfirst Name:");
	       	scanf("%s",accounts[i].firstName);
	       	printf("The client information are :");
	        printf("\n The Amount: %.2f ID no: %s last Name: %s first Name: %s\n\n",accounts[i].Amount,accounts[i].ID,accounts[i].lastName,accounts[i].firstName);
            
         }
     }
// Withdrawal function

  void withdrawal(){
            float Amou;
        	int i;
        	 int X;
            char ID[8];

            printf(" Enter your ID no: ");
            scanf("%s",ID);
            for(i=0;i<50;i++){
              if (strcmp(ID,accounts[i].ID) == 0){
              	X=i;
			  }

                  }
            printf("Enter the amount:");
            scanf("%f",&Amou);
            if(Amou>accounts[X].Amount)
                printf("Withrawal impossible");
            else
               {   
                accounts[X].Amount=accounts[X].Amount-Amou;
                printf("-----your balance = %.2f",accounts[X].Amount);
               }

}
// The money deposit funtion 
  void deposit(){
            float Amou;
        	int i;
        	 int X;
            char ID[8];
			
       printf(" Enter your ID no: ");
            scanf("%s",ID);
            for(i=0;i<50;i++){
              if (strcmp(ID,accounts[i].ID) == 0)
                  X=i;
            }

            printf("Enter the Amount:");
            scanf("%f",&Amou);


                   
                accounts[X].Amount=accounts[X].Amount+Amou;
                printf("Your account balance = %.2f",accounts[X].Amount);

 }
 // Diplay ascendant - descendant function 

 void Display(){
 	    int View;
 	    printf("    Display     ");
 	    printf("\n\n Type your choice:\n");
 	    printf(" 1:Ascendant    2:Descendant\n");
 	    scanf("%d",&View);
 	    switch(View){
 	    	case 1:Ascendant();
 	    	break;
 	    	case 2:Descendant();
 	    	break;
			case 3:Ascendant_tri();
 	    	break;
			case 4:Descendant_tri();
 	    	break;
 	    }
		 Menu();
		 }

Ascendant_tri(){
	    
		 float Amou;
		 int i; 
	     printf("Enter the Amount :");
	     scanf("%f",&Amou);
	     for(i=0;i<N;i++){
	     	if(accounts[i].Amount<Amou){
	     		 printf("ID no :%s",accounts[i].ID);
		         printf("\n|Last name :%s",accounts[i].lastName);
		         printf("\n|First name :%s",accounts[i].firstName);
		         printf("\n|Amount :%.2f",accounts[i].Amount);
			 }
		     
		 }
	     	
}
Descendant_tri(){
	 float Amou;
		 int i; 
	     printf("Enter the Amount :");
	     scanf("%f",&Amou);
	     for(i=0;i<N;i++){
	     	if(accounts[i].Amount>Amou){
	     		 printf("ID no :%s",accounts[i].ID);
		         printf("\n|Last name :%s",accounts[i].lastName);
		         printf("\n|First name :%s",accounts[i].firstName);
		    }    printf("\n|Amount :%.2f",accounts[i].Amount);
}
}
 // Accounts ascendant function 

 void Ascendant(){
 	    int N,X,i,j ;
 	printf("\n Enter account number");
			scanf("%d",&N);
 	   	for(i=0;i<N-1;i++)
 	   	for(j=i+1;j<N;j++){
 	   		if(accounts[i].Amount>accounts[j].Amount){
 	   		   	X=accounts[i].Amount;
 	   		   	accounts[i].Amount=accounts[j].Amount;
 	   		   	accounts[j].Amount=X;
				}
 	   	}

 	   		printf("\n\n            After sorting\n:");
 	   		for(i=0;i<N;i++)
 	   		printf("\nAmount: %f ID no: %s last Name: %s first name: %s\n\n",accounts[i].Amount,accounts[i].ID,accounts[i].lastName,accounts[i].firstName);
 }
 // Accounts Descendant function 

void Descendant(){
        int  N,X,i,j ;
 	   	printf("\n Enter account number");
			scanf("%d",&N);
 	   	for(i=0;i<N-1;i++)
 	   	for(j=i+1;j<N;j++){
 	   		if(accounts[i].Amount<accounts[j].Amount){
 	   		   	X=accounts[i].Amount;
 	   		   	accounts[i].Amount=accounts[j].Amount;
 	   		   	accounts[j].Amount=X;
				}
 	   		}

 	   		printf("\n After sorting :");
 	   		for(i=0;i<N;i++)
 	   		printf("\nAmount: %f ID no: %s last Name: %s first name: %s\n\n",accounts[i].Amount,accounts[i].ID,accounts[i].lastName,accounts[i].firstName);
}
// Operation function withdrarwal - deposit 

void operations(){
	    int choice;
	    printf("\n\n please enter your choice :");
	    printf("\n1: Withdraw");
	    printf("\n2: Deposit\n");
	    scanf("\n%d",&choice);
	    switch(choice){
	    	case 1:withdrawal();
		    break;
		    case 2:deposit();
		    break;
		}
		Menu();
}

// Display Menu
void Menu()
{
       int choice;
       do
       {
        printf("\n\n>>>>>>>>##########/ Thank you for choosing our services \\#########<<<<<<<<");

			    printf("\n\n-1. Creat a bank account\n");
			    printf("-2. Enter multiple accounts\n");
			    printf("-3. Operations\n");
			    printf("-4. Displaying\n");
			    printf("-5. Fidelity\n");
			    printf("-6. Exit\n");
			    printf("       \nEnter your choice: ");
			    scanf("%d",&choice);
			         switch(choice)
			           {
			           	    case 1:addaccount();
			                case 2:add_multiple_acc();
			                case 3:operations();
			                case 4:Display();
			                
					   }

			   }
			   while (choice != 6 );

}

int main(){


	    Menu();
    return 0;

}