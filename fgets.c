#include <stdio.h>

int main(){
	FILE *fp = fopen("text.txt", "r");
	char str[2000];
	fgets(str, 2000, fp);
	while(!feof(fp)){
		printf("%s",str);
		fgets(str, 2000, fp);
	}
	fclose(fp);
	return 0;
}
/*
    #include<stdio.h>
    void main( )
    {
    FILE *fp ;
    char ch ;
    fp = fopen("file_handle.c","r") ;
    while ( 1 )
    {
    ch = fgetc ( fp ) ;
    if ( ch == EOF )
    break ;
    printf("%c",ch) ;
    }
    fclose (fp ) ;
    }

*/
