#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include <dirent.h>

FILE *arq_relatorio;
int nota[4];
char paciente_global[100];
FILE *arq_anamnese;
char texto[100000];
FILE *arq_dados;
char dado[1000];

int main(){
    setlocale(LC_ALL, "Portuguese");
    titiloPrograma();

    menu_principal_txt();
    menu_principal();
}

void titiloPrograma(){
    system("color 2");
    printf("\n================================================================================================================\n");
    printf("======================                                                                    ======================\n");
    printf("====================                                SARP                                    ====================\n");
    printf("==================                                                                            ==================\n");
    printf("================             Sistema de Armazenamento de Registros Psicológicos                ================\n");
    printf("==================                                                                            ==================\n");
    printf("====================                                                                        ====================\n");
    printf("======================                                                                    ======================\n");
    printf("================================================================================================================\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void lista_pacientes(){
    system("dir");
}

void menu_principal_txt(){

    system("pause");
    system("cls");
    system("color 7");
    printf("\n======================                          Menu Principal                            ======================\n\n\n");
    printf("<1>Cria um novo Paciente\n");
    printf("<2>Lista os pacientes\n");
    printf("<3>Dados do Paciente \n");
    printf("<4>Seleciona um Paciente \n");
    printf("<5>Ler dados do Paciente\n");
    printf("<6>Anamnese\n");
    printf("<7>Relatorios\n");
    printf("<8>FIM DO PROGRAMA \n");
}
int txt_menu_anamnese(){
    int opt;
    system("cls");
    printf("\n======================                          MENU ANAMNESE                             ======================\n\n");
    printf("< 1 > Criar anamnese (Caso escolha essa opção com uma anamnese salva ela será apagada) \n");
    printf("< 2 > Ler anamnese\n");
    printf("< 3 > Voltar para menu (FIM MENU ANAMNESE) \n");
    printf("---->");
    scanf("%d", &opt);
    return opt;

    }

void txt_criar_anamnese(){
    system("cls");
    arq_anamnese = fopen("testeanamnese.txt", "w");
    fprintf(arq_anamnese, "%s\n", "---------- TESTE PRIMEIRA ANAMNESE ----------\n");
    printf("ANAMNESE PACIENTE ");
    printf("Digite normalmente cada linha apertando enter para ir para a próxima\n(Aperte enter 2x e o programa encerra) : \n\n");

    fprintf(arq_anamnese, "%s", "\nPosição na prole:\n");
    printf("Posição na prole:\n");
    gets(texto);
    do{
        gets(texto);
        if (strlen(texto) > 2)
            fprintf(arq_anamnese, "%s\n", texto);
    }while (strlen(texto) > 2);

    system("cls");
    fprintf(arq_anamnese, "%s", "\nNúmero de irmãos:\n");
    printf("Número de irmãos:\n");
    do{
        gets(texto);
        if (strlen(texto) > 2)
            fprintf(arq_anamnese, "%s\n", texto);
    }while (strlen(texto) > 2);

    system("cls");
    fprintf(arq_anamnese, "%s", "\nPrimeira infância\n:");
    printf("Primeira infância:\n");
    do{
        gets(texto);
        if (strlen(texto) > 2)
            fprintf(arq_anamnese, "%s\n", texto);
    }while (strlen(texto) > 2);

    system("cls");
    fprintf(arq_anamnese, "%s", "\nSegunda infância:\n");
    printf("Segunda infância:\n");
    do{
        gets(texto);
        if (strlen(texto) > 2)
            fprintf(arq_anamnese, "%s\n", texto);
    }while (strlen(texto) > 2);

    system("cls");
    fprintf(arq_anamnese, "%s", "\nAdolescência\n:");
    printf("Adolescência:\n");
    do{
        gets(texto);
        if (strlen(texto) > 2)
            fprintf(arq_anamnese, "%s\n", texto);
    }while (strlen(texto) > 2);

    system("cls");
    fprintf(arq_anamnese, "%s", "\nVida Adulta\n:");
    printf("Vida Adulta:\n");
    do{
        gets(texto);
        if (strlen(texto) > 2)
            fprintf(arq_anamnese, "%s\n", texto);
    }while (strlen(texto) > 2);

    system("cls");
    fprintf(arq_anamnese, "%s", "\nTerceira Idade:\n");
    printf("Terceira Idade:\n");
    do{
        gets(texto);
        if (strlen(texto) > 2)
            fprintf(arq_anamnese, "%s\n", texto);
    }while (strlen(texto) > 2);

    system("cls");
    fprintf(arq_anamnese, "%s", "\nDiagnósticos Multidisciplinares:\n");
    printf("Diagnósticos Multidisciplinares:\n");
    do{
        gets(texto);
        if (strlen(texto) > 2)
            fprintf(arq_anamnese, "%s\n", texto);
    }while (strlen(texto) > 2);
    fclose(arq_anamnese);

}

void txt_ler_anamnese(){
    system("cls");
    arq_anamnese = fopen("testeanamnese.txt", "r");
    printf("LENDO ARQUIVO\n\n");

    while (!feof(arq_anamnese)){
        fgets(texto, 100000, arq_anamnese);
        printf("%s", texto);
    }
    printf("\n");
    fclose(arq_anamnese);
}

int anamin(){

    setlocale(LC_ALL, "Portuguese");
    do{
        switch(txt_menu_anamnese()){
            case 1:
                txt_criar_anamnese();
                break;

            case 2:
                txt_ler_anamnese();
                break;

            case 3:
                //Voltar pro menu
                printf("FIM DE VDD");
                break;

            default:
                printf("\nERRO default\n");

            txt_menu_anamnese();
            system("pause");
        }
        system("pause");
    }while(txt_menu_anamnese() != 3);
}

void txt_criar_dados(){
    system("cls");
    arq_dados = fopen("testedados.txt", "w");
    fprintf(arq_dados, "%s\n", "---------- TESTE DADOS PACIENTE  ----------\n");
    printf("DADOS PACIENTE \n\n");
    //
    fprintf(arq_dados, "%s", "Nome:");
    printf("Nome:");
    gets(dado);
    gets(dado);
    fprintf(arq_dados, "%s\n", dado);
    //
    fprintf(arq_dados, "%s", "CPF:");
    printf("CPF:");
    gets(dado);
    fprintf(arq_dados, "%s\n", dado);
    //
    fprintf(arq_dados, "%s", "Celular:");
    printf("Celular:");
    gets(dado);
    fprintf(arq_dados, "%s\n", dado);
    //
    fprintf(arq_dados, "%s", "Cidade:");
    printf("Cidade:");
    gets(dado);
    fprintf(arq_dados, "%s\n", dado);
    //
    fprintf(arq_dados, "%s", "Bairro:");
    printf("Bairro:");
    gets(dado);
    fprintf(arq_dados, "%s\n", dado);
    //
    fprintf(arq_dados, "%s", "Rua:");
    printf("Rua:");
    gets(dado);
    fprintf(arq_dados, "%s\n", dado);
    //
    fprintf(arq_dados, "%s", "Número:");
    printf("Número:");
    gets(dado);
    fprintf(arq_dados, "%s\n", dado);
    fclose(arq_dados);

}

void txt_ler_dados(){
    system("cls");
    arq_dados = fopen("testedados.txt", "r");
    printf("LENDO ARQUIVO\n\n");

    while (!feof(arq_dados)){
        fgets(dado, 100000, arq_dados);
        printf("%s", dado);
    }
    printf("\n");
    fclose(arq_dados);
}

int relat(){
   setlocale(LC_ALL, "Portuguese");
    do{
        switch(txt_menu_relatorio()){
            case 1:
                txt_criar_relatorio();
                break;

            case 2:
                txt_adicionar_relatorio();
                break;

            case 3:
                txt_ler_relatorio();
                break;

            case 4:
                //Voltar pro menu
                printf("FIM DE VDD");
                break;

            default:
                printf("\nERRO default\n");

            txt_menu_relatorio();
            system("pause");
        }
        system("pause");
    }while(txt_menu_relatorio() != 4);

}

void txt_ler_relatorio(){
    system("cls");
    arq_relatorio = fopen("testerelatorio.txt", "r");
    printf("LENDO ARQUIVO\n\n");

    while (!feof(arq_relatorio)){
        fgets(nota, 4, arq_relatorio);
        printf("%s", nota);
    }
    printf("\n");
    fclose(arq_relatorio);
}

void txt_adicionar_relatorio(){
    system("cls");
    arq_relatorio = fopen("testerelatorio.txt", "a");


    printf("---------- Iniciando nova sessão ----------");
    fprintf(arq_relatorio, "%s", "\n\n\nSESSÃO :\n\n");

    printf ("\nAvaliação de -10 a 10, sendo 0 a normalidade");
    printf("\nNa visão do paciente:\n\n");
    fprintf(arq_relatorio,"%s", "Na visão do paciente:\n\n");


    fprintf(arq_relatorio, "%s", "Expectativa diante a vida:");
    printf("Expectativa diante a vida:");
    gets(nota);
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Ansiedade:");
    printf("Ansiedade:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Stress:");
    printf("Stress:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Volição:");
    printf("Volição:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Humor:");
    printf("Humor:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Visão corporal:");
    printf("Visão corporal:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Auto-estima:");
    printf("Auto-estima:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Vontade/Pragmatismo:");
    printf("Vontade/Pragmatismo:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);


    system("cls");

    printf ("\nAvaliação de -10 a 10, sendo 0 a normalidade");
    printf("\nNa visão do profissional:\n\n"); //MESMA COISA DAQUI PRA BAIXO SÓ QUE NA VISÃO DO PROFISSIONAL

    fprintf(arq_relatorio,"%s", "\nNa visão do profissional:\n\n");
    fprintf(arq_relatorio, "%s", "Expectativa diante a vida:");
    printf("Expectativa diante a vida:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Ansiedade:");
    printf("Ansiedade:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Stress:");
    printf("Stress:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Volição:");
    printf("Volição:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Humor:");
    printf("Humor:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Visão corporal:");
    printf("Visão corporal:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Auto-estima:");
    printf("Auto-estima:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    fprintf(arq_relatorio, "%s", "Vontade/Pragmatismo:");
    printf("Vontade/Pragmatismo:");
    gets(nota);
    fprintf(arq_relatorio, "%s\n", nota);

    printf("\n");
    fclose(arq_relatorio);
}

void txt_criar_relatorio(){

    system("cls");
    arq_relatorio = fopen("testerelatorio.txt", "w");
    fprintf(arq_relatorio, "%s\n", "---------- TESTE PRIMEIRO RELATORIO ----------\n");
    printf("arquivo criado com sucesso!\n");
    fclose(arq_relatorio);
}

int txt_menu_relatorio(){

    int opt;
    system("cls");
    printf("\n======================                          Menu Relatório                             ======================\n\n");
    printf("< 1 > Criar relatório do início (Caso escolha essa opção com um relatório salvo ela será apagada) \n");
    printf("< 2 > Adicionar nova sessão ao relatório\n");
    printf("< 3 > Ler relatório\n");
    printf("< 4 > Voltar para menu (FIM MENU RELATÓRIO) \n");
    printf("---->");
    scanf("%d", &opt);
    return opt;

    }

int seleciona_paciente(){

    printf("Digite o nome do paciente para ser selecionado: ");
    scanf("%s",paciente_global);
    printf("Voce selecionou : %s \n", paciente_global );

}

void menu_principal(){
    int var;
    scanf("%d", &var);

    if(var == 1){
        char NPasta[100], Comd[150];

        strcpy(Comd,"mkdir ");
        printf("Digite o nome do Paciente :");
        scanf("%s", NPasta);

        strcat(Comd, NPasta);

        system(Comd);
        printf("Seu paciente foi criado com sucesso! ");
        getchar();

        menu_principal_txt();
        menu_principal();

    }
        if(var == 2){
            lista_pacientes();
            menu_principal_txt();
            menu_principal();
    }
        if(var == 3){
            txt_criar_dados();
            menu_principal_txt();
            menu_principal();
    }

        if(var == 4){
            seleciona_paciente();
            menu_principal_txt();
            menu_principal();
    }

        if(var == 5){
            txt_ler_dados();
            menu_principal_txt();
            menu_principal();
    }

        if(var == 6){
            anamin();
            menu_principal_txt();
            menu_principal();

    }
        if(var == 7){
            relat();
            menu_principal_txt();
            menu_principal();
    }

        if(var == 8){
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\n====================================\n");
            printf("  SARP Feito por: \n\n");
            printf("  Breno Hasparyk Andrade \n");
            printf("  Felipe Miranda Cardoso de Sá \n");
            printf("  Daniel da Silva Alves \n");
            printf("  João Paulo Rodrigues de Castilho \n");
            printf("  Marcelo Bezerra dos Santos \n");
            printf("\n====================================\n");
            return 0;
    }

}
