# Pointers
- A special variable that store address of another variable.  
int *ptr = &a ;  
char *ptr = &c ;  
float *ptr = & b;    

**Dereference Operator :**  
- Gets the value of the variable pointed by any pointer.    
-  " * " Operator let us directly access & modify the value of variable.      
    int a = 10 ;      
    int *ptr = &a ; // "*ptr" will be equal to 10.      
    
**Null Pointer :**        
- we assign Null vaue to a pointer to show that it doesn't point to any loction.    
      int *ptr = Null ; OR int *ptr = 0;    
- Pereferencing Null pointer id not possible as it'll result in error.    
