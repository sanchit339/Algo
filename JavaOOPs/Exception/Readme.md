### Excetion
- Error vs Exception
- Error is non-recoverable
- Exception prevents the normal flow of the program
    - eg number div 0 (1 / 0)

- Throwable class handles all the exceptions
 
>   compile-time error - semantics or syntax. 
>   runtime error - encounter during the code execution during runtime

[Object] -> [Throwable] ( has ) [1] Exception
[2] Errors

- Exceptions
    - Checked ( Compile time )
    - UnChecked ( RunTime ( 1 / 0 ))


- Single only ```Try``` many ```catch``` Single ```finally```
- ```Exceptions``` is the parent of the other exceptions
    - try to use it as the last exception check
- ```Throws``` is used to mention / Declare the Exception
- Whereas ```Throw``` is used to throw an Exception