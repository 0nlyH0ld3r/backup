import sqlite3
from models import Book

books = []

conn = sqlite3.connect("teste.db")
cursor = conn.cursor()

##
## CREATING
##

cursor.execute("""CREATE TABLE IF NOT EXISTS books (
               id INTEGER PRIMARY KEY,
               name TEXT,
               release TEXT,
               author TEXT,
               available BOOLEAN
)""")

##
## DOING STUFF
##

cursor.execute("""
                UPDATE books
                SET name=?, release=?, author=?, available=?
                WHERE name=? and author=?
                """,
               ("O Paciente", "02/01/2001", "Jasper Dewitt", True,
                "O Paciente", "Jasper Dewitt")
               )

conn.commit()

##
## FETCHING
##
# cursor.execute(""" SELECT id, name, release, author, available FROM books""")
#
# for book in cursor.fetchall():
#     books.append(
#             Book(book[0], book[1], book[2], book[3], True if book[4] else False)
#             )
#
conn.close()
#
# print(books)
