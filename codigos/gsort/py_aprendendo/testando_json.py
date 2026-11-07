from pathlib import Path
import json

##########################################################

class person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def talk(self, message):
        print(f"{self.name}: {message}\n")

    def __str__(self):
        return f"name: {self.name}, age: {self.age}"

    def __repr__(self):
        return f"person(name={self.name}, age={self.age})"

##########################################################

def pack_person_list(json_out):
    return [person(item["name"], item["age"]) for item in json_out]

##########################################################

# Configurando o caminho pro arquivo
path = Path("teste.json")

# Lendo o conteúdo do arquivo.
contents = path.read_text()

# Passando o conteúdo pro arquivo com json.loads(conteudo_lido)
# A função pack_person_list é uma função própria para transformar a lista de
# dicionários retornados em uma lista de objetos da classe pessoa.
vector = pack_person_list(json.loads(contents))

vector.append(person("Lucas", 13))

# Jogando o conteúdo dentro da lista vector em contents. Precisa primeiro
# transformar em dicionário. Felizmente, objetos possuem o método __dict__
# para as transformar em dicionário. Assim, você pode fazer uma list comprehension
# e enviar ela pra variável contents.
contents = json.dumps([p.__dict__ for p in vector])

# E aqui escrevendo o arquivo tipo um fclose. Fim.
path.write_text(contents)

print(vector)
vector[0].talk("Olá mundo!");
