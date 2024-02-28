#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*db_lista = "../database/lista.txt";
	char	*db_atendidos = "../database/atendidos.txt";
	char	*db_gestao = "../database/gestao.txt";
	FILE	*f_lista, *f_atendidos, *f_gestao;
	int	ch, ch1, ch2;

	if ((f_lista = fopen(db_lista, "a+")) == NULL)
	{
		printf("FILE ERRO: erro ao abrir o arquivo %s.\n", db_lista);
		exit(1);
	}
	if ((f_atendidos = fopen(db_atendidos, "a+")) == NULL)
        {
                printf("FILE ERRO: erro ao abrir o arquivo %s.\n", db_atendidos);
                exit(2);
        }
	if ((f_gestao = fopen(db_gestao, "a+")) == NULL)
        {
                printf("FILE ERRO: erro ao abrir o arquivo %s.\n", db_gestao);
                exit(3);
        }
	while (fscanf(f_lista, "%d", &ch) != EOF)
	{}
	while (fscanf(f_atendidos, "%d", &ch1) != EOF)
        {}
	if (ch = ch1)
	{
		fprintf(f_gestao, "Bom atendimento :-) !! Nº clientes: %d, Nº de clientes atendidos: %d.\n", ch, ch1);
		printf("Bom atendimento :-) !! Nº clientes: %d, Nº de clientes atendidos: %d.\n", ch, ch1);
	}
	else if (ch > ch1)
	{
		fprintf(f_gestao, "Mal atendimento :-( !! Nº clientes: %d, Nº de clientes atendidos: %d.\n", ch, ch1);
		printf("Mal atendimento :-( !! Nº clientes: %d, Nº de clientes atendidos: %d.\n", ch, ch1);
	}
	else
	{
		fprintf(f_gestao, "Falha no sistema :-| !! Nº clientes: %d, Nº de clientes atendidos: %d.\n", ch, ch1);
		printf("Falha no sistema :-| !! Nº clientes: %d, Nº de clientes atendidos: %d.\n", ch, ch1);
	}
	fclose(f_lista);
	fclose(f_atendidos);
	fclose(f_gestao);
	return (0);
}
