#include<stdio.h>
int main()
{
    int size;
    printf("lavkrat lavkr array chi size de.....\n");
    scanf("%d",&size);
    int arr[size];
    printf("ata array mdhla data de mla....\n");
    printf("br deto pn tysathi for loop de mla ani daata deto tula.....");
    printf("he ghe ki tuza data...");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array:: chl getlya bgh... tuzya value store krun... ata kr kay kraych ahe te tya vvalue sobt");
    printf("pan bhava adhi smollest value tri de mla mag mi hudakto mazya array mahe");
    int smallest =arr[0];
    printf("ha mhnje tu samllest value hi philya nmber chi thevli ahes  hoi  ata tya value la campare kru mhntoys hoy");
    printf("hoi..hoi");
    for(int j=0;j<size;j++)
    {
        if(smallest>arr[j])
        {
            smallest=arr[j];

        }

    }
    printf("he ghe tuzi bbarkuli value mazya array madhli...%d",smallest);
}