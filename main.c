#include <stdio.h>
#include <string.h>
int main( )
{
  struct cadastro {
     char login[20];
     char senha[20];
     char nome[30];
     char endereco[50];
     char telefone[15];
     char dataNascimento[11];
  } cad, cad1, cad2, cad3;
  
  char opcao, opcao2;
  int compLogin1, compSenha1, compLogin2 ,compLogin3, compSenha2,compSenha3, num_usuarios;

  printf("CADASTRO DE USUARIO\n\n");
  printf("Informe o login do usuario (ate 20 caracteres): ");
  scanf(" %19s", cad1.login);
  while (getchar() != '\n');//limpa o buffer, evitando erros
  printf("Informe a senha do usuario (ate 20 caracteres): ");
  scanf(" %19s", cad1.senha);
  while (getchar() != '\n');
  printf("Informe o nome do usuario (ate 30 caracteres): ");
  scanf(" %29[^\n]", cad1.nome);//usei essa formatação no scanf para aceitar espaços(" ") nesses campos
  while (getchar() != '\n');
  printf("Informe o endereco do usuario (ate 50 caracteres): ");
  scanf(" %49[^\n]", cad1.endereco);
  while (getchar() != '\n');
  printf("Informe o telefone do usuario (ate 15 caracteres): ");
  scanf(" %14[^\n]", cad1.telefone);
  while (getchar() != '\n');
  printf("Informe a data de nascimento do usuario (ate 11 caracteres): ");
  scanf(" %10[^\n]", cad1.dataNascimento);
  while (getchar() != '\n');
  num_usuarios = 1;

  printf("\n\nVOCE DESEJA: (C)ADASTRAR UM NOVO USUARIO, (A)TUALIZAR O CADASTRO, (V)ER OS SEUS DADOS, \n(S)AIR DO PROGRAMA(QUALQUER OUTRA TECLA ENCERRA): ");
  scanf(" %c", &opcao);

  while((opcao == 'C') || (opcao == 'c')){
    if (num_usuarios == 1){
        printf("CADASTRO DE USUARIO\n\n");
        printf("Informe o login do usuario (ate 20 caracteres): ");
        scanf(" %19s", cad2.login);
        while (getchar() != '\n');//limpa o buffer, evitando erros
        printf("Informe a senha do usuario (ate 20 caracteres): ");
        scanf(" %19s", cad2.senha);
        while (getchar() != '\n');
        printf("Informe o nome do usuario (ate 30 caracteres): ");
        scanf(" %29[^\n]", cad2.nome);//usei essa formatação no scanf para aceitar espaços(" ") nesses campos
        while (getchar() != '\n');
        printf("Informe o endereco do usuario (ate 50 caracteres): ");
        scanf(" %49[^\n]", cad2.endereco);
        while (getchar() != '\n');
        printf("Informe o telefone do usuario (ate 15 caracteres): ");
        scanf(" %14[^\n]", cad2.telefone);
        while (getchar() != '\n');
        printf("Informe a data de nascimento do usuario (ate 11 caracteres): ");
        scanf(" %10[^\n]", cad2.dataNascimento);
        while (getchar() != '\n');
        num_usuarios++;
    }
    else if(num_usuarios == 2){
        printf("Informe o login do usuario (ate 20 caracteres): ");
        scanf(" %19s", cad3.login);
        while (getchar() != '\n');//limpa o buffer, evitando erros
        printf("Informe a senha do usuario (ate 20 caracteres): ");
        scanf(" %19s", cad3.senha);
        while (getchar() != '\n');
        printf("Informe o nome do usuario (ate 30 caracteres): ");
        scanf(" %29[^\n]", cad3.nome);//usei essa formatação no scanf para aceitar espaços(" ") nesses campos
        while (getchar() != '\n');
        printf("Informe o endereco do usuario (ate 50 caracteres): ");
        scanf(" %49[^\n]", cad3.endereco);
        while (getchar() != '\n');
        printf("Informe o telefone do usuario (ate 15 caracteres): ");
        scanf(" %14[^\n]", cad3.telefone);
        while (getchar() != '\n');
        printf("Informe a data de nascimento do usuario (ate 11 caracteres): ");
        scanf(" %10[^\n]", cad3.dataNascimento);
        while (getchar() != '\n');
        num_usuarios++;
    }
    else{
      printf("\nLIMITE DE USUARIOS ATINGITO!! ESCOLHA OUTRA OPCAO");
    }

    printf("\n\nVOCE DESEJA: (C)ADASTRAR UM NOVO USUARIO, (A)TUALIZAR O CADASTRO, (V)ER OS SEUS DADOS, (S)AIR DO PROGRAMA: ");
    scanf(" %c", &opcao);
  }
   
  while((opcao == 'A') || (opcao == 'a')){
      printf("\nInforme o login do usuario (ate 20 caracteres): ");
      scanf(" %s", cad.login);
      compLogin1 = strcmp(cad.login, cad1.login); //Comparação com Strcmp
      compLogin2 = strcmp(cad.login, cad2.login); //Comparação com Strcmp
      compLogin3 = strcmp(cad.login, cad3.login); //Comparação com Strcmp
      printf("Informe a senha do usuario (ate 20 caracteres): ");
      scanf(" %s", cad.senha);
      compSenha1 = strcmp(cad.senha, cad1.senha);
      compSenha2 = strcmp(cad.senha, cad2.senha);
      compSenha3 = strcmp(cad.senha, cad3.senha);

      if ((compLogin1 == 0) && (compSenha1 == 0)){
         printf("\nInforme o que deseja atualizar (usuario 1): (l)ogin, (s)enha, (n)ome, (e)ndereco, (t)elefone, (d)ata de nascimento: ");
         getchar();
         scanf(" %c", &opcao2);
         getchar();
         switch(opcao2){
            case 'l':
              printf("Informe o novo login do usuario (ate 20 caracteres): ");
              scanf(" %19s", cad1.login);
              while (getchar() != '\n');
              break;
            case 's':
              printf("Informe a nova senha do usuario (ate 20 caracteres): ");
              scanf(" %19s", cad1.senha);
              while (getchar() != '\n');
              break;
            case 'n':
              printf("Informe o novo nome do usuario (ate 30 caracteres): ");
              scanf(" %29[^\n]", cad1.nome);
              while (getchar() != '\n');
              break;
            case 'e':
              printf("Informe o novo endereco do usuario (ate 50 caracteres): ");
              scanf(" %49[^\n]", cad1.endereco);
              while (getchar() != '\n');
              break;
            case 't':
              printf("Informe o novo telefone do usuario (ate 15 caracteres): ");
              scanf(" %14[^\n]", cad1.telefone);
              while (getchar() != '\n');
              break;
            case 'd':
              printf("Informe a nova data de nascimenoto do usuario (ate 10 caracteres): ");
              scanf(" %10[^\n]", cad1.dataNascimento);
              while (getchar() != '\n');
              break;
            default:
              printf("\nCAMPO INVALIDO");
         }
         printf("\n\nUPDATE:\nLogin: %s\nSenha: %s\nNome: %s\nEndereco: %s\nTelefone: %s\nData de nascimento: %s", cad1.login, cad1.senha, cad1.nome, cad1.endereco, cad1.telefone, cad1.dataNascimento);
      }
      else if((compLogin2 == 0) && (compSenha2 == 0)){
         printf("\nInforme o que deseja atualizar (usuario 2): (l)ogin, (s)enha, (n)ome, (e)ndereco, (t)elefone, (d)ata de nascimento: ");
         getchar();
         scanf("%c", &opcao2);
         getchar();
         switch(opcao2){
          case 'l':
            printf("Informe o novo login do usuario (ate 20 caracteres): ");
            scanf(" %19s", cad2.login);
            while (getchar() != '\n');
            break;
          case 's':
            printf("Informe a nova senha do usuario (ate 20 caracteres): ");
            scanf(" %19s", cad2.senha);
            while (getchar() != '\n');
            break;
          case 'n':
            printf("Informe o novo nome do usuario (ate 30 caracteres): ");
            scanf(" %29[^\n]", cad2.nome);
            while (getchar() != '\n');
            break;
          case 'e':
            printf("Informe o novo endereco do usuario (ate 50 caracteres): ");
            scanf(" %49[^\n]", cad2.endereco);
            while (getchar() != '\n');
            break;
          case 't':
            printf("Informe o novo telefone do usuario (ate 15 caracteres): ");
            scanf(" %14[^\n]", cad2.telefone);
            while (getchar() != '\n');
            break;
          case 'd':
            printf("Informe a nova data de nascimenoto do usuario (ate 10 caracteres): ");
            scanf(" %10[^\n]", cad2.dataNascimento);
            while (getchar() != '\n');
            break;

          default:
            printf("\nCAMPO INVALIDO");
         }
         printf("\n\nUPDATE:\nLogin: %s\nSenha: %s\nNome: %s\nEndereco: %s\nTelefone: %s\nData de nascimento: %s", cad2.login, cad2.senha, cad2.nome, cad2.endereco, cad2.telefone, cad2.dataNascimento);
      }
      else if((compLogin3 == 0) && (compSenha3 == 0)){
         printf("\nInforme o que deseja atualizar (usuario 3): (l)ogin, (s)enha, (n)ome, (e)ndereco, (t)elefone, (d)ata de nascimento: ");
         getchar();
         scanf("%c", &opcao2);
         getchar();
         switch(opcao2){
          case 'l':
            printf("Informe o novo login do usuario (ate 20 caracteres): ");
            scanf(" %19s", cad3.login);
            while (getchar() != '\n');
            break;
          case 's':
            printf("Informe a nova senha do usuario (ate 20 caracteres): ");
            scanf(" %19s", cad3.senha);
            while (getchar() != '\n');
            break;
          case 'n':
            printf("Informe o novo nome do usuario (ate 30 caracteres): ");
            scanf(" %29[^\n]", cad3.nome);
            while (getchar() != '\n');
            break;
          case 'e':
            printf("Informe o novo endereco do usuario (ate 50 caracteres): ");
            scanf(" %49[^\n]", cad3.endereco);
            while (getchar() != '\n');
            break;
          case 't':
            printf("Informe o novo telefone do usuario (ate 15 caracteres): ");
            scanf(" %14[^\n]", cad3.telefone);
            while (getchar() != '\n');
            break;
          case 'd':
            printf("Informe a nova data de nascimenoto do usuario (ate 10 caracteres): ");
            scanf(" %10[^\n]", cad3.dataNascimento);
            while (getchar() != '\n');
            break;
          default:
            printf("\nCAMPO INVALIDO");
         }
         printf("\n\nUPDATE:\nLogin: %s\nSenha: %s\nNome: %s\nEndereco: %s\nTelefone: %s\nData de nascimento: %s", cad3.login, cad3.senha, cad3.nome, cad3.endereco, cad3.telefone, cad3.dataNascimento);
      }
      
      else
        printf("\nLOGIN OU SENHA INVALIDOS");

    printf("\n\nVOCE DESEJA: (A)TUALIZAR O CADASTRO, (V)ER OS SEUS DADOS, (S)AIR DO PROGRAMA: ");
    scanf(" %c", &opcao);
 }

 while((opcao == 'V') || (opcao == 'v')){
    printf("\nInforme o login do usuario (ate 20 caracteres): ");
    scanf(" %s", cad.login);
    compLogin1 = strcmp(cad.login, cad1.login); //Comparação com Strcmp
    compLogin2 = strcmp(cad.login, cad2.login); 
    compLogin3 = strcmp(cad.login, cad3.login); 
    printf("Informe a senha do usuario (ate 20 caracteres): ");
    scanf(" %s", cad.senha);
    compSenha1 = strcmp(cad.senha, cad1.senha);
    compSenha2 = strcmp(cad.senha, cad2.senha);
    compSenha3 = strcmp(cad.senha, cad3.senha);
    if((compLogin1 == 0) && compSenha1 == 0){
        printf("\n\nSEUS DADOS:\nLogin: %s\nSenha: %s\nNome: %s\nEndereco: %s\nTelefone: %s\nData de nascimento: %s", cad1.login, cad1.senha, cad1.nome, cad1.endereco, cad1.telefone, cad1.dataNascimento);
    }
    else if((compLogin2 == 0) && compSenha2 == 0){
      printf("\n\nSEUS DADOS:\nLogin: %s\nSenha: %s\nNome: %s\nEndereco: %s\nTelefone: %s\nData de nascimento: %s", cad2.login, cad2.senha, cad2.nome, cad2.endereco, cad2.telefone, cad2.dataNascimento);
    }
    else if((compLogin3 == 0) && compSenha3 == 0){
      printf("\n\nSEUS DADOS:\nLogin: %s\nSenha: %s\nNome: %s\nEndereco: %s\nTelefone: %s\nData de nascimento: %s", cad3.login, cad3.senha, cad3.nome, cad3.endereco, cad3.telefone, cad3.dataNascimento);
    }
    else
      printf("LOGIN OU SENHA INVALIDO(S)!");

    printf("\n\nVOCE DESEJA: (V)ER OS SEUS DADOS, (S)AIR DO PROGRAMA: ");
    scanf(" %c", &opcao);
  }
}