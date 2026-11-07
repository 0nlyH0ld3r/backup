from random import randint

class Book:
    def __init__(self, name:str, release:str, author:str, id=None):
        self.name = name
        self.release = release
        self.author = author
        if id is None:
            self.id = self.get_id()
        else:
            self.id = id

    def get_id(self):
        return 202600000 + randint(0, 9999)

    def __repr__(self):
        return f"name={self.name}, release={self.release}, author={self.author}, id={self.id}"


class Menu:
    def __init__(self):
        return None
    def opcoes(self):
        print(
"""
**************************
Escolha a opção que deseja:
**************************

1 - Inserir livro(s)
2 - Atualizar livro(s)
3 - Apagar livro(s)
4 - Listar livros
0 - Sair

**************************
"""
)
        self.opt = int(input("Digite a opção que deseja: "))

