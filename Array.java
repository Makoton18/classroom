/*////////////////////////////////////////////////////
配列の練習。　　　　　　　　2015.07.15
////////////////////////////////////////////////////*/
public class Array{
	public static void main(String[] args){
		double[] x = {1.0,5.0,2.0,7.0,4.6};
		double sum = 0;
		for(int i = 0;i<x.length;i++){
			sum +=x[i];
		System.out.print(x[i]+"\t");
		System.out.println(sum);
		}
		System.out.print("合計\t");
		System.out.println(sum);
	}
}