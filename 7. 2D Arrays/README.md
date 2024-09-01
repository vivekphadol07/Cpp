# 7. 2D Arrays  
- int arr[row][column] = { {row1} , {row2} }    

##Input and output 2D Arrays :   

        for(i = 0 to n -1) // row     
            for(i = 0 m-1) // column    
                cin>>arr[i][j];     
                cout>>arr[i][j];    

## Memory :
- A 2D arrays is represented as a contiguous block of memory cells(linearly).   
- Consider a matrix[3][3]     
    1 2 3       
    4 5 6           
    7 8 9        

- **Row Major :**     
    | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |       

- **Column Major :**    
    | 1 | 4 | 7 | 2 | 5 | 8 | 3 | 6 | 9 |        

## Matrix Pointer :     
- 2D arrays name behaves as a row Pointer.      

- **Passing Matrix Pointer to functions :**     
    function_name( int (*ptr)[4] ) // we pass the row pointer   
    function_name( int mat[][4]  ) // we pass the row pointer   

- ptr[i][j] = * ( * ( ptr + 1 ) + 1 )       

