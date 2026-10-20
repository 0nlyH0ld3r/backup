# def area_e_perimetro_retangulo(b: float, h: float):
#     return (b * h), ((b + h) * 2)
#
# base: float
# peri: float
#
# base, peri = area_e_perimetro_retangulo(3, 5)
# print(f"A área do retângulo é: {base}\n",
#       f"E o perímetro é: {peri}")
#
# -- Ok

# SEQUÊNCIA DE FIBONNACI:

# a, b = 1, 1
# while a < 10:
#     print(a)
#     a, b = b, a + b # Você tem tupples e pode as utilizar, não há motivo
#                     # para fingir que elas não existem, lembre disso.

# print("Hello World", end = '') # O argumento end pode ser utilizado para
#                                # não quebrar linha automaticamente.


# palavras = ['gato', 'janela', 'defenestrar', 'galinha']
# i: int = 0
# for p in palavras:
#     print(i, '- ', p, f"\t{len(p)} letras")
#     i += 1
#
# O for em Python é uma merda, com toda sinceridade.
# Se pelo menos tivesse a opção de usar os dois como em Lua T-T
#
# MyGoD tem! MAS É UMA MERDA
#
# palavras = ['gato', 'janela', 'defenestrar', 'galinha']
# i: int = 0
# for i in range(len(palavras)):
#     print(i, '- ', palavras[i])

# O mais estranho de tudo é que, de acordo com o site, range não gera uma
# lista. Ou seja: Ele gera algo tipo uma tupple acho. Só sei que gera um 
# objeto que retorna cada um dos valores um por vez.
# Ele pode inclusive ser somado usando sum(range(x))
# Aparentemente esse conceito se chama retornar iteráveis.
# Existem funções que retornam iteráveis e funções que recebem iteráveis.

# for n in range(2, 10):
#     for x in range(2, n):
#         if n % x == 0:
#             print(n, "igual a", x, '*', n//x)
#             break
#     else:
#         print(n, "é um número primo")
#
# Ok, isso é legal:
# Você pode colocar um else após um laço pra dizer tipo:
# "Se nenhum break tiver rolado:"
# Dessa forma, o else após o laço só vai rolar se, pra todo x,  n % x != 0

# E tem o Pass
# while True:
#   pass
#
# Ele literalmente é tipo um continue ou um break. Se alguma coisa pede uma
# instrução, você pode usar o pass pra literalmente não fazer nada, mas mandar
# parar de pedir instrução.
# É tipo: Deixa aí, eu faço depois.
# Aparentemente tem uso pra algo chamado classes mínimas, mas não sei o que é
# isso daí.
# Ex:
# def initlog(*args): # Não é um ponteiro, infelizmente. É uma arglist
#   pass # "DEIXA AÍ QUE JÁ VOU FAZER!"

# cesta = ['maçã', 'laranja', 'maçã', 'pera', 'laranja', 'banana']
# for i in set(sorted(cesta)):
#     print(i)
#
# Sorted ordena o output sem alterar a lista original, set faz a mesma coisa
# para itens duplicado (ou seja: os ignora)


# def http_error(status):
#     match status:
#         case 400:
#             return "Bad request"
#         case 404:
#             return "Not found"
#         case 418:
#             return "I'm a teapot"
#     case 401 | 403 | 404:
#         return "Não permitido"
#         case _:
#             return "Something's wrong with the internet"
#
# O switch case do Python. Você pode colocar o | (ou) para adicionar
# vários casos, mas um caso não vasa pro outro que nem acontece em C.
# Tem esse outro caso que eu achei meio bizarro aqui:
#
##### ponto é uma tupla (x, y)
# match ponto:
#     case (0, 0):
#         print("Origem")
#     case (0, y):
#         print(f"Y={y}")
#     case (x, 0):
#         print(f"X={x}")
#     case (x, y):
#         print(f"X={x}, Y={y}")
#     case _:
#         raise ValueError("Não é um ponto")
#
# Você comparar tuples. Meio bizarro, mas ok.
#
# Tem também mais uma bizarrice que envolve POO (E eu não entendo POO)
#
# class Ponto:
#     def __init__(self, x, y):
#         self.x = x
#         self.y = y
#
# def onde_está(ponto):
#     match ponto:
#         case Ponto(x=0, y=0):
#             print("Origem")
#         case Ponto(x=0, y=y):
#             print(f"Y={y}")
#         case Ponto(x=x, y=0):
#             print(f"X={x}")
#         case Ponto():
#             print("Em outro lugar")
#         case _:
#             print("Não é um ponto")
#
# Mais uma bizarrice:
#
# match ponto:
#     case Ponto(x, y) if x == y:
#         print(f"Y=X at {x}")
#     case Ponto(x, y):
#         print(f"Não está na diagonal")

# def fib(n: int) -> None:
#     """Imprime uma série de Fibonnaci menor que n."""
#     a, b = 1, 1
#     while a < n:
#         print(a, end = ' ')
#         a, b = b, a + b
#
# fib(10)

# Em Python é possível passar argumentos pra uma função de duas formas:
#
# def f(x, y)
#   ...
#
# f(2, 5)           # Posicional
# f (y = 5, x = 2)  # Nomeado
#
# Parâmetros nomeados são parâmetros que podem receber argumentos chamando seus
# nomes e atribuindo um valor a eles. Por padrão, todos os parâmetros são tanto 
# nomeados quanto posicionais.
# 
# Parâmetros posicionaissão parâmetros que podem receber argumentos de acordo com
# a sua posição, ou seja, basta colocar os argumentos na ordem certa que cada 
# parâmetro irá receber o seu, respectivamente.
#
# Parâmetros especiais '/' e '*'
#
#   /     <- Tudo que vier ANTES disso se torna SOMENTE posicional
#   *     <- Tudo que vier DEPOIS disso se torna SOMENTE nomeado
#
# ex:
#
# def funcao(x , y, /, *, nome, cpf)
#   ...
#
# funcao(5, 7, nome = "Bruno", cpf = "1234567")
#
# Qualquer tentativa de chamar a função de forma que não seja essa, irá resultar 
# em erro.
#
# Se usa somente posicional se você não quer que o usuário precise digitar o nome
# do parâmetro.
# Somente posicional também ajuda a não quebrar APIs se a o nome dos parâmetros
# forem aterados.
#
# Somente nomeado é pro caso de o parâmetro tomar um argumento padrão que não
# seja comumente alterado, então é necessário chamar o nome do parâmetro para
# passar um argumento diferente do padrão.
# Também auxilia se conhecer o nome do parâmetro for útil para compreender a sua
# finalidade.


# Listas de argumentos arbitrárias.
# 
# Isso parece muito confuso. Melhor estudar dnv e reorganizar as anotações
# em outro dia.


# Expressões lambda.
#
# Também tá muito confuso, estuda dnv depois.

