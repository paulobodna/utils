// Função readline lê uma linha do prompt de comando
char *readline() {
	char c;
	char *string = NULL;
	int counter = 0;
	do {
		c = fgetc(stdin);
		string = realloc(string, sizeof(char) * (counter+1));
		string[counter++] = c;
	} while (c != 10);
	string[counter-1] = '\0';

	return string;
}
