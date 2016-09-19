public class Stack {
	private Node top;
	private Node bottom;
	private int length;
	
	public Stack() {
		top = bottom = null;
		length = 0;
	}
	
	public void push(int item) {
		Node add = new Node(item);
		add.setNext(top);
		top = add;
	}
	
	public int pop() {
		Node popped = top;
		top = top.getNext();
		return popped.getData();
	}
	
	public boolean isEmpty() {
		boolean empty = false;
		if (top == null || bottom == null || length == 0) {
			empty = true
		}
		
		return empty;
	}
}