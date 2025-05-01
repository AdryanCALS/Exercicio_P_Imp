# Sistema de Cadastro de Usuários em C

## Autores
- Adryan Lima
- Edward Lira

## Descrição
Este programa em C implementa um sistema de cadastro de usuários conforme as especificações fornecidas na disciplina de Programação Imperativa. O sistema permite:

- Cadastrar até 3 usuários com informações pessoais
- Atualizar dados cadastrais
- Visualizar informações dos usuários cadastrados

## Funcionalidades
✔ Cadastro de múltiplos usuários  
✔ Autenticação por login/senha  
✔ Atualização de dados cadastrais  
✔ Consulta segura de informações  

## Estrutura de Dados
```c
struct cadastro {
   char login[20];
   char senha[20];
   char nome[30];
   char endereco[50];
   char telefone[15];
   char dataNascimento[11];
};
