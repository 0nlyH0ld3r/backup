import sqlite3
from models import Book, Menu


con = sqlite3.connect("teste.db")
cursor = con.cursor()

cursor.execute("""CREATE TABLE IF NOT EXISTS books(
               id INTEGER PRIMARY KEY,
               name TEXT,
               release TEXT,
               author TEXT
               )""")

con.commit()


def fetch_db():
    cursor.execute("""
                   SELECT * FROM books
                   """)
    return [Book(p[1], p[2], p[3], p[0]) for p in cursor.fetchall()]



def inserir_livro(l:list[Book]):
    name = input("Digite o nome do livro: ")
    release = input("Digite a data de lançamento do livro: ")
    author = input("Digite o nome do author do livro: ")
    print("\n")

    book = Book(name, release, author)
    books.append(book)

    cursor.execute("""
                   INSERT INTO books (name, release, author, id)
                   VALUES (?,?,?,?)
                   """,
                   (book.name, book.release, book.author, book.id)
                   )
    con.commit()

def listar_livros(l:list[Book]):
    for book in l:
        print(f"[{book}]")
    print("\n")

def atualizar_livro(l:list[Book], id:int):
    book = None

    for b in l:
        if b.id == id:
            book = b

    if book is None:
        print(f"Não há livro o respectivo id: {id}\n")
        return

    print(f"[{book}]")

    print("Deixe vazio para não atualizar:")

    name = input("Digite o nome do livro: ")
    release = input("Digite a data de lançamento do livro: ")
    author = input("Digite o nome do author do livro: ")

    if release:
        book.release = release

    if author:
        book.author = author

    if name:
        book.name = name

    cursor.execute(f"""
                   UPDATE books SET name=?, release=?, author=?
                   WHERE id=?
                   """,
                   (book.name, book.release, book.author,
                    book.id)
                   )
    con.commit()

    print(f"Sucesso atualizando livro!\n[{book}]")
    print("\n")


books: list[Book] = fetch_db()

inserir_livro(books)
listar_livros(books)
atualizar_livro(books, int(input("Digite o ID: ")))
