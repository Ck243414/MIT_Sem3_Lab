import java.util.*;

interface sports{
int getNumberofGoals();
void dispTeam();
}


class Hockey implements sports{

int goals;
String Name;

Hockey(int goals,String Name){
	this.goals=goals;
	this.Name=Name;}

public int getNumberofGoals(){
return goals;}

public void dispTeam(){
System.out.println("The team name is: "+ Name);}

void Winner(Hockey T1,Hockey T2){
	if(T1.goals>T2.goals)
		System.out.println("The Winning team is "+ T1.Name);
	else if(T1.goals==T2.goals)
		System.out.println("Its a tie");
	else
		System.out.println("The Winning team is "+ T2.Name);}
}

class Football implements sports{

int goals;
String Name;

Football(int goals,String Name){
	this.goals=goals;
	this.Name=Name;}

public int getNumberofGoals(){
return goals;}

public void dispTeam(){
System.out.println("The team name is: "+ Name);}

void Winner(Football T1,Football T2){
	if(T1.goals>T2.goals)
		System.out.println("The Winning team is "+ T1.Name);
	else if(T1.goals==T2.goals)
		System.out.println("Its a tie");
	else
		System.out.println("The Winning team is "+ T2.Name);}
}


class MainSports {
	public static void main(String args[]){

Scanner sc = new Scanner(System.in);
int g;
String n;
String c;

System.out.println("Enter Team 1 details for Hockey ");
g=sc.nextInt();
c=sc.nextLine();
n=sc.nextLine();
Hockey h1 = new Hockey(g,n);
System.out.println("Enter Team 2 details for Hockey ");
g=sc.nextInt();
c=sc.nextLine();
n=sc.nextLine();
Hockey h2 = new Hockey(g,n);
h2.Winner(h2,h1);

System.out.println("Enter Team 1 details for Football ");
g=sc.nextInt();
c=sc.nextLine();
n=sc.nextLine();
Football f1 = new Football(g,n);
System.out.println("Enter Team 2 details for Football ");
g=sc.nextInt();
c=sc.nextLine();
n=sc.nextLine();
Football f2 = new Football(g,n);
f2.Winner(f2,f1);




}
}