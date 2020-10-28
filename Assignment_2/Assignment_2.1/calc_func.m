function result = calc_func(op1, op2, operation)
%TF = isletter(A) returns a logical array TF. 
%If A is a character array or string scalar, 
%then the elements of TF are logical 1 (true) where the corresponding characters in A are letters,
%and logical 0 (false) elsewhere.
%TF =  isletter('123 main')
%TF =  1 2 3 ' ' m a i n => 0 0 0 0 1 1 1 1
%therefore i use max()fn. to get the maximum value inside array

if ( max(isletter(op1)) == 0 && max(isletter(op2)) == 0 )
    op1 = str2num(op1);
    op2 = str2num(op2);
    switch (operation)
     case '+'
        result = op1+op2;
      case '-'
        result = op1-op2;
      case '*'
        result = op1*op2;
      case '/'
        result = op1/op2;
      otherwise
        result = 'E';  
        fprintf('We Dont Have UR SO CALLED (%s) Operation\nSorry For Not Fulfilling UR DREAM :P\n' ,operation);
    end
else
   result ='E';
   fprintf('Have You Ever Used A Calculator ?\n');
   fprintf('Please Enter SOME NUMERIC OPERANDS !!!\n');
end
    
end
