import sqlite3

class Book:
    def __init__(self, id:int, available:bool, title:str, timestamp:str):
        self.id = id
        self.title = title
        self.timestamp = timestamp
        self.available = available

    def __repr__(self):
        return f"<id {self.id}>"
    def serialize(self):
        return {
                "id": self.id,
                "title": self.title,
                "available": self.available,
                "timestamp": self.timestamp
                }

class DateBase:
    def __init__(self, db_file):
        self.db_file = db_file
        self.conn = None
        self.cursor = None

    def connect(self):
        try:
            if not (self.conn is None and self.cursor is None):
                raise ValueError("Double Database Connection")
            self.conn = sqlite3.connect(self.db_file)
            self.cursor = self.conn.cursor()
        except:
            pass

    def commit(self):
        if not (self.conn is None):
            self.conn.commit()
            self.conn.close()
        else:
            raise ValueError("Must connect the database before commiting {DataBase.commit()}")

    def close(self):
        if not (self.conn is None):
            self.conn.close()
        else:
            raise ValueError("Must connect the database before closing {DataBase.close()}")

    def insert(self, book: Book):
        if not (self.cursor is None):
            self.cursor.execute("INSERT INTO books VALUES (?,?,?,?)", (
                book.id,
                book.available,
                book.title,
                book.timestamp
                ))

            self.commit()

