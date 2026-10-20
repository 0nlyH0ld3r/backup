def soma(x, y):
    if not isinstance(x, (int | float)):
        raise TypeError("Os parâmetros deve ser int ou float")
    return x + y

def fatorial(x: int) -> int:
    if x <= 1:
        return 1
    return x * fatorial(x-1)


def ano_bissexto(ano: int) -> bool:
    if (not (ano % 4) and (ano % 100)) or (not (ano % 400)):
        return True
    return False

def mes_31_dias(mes: int) -> bool:
    if mes in [4, 11, 8, 6]:
        return False
    return True

class Data:
    def __init__(self, dia: int, mes: int, ano: int):
        self.dia = dia
        self.mes = mes
        self.ano = ano
        self.bissexto = ano_bissexto(self.ano)
        self.mes_31 = mes_31_dias(mes)
        ...
