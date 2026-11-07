import sqlite3
from contextlib import contextmanager
class Pessoa:
    def __init__(self, name, age, gender):
        self.name = name
        self.age = age
        self.gender = gender

