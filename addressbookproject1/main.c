/**********************************************************************************************************************************
 * 												    Address book (miniproject 1)
 ***********************************************************************************************************************************/
/*
Name        :-  Aditya shivaji kumbhar
Description :-  Print the details of the student use the file handdling concept
Date        :-  22-09-2024

*/
#include <stdio.h>
#include <string.h>
#include<ctype.h>
struct data{
	char name[30];
	char mobile[11];
	char email[30];
	char address[50];
};
void add_contacts();
void copy(FILE *,FILE *);
void search();
void print();
void edit();
void delete();
int main(){
	char ch='y';
	int choice;
	while (ch=='y' || ch=='Y')
    {
		printf(" 1.Adds\n 2.search\n 3.print\n 4.edit\n 5.delete\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				add_contacts();
				break;
			case 2:
				search();
				break;
			case 3:
				print();
				break;
			case 4:
				edit();
				break;
			case 5:
				delete();
				break;
		}
		printf("do you want to continue(y/n): ");
		scanf(" %c",&ch);
        if(ch=='N'||'n')
        {
            printf("Program termineated succsessfully.....");
        }
    

	}
}
void add_contacts()
{
	struct data contacts;
	int count=0;
	FILE *fdata=fopen("data.csv","r");
	FILE *ftemp=fopen("temp.csv","w");
	
	if(fdata == NULL || ftemp == NULL){
		printf("file not opened");
		return;
	}
	
	fscanf(fdata,"%d\n",&count);
	fprintf(ftemp,"%d\n",count+1);
	for(int i=0;i<count;i++)
	{
		//scan the file from the data file and print the data in the temporory file
		fscanf(fdata,"%[^,],%[^,],%[^,],%[^\n]\n",contacts.name,contacts.mobile,contacts.email,contacts.address);
		fprintf(ftemp,"%s,%s,%s,%s\n",contacts.name,contacts.mobile,contacts.email,contacts.address);
	}



    printf("********************************************\n");
	printf("\t   Enter your details here\t");
	printf("\n********************************************\n");
    //validation for the Name:


	printf("Enter the name          : ");
	label1:
	scanf(" %[^\n]",contacts.name);
	int i=0;
	while(contacts.name[i]!='\0')
	{
		//check the enterd character is alpha or not
		if((contacts.name[i]>='A'&& contacts.name[i]<='Z')||(contacts.name[i]>='a'&& contacts.name[i]<='z')||contacts.name[i]==' ')
		{
			
			i++;
		}
		else
		{
			printf("Re-Enter the valid name : ");
			goto label1;
		}
	}




    //mobile number validation..

	printf("Enter the mobile number : ");
	label2:
	rewind(fdata);                                   // Reset file pointer to recheck for duplicates
    fscanf(fdata, "%d\n", &count);                   // Read the count again
	scanf(" %[^\n]",contacts.mobile); 

	if(!(strlen(contacts.mobile)==10))              //here we check the length of our contact is valid or not
	{
		printf("length of your mobaile number is not match with the standerd length Re-enter: ");
		goto label2;
	}
	for(int i=0;i<strlen(contacts.mobile);i++)
		{
			if(!(contacts.mobile[i]>='0' && contacts.mobile[i]<='9'))      //here we check all enterd inputs is number or not
			{
				printf("you enterd wrong thing re-enterd number: ");
				goto label2;
			}
			else if((contacts.mobile[i]>='A'&& contacts.mobile[i]<='Z')||(contacts.mobile[i]>='a'&& contacts.mobile[i]<='z'))    //if any alphabate character is comming in the number then reenter the number.
			{
				goto label2;
			}
		}

	// Check if mobile number already exists

    for(i = 0; i < count; i++)
    {
        struct data temp;                      //here we take the new structure variable to store the all data.
        fscanf(fdata, "%[^,],%[^,],%[^,],%[^\n]\n", temp.name, temp.mobile, temp.email, temp.address);    // here we scan the all data from our data.csv file
        if(strcmp(temp.mobile, contacts.mobile) == 0)                                     //here we check the our our scaned mobaile number is present or not in the data base and we accsess that using the temp variable
        {
            printf("Mobile number already exists enter a different mobile number: ");
            goto label2;
        }
    }


	//email addresss validation...
	

	//printf("Enter the email in this format(xyz@gmail.com)\n");
	printf("Enter the email         : ");
	int k=0;
	label4 :
	rewind(fdata);                               // Reset file pointer to recheck for duplicates
    fscanf(fdata, "%d\n", &count);              // Read the count again
	scanf(" %[^\n]",contacts.email);

	int m=0;
	while(!m)
	{
		
		if(strlen(contacts.email)>10 && strcmp(contacts.email+strlen(contacts.email)-10,"@gmail.com")==0 && (contacts.email[k]>='a'&& contacts.email[k]<='z'))
		/*the above line explanation first it check the our enterd emaillength is greater than 10 or not 
		then check at the last all the predifined character is present or not in the email using strcmp
		then it check the all the character we enterd in the email is small or not if one of the condition get false then reenter the email address*/
		{
			k++;
			m=1;
		}
		else
		{
			printf("Invalid email!!! Re-enter the email : ");
			goto label4;
		}
	}

	// Check if email already exists
    for(i = 0; i < count; i++)
    {
        struct data temp;      //use another structur variable as temp
        fscanf(fdata, "%[^,],%[^,],%[^,],%[^\n]\n", temp.name, temp.mobile, temp.email, temp.address); //here we store the all data from the data file to the  temp
        if(strcmp(temp.email, contacts.email) == 0)                //compare the datacheck it exist or not
        {
            printf("Email address already exists. Enter a different email: ");
            goto label3;
        }
    }


	//address validation..


	printf("Enter the address       : ");
	label3:
	scanf(" %[^\n]",contacts.address);
	int j=0;
	while(contacts.address[j]!='\0')
	{
		if((contacts.address[j]>='A'&& contacts.address[j]<='Z')||(contacts.address[j]>='a'&& contacts.address[j]<='z')||contacts.address[j]==' ')
		{
			
			j++;
		}
		else
		{
			printf("Re-Enter the valid address : ");
			goto label3;
		}
	}
    printf("********************************************\n");


	
	// print all data which we get from the user in the temp file.
	fprintf(ftemp,"%s,%s,%s,%s\n",contacts.name,contacts.mobile,contacts.email,contacts.address);
	
	fclose(fdata);
	fclose(ftemp);
	
	fdata=fopen("data.csv","w");
	ftemp=fopen("temp.csv","r");
	
	copy(fdata,ftemp);         //copy the  data from temp to data file.
	
	fclose(fdata);
	fclose(ftemp);
}


