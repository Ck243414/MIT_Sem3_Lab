class Prime{ 
	public static void main(String args[]){

int a[]={10,15,11,23,66};

for(int i=0;i<a.length;i++) {
	int found=1;
	for(int j=2;j<a[i];j++){
		if(a[i]%j==0) found=0;}
	if(found==1) System.out.println(a[i]);}


}}