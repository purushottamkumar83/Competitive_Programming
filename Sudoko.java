// Given an incomplete Sudoku configuration in terms of a 9 x 9  
// 2-D square matrix (grid[][]), the task to find a solved Sudoku.
// For simplicity, you may assume that there will be only one 
// unique solution.
// 3 0 6 5 0 8 4 0 0 5 2 0 0 0 0 0 0 0 0 8 7 0 0 0 0 3 1 0 0 3 0 1
// 0 0 8 0 9 0 0 8 6 3 0 0 5 0 5 0 0 9 0 6 0 0 1 3 0 0 0 0 2 5 0 0
// 0 0 0 0 0 0 7 4 0 0 5 2 0 6 3 0 0

import java.util.*;
import java.io.*;
import java.lang.*;

class Driver_class
{
    public static void main(String args[])
    {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int grid[][] = new int[9][9];
            for(int i = 0; i < 9; i++)
            {
                for(int j = 0; j < 9; j++)
                grid[i][j] = sc.nextInt();
            }
            
            Solution ob = new Solution();
            
            if(ob.SolveSudoku(grid) == true)
                ob.printGrid(grid);
            else
                System.out.print("NO solution exists");
            System.out.println();
            
        }
    }
}


class Solution
{
    
    boolean possible(int row,int col,int grid[][],int val){
        for(int i=0;i<9;i++){
            if(grid[row][i]==val){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(grid[i][col]==val){
                return false;
            }
        }
        int nr=(row/3)*3;
        int nc=(col/3)*3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[nr+i][nc+j]==val)return false;
            }
        }
        return true;
    }
     boolean fl=false;
    
 void f(int i,int j, int grid[][]){
        if(i==grid[0].length){
            fl=true; 
           // printGrid(grid) ;
            return;
        }
        
        int ni=0;
        int nj=0;
        if(j==grid[0].length-1){
            ni=i+1;
            nj=0;
        }else{
            ni=i;
            nj=j+1;
        }
        if(grid[i][j]!=0){
            f(ni,nj,grid);
        }else{
            for(int po=1;po<=9;po++){
            if(possible(i,j,grid,po)==true){
                grid[i][j]=po;
                f(ni,nj,grid);
                if(fl==false)grid[i][j]=0;
            }
          }
        }
    }
    
    //Function to find a solved Sudoku. 
    boolean SolveSudoku(int grid[][])
    {
         f(0,0,grid);
         return fl;
    }
    
    //Function to print grids of the Sudoku.
     void printGrid (int grid[][])
    {
      
       for(int i=0;i<9;i++){
           for(int j=0;j<9;j++){
               System.out.print(grid[i][j]+" ");
           }
       }
    }
}