#include<stdio.h>

void trim(char *);
int main(void)
{
char *p;
char str[255];
printf("文字列は?\n");
gets(str);
p=str;
printf("変換前=%s\n",str);
printf("変換後=");
trim(p);
// printf("変換後=%s\n",str);
}

void trim(char *p)
{
int i=0;
while(*p!='\0'){
if(*p!=' '){
printf("%c",*p);
}
p++;
}
}
