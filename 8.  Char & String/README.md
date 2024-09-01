# Char & String  
## Character Arrays 
**Creation of Character Arrays :**  
- char word[] = "code";     
- char word[5] = "code";    
- char word[] = {'c' , 'o' , 'd' , 'e' , '/0' };    
- char word[50] = {'c' , 'o' , 'd' , 'e' , '/0' };      

**Input :**
- cin.gteline();

        char word[10];      
        cin>>word;     // Ignore whitespace     

        char sentence[100];         
        cin.getline(sentence , 100 , ' . ') // consider the whitespace      

**<cstring>  header file Function :**   
- strcpy(dest , src ) : To copy string from src to dest.      
- strcat(str1 , str2) : To concatenate / join str1 with str2.       
- strcmp(str1 , str2) : To compare 2 strings based on values (-ve , 0 , +ve)    

## String :
- C++ String are object of pre_defined string class in STL.     
- C++ String have useful Member Function.       
- C++ String are dynamic (their size can change at run time).       
- C++ String support operators like + , == , > , < , etc.           
- C++ String are Stored contiguously in memory.            

**Creation of String :**         
- Header file : <string>          
- string str = "Hello";             

**Input :**          
- getline(cin , str);               

**For Each loop :**      
- This Loop invidual character of string can be accessed;         
-Syntax:          

            for(char ch : str){            

            }            

**Member Function :**             
- str.lenght() : To get the lenght of string.           
- str.at(idx)  : To get value at that index.            
- str.substr(startIdx , size) : To get Substring.                   
- str.find(word) : Find the word in the string and return the index as 1st appearance of that word.          
