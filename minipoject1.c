/* mini project address book   Date-07-09-2024
we are going to store the database of the one or more studets 
having 4 details
1) Name ID
2)Mobile Number
3)Email address
4)Address

and having 4 options 
1)Add data
2)search Data
3)Print all data
4)edit data

we are handdling  with structure concept
*/
#include<stdio.h>
#include<string.h>
struct database
{
    char name_id[20];
    char mobail[12];
    char email[30];
    char address[30];

};
// function for addig the data in the database
void add_data(struct database data[],int *count)
{
    printf("Name: ");
    scanf(" %[^\n]",data[*count].name_id);

    printf("Mobile: ");
    scanf(" %[^\n]",data[*count].mobail);

    printf("email address: ");
    scanf(" %[^\n]",data[*count].email);

    printf("address: ");
    scanf(" %[^\n]",data[*count].address);

    printf("Data added successfuly....");
    (*count)++;
}
//function for printall th data which  addedd 
void print_data(struct database data[],int count)
{
    for(int i=0;i<count;i++)
    {
        printf("Name:-%s\n",data[i].name_id);
        printf("mobail:-%s\n",data[i].mobail);
        printf("email:-%s\n",data[i].email);
        printf("address:-%s\n",data[i].address);
    }
}
//function to search the data from the data base.
void search(struct database data[],int count)
{  
    char new_name[30];
    printf("Enter the Name :  ");
    scanf(" %[^\n]",new_name);
    int flag=0;
    for(int i=0; i<count;i++)
    {
     if(strcmp(new_name,data[i].name_id)==0)
     {
        printf("Name-%s\n",data[i].name_id);
        printf("mobail-%s\n",data[i].mobail);
        printf("Email-%s\n",data[i].email);
        printf("address-%s\n",data[i].address); 
        flag=1;
        break;
     }
     
    }
    if(flag==0)
    {
      printf("The data is notfound"); 
    }
    
}
//function for edit the data from the database.
void edit_data(struct database data[], int count)
{
    char search_name[30];
    printf("Enter the Name ID of the record to edit: ");
    scanf(" %[^\n]", search_name);

    int flag = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(search_name, data[i].name_id) == 0)
        {
            flag = 1;
            printf("Record found:\n");
            printf("\nWhat would you like to edit?\n");
            printf("1) Name ID\n2) Mobile Number\n3) Email Address\n4) Address\n");
            int edit_choice;
            printf("Enter your choice: ");
            scanf("%d", &edit_choice);
           
              switch (edit_choice)
              {
                case 1:
                    printf("Enter new Name ID: ");
                    scanf(" %[^\n]", data[i].name_id);
            
                    break;
                case 2:
                    printf("Enter new Mobile Number: ");
                    scanf(" %[^\n]", data[i].mobail);

                    break;
                case 3:
                    printf("Enter new Email Address: ");
                    scanf(" %[^\n]", data[i].email);
                    
                    break;
                case 4:
                    printf("Enter new Address: ");
                    scanf(" %[^\n]", data[i].address);
                
                    break;
                    
                    
                default:
                    printf("Invalid choice!\n");
              }
            

            printf("Record updated successfully.\n");
            break;
        }
    }

    if (flag == 0)
    {
        printf("No record found with the given Name ID.\n");
    }
}

int main()
{
    struct database data[100];
    int var=1;
    int count=0;
    int opt;
    while(var)
    {
        printf("select the option:\n");
        printf("1) Add data.\n2)Search data.\n3)Print all data.\n4)Edit data.\n5)Stop\n");
        printf("Enter the choise: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            add_data(data,&count);
            break;


            case 2:
            search(data,count);
            break;


            case 3:
            print_data(data,count);
            break;


            case 4:
            edit_data(data,count);
            break;

            case 5:
            var=0;
            break;
        }

    }
}
