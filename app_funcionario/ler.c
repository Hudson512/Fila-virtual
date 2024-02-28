#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*db_lista = "../database/lista.txt";
	char	*db_atendidos = "../database/atendidos.txt";
	FILE	*f_lista;
	FILE	*f_atendidos;
	int	ch, ch1;
	
	if((f_lista = fopen(db_lista, "a+")) == NULL)
	{
		printf("FILE ERRO: Erro ao abrir o arquivo %s.\n", db_lista);
		exit(1);
	}
	if((f_atendidos = fopen(db_atendidos, "a+")) == NULL)
        {
                printf("FILE ERRO: Erro ao abrir o arquivo %s.\n", db_atendidos);
                exit(2);
        }
	while (fscanf(f_lista, "%d", &ch) != EOF)
	{}
	while (fscanf(f_atendidos, "%d", &ch1) != EOF)
	{}
	ch1++;
	if (ch1 <= ch)
	{
		fprintf(f_atendidos, "%d\n", ch1);
		printf("\nCliente nº %d, por favor...\n", ch1);
	}
	else
	{
		printf("Nenhum cliente a espera, aguarde...\n");
	}
	fclose(f_lista);
	fclose(f_atendidos);
}
