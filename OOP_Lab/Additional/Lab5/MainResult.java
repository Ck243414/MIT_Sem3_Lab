

class Result{

static int sub[][]= new int[100][4];
static int total[]= new int[100];
static int size=0;
Result(int roll,int sub1,int sub2,int sub3){

sub[size][0]=roll;
sub[size][1]=sub1;
sub[size][2]=sub2;
sub[size][3]=sub3;
total[size]=sub1+sub2+sub3;
size++;}

static void subhigh(){

int high=sub[0][1];
int i=0;
for(i=0;i<size;i++){
	if(high<sub[i][1]){high=sub[i][1];}}
for(i=0;i<size;i++){
	if(sub[i][1]==high)
		break;}
System.out.println("Roll no "+sub[i][0]+" got highest marks in sub1: "+high);

high=sub[0][2];
for(i=1;i<size;i++){
	if(high<sub[i][2]){high=sub[i][2];}}
for(i=0;i<size;i++){
	if(sub[i][2]==high)
		break;}
System.out.println("Roll no "+sub[i][0]+" got highest marks in sub2: "+high);

high=sub[0][3];
for(i=1;i<size;i++){
	if(high<sub[i][3]){high=sub[i][3];}}
for(i=0;i<size;i++){
	if(sub[i][3]==high)
		break;}
System.out.println("Roll no "+sub[i][0]+" got highest marks in sub3: "+high);}


static void totalhigh(){
int high=total[0];
int i=0;
for(i=1;i<size;i++){
	if(high<total[i]){high=total[i];}}
for(i=0;i<size;i++){
	if(total[i]==high)
		break;}
System.out.println("Roll no "+sub[i][0]+" got highest marks overall: "+high);}

}


class MainResult{
public static void main(String args[]){

Result A1= new Result(1,45,46,47);
Result A2= new Result(2,40,48,48);
Result A3= new Result(4,44,40,49);


Result.subhigh();
Result.totalhigh();


}
}






