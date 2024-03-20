#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro
{
    char titulo[100];
    unsigned int num_paginas;
    float preco;
} Livro;



tyoedef struct _aluno
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

void destroy_livro(Livro **livro_ref)
{
    Livro *livro = *livro_ref;
    free(livro);
    *livro_ref = NULL;
}

void print_livro(const Livro *livro)
{
    printf("Titulo: %s\n", livro->titulo);
    printf("Num Paginas: %d\n", livro->num_paginas);
    printf("Preco: R$ %.2f\n\n", livro->preco);
}

Aluno *create_aluno(const char *name, int idade,
                    Livro *livro) {

}

int main()
{
    Livro *livro_harry = create_livro("Harry Potter 1",
                                      200, 25);

    print_livro(livro_harry);
    livro_harry->preco = 10;
    print_livro(livro_harry);

    destroy_livro(&livro_harry);
    printf("livro_harry == NULL? %d\n", livro_harry == NULL);

    return 0;
}
