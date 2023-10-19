import implementation.linkedlist.Stack;

public class Main {
    public static void main(String[] args) {

        // Driver code for Stack
        Stack stk = new Stack();
        stk.push(2);
        stk.push(3);
        stk.push(4);
        stk.push(5);
        stk.push(9);

        stk.pop();
        stk.pop();
        System.out.print(stk.pop());
    }
}