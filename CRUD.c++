#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct _livro
{
    char titulo[100];
    unsigned int num_paginas;
    float preco;
} Livro;



typedef struct _aluno
{
    char nome[100];
    int idade;
    Livro *livro_fav;
}Aluno;



// "construtor" para livros
Livro *create_livro(const char *titulo, unsigned int num_paginas,
                    float preco)
{
    Livro *livro = (Livro *)calloc(1, sizeof(Livro));

    strcpy(livro->titulo, titulo);
    livro->num_paginas = num_paginas;
    livro->preco = preco;

    return livro;
}

//promovendo livro a ex-livro
void destroy_livro(Livro **livro_ref)
{
    Livro *livro = *livro_ref;
    free(livro);
    *livro_ref = NULL;
}

//função rápida para copiar livro
Livro *copy_livro(const Livro *livro){
    return create_livro(livro->titulo, livro->num_paginas,
                        livro->preco);
}


// função para ler detalhes do livro
void print_livro(const Livro *livro)
{
    printf("Titulo: %s\n", livro->titulo);
    printf("Num Paginas: %d\n", livro->num_paginas);
    printf("Preco: R$ %.2f\n\n", livro->preco);
}


//função para criar aluno e atribuir detalhes. Com adendo que o livro favorito é copiado e não chama novamente a função de livro favorito já alocado na memoria
Aluno *create_aluno(const char *nome, int idade,
                    const Livro *livro_fav) {
    Aluno *aluno = (Aluno *) calloc(1, sizeof(Aluno));
    
    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->livro_fav = copy_livro(livro_fav);

    return aluno;                    
}

//função para apagar alunos do sistema, mas sem esquecer de primeiro deletar livro associado, para não manter alocada memoria sem necessidade
void destroy_aluno(Aluno **aluno_ref) {
    Aluno *aluno = *aluno_ref;

    destroy_livro(&aluno->livro_fav);
    free(aluno);
    *aluno_ref = NULL;
}

//função para extrair todos os dados de alunos cadastrados
void print_aluno(const Aluno *aluno){
    printf("Nome: %s\n", aluno->nome);
    printf("Idade: %d\n", aluno->idade);
    puts("Livro Favorito");
    puts("-----");
    print_livro(aluno->livro_fav);
}

//função para compara titulos de obras para verificar se são mesmo livro
bool livros_sao_iguais(const Livro *livro_1,
                       const Livro *livro_2){
    if (strcmp(livro_1->titulo, livro_2->titulo) == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    Livro *livro_harry = create_livro("Harry Potter 1",
                                      200, 25);

    print_livro(livro_harry);
    livro_harry->preco = 10;
    print_livro(livro_harry);

    Aluno *ted = create_aluno("Ted", 20, livro_harry);
    print_aluno(ted);


    //os exemplares são iguais? (tem a mesma locação na mémoria)
    puts("\nted->livro_fav == livro_harry?");
    puts("Os exemplares são iguais?");

    if (ted->livro_fav == livro_harry){
        puts("TRUE");
    }
    else {
        puts("FALSE");
    }
    puts("\n");


    //a obra é a mesma?
    puts("\nlivros_sao_iguais?");
    puts("A obra é a mesma?");
    if (livros_sao_iguais(ted->livro_fav, livro_harry))
    {
        puts("TRUE");
    }
    else {
        puts ("FALSE");
    }
        puts("\n");
    

    destroy_livro(&livro_harry);

    print_aluno(ted);

    destroy_aluno(&ted);

    return 0;
}

/*atividade de xavecoding disponivel em 
(https://www.youtube.com/watch?v=JzDZBa-yM_o&ab_channel=xavecoding)
exercicio feito, para rever minhas aulas de C++ e poder tanto revisar quanto
posteriormente me aprofundar mais nessa linguagem*/