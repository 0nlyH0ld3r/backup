def greet(person:dict) -> list:
    """Greet a person by its name and tell its age.
    Must receive a dictionary containg its name 'nome' and age 'idade'"""
    print(f"Hello {person["nome"].title()}!")
    print(f"A bird told me you're {person["idade"]} years old, aint you?")
    return list(person.values())

print(greet({"nome": "bruno", "idade": 19}))

