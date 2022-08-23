
#include<stdio.h>

// Print frequency of element.
void printFrequency(char *str ){

   int fre[26]={0};
   int i=0;
   while(str[i]){
    fre[str[i]-'a']++;
    i++;
   }

   for(int i=0; i<26 ; i++){
     printf("%c : %d \n",i+97,fre[i]);
   }
}

// Code starts from here.
int main() {
    char str[100] = {0};

    printf(" Enter the String : ");
    scanf("%s", &str);
    printFrequency(str);
    printf("Status: Done");
}