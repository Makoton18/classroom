/*/////////////////////////////////////////////////////////
~‡‚É•À‚×‘Ö‚¦‚é
															2015.07.22
////////////////////////////////////////////////////////*/
public class Sort{
	public static void main(String[]args){
		double[] x={4,1,9,2,5,3};
		double temp =0;
		int i,j;
		System.out.println("ˆ—‘O");
		for(i = 0;i<x.length;i++){
			System.out.print(x[i]+"\t");
		}
		for(i = 0;i<x.length -1;i++){
			for(j=i+1;j<x.length;j++){
				if(x[i]<x[j]){
					temp = x[i];
					x[i] = x[j];
					x[j] = temp;
				}
			}
		}
		System.out.println("\t");
		System.out.println("ˆ—Œã");
		for(i = 0;i<x.length;i++){
			System.out.print(x[i]+"\t"); 
		}
	}
}