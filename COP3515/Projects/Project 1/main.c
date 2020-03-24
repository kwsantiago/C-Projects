#include <stdio.h>
#include <stdlib.h>

int main(){
    char i[15];
    int run = 0;
    while(run == 0){
    printf("\n");
    printf("Enter either 191 or 919, anything else will quit: ");
    scanf("%s", i);
    printf("\n");
    if(i[0]=='1' && i[1]=='9' && i[2]=='1'){
        do_191();
    }// end if
    else if(i[0]=='9' && i[1]=='1' && i[2]=='9'){
        do_919();
    }// end if
    else{
        printf("Good bye!");
        run = 1;
    }// end else
}// end while
    return 0;
}// end main

int do_191(){
  int a,b,c,rows;
  rows = 4;
  for(a=1;a<=9;a+=2){
   for(c=1;c<=rows;c++){
     printf(" ");
}
   rows--;
   for(b=1;b<=a;b++){
    printf("%d",a);
    }
   printf("\n");
}//end for
  rows=1;
  for(a=9;a>=1;a-=2){
   if(a!=(9)){
    for(c=1;c<=rows;c++){
     printf(" ");
}
    rows++;
    for(b=1;b<=a;b++){
     printf("%d",a);
}
    printf("\n");
}
  }//end for
}// end function

int do_919(){
  int a,b,c,rows;
  rows = 4;
  for(a=1;a<=9;a+=2){
   for(c=1;c<=rows;c++){
     printf("%d",a);
}
   rows--;
   for(b=1;b<=a;b++){
    printf(" ");
    }
   printf("%d\n",a);
}//end for
  rows=1;
  for(a=9;a>=1;a-=2){
   if(a!=(9)){
    for(c=1;c<=rows;c++){
     printf("%d",a);
}
    rows++;
    for(b=1;b<=a;b++){
     printf(" ");
}
    printf("%d\n",a);
}
  }//end for
}// end function
