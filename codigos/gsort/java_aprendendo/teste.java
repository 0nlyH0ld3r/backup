class Student
{
    public String name;
    public int age;
    public int grade;

    public Student(String name, int age, int grade)
    {
        this.name = name;
        this.age = age;
        this.grade = grade;
    }

    public String toString()
    {
        return "{name: " + this.name + " age: " + this.age + " grade: " + this.grade + "}";
    }
}

public class teste
{
    public static void main(String []args)
    {
        Student teste = new Student("Bruno", 18, 2);
        System.out.println(teste);
    }
}
