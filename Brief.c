#include <stdio.h>
#include <stdlib.h>

int main(){

int choice;
char id[10];
char lastName[20];
char firstName[20];
float Amount;

printf("##############/ Thank you for choosing our services \\##################\n");

printf("                       Please select a choice                                    \n");
printf("-1. Creat a bank account\n");
printf("-2. Enter multiple accounts\n");
printf("-3. Operations\n");
printf("-4. Viewing\n");
printf("-5. Fidelity\n");
printf("-6. Exit\n");
scanf("%d", &choice);

switch(choice){
    case 1 :
     printf("Enter your national ID card: \n");
     scanf("%s", id);
     
     printf("Enter your first name: \n");
     scanf("%s", firstName);
     
     printf("Enter your last name: \n");
     scanf("%s", lastName);
     
     printf("Enter your Amount: \n");
     scanf("%f", &Amount);

     printf("%s %s %s %.2f" , id, firstName, lastName, Amount);

    
       break;
    case 2 :
       break;
    case 3 :
       break;
    case 4 :
       break;
    case 5 :
       break;
    case 6 :
       break;
    
    


}



return 0;

}