class Dog:
    def __init__(self:Dog, name:str, age:int, race="vira-lata"):
        self.name:str = name.lower()
        self.race:str= race.lower()
        self.age:int = age

    def bark(self):
        print(f"{self.name.title()}: BARK! BARK! BARK!")

    def __str__(self):
        return f"name: {self.name.title()}, age: {self.age}, race: {self.race.title()}"

# 9.1

class Restaurant:
    def __init__(self, name, cuisine_type="brazilian"):
        self.name = name
        self.cuisine_type = cuisine_type
        return

    def describe_restaurant(self):
        print(f"{self.name} is a restaurant that sells {self.cuisine_type} food")
        return

    def open_restaurant(self):
        print(f"{self.name.title()} is open!")
        return

# 9-3

class User:
    def __init__(self, first_name, last_name, middle_name=''):
        """Initialize attributes user attributes"""
        self.first_name = first_name
        self.last_name = last_name
        self.middle_name = middle_name
        return

    def describe_user(self):
        """Prints the user's full name """
        if self.middle_name:
            print(f"That's {self.first_name} {self.middle_name} {self.last_name}")
            return

        print(f"That's {self.first_name} {self.last_name}")
        return

###################################

class Car:
    """Literally cars"""

    def __init__(self, maker, model, year, odometer=0):
        """Initialize car's attributes"""
        self.maker = maker
        self.model = model
        self.year = year
        self.odometer = odometer
        return

    def read_odometer(self):
        """Print the car's current mileage"""
        return f"Car's current mileage: {self.odometer}km"

    def __str__(self):
        """Defining print behavior"""
        return f"maker={self.maker}, model={self.model}, year={self.year}, odometer={self.odometer}"


Car("Honda", "CIVIC", 2019).read_odometer()
