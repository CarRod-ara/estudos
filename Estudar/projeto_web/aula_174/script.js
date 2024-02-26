// INTRODUÇÃO À VALIDAÇÃO DE FORMULÁRIOS

//usuario
document.querySelector('input[name="usuario"]').addEventListener('keyup', () => {
    if (document.querySelector('input[name="usuario"] + span') !== null) {
        document.querySelector('input[name="usuario"] + span').remove()
    }
})

//senha
document.querySelector('input[name="senha"]').addEventListener('keyup', () => {
    if (document.querySelector('input[name="senha"] + span') !== null) {
        document.querySelector('input[name="senha"] + span').remove()
    }
})


document.formulario_login.addEventListener('submit', (event) => {

    //buscar valores dos campos
    let usuario = event.target.usuario.value
    let senha = event.target.senha.value
    let submit = true

    //remover erros anteriores
    document.querySelectorAll('.error').forEach(e => e.remove())

    //validar usuario
    if (usuario === "") {
        submit = false

        //erro
        let tmp = document.querySelector('input[name="usuario"]')
        tmp.insertAdjacentHTML('afterend', '<span class="error">Usuário é obrigatório.')
    }

    //validar senha
    if (senha === "") {
        submit = false

        //erro
        let tmp = document.querySelector('input[name="senha"]')
        tmp.insertAdjacentHTML('afterend', '<span class="error">Senha é obrigatória.')

    }

    //verificar se o formulário pode ser enviado
    if (!submit) {
        event.preventDefault()

        //faz com que os erros sumam após dois segundos

        /*setTimeout(() => {
            document.querySelectorAll(".error").forEach(e => e.remove())
        }, 2000)*/
    }
})