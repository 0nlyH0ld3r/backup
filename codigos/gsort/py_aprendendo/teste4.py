def create_dict(message:str):
    return {"title": message, "second": "first"}

b = []
b.append(create_dict("Olá"))
b.append(create_dict("Mundo"))
b.append(create_dict("De merda"))

message = "Mundo"

for i in b:
    if message in i.values():
        print(f"There's {message} inside of the dict")
