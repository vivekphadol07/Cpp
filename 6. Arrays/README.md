# Arrays 
- Linear collection of same type of element that are stored together in contiguous memory spaces.

**Creating an Arrays**    
  int marks[50] ;  
  int marks[50} = {1, 2, 3, 4, 5 }    
  int marks[] = {1, 2, 4, , 5 }    
- memory is statically allocated at compile time.

**Output & Input Arrays**  
- Output :  
          int arr[5] = {1, 2, 3, 4, 5}  
          cout<<arr[0] ;  // output is 1  
- Input :  
          cin<<arr[0] ;

**Arrays are passed by reference**      
    void printArr(int arr[]){ ..... }    
    void printArr(int *arr){......}    
- Passing array name is equal to passing the pointer.      

## Complexity    
**1. Time Complexity:**  
- Relation between Input size and running Time (operations)  
- Best case : Minimum Time required ( Ω )  
- Average case : Average Time required ( θ )    
- Worst case : Maximum Time required ( O )  

**2. Space Complexity:**  
-Realtion between input size and extra space required by the program.    

## Search of keys  
**1. Linear search :**  
- Search the keys linearly in an array.  
- Pseudo code :  
              
                  for(int i = 0 ; i < n-1 ; i++{  
                          if(arr[i] == key){  
                                  cout<<"Found";  
                  }
- Time complexity: O( n )  

**2. Binary Search :**
- Prerequisite: Sorted Array
- Pseudo code :

                  int st = 0 , end = n-1;  
                  while( st < end ){  
                        mid = ( st + end )/2;  
                        if( arr[mid] == key){  
                              return mid;  
                        }  
                        else if( arr[mid] < key){  
                              st = mid + 1;  
                        }  
                        else{  
                              end = mid - 1;  
                        }  
                  return -1 ; // No valid Index for give key  

- Time Complexity: O( log n )    


  
