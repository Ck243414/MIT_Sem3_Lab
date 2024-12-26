class Stack {
    int maxSize=50;
    int[] Stack= new int[50];
    int top=-1;

    
void push(int value) {
        if(isFull()) {
            System.out.println("Stack is full.");} 
	else {
            Stack[++top]=value;}
}

int pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Cannot pop.");
            return -1;} 
	else {
            int c=Stack[top--];
            return c;}
}

int peek() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Cannot peek.");
            return -1;
        } 
	else {
            return Stack[top];}
}

boolean isEmpty() {
        return top==-1;}

boolean isFull() {
        return top==maxSize-1;}

int size() {
        return top+1;}
}

class MainStack{
public static void main(String[] args) {
        Stack stack = new Stack(); 
        
        stack.push(10);
        stack.push(20);
        stack.push(30);

        System.out.println("Top element: " + stack.peek());
        System.out.println("Stack size: " + stack.size());

        stack.pop();
        stack.pop();

        System.out.println("Top element after pops: " + stack.peek());
        System.out.println("Stack size after pops: " + stack.size());
    }
}
