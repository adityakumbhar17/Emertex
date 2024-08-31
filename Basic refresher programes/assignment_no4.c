/*
Name : Aditya Shivaji Kumbhar
Description : WAP to check the number is perfect number or not perfect number
Date : 22-07-2024
Sample output : Enter a number:6
                Yes, entered number is perfect number
*/
#include<stdio.h>
int main()
{
    int num,sum=0;      //declare the variables
    int perfectnum=0;   //declare the variable for to  store the  perfect number
    printf("Enterd a number: ");   //prompt the  massage 
    scanf("%d",&num);              //Take the input from the user
    if(num<0)
    {
        printf("Error : Invalid Input,Enter only positive number");   
    }
    else
    {
        for(int i=1;i<=num;i++)  //for loop for  the ittration up to the given num 
        {
            if(num%i==0)         //check the condition for extracting the factors
            {
                sum=sum+i;       //add extracted factore to the sum variable
               
            }
            else
            {
                sum=sum+0;      //if in some position i  that nmber is not factor then add 0 to the sum 
            }
            
        }
        perfectnum =sum/2;      //These statemnt for it include the number also as the factor so the addition is twice  so devide by 2 
        if(num==perfectnum)     //checke the numis match with the number or not
        {
            printf("Yes, entered number is perfect number");
        }
        else
        {
             printf("No, entered number is not a perfect number");
        }
    }
}