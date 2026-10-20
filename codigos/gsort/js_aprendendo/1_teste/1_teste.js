const pessoa = {
	nome: "Bruno",
	idade: 18,
	cpf: "123456"
}

function display_pessoa( pessoa ) {
	console.log(
		"O nome da pessoa é: ", pessoa.nome, "\n",
		"O cpf da pessoa é: ", pessoa.cpf, "\n",
		"A idade da pessoa é: ", pessoa.idade, "\n"
	);
}

display_pessoa(pessoa);
console.log("\n", (typeof pessoa))
