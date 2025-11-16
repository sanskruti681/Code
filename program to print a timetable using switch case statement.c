 #include <stdio.h>
 int main(){
 int period;
 printf("Enter thr period (1-3):");
 scanf("%d",&period );

 switch(period){

 case 1 :
     printf("period 1:\n");
     printf("subject : mathematics\n");
     printf("time : 7:15-8:15\n");
     break;


  case 2 :
       printf("period 2:\n");
       printf("subject : physics\n");
       printf("time : 8:15-9:15\n");
       break;

  case 3 :
        printf("period 3\n");
        printf("subject : c programing\n" );
        printf("time : 9:15-10:15\n");
        break;
 }
 return 0;
 }
