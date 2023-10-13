nclude <stdio.h>

char getch(void);

int main()
{
	char word[20];
	char encrypt[20];
	int code,i;

	printf("Type the secret word: ");
	scanf("%s",word);
	printf("Type the encryption code (0 to 255): ");
	scanf("%d",&code);

	i = 0;
	while(word[i])
	{
		encrypt[i] = word[i] ^ code;
		i++;
	}
	printf("Here is the encrypted word: '%s'\n",encrypt);

	printf("Press Enter to decrypt:");
	getch();

	i = 0;
	while(word[i])
	{
		word[i] = encrypt[i] ^ code;
		i++;
	}
	printf("Here is the decrypted word: '%s'\n",word);

	return(0);
}

char getch(void)
{
    char ch;
    int r;

    ch = getchar();
    do
        r = getchar();
    while( r != EOF && r != '\n' );
    clearerr(stdin);
    return(ch);
}
