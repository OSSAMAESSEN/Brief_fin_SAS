#include<stdio.h>
#include<stdlib.h>



typedef struct {

    	float Amount;
    	char   id[8]  ;
    	char   lastName[12] ;
     	char firstName[20] ;

}clientinfo;


void addaccount(){

	     float Amount;
	     char   id[8]  ;
	     char   lastName[12] ;
	     char firstName[20] ;
	     printf("please enter the following information :");
	     printf("\nid:");
	     scanf("%s",id);
	     printf("last Name:");
	     scanf("%s",lastName);
	     printf("first Name:");
	     scanf("%s",&firstName);
	     printf("Amount:");
	     scanf("%s",&Amount);
	     printf("%s%s%s%s",id,lastName,firstName,Amount);

	}
		clientinfo accounts[1000];
	void add_multiple_acc(){
		int N,i;
	    printf("veuiller Entrez le nombre de comptes que vous souhaitez creer: ");
	    scanf("%d",&N);


       	for(i=0;i<=N-1;i++){
	        printf("\n entrer montant:");
	        scanf("%f",&accounts[i].Amount);
	       	printf("\nCIN:");
	       	scanf("%s",accounts[i].id);
	       	printf("\nlast Name:");
	       	scanf("%s",accounts[i].lastName);
	       	printf("\nfirst Name:");
	       	scanf("%s",accounts[i].firstName);
	       	printf("The client information are :");
	        printf("\n %f,%s,%s,%s",accounts[i].Amount,accounts[i].id,accounts[i].lastName,accounts[i].firstName);

	 }


}
  void retrait(){
            float Amou;
        	int i;
        	 int X;
            char id[8];
            float result;

            printf(" Enter your id N': ");
            scanf("%s",id);
            for(i=0;i<50;i++){
              if (strcmp(id,accounts[i].id) == 0){
              	X=i;
			  }

                  }
            printf("Enter the amount:");
            scanf("%f",&Amou);
            if(Amou>accounts[X].Amount)
                printf("impossible");
            else
               {   
                accounts[X].Amount=accounts[X].Amount-Amou;
                printf("-----your balance =%.2f",accounts[X].Amount);
               }

}
  void depot(){
            float Amou;
        	int i;
        	 int X;
            char id[8];
            float result;
       printf(" Enter your id N': ");
            scanf("%s",id);
            for(i=0;i<50;i++){
              if (strcmp(id,accounts[i].id) == 0)
                  X=i;
            }

            printf("entrer the amount:");
            scanf("%f",&Amou);


                   
                accounts[X].Amount=accounts[X].Amount+Amou;
                printf("Your account balance = %f",accounts[X].Amount);

 }
 void Display(){
 	    int View;
 	    printf("    Display     ");
 	    printf("\n\n Type your choice:");
 	    printf("1:Ascendant    2:Descendant");
 	    scanf("%d",&View);
 	    switch(View){
 	    	case 1: Ascendant();
 	    	break;
 	    	case 2: Descendant();
 	    	break;
 	    }
		 }
 void Ascendant(){
 	    int N , X,i,j ;
 	   	printf("\n please enter your account number :");
 	   	scanf("%d",&N);
 	   	for(i=0;i<N-1;i++)
 	   	for(j=i+1;j<N;j++){
 	   		if(accounts[i].Amount>accounts[j].Amount){
 	   		   	X=accounts[i].Amount;
 	   		   	accounts[i].Amount=accounts[j].Amount;
 	   		   	accounts[j].Amount=X;
				}
 	   		}

 	   		printf("\n\n After sorting:");
 	   		for(i=0;i<N;i++)
 	   		printf("%.2f",accounts[i].Amount);
 }
void Descendant(){
        int N , X,i,j ;
 	   	printf("\n please enter your account number:");
 	   	scanf("%d",&N);
 	   	for(i=0;i<N-1;i++)
 	   	for(j=i+1;j>N;j++){
 	   		if(accounts[i].Amount>accounts[j].Amount){
 	   		   	X=accounts[i].Amount;
 	   		   	accounts[i].Amount=accounts[j].Amount;
 	   		   	accounts[j].Amount=X;
				}
 	   		}

 	   		printf("\n\n After sorting :");
 	   		for(i=0;i<N;i++)
 	   		printf("%.2f",accounts[i].Amount);
}

void operations(){
	    int choice;
	    printf(" please enter your choice :");
	    printf("\n1: Withdraw");
	    printf("\n2: Deposit");
	    scanf("\n%d",&choice);
	    switch(choice){
	    	case 1:	retrait();
		    break;
		    case 2:depot();
		    break;
		}
}


void Menu()
{
       int choice;
       do
       {
        printf(">>>>>>>>##########/ Thank you for choosing our services \\#########<<<<<<<<");

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