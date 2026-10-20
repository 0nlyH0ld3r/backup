lista_convidados = ["eu", "meu amor", "will", "lipe"]

for pessoa in lista_convidados:
    print(f"Olá {pessoa.title()}, gostaria de jantar comigo?")
print("\n")
print("\n")

print(f"{lista_convidados.pop(0).title()} não poderá comparecer por ser",
      "eu mesmo")
print("\n")
print("\n")

lista_convidados.append("outro eu")
lista_convidados.append("holder")
lista_convidados.append("nicolas")

for pessoa in lista_convidados:
    print(f"Olá {pessoa.title()}, gostaria de jantar comigo?")
print("\n")
print("\n")

print("Achei uma mesa maior!")
print("\n")

lista_convidados.insert(0, "arthur")
lista_convidados.insert(int(len(lista_convidados) / 2) , "jão")

print("\n")
print("\n")
for pessoa in lista_convidados:
    print(f"Olá {pessoa.title()}, gostaria de jantar comigo?")
