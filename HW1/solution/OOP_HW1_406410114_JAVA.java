public class OOP_HW1_406410114_JAVA{
  //判斷是否找到已經出現過的字元，是則回傳第幾個字元，若無則回傳-1
  public static int is_find(char[] data,int[] num,char c ,int ch_f_num ){
    for ( int i = 0 ; i<=ch_f_num;i++ ){
        if ( data[i] == c  )
            return i;
    }//for
    return -1;
  }//is_find

  public static void main(String args[]){
    //初始化
    char[] data = new char[200] ;
    int[] num = new int[200] ;
    int i,j,lentemp,find_result,ch_f_num = 0;
    int args_length = args.length;
    
    
    //開始做字串分析
    for ( i = 0 ; i<args_length ; i++ ){
        lentemp = args[i].length();//字串長度
          
        for ( j = 0 ; j < lentemp;j++ ){

            find_result = is_find( data,num,args[i].charAt(j) ,ch_f_num);           
            
            //not find 創建新字元
            if ( find_result == -1 ){ 
                data[ch_f_num] = args[i].charAt(j);
                num[ch_f_num]++;
                ch_f_num++;
            }//if

            //find 有的字元+1
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
