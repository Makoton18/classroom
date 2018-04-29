/*////////////////////////////////////////////
統計値を求める。　　　　　　　　　　2015.07.17
////////////////////////////////////////////*/
import static java.lang.Math.sqrt;
public class toukei{
	public static void main(String[] args){
		int i;
		double[] x = {1.0,5.0,2.0,7.0,4.0};
		double[] y = new double[x.length];
		double sum = 0;
		double ave = 0;
		double ss =0;
		//double temp = 0;
		double hensa = 0;
		double max = x[0];
		double min = x[0];
		for(i = 0;i<x.length;i++){
			sum += x[i];
			ss += x[i] * x[i];
			if(max < x[i]){
				max = x[i];
			}
			if(min > x[i]){
				min = x[i];
			}
		}
		ave = (double)sum / x.length;
		hensa = sqrt((ss / x.length) - (ave * ave));
		for(i = 0;i<x.length;i++){
			y[i] = 50 + 10 * (x[i] - ave) / hensa;
		}
		System.out.println("No.\tデータ\t偏差値");
		for(i = 0;i<x.length;i++){
			System.out.println((i+1) + "\t" + x[i] + "\t"+  y[i] );
		}
		System.out.println("合計："+ sum);
		System.out.println("二乗和："+ ss);
		System.out.println("平均："+ ave);
		System.out.println("最大値："+ max);
		System.out.println("最小値："+ min);
		System.out.println("標準偏差："+ hensa);
	}
}