===========>          printf          <==========

---> breaking down printf

     prototype: int _printf(const char *format, ...);


     case -1.
       
        *** printf("printing string only")
            if(format != '%") --- > print fromat

    
     case -2.
        
        *** printf("printing if it has specifier %c or d")
            if(format == '%' && format[i + 1] == 'c') --> 
                print (string and the %c replased by the char initated)               
