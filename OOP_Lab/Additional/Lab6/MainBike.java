class Bike{
int speedlimit=100;
void run(){
	System.out.println("The speed limit is "+speedlimit);}
}

class Splender extends Bike{

int speedlimit=80;
void run(){
	System.out.println("The speed limit is "+speedlimit);}
}


class MainBike{

public static void main(String args[]){


Bike obj1= new Bike();
Splender obj2= new Splender();

obj1.run();
obj2.run();



}

}