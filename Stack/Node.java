public class Node {
	private int data;
	private Node next;
	
	public Node(int d) {
		data = d;
		next = null;
	}
	
	public int getData() { return data;}
	public void setNext(Node n) { next = n;}
	public Node getNext() { return next;}
}