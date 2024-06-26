/*
#include <stdio.h>

void reverse(char str[]){
	int len;
	while(str[len] != '\0'){
		len++;
	}
	int start = 0,end = len-1;
	while(start < end){
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

void print(char *str){
	printf("Reverse word string ==  %s\n",str);	
}

void main(){
	char str[100];
	int i,j;

	printf("Enter the word string!!!!!!! === ");
	fgets(str, sizeof(str),stdin);
	
	int len;
	while(str[len] != '\0'){
		len++;
	}
	for(i=0,j=0; i<len; i++,j++){
		if(str[i] == ' ' || str[i] == '\0'){
			reverse(str[i]);
			j = i+1;
		}
	}
	//print(str);
	printf("Reversed string word == %s",str);
}




*/


#include <stdio.h>
#include <string.h>

int main()
{
    char str[64];
    char words[6][10];
    char temp;

    int i = 0;
    int j = 0;
    int k = 0;
    int ii = 0;
    int l = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", str);

    while (str[i] != 0) {
        if (str[i] == ' ') {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        else {
            words[k][j] = str[i];
            j++;
        }
        i++;
    }
    words[k][j] = '\0';

    for (i = 0; i <= k; i++) {
        l = strlen(words[i]);

        for (j = 0, ii = l - 1; j < ii; j++, ii--) {
            temp = words[i][j];
            words[i][j] = words[i][ii];
            words[i][ii] = temp;
        }
    }

    printf("Result: \n");
    for (i = 0; i <= k; i++)
        printf("%s ", words[i]);
}
