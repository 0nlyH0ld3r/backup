from sqlite3 import connect

class Book:
    def __init__(self, id:int, name:str, release:str, author:str, available:bool):
        self.id = id
        self.name = name
        self.release = release
        self.author = author
        self.available = available

    def __repr__(self):
        return f"id: {self.id}, name: {self.name}, release: {self.release}, author: {self.author}"

    def to_dict(self):
        return {
                "id": self.id,
                "name": self.name,
                "author": self.author,
                "release": self.release
                }

