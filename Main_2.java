import static java.lang.Math.sqrt;
class Main_2{
	public static void main(String[] args){
		double a = 3;
		double b = 1;
		double c = 5;
		double d,x1,x2,re,im;
		d = b*b-4*a*c;
		if(d > 0){
			x1 = (-b + sqrt(d))/(2*a);
			x2 = (-b - sqrt(d))/(2*a);
			System.out.println("a="+a+"  "+"b="+b+"  "+"c="+c);
			System.out.println("x1="+x1);
			System.out.println("x2="+x2);
		}else if(d < 0){
			re = -b/(2*a);
			im = sqrt(-d)/(2*a);
			System.out.println("a="+a+"  "+"b="+b+"  "+"c="+c);
			System.out.println("x="+re+"}j"+im);
		}else{
			re = -b/(2*a);
			System.out.println("a="+a+"  "+"b="+b+"  "+"c="+c);	
			System.out.println("d‰ð"+re);
		}
	}
}