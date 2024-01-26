//criando um objeto

let pessoa = {

    // propriedades
    nome:"Joao",
    sobrenome: "Ribeiro",
    idade: 48,
    genero: "masculino",

    //métodos
    apresentar_nome: function() {
        return this.nome + " " + this.apelido
    },

    apresentar_idade: function() {
        return this.idade + " anos de idade"
    },

    hobbies: [
        'Programação',
        'Cinema',
        'Música'
    ]

}