===========>          printf          <==========

----------> breaking down printf

                     prototype: int _printf(const char *format, ...);


     case -1.
       
        *** printf("printing string only")
            if(format != '%") --- > print fromat

    
     case -2.
        
        *** printf("printing if it has specifier %c or d")
          
     
     try -1(date: 18/08/2023) :- use switch and print it was succesful it printed char and string.
            ### drawbacks the line of code will be large if want to add more specifier
     
     solution:- using structure
                decleared struct and typedef at the sametime   :-  typedef struct format_sp
                                                                {
	                                                         	char ft_sp;
									int (*func_sp)(va_list);

								} format_sp;
                      ** this is breaktrough coz it helps on simplifing the code and proble we were facing by declearing it to struct array.
     
     try -2(date: 19/08/2023) :- difucluties on how to modify the _putchar so that it can print any thing
             
          solution:-  making an attempt to improve the _putchar function by passing the format specifier string fsp and the index indx as parameters.
                      The indx value that passed to _putchar represents the index in the format string where the format specifier starts.
                      This index is used to correctly extract the format specifier when you call _putchar. 
                      As long as the _putchar function is designed to handle this correctly, the _printf function should work with it.
    

N.B ---->   the solution on modifing the putchar didnt work it can not handel all thing that i nedded it can only be helper for the bigger func.


     try -3(date: 20/18/2023) :- difculties on tracking the format specifier and creating function that can be called from the printf function 
                                 when "%" is found.

N.B ----> during of coding this  descovered that the lack of applying pointers in function and  left with many errors and segmentfault
             so no solution for today 


     try -3(date: 21/08/2023) :- breaking down it to smaller function that way it can be debugged easily.

          solution:- understanding what we want printf function to do.  --> is to to call function that itrates it untill it reach the '\0'
                                                                        --> check if it is not NULL
                                                                        --> and that it returns -1 if it is % '\0'

N.B ----> this solution came up with the task one reqirement that handel the char string and % specifier.
          
                      ** created the my_printf.c file it handels :-  # Argument Checks: The code  performs some checks on the format string:
                                                                     # If format is NULL, the function returns -1. This is a basic input validation check.
                                                                     # It checks whether the format starts with % followed by a space and nothing else. 
                                                                     # If so, it returns -1. 
                                                                     # This might be a check to ensure that the format string is properly formatted.
                                                                     # The code is calls a function print_fsp with the format string and the args list.
                                                                     # This func processes the format specifiers & performs the printing of formatted data.
                                                                     # va_end(args);This macro is used to clean up the args list
                                                                     # Return: i that is assigne to the print_fsp      
