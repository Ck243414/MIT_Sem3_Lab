class Game{
void type(){
System.out.println("indoor & outdoor games");}
}

class Cricket{
void type(){
System.out.println("cricket is an outdoor game");}
}

class Chess{
void type(){
System.out.println("chess is an indoor game");}
}

class MainGame{
	public static void main(String args[]){

Cricket obj1 = new Cricket();
Chess obj2 = new Chess();
obj1.type();
obj2.type();


}}