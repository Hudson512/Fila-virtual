#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*db = "../database/lista.txt";
	FILE *f_lista;
	int	ch;
	int	i;

	ch = 0;
	i = 0;
	if ((f_lista = fopen(db, "a+")) == NULL)
	{
		printf("FILE ERRO: Não foi possível abrir o arquivo %s.\n", db);
		exit(1);
	}
	while (fscanf(f_lista, "%d", &ch) != EOF)
		i++;
	ch = i + 1;
	fprintf(f_lista, "%d\n", ch);
	printf("Cliente Nº %d\n",ch);
	fclose(f_lista);
	return (0);
}
