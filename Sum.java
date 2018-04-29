/*////////////////////////////////////////////////////////
1‚©‚ç10‚ÌŒJ‚è•Ô‚µ‚Ì˜a‚ğ‹‚ß‚éB
																2015.07.10
////////////////////////////////////////////////////////*/
class Sum{
	public static void main(String[] args){
		int sum = 0;
		int i;
		System.out.println("i\ti^2 \ti^3");
		for(i = 1;i <= 10;i++){
				//sum = sum + i;
		System.out.print(i + "\t");
		System.out.print(i*i + "\t");
		System.out.println(Math.pow(i,3));
		System.out.println(sum);
				sum  += i;
			}
		System.out.println(sum);
	}
}