/*////////////////////////////////////////////////////////////////////////////
バケットソート確認
2015.09.04
////////////////////////////////////////////////////////////////////////////*/

class Bucket{
	public static void main(String args[]){
		int[] x = new int[] {4 , 2 , 9 , 1};
		System.out.println("ソーティング実行前");
		for(int i =0;i<xlength;i++){
			System.out.println("No." + (i+1) + ":" + x[i]);
		}

		bucket_sort(x , 9);

		int[] x = new int[] {4 , 2 , 9 , 1};
		System.out.println("ソーティング実行後");
		for(int i =0;i<xlength;i++){
			System.out.println("No." + (i+1) + ":" + x[i]);
		}
	}



	public static void bucket_sort(int[] y,int max){
		int[] y =new int[max +1];     //作業用配列作成
		int i, k;							//作業用変数作成

		for(k =0;k <= max;k++){
			y[k] = 0;						//配列初期化
		}
		
		
		for(i = 0;i < x.length ;i++){
			y[x[i]] = 1;					//x[i]の値と等しい位置のy配列に代入
		}
		
		
		i = 0;								//i初期化
		
		
		for(k = 0; k < k = max;k++){
			if(y[k] > 0){
				x[i++] = k ;
				}				//ｙの中身が1ならそのときの配列の位置を戻す
		}
	}
}