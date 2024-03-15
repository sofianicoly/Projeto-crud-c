# Projeto CRUD em C

Um simples projeto em linguagem C que demonstra operações CRUD (Create, Read, Update, Delete) em uma lista de alunos feito para uma atividade da faculdade!

## Tecnologias

- Linguagem: C
- IDE: Virtual Studio Code

## Funcionalidades

Este projeto oferece as seguintes funcionalidades:

1. **Adicionar Novo Aluno**: Permite adicionar um novo aluno à lista.
2. **Buscar Aluno por Nome**: Busca um aluno na lista pelo nome.
3. **Excluir Aluno**: Remove um aluno da lista.
4. **Listar Todos os Alunos**: Exibe todos os alunos cadastrados.
5. **Editar Dados de um Aluno**: Permite alterar os dados de um aluno na lista.

## Como Usar

1. Certifique-se de ter um ambiente de desenvolvimento C configurado.
2. Clone este repositório:

```bash
git clone https://github.com/sofianicoly/CRUDemC
```

Navegue até o diretório do projeto:
```bash
cd projeto-crud-c
```

1. Compile o código:
```bash
gcc -o main main.c
```
2. Execute o programa:
```bash
./main
```
3. Escolha uma opção do menu exibido no terminal para interagir com a lista de alunos.
## Exemplo de Uso
```bash
===== Menu =====
1. Adicionar Novo Aluno
2. Buscar Aluno por Nome
3. Excluir Aluno
4. Listar Todos os Alunos
5. Editar Dados de um Aluno
6. Sair
Escolha uma opcao: 1

***Adicionando novo Aluno***
Nome: Joao da Silva
Matricula: 20230001
Curso: Engenharia
Data (DD/MM/AA): 01/01/1990

***Aluno adicionado com sucesso!***

===== Menu =====
1. Adicionar Novo Aluno
2. Buscar Aluno por Nome
3. Excluir Aluno
4. Listar Todos os Alunos
5. Editar Dados de um Aluno
6. Sair
Escolha uma opcao: 4

***Listando todos os alunos***
Aluno: 1
Nome: Joao da Silva
Matricula: 20230001
Curso: Engenharia
Data de Nascimento: 01/01/1990
```
## Contribuição
Contribuições são bem-vindas! Sinta-se à vontade para abrir uma Issue para discutir novas funcionalidades ou enviar um Pull Request.

## Licença
Este projeto está licenciado sob a MIT License.
