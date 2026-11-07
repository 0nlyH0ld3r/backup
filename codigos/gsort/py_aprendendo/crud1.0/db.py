import sqlite3, random, datetime
from book import Book

def getNewId():
    return random.getrandbits(28)

books = []

conn = sqlite3.connect ("bando.db")
cursor = conn.cursor()

cursor.execute("""CREATE TABLE IF NOT EXISTS users (
               id INTEGER PRIMARY KEY AUTOINCREMENT,
               name TEXT NOT NULL,
               username TEXT UNIQUE NOT NULL
               available BOOLEAN
)""")

# cursor.execute("""INSERT INTO users (name, username)
#                VALUES ('Bruno', 'H0ld3r')""")

cursor.execute("""SELECT * FROM users WHERE id=1""")

contas = cursor.fetchall()

print(contas)
for conta in contas:
    id, name, username = conta
    print(f"name: {name.lower()}, username: {username}, id: {id}")

conn.commit()
