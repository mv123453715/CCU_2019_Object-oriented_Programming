public class OOP_HW1_406410114_JAVA{
  //�P�_�O�_���w�g�X�{�L���r���A�O�h�^�ǲĴX�Ӧr���A�Y�L�h�^��-1
  public static int is_find(char[] data,int[] num,char c ,int ch_f_num ){
    for ( int i = 0 ; i<=ch_f_num;i++ ){
        if ( data[i] == c  )
            return i;
    }//for
    return -1;
  }//is_find

  public static void main(String args[]){
    //��l��
    char[] data = new char[200] ;
    int[] num = new int[200] ;
    int i,j,lentemp,find_result,ch_f_num = 0;
    int args_length = args.length;
    
    
    //�}�l���r����R
    for ( i = 0 ; i<args_length ; i++ ){
        lentemp = args[i].length();//�r�����
          
        for ( j = 0 ; j < lentemp;j++ ){

            find_result = is_find( data,num,args[i].charAt(j) ,ch_f_num);           
            
            //not find �Ыطs�r��
            if ( find_result == -1 ){ 
                data[ch_f_num] = args[i].charAt(j);
                num[ch_f_num]++;
                ch_f_num++;
            }//if

            //find �����r��+1
            else if ( find_result != -1 ) 
                num[find_result]++;
        }//for
    }//for
      


    //print result
    for ( i = 0 ; i <ch_f_num;i++ ){
        System.out.print(data[i]);
        System.out.print("-");
        System.out.println(num[i]);
    }//for
	}//main
 
}//class OOP_HW1_406410114_JAVA
