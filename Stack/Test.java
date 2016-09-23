public class Test {
	public static void main(String[] args) {
		Stack stack = new Stack();
		int number = 50;
		
		System.out.println(stack.isEmpty());
		for (int i = 0; i < number; i++) {
			System.out.println("Pushing: " + i);
			stack.push(i);
		}
		
		System.out.println(stack.isEmpty());
		System.out.println(stack);
		
		for (int i = 0; i < number; i++) {
			System.out.print("Popping: ");
			int pooped = stack.pop();
			System.out.println(pooped);
		}
		
		System.out.println(stack.isEmpty());
	}
}
