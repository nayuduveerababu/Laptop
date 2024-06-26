    #include <stdio.h>
    #include <string.h>
    int main()
    {
        char str[40];
       int i,j;	// declare the size of character string
        printf ("Enter a string to be reversed: ");
        scanf ("%[^\n]s", str);
	int len = strlen(str);
	for(i =0,j=len-1; i<j; i++,j--){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
//		len--;
	}
        // use strrev() function to reverse a string
        printf ("After the reverse of a string: %s\n ", str);
        return 0;
    }
