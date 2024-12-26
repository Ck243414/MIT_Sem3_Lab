class Merge{
    public static void main(String[] args) {
        int[] arr1={3, 1, 5, 9};
        int[] arr2={7, 2, 4, 6};
		int[] arr3=new int[arr1.length+arr2.length];

  		for(int i=0;i<arr1.length;i++) {
            arr3[i] = arr1[i];}
        for(int i=0;i<arr2.length;i++) {
            arr3[i + arr1.length] = arr2[i];}

 		for (int i = 0;i<arr3.length-1;i++) {
            for (int j=0;j<arr3.length-1-i;j++) {
                if (arr3[j]>arr3[j+1]) {
         			int temp = arr3[j];
                    arr3[j]=arr3[j+1];
                    arr3[j+1]=temp;}}}

        for (int i = 0;i<arr3.length-1;i++) {
        	System.out.println(arr3[i]);}
    
    }
}