void search()
{
	int count = 0;
	struct data contacts;

	FILE *fdata = fopen("data.csv","r");
	if(fdata == NULL)
	{
		printf("file not opened");
		return;
	}
	FILE *ftemp = fopen("temp.csv","w");
	if(ftemp == NULL){
		printf("Temp file not opened");
		return; 
	}
	fscanf(fdata,"%d\n",&count);
	fprintf(ftemp,"%d\n",count);
	copy(ftemp,fdata);
	rewind(fdata);
	fscanf(fdata, "%d\n", &count);
	char name_i[30];                
	printf("Enter Name ID to search: ");
	label5:
	scanf(" %[^\n]", name_i);

	//check the name which we enterd for the searching is valid or not
	int n=0;
	while(contacts.name[n]!='\0')
	{
		if((contacts.name[n]>='A'&& contacts.name[n]<='Z')||(contacts.name[n]>='a'&& contacts.name[n]<='z')||contacts.name[n]==' ')
		{
			
			n++;
		}
		else
		{
			printf("Re-Enter the valid name : ");
			goto label5;
		}
	}



    // check if the name the same name comming  more than one times.
	int i = 1;
	int match_count = 0;                                      // To count how many times the name matches
	struct data matched_contacts[10]; 

	// Search in the file for matching names
	while (i <= count) 
	{
		fscanf(fdata, "%[^,],%[^,],%[^,],%[^\n]\n", contacts.name, contacts.mobile, contacts.email, contacts.address);
		if (strcmp(contacts.name, name_i) == 0)
		 {
			matched_contacts[match_count] = contacts;        // Store matched contact details
			match_count++;
		}
		i++;
	}

	if (match_count == 0) 
	{
		// If no matches are found
		printf("Name not found\n");
	} 
	else if (match_count == 1)
	 {
		// If only one match is found, print the details
        printf("********************************************\n");
		printf("\t\tContact\t");
		printf("\n*********************************************\n");
		printf("Name ID  : %s\n", matched_contacts[0].name);
		printf("Mobile   : %s\n", matched_contacts[0].mobile);
		printf("Email ID : %s\n", matched_contacts[0].email);
		printf("Address  : %s\n", matched_contacts[0].address);
	} 
	else 
	{
		// If multiple matches are found
		printf("Multiple contacts found with the same name.\n");
		printf("Please enter either the mobile number or email ID for search.\n");

		char mobile_i[15], email_i[50];
		int choice;
		printf("Enter 1 to search by mobile, 2 to search by email: ");
		scanf("%d", &choice);

		int found = 0;                                       // Flag to indicate  match is found

		if (choice == 1) 
		{
			// Search by mobile number
			printf("Enter mobile number: ");
			scanf("%s", mobile_i);

			for (int j = 0; j < match_count; j++) {
				if (strcmp(matched_contacts[j].mobile, mobile_i) == 0)      // if the mobile number is match with any mobile number with our same name contacts then print tahat index 
				{
					printf("********************************************\n");
				    printf("\t\tContact no %d\t",j);
				    printf("\n*********************************************\n");
					printf("Name ID  : %s\n", matched_contacts[j].name);
					printf("Mobile   : %s\n", matched_contacts[j].mobile);
					printf("Email ID : %s\n", matched_contacts[j].email);
					printf("Address  : %s\n", matched_contacts[j].address);
					found = 1;
					break;
				}
			}
		} 
		else if (choice == 2) 
		{
			// Search by email ID
			printf("Enter email ID: ");
			scanf("%s", email_i);

			for (int j = 0; j < match_count; j++) {
				if (strcmp(matched_contacts[j].email, email_i) == 0)    //if any email address is matched with our email address then print that data.
				{

                    printf("********************************************\n");
				    printf("\t\tContact no %d\t",j);
				    printf("\n*********************************************\n");
					printf("Name ID   : %s\n", matched_contacts[j].name);
					printf("Mobile    : %s\n", matched_contacts[j].mobile);
					printf("Email ID  : %s\n", matched_contacts[j].email);
					printf("Address   : %s\n", matched_contacts[j].address);
					found = 1;
					break;


				}
			}
		} 
		else 
		{
			printf("Invalid choice!\n");
		}

		if (!found) 
		{
			printf("No contact found with the provided mobile number or email.\n");
		}
	}

	fclose(fdata);
	fclose(ftemp);

}


