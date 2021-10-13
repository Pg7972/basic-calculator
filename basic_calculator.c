#include <stdio.h>

int main(void) {
 int a,b;
 char c;
 printf("enter which operation which u going to perform= ");
 scanf("%c",&c);
 printf("\n enter a&b= ");
 scanf("%d%d",&a,&b);

 switch(c)
 {
   case '+':
   printf("%d + %d= %d",a,b,a+b);
   break;
   case '-':
    printf("%d - %d= %d",a,b,a-b);
    break;

    case '*':
     printf("%d * %d= %d",a,b,a*b);
     break;
     case '/':
      printf("%d / %d= %d",a,b,a/b);
      break;
      default:
      printf("enter valid operation\n");
 }
  return 0;
}
