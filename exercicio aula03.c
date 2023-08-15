#include <stdio.h>

main(){

    char nome[60];
    int idade;
    char matricula[50];
    char endereco[50];
    char curso[100];
    int periodo;
    char disciplina[80];


    printf("\n Digite o seu nome: ");
    scanf("%s", nome); //nao consegui usar o ("%[ˆ\n]", nome) para poder usar o espaço

    printf("\n Digite a sua idade: ");
    scanf("%d", &idade);

    printf("\n Digite aqui o numero da sua matricula: ");
    scanf("%s", matricula);

    fflush(stdin);

    printf("\n Digite aqui seu endereço: ");
    fgets(endereco, 50, stdin);

    printf("\n Qual o curso que você está fazendo? ");
    scanf("%s", curso); //nao consegui usar o ("%[ˆ\n]", curso) para poder usar o espaço

    printf("\n Qual o periodo do seu curso você está? ");
    scanf("%d", &periodo);

    printf("\n Qual a sua materia preferida do curso? ");
    scanf("%s", disciplina);


    printf("\n Seu nome de usuario é: %s \n Sua idade é: %d \n Sua matricula é: %s \n Seu endereco é esse: %s \n O curso que você está fazendo é: %s \n O periodo que você está é o: %d \n A sua disciplina favorita é a: %s \n", nome, idade, matricula, endereco, curso, periodo, disciplina);

}