// function fpr printing the all data
void print()
{
	int count = 0;
	struct data contacts;
	FILE *fdata = fopen("data.csv","r");
	if(fdata == NULL){
		printf("file not opened");
		return;
	}
	fscanf(fdata,"%d\n",&count);
	for(int i=1; i<=count; i++){
		fscanf(fdata, "%[^,],%[^,],%[^,],%[^\n]\n", contacts.name, contacts.mobile, contacts.email, contacts.address);
		printf("********************************************\n");
		printf("\t\tContact no %d\t",i);
		printf("\n*********************************************\n");
		printf("Name ID  : %s\n", contacts.name);
		printf("Mobile   : %s\n", contacts.mobile);
		printf("Email ID : %s\n", contacts.email);
		printf("Address  : %s\n\n", contacts.address);
	}
	fclose(fdata);
}


//function for edit data
void edit()
{
	int count = 0;
	struct data contacts;
	FILE *fdata = fopen("data.csv","r");       //open file for reading
	if(fdata == NULL)
	{
		printf("file not found");
	}
	FILE *ftemp = fopen("temp.csv","w");      //oen file for writing..
	if(ftemp == NULL)
	{
		printf("Temp file is not found");
	}
	
	fscanf(fdata,"%d\n",&count);
	copy(ftemp,fdata);
	rewind(fdata);
	int type;
	printf("enter the option which you want to edit :\n 1.Name\n 2.Mobile_number\n 3.Gmail\n 4.Address\n Enter your choice: ");
	scanf("%d",&type);
	char name_i[30];                          //buffer
	printf("Enter Name ID to Edit: ");
	scanf(" %[^\n]", name_i);                        //buffer for store the temp name...
	int i = 1;
	while(i <= count){
		fscanf(fdata,"%[^,],%[^,],%[^,],%[^\n]\n", contacts.name, contacts.mobile, contacts.email, contacts.address);
		if(strcmp(contacts.name,name_i) == 0)
		{
			switch(type)
			{
				//case1 for the new name...
				case 1:
					printf("Enter new Name : ");
					label6:
					scanf("%[^\n]",contacts.name);
					int i=0;
					while(contacts.name[i]!='\0')
					{
						if((contacts.name[i]>='A'&& contacts.name[i]<='Z')||(contacts.name[i]>='a'&& contacts.name[i]<='z')||contacts.name[i]==' ')
						{
			
						i++;
						}
						else
						{
						printf("Re-Enter the valid name : ");
						goto label6;
						}
	                }
                    break;

                //case2 for the new mobile number...
				case 2:
					printf("Enter new Mobile: ");
					label7:
					rewind(fdata);                                   // Reset file pointer 
    				fscanf(fdata, "%d\n", &count); 
					scanf(" %[^\n]",contacts.mobile);
					if(!(strlen(contacts.mobile)==10))              //here we check the length of our contact is valid or not
					{
						printf("length of your mobaile number is not match with the standerd length Re-enter: ");
						goto label7;
					}
					for(int i=0;i<strlen(contacts.mobile);i++)
					{
						if(!(contacts.mobile[i]>='0' && contacts.mobile[i]<='9'))      //here we check all enterd inputs is number or not
						{
							printf("you enterd wrong thing re-enterd number: ");
							goto label7;
						}
						else if((contacts.mobile[i]>='A'&& contacts.mobile[i]<='Z')||(contacts.mobile[i]>='a'&& contacts.mobile[i]<='z'))    //if any alphabate character is comming in the number then reenter the number.
						{
							goto label7;
						}
					}

					//check the number is alrady in the file or not.
					 for(i = 0; i < count; i++)
    				{
       					 struct data temp;                      //here we take the new structure variable to store the all data.
       					 fscanf(fdata, "%[^,],%[^,],%[^,],%[^\n]\n", temp.name, temp.mobile, temp.email, temp.address);    // here we scan the all data from our data.csv file
       					  if(strcmp(temp.mobile, contacts.mobile) == 0)                                     //here we check the our our scaned mobaile number is present or not in the data base and we accsess that using the temp variable
       					  {
           					 printf("Mobile number already exists enter a different mobile number: ");
           					 goto label7;
       					  }
   				 	}
					break;

                //case3 for the email address..
				case 3:
					printf("Enter new Email ID: ");
					int k=0;
					label4 :
					rewind(fdata);                               // Reset file pointer 
					fscanf(fdata, "%d\n", &count);              // Read the count again
					scanf(" %[^\n]",contacts.email);

					int m=0;
					while(!m)
					{
						
						if(strlen(contacts.email)>10 && strcmp(contacts.email+strlen(contacts.email)-10,"@gmail.com")==0 && (contacts.email[k]>='a'&& contacts.email[k]<='z'))
						/*the above line explanation first it check the our enterd emaillength is greater than 10 or not 
						then check at the last all the prdifined character is present or not in the email 
						then it check the all the character we enterd in the email is small or not if one of the condition get false then reenter the email address*/
						{
							k++;
							m=1;
						}
						else
						{
							printf("Invalid email!!! Re-enter the email : ");
							goto label4;
						}
					}

					// Check if email already exists
					for(i = 0; i < count; i++)
					{
						struct data temp;
						fscanf(fdata, "%[^,],%[^,],%[^,],%[^\n]\n", temp.name, temp.mobile, temp.email, temp.address);
						if(strcmp(temp.email, contacts.email) == 0)
						{
							printf("Email address already exists. Enter a different email: ");
							goto label4;
						}
					}
					break;

				//case4 for the address...

				case 4:
					printf("Enter new Address: ");
					label9:
					scanf(" %[^\n]",contacts.address);
					int j=0;
					while(contacts.address[j]!='\0')
					{
						if((contacts.address[j]>='A'&& contacts.address[j]<='Z')||(contacts.address[j]>='a'&& contacts.address[j]<='z')||contacts.address[j]==' ')
						{
			
							j++;
						}
						else
						{
							printf("Re-Enter the valid address : ");
							goto label9;
						}

					}

					break;
				    
					
					default:
					printf("Invalid option\n");
					break;
			}


		}

	}	
	fclose(fdata);
	fclose(ftemp);
	if(i == count+1)
		printf("Name not found");
}
//function for delet the  the contact details..
void delete()
{
	int count = 0;
	struct data contacts;
	FILE *fdata = fopen("data.csv","r");
	if(fdata == NULL){
		printf("file not opened");
		return;
	}
	FILE *ftemp = fopen("temp.csv","w");
	if(ftemp == NULL){
		printf("Temp file not opened");
		return;
	}
	fscanf(fdata,"%d\n",&count);
	fprintf(ftemp,"%d\n",count-1);
	char mobile_id[30];
	printf("Enter mobile number to search: ");
	scanf(" %[^\n]",mobile_id);             
	int i,flag = 0;
	for(i = 1;i <= count;i++)
	{
		fscanf(fdata, "%[^,],%[^,],%[^,],%[^\n]\n", contacts.name, contacts.mobile, contacts.email, contacts.address);
		if(strcmp(contacts.mobile, mobile_id) == 0){
			flag = 1;
			continue;
		}
		else{
			fprintf(ftemp,"%s,%s,%s,%s\n",contacts.name,contacts.mobile,contacts.email,contacts.address);
		}


	}
	fclose(fdata);
	fclose(ftemp);
	if (flag == 1){
	fdata=fopen("data.csv","w");
	ftemp=fopen("temp.csv","r");
	copy(fdata,ftemp);
	fclose(fdata);
	fclose(ftemp);
	}
	else
		printf("Name not found\n");

}
// function for the copy fro one file to another file.
void copy(FILE *fdata,FILE *ftemp){
	char ch;
	while((ch=fgetc(ftemp))!=EOF)
	{
		fputc(ch,fdata);
	}
}

