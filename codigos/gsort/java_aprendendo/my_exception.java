class PrerequisiteNotFoundException extends Exception {
	public PrerequisiteNotFoundException() {
		super("O aluno não cmpre todos os requisitos")
	}
}

class Course{}
class History{}

class Student {
	public static void enrollStudent(Course course, History, history) throws PrerequisiteNotFoundException {
		if (true) {
			throw new PrerequisiteNotFoundException();
		}
	}
}
