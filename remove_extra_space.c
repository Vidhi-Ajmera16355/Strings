#include<stdio.h>
#include<string.h>
int main() {
   char string[200];
   int i, j, len;
   printf("Enter a statement: ");
   scanf("%[^\n]c",string);
   len = strlen(string);
   for(i=0; i<len; i++) {
      if(string[0]==' ') {
         for(i=0; i<(len-1); i++)
         string[i] = string[i+1];
         string[i] = '\0';
         len--;
         i = -1;
         continue;
      }
      if(string[i]==' ' && string[i+1]==' ') {
         for(j=i; j<(len-1); j++) { 
            string[j] = string[j+1];
         }
         string[j] = '\0';
         len--;
         i--;
      }
   }
   printf("New String after removing extra spaces is = %s", string);
//   getch();
   return 0;
}
