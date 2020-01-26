#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i[10];
    int run = 0;
    while(run == 0){
    printf("\n");
    printf("Enter either 191 or 919, anything else will quit: ");
    scanf("%s", &i);
    printf("\n");
    if(i[0]=='1' && i[1]=='9' && i[2]=='1'){
        do_191();
}// end if
    else if(i[0]=='9' && i[1]=='1' && i[2]=='9'){
        do_919();
}// end if
    else {
        printf("Good bye!");
        run = 1;
    }
    }// end while
    return 0;
}// end main

int do_191()
{
  int i,j,k,count;
  count=4;
  for(i=1;i<=2*5-1;i+=2)
  {
   for(k=1;k<=count;k++)
    {
     printf(" ");
    }
   count--;
   for(j=1;j<=i;j++)
   {
    printf("%d",j);
   }
   printf("\n");
  }
  count=1;
  for(i=2*5-1;i>=1;i-=2)
  {
   if(i!=(2*5-1))
   {
    for(k=1;k<=count;k++)
    {
     printf(" ");
    }
    count++;
    for(j=1;j<=i;j++)
    {
     printf("%d",j);
    }
    printf("\n");
   }
  }
}// end function

int do_919()
{
  int i,j,k,count;
  count=4;
  for(i=1;i<=2*5-1;i+=2)
  {
   for(k=1;k<=count;k++)
    {
     printf(" ");
    }
   count--;
   for(j=1;j<=i;j++)
   {
    printf("%d",j);
   }
   printf("\n");
  }
  count=1;
  for(i=2*5-1;i>=1;i-=2)
  {
   if(i!=(2*5-1))
   {
    for(k=1;k<=count;k++)
    {
     printf(" ");
    }
    count++;
    for(j=1;j<=i;j++)
    {
     printf("%d",j);
    }
    printf("\n");
   }
  }
}// end function
