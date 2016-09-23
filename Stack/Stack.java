public class Stack {
	private Node top;
	private int length;
	
	public Stack() {
		top = null;
		length = 0;
	}
	
	public void push(int item) {
		Node add = new Node(item);
		add.setNext(top);
		top = add;
		length++;
	}
	
	public int pop() {
		int output = top.getData();
		top = top.getNext();
		length--;
		return output;
	}
	
	public boolean isEmpty() {
		boolean empty = false;
		if (top == null && length == 0) {
			empty = true;
		}
		
		return empty;
	}
	
	public String toString() {
		String output = "[";
		Node curr = top;
		for (int i = 0; i < length; i++) {
			output = output + curr.getData() + ", ";
			curr = curr.getNext();
		}
		output = output + "]";
		return output;
	}
}
