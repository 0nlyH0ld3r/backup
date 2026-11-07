# pessoa = {
#         "nome": str(input("Digite seu nome: ")),
#         "idade": int(input("Digite sua idade: ")),
#         "trabalho": ((str(input("Digite com o que trabalha: ")), str(input("Algum outro trabalho? "))))
# }
#
# print(pessoa["trabalho"][0])

def constroi_pessoa():
    pessoa = {
            "nome": str(input("Digite seu nome: ")),
            "idade": int(input("Digite sua idade: ")),
            "cidade": str(input("Digite sua cidade: "))
    }
    return pessoa

def edita_pessoa(pessoa):
    if pessoa is None:
        raise ValueError("edita_pessoa(pessoa) **pessoa** can't be None")
    pessoa["nome"] = str(input("Digite seu novo nome: "))
    pessoa["idade"] = int(input("Digite sua nova idade: "))
    pessoa["cidade"] = str(input("Digite sua nova cidade: "))
    return pessoa

# Literalmente um array de funções e fouda-se.
func_list = [constroi_pessoa, edita_pessoa]

pessoa = func_list[0]()
print(pessoa)

