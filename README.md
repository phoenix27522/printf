===========>          printf          <==========

---> breaking down printf

     prototype: int _printf(const char *format, ...);


     case -1.
       
        *** printf("printing string only")
            if(format != '%") --- > print fromat

    
     case -2.
        
        *** printf("printing if it has specifier %c or d")
          use switch and print it.
     
     try -1(date: 18/08/2023) :- was succesful it printed char and string.
            ### drawbacks the line of code will be large if want to add more specifier
     
     solution:- using structure
             decleared struct and typedef at the sametime   :-  typedef struct format_sp
                                                                {
	                                                         	char ft_sp;
									int (*func_sp)(va_list);

								} format_sp;
             this is breaktrough coz it helps on simplifing the code and proble we were facing by declearing it to struct array.
     
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


         
