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


//apresentar dados dos obejtos

console.log(pessoa.nome)
console.log(pessoa['genero'])
console.log(pessoa.apresentar_idade())
console.table(pessoa.hobbies)