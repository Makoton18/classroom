/*////////////////////////////////////////////////////////////////////////////
�o�P�b�g�\�[�g�m�F
2015.09.04
////////////////////////////////////////////////////////////////////////////*/

class Bucket{
	public static void main(String args[]){
		int[] x = new int[] {4 , 2 , 9 , 1};
		System.out.println("�\�[�e�B���O���s�O");
		for(int i =0;i<xlength;i++){
			System.out.println("No." + (i+1) + ":" + x[i]);
		}

		bucket_sort(x , 9);

		int[] x = new int[] {4 , 2 , 9 , 1};
		System.out.println("�\�[�e�B���O���s��");
		for(int i =0;i<xlength;i++){
			System.out.println("No." + (i+1) + ":" + x[i]);
		}
	}



	public static void bucket_sort(int[] y,int max){
		int[] y =new int[max +1];     //��Ɨp�z��쐬
		int i, k;							//��Ɨp�ϐ��쐬

		for(k =0;k <= max;k++){
			y[k] = 0;						//�z�񏉊���
		}
		
		
		for(i = 0;i < x.length ;i++){
			y[x[i]] = 1;					//x[i]�̒l�Ɠ������ʒu��y�z��ɑ��
		}
		
		
		i = 0;								//i������
		
		
		for(k = 0; k < k = max;k++){
			if(y[k] > 0){
				x[i++] = k ;
				}				//���̒��g��1�Ȃ炻�̂Ƃ��̔z��̈ʒu��߂�
		}
	}
}