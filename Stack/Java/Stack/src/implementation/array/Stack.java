package implementation.array;

public class Stack {
    private final int size;
    private int top;
    private final int[] array;

    public Stack(int size) {
        this.size = size;
        this.array = new int[size];
        this.top = -1;
    }

    public boolean isFull() {
        return this.top == this.size - 1;
    }

    public void push(int x) {
        if (isFull()) {
            System.err.println("Stack overflow!");
            return;
        }
        this.top++;
        this.array[top] = x;
    }

    public boolean isEmpty() {
        return this.top == -1;
    }

    public int pop() {
        if (isEmpty()) {
            System.err.println("Stack underflow!");
            return -1;
        }
        int x = this.array[top];
        this.top--;
        return x;
    }

    public int peek() {
        return isEmpty() ? -1 : this.array[top];
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (int i = this.top; i >= 0; i--) {
            sb.append(this.array[i]).append("\n");
        }
        sb.append("\n");
        return sb.toString();
    }
}

