#include<stdio.h>
#include<string.h>
int main(){
char str1[100],str2[100],result[200];
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);
char*ptr1=str1;
char*ptr2=str2;
char*resultPtr=result;
while(*ptr1!='\0'){
*resultPtr=*ptr1;
ptr1++;
resultPtr++;
}
while(*ptr2!='\0'){
*resultPtr=*ptr2;
ptr2++;
resultPtr++;
}
*resultPtr='\0';
printf("Concatenated string:%s\n",result);
return 0;
}
