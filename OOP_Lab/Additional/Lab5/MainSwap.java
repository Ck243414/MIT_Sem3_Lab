class Swap{
	int value;
	static int x = 5;
        static int y = 10;	
Swap(int value) {
        this.value = value;}


static void SwapVal() {
        
	int temp = x;
        x = y;
        y = temp;}

static void SwapRef(Swap obj1,Swap obj2) {
        int temp = obj1.value;
        obj1.value = obj2.value;
        obj2.value = temp;}
}

class MainSwap{   
public static void main(String[] args) {

	System.out.println("Before Swap Value: x = " + Swap.x + ", y = " + Swap.y);
        Swap.SwapVal();
        System.out.println("After Swap Value: x = " + Swap.x + ", y = " + Swap.y);
	Swap obj1 = new Swap(5);
        Swap obj2 = new Swap(10);

        System.out.println("Before Swap Ref: obj1.value = " + obj1.value + ", obj2.value = " + obj2.value);
        Swap.SwapRef(obj1, obj2);
        System.out.println("After Swap Ref: obj1.value = " + obj1.value + ", obj2.value = " + obj2.value);
    }
}