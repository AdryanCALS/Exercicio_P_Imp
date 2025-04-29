#include <stdio.h>
#include <conio.h>

int main( )
{
  struct cadastro {
     char login[20];
     char senha[20];
     char nome[30];
     char endereco[50];
     char telefone[15];
     char dataNascimento[10];
  } cad, cad1, cad2, cad3;

  char opcao1, opcao2, opcao3;
  int compLogin, compSenha;
  printf("CADASTRO DE USUARIO\n\n");
  printf("Informe o login do usuario (ate 20 caracteres): ");
  gets(cad1.login); //scanf("%s", cad1.login);
  printf("Informe a senha do usuario (ate 20 caracteres): ");
  gets(cad1.senha); //scanf("%s", cad1.senha);
  printf("Informe o nome do usuario (ate 30 caracteres): ");
  gets(cad1.nome); //scanf("%s", cad1.nome);
  printf("Informe o endereco do usuario (ate 50 caracteres): ");
  gets(cad1.endereco); //scanf("%s", cad1.endereco);
  printf("Informe o telefone do usuario (ate 15 caracteres): ");
  gets(cad1.telefone); //scanf("%s", cad1.endereco);
  printf("Informe a data de nascimento usuario: ");
  gets(cad1.dataNascimento); //scanf("%s", cad1.endereco);

  printf("\n\nDESEJA CADASTRAR UM NOVO USUARIO (S/N)? ");
  scanf("%c", &opcao1);

  if (opcao1 == 'N'){
    printf("\nDESEJA ATUALIZAR O SEU USUARIO (S/N)? ");
    getchar();
    scanf("%c", &opcao2);

    if (opcao2 == 'S'){
      printf("\nInforme o login do usuario (ate 20 caracteres): ");
      scanf("%s", cad.login);
      compLogin = strcmp(cad.login, cad1.login); //Comparação com Strcmp
      printf("Informe a senha do usuario (ate 20 caracteres): ");
      scanf("%s", cad.senha);
      compSenha = strcmp(cad.senha, cad1.senha);

      if ((compLogin == 0) && (compSenha == 0)){
         printf("\nInforme o que deseja atualizar (n)ome, (e)ndereco? ");
         getchar();
         scanf("%c", &opcao3);
         getchar();
         switch(opcao3){
            case 'n':
              printf("Informe o novo nome do usuario (ate 30 caracteres): ");
              gets(cad1.nome);
              break;
            case 'e':
              printf("Informe o novo endereco do usuario (ate 50 caracteres): ");
              gets(cad1.endereco);
              break;
            case 't':
                printf("Informe o novo telefone do usuario (ate 15 caracteres): ");
            case 'b':
               printf("Informe a nova data de nascimento do usuario do usuario" );
            default:
              printf("\nCAMPO INVALIDO");
         }
         printf("\n\nUPDATE:\nLogin: %s\nSenha: %s\nNome: %s\nEndereco: %s", cad1.login, cad1.senha, cad1.nome, cad1.endereco);
      }else
        printf("\nLOGIN OU SENHA INVALIDOS");
     }
    }

}
