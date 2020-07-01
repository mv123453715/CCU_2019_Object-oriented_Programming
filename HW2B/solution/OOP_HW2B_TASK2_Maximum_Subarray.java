
import java.util.Scanner;
import java.util.Scanner.*;
import java.io.FileReader;
import java.io.FileReader.*;
import java.io.*;
import java.util.*;
import java.io.IOException;
import java.util.ArrayList;

// O(n), Kadane's 演算法(dynamic porgramming)
/*
複雜度    詳細說明
        ---------------------------------------------------------------------------------------------
               O(n)   先判斷全部資料是否有至少一個>=0，若有開始找最長子序列，否則直接回傳最大負數
            +  O(n)   以下為Kadane's 演算法虛擬碼講解
                      max = array[0];        //一開始設定max為array[0]
                      for (int i = 0; i < array.Length; i++){ //開始找最長子序列
                        sum += array[i];     //加下一項
                        sum = Max(0, sum);   //判斷sum是否>=0
                        if ( sum >= max ){ //判斷sum是否大於max
                            max = sum; 
                            record this Maximum_Subarray and length;
                        }//if
                      }//for
            +  O(n)   輸出所有record 中 最長的Maximum_Subarray(可能多個) 
         ---------------------------------------------------------------------------------------------
          總計 O(n)
*/
public class OOP_HW2B_TASK2_Maximum_Subarray {
    public static int GetMax_Subarray(ArrayList<Integer> array, ArrayList<Integer> start, ArrayList<Integer> end,ArrayList<Integer> len,ArrayList<Integer> sub_ary_sum,int[] max_len){
        //找是否都為負數
        int sum = Detect(array);
        if (sum < 0)
            return sum;
        int max = array.get(0);
        
        //0 is not record,1 is recording
        boolean start_recording = false;
        boolean end_recording = false;
        
        //O(n), Kadane's 演算法(dynamic porgramming)
        for (int i = 0; i < array.size(); ++i){
            sum += array.get(i);
            //start recording
            if ( sum >=0 ){
                if ( i == 0 || start_recording == false ){
                    start.add(i);
                    start_recording = true;
                }//if
            }//if
            
            //end recording or delete recording
            else if ( sum < 0 ){
                sum = 0;
                if ( end_recording == true && start_recording == true){//record done
                    end_recording = false;
                    start_recording = false;
                }//if
                else if ( start_recording == true && end_recording == false  ){ //delete this record
                    if ( start.size() != 0 )
                        start.remove(start.size()-1);
                    start_recording = false;
                }//else
            }//if
            
            
            if ( sum >= max ){
                max = sum; // update max
                
                //not record end or recording end
                if ( start_recording ==true && end_recording == false ){ //not record end
                    end.add(i);
                    end_recording = true;
                    if ( (end.size()) != 0 && (start.size()) !=0 && (end.size() == start.size() )  ){
                        len.add( end.get( end.size()-1 ) - start.get( start.size()-1 ) ); //record len
                        sub_ary_sum.add( max );//record max
                        
                    }//if
                }//if
                
                //recording end
                else if ( start_recording ==true && end_recording == true ){
                    if ( (end.size()) != 0 && (start.size()) !=0 && len.size()!= 0 && (end.size() == start.size() )  ){
                        end.set( end.size()-1,i );
                        len.set( len.size()-1,end.get( end.size()-1 ) - start.get( start.size()-1 ) );//record len
                        sub_ary_sum.set( sub_ary_sum.size()-1,max );//record max
                    }//if
                }//else
            }//if
        }//for
        
        //find maxlen of  maxsum 
        for ( int i = 0;i <start.size();i++ )
            if ( max == sub_ary_sum.get(i) )
                max_len[0] = Math.max( max_len[0],len.get(i) );
        return max;
    }//GetMax
 
    // test array is all minus
    private static int Detect(ArrayList<Integer> array){
        int max = array.get(0);
        for (int i = 0; i < array.size(); ++i){
            if (array.get(i) >= 0)
                return 0;
            max = Math.max(array.get(i), max);
        }//for
        return max;
    }//Detect 
    
    //print_Maximum_Subarray
    private static void print_Maximum_Subarray(ArrayList<Integer> array, ArrayList<Integer> start, ArrayList<Integer> end,ArrayList<Integer> len,ArrayList<Integer> sub_ary_sum,int max,int[] max_len){
        int Maximum_Subarray_num = 1;
        System.out.print("Maximum_Subarray_sum : ");
        System.out.println(max);
        
        if ( max < 0 ){
            System.out.println("Maximum_Subarray_max_len : 1");
            for (  int i = 0 ; i < array.size() ;i++  ){
                if ( array.get(i) == max ){
                    System.out.print("Maximum_Subarray");
                    System.out.print(Maximum_Subarray_num++);
                    System.out.print(": [ ");
                    System.out.print( array.get(i) );
                    System.out.print("]\n");
                }//if
            }//for
        }//if
        
        else {
            System.out.print("Maximum_Subarray_max_len : ");
            System.out.println(max_len[0]+1);
            for ( int i = 0 ; i < len.size() ;i++ ){
                if ( sub_ary_sum.get(i) == max && len.get(i) == max_len[0]  ){
                    System.out.print("Maximum_Subarray");
                    System.out.print(Maximum_Subarray_num++);
                    System.out.print(": [ ");
                    for ( int j = start.get(i);j <=end.get(i);j++ ){
                        System.out.print( array.get(j) );
                        System.out.print( " " );
                    }//for
                    System.out.print("]\n");
                }//if
            }//for
        }//else
    }//Detect 
    
    
    
    public static void main(String [] argv) throws IOException {
      //openfile
      FileReader fr = new FileReader(argv[0]);
      Scanner inf = new Scanner(fr);

      ArrayList<Integer> array=new ArrayList<>();
      ArrayList<Integer> start=new ArrayList<>();
      ArrayList<Integer> end=new ArrayList<>();
      ArrayList<Integer> len=new ArrayList<>();
      ArrayList<Integer> sub_ary_sum=new ArrayList<>();
      int[] max_len = {0};
      int max = 0;
      //read input
      while ( inf.hasNext())   {
         int intValue = inf.nextInt();
         array.add(intValue);
      }//while
      fr.close();
      
      //GetMax_Subarray
      max = GetMax_Subarray(array,start,end,len,sub_ary_sum,max_len);
      
      //print_Maximum_Subarray
      print_Maximum_Subarray( array,start,end,len,sub_ary_sum,max,max_len );


    }//main
}//OOP_HW2B_TASK2_Maximum_Subarray