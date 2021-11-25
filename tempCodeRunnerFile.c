
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
	     printf("%s %s %s %.2f",ID,lastName,firstName,Amount);

	}
	// Add multiple accounts
		clientinfo accounts[100];
	void add_multiple_acc(){
		int N,i;
	    printf(" Please enter the number of accounts you would like to create: ");
	    scanf("%d",&N);