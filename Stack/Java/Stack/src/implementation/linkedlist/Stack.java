package implementation.linkedlist;

public class Stack {
    private Node top;

    public Stack() {
        top = null;
    }

    public void push(int x) {
        if (isEmpty()) {
            top = new Node(x);
        } else {
            Node t = new Node(x);
            t.next = top;
            top = t;
        }
    }

    public int pop() {
        if (isEmpty()) {
            System.err.println("Stack underflow!");
            return -1;
        }

        int x = top.data;
        top = (top.next != null) ? top.next : null;
        return x;
    }

    public int peek() {
        return isEmpty() ? -1 : top.data;
    }

    public boolean isEmpty() {
        return top == null;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        Node t = top;
        while (t != null) {
            sb.append(t.data).append("\n");
            t = t.next;
        }
        sb.append("\n");
        return sb.toString();
    }

    private class Node {
        private final int data;
        private Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }
}

