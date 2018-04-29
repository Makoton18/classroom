import static java.lang.Math.sqrt;
class Main{
	public static void main(String[] args){
		double a = 1;
		double b = 2;
		double c = 1;
		double x1,x2;
		x1 = ((0-b)+sqrt(b*b-4*a*c)) / (2*a);
		x2 = ((0-b)-sqrt(b*b-4*a*c)) / (2*a);
		System.out.println("ax^2+bx+c");
		System.out.println("a="+a+"  "+"b="+b+"  "+"c="+c);
		System.out.println("x1="+x1);
		System.out.println("x2="+x2);
	}
}