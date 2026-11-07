import java.lang.ArithmeticException;
import java.lang.ArrayIndexOutOfBoundsException;

class ExceptionExample
{
	public static void main(String[] args) {
		try {
			int f = 1/0;
			System.out.println(f);
			int[] nums = new int[3];
			nums[405] = 5;
		} catch(ArrayIndexOutOfBoundsException e) {
			System.out.println(e + " Foi capturado!");
		} catch(ArithmeticException e) {
			System.out.println(e + " Foi capturado!");
		} 
	}
}
