#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Aluno
{
    char nome[100];
    char matricula[12];
    char curso[15];
    char data_nasc[15];
};

void adicionarAluno(struct Aluno aluno[], int *cont)
{
    struct Aluno novoAluno;
    printf("\n***Adicionando novo Aluno***\n");
    printf("Nome: ");
    scanf(" %[^\n]", novoAluno.nome);
    getchar();
    printf("Matricula: ");
    scanf("%11s", novoAluno.matricula);
    printf("Curso: ");
    scanf("%14s", novoAluno.curso);
    printf("Data (DD/MM/AA): ");
    scanf("%14s", novoAluno.data_nasc);

    aluno[*cont] = novoAluno;
    (*cont)++;
    printf("\n***Aluno adicionado com sucesso!***\n");
}

void buscarAluno(struct Aluno aluno[], int cont)
{
    char buscarAluno[100];
    int encontrado = 0;

    printf("\n***Buscando o Aluno***\n");
    printf("Nome: ");
    scanf(" %[^\n]", buscarAluno);

    for (int i = 0; i < cont; i++)
    {
        if (strcmp(aluno[i].nome, buscarAluno) == 0)
        {
            printf("***Aluno encontrado***\n");
            printf("Nome: %s\n", aluno[i].nome);
            printf("Matricula: %s\n", aluno[i].matricula);
            printf("Curso: %s\n", aluno[i].curso);
            printf("Data de Nascimento: %s\n", aluno[i].data_nasc);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado)
    {
        printf("\nAluno nao encontrado...\n");
    }
}

void excluirAluno(struct Aluno aluno[], int *cont)
{
    char matriculaExcluir[20];
    int encontrado = 0;

    printf("\n***Excluindo Aluno***\n");
    printf("Digite o numero da matricula do aluno a ser excluido: ");
    scanf("%19s", matriculaExcluir);

    for (int i = 0; i < *cont; i++)
    {
        if (strcmp(aluno[i].matricula, matriculaExcluir) == 0)
        {
            printf("\n***Aluno encontrado***\n");
            printf("Nome: %s\n", aluno[i].nome);
            printf("Matricula: %s\n", aluno[i].matricula);
            printf("Curso: %s\n", aluno[i].curso);
            printf("Data de Nascimento: %s\n", aluno[i].data_nasc);

            for (int j = i; j < *cont - 1; j++)
            {
                aluno[j] = aluno[j + 1];
            }
            (*cont)--;
            encontrado = 1;
            printf("\n***Aluno excluido com sucesso!***\n");
            break;
        }
    }
    if (!encontrado)
    {
        printf("\nAluno nao encontrado...\n");
    }
}

void listarAlunos(struct Aluno aluno[], int cont)
{
    printf("\n***Listando todos os alunos***\n");

    if (cont == 0)
    {
        printf("\nNenhum aluno cadastrado...\n");
    }
    else
    {
        for (int i = 0; i < cont; i++)
        {
            printf("Aluno: %d\n", i + 1);
            printf("Nome: %s\n", aluno[i].nome);
            printf("Matricula: %s\n", aluno[i].matricula);
            printf("Curso: %s\n", aluno[i].curso);
            printf("Data de Nascimento: %s\n", aluno[i].data_nasc);
        }
    }
}

void editarAluno(struct Aluno aluno[], int cont)
{
    char matriculaEditar[20];
    int encontrado = 0;

    printf("\n***Editando dados de um aluno***\n");
    printf("Digite o numero da matricula do aluno a ter os dados alterados: ");
    scanf("%19s", matriculaEditar);

    for (int i = 0; i < cont; i++)
    {
        if (strcmp(aluno[i].matricula, matriculaEditar) == 0)
        {
            printf("Digite os novos dados do aluno:\n");
            printf("Nome: ");
            scanf(" %[^\n]", aluno[i].nome);
            printf("Matricula: ");
            scanf("%11s", aluno[i].matricula);
            printf("Curso: ");
            scanf("%14s", aluno[i].curso);
            printf("Data (DD/MM/AA): ");
            scanf("%14s", aluno[i].data_nasc);

            encontrado = 1;
            printf("\n***Dados do aluno editados com sucesso!***\n");
            break;
        }
    }
    if (!encontrado)
    {
        printf("\nAluno nao encontrado...\n");
    }
}

int main()
{
    struct Aluno aluno[100];
    int escolha;
    int cont = 0;

    do
    {
        printf("\n===== Menu =====\n");
        printf("1. Adicionar Novo Aluno\n");
        printf("2. Buscar Aluno por Nome\n");
        printf("3. Excluir Aluno\n");
        printf("4. Listar Todos os Alunos\n");
        printf("5. Editar Dados de um Aluno\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            adicionarAluno(aluno, &cont);
            break;
        case 2:
            buscarAluno(aluno, cont);
            break;
        case 3:
            excluirAluno(aluno, &cont);
            break;
        case 4:
            listarAlunos(aluno, cont);
            break;
        case 5:
            editarAluno(aluno, cont);
            break;
        case 6:
            printf("\nSaindo do programa...\n");
            break;
        default:
            printf("\nOpcao invalida, tente novamente!\n");
            break;
        }
    } while (escolha != 6);

    return 0;
}
