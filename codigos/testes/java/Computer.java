package Computer

public class Computer
{
	private int memorySyze;
	private String cpuBrand;
	private int ssdSize;

	public Computer(int memorySize, String cpuBrand, int ssdSize) {
		this.memorySize = memorySize;
		this.cpuBrand = cpuBrand;
		this.ssdSize = ssdSize;
	}

	public void turnOn() {
		System.out.println("Computer is on!");
	}
}
