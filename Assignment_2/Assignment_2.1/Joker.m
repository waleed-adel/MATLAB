function Joker ()
User_Name = input('Please Enter UR Name: ','s');
fprintf('WELCOME %s To The Joker Function\n',User_Name);
fprintf('We Will Grant U a Wish\nBUT We Have ONLY 3 Choices For U\n');
fprintf('1- Draw a Bat [NOT MY Fav.]\n2- Traffic Lights [Seems Good]\n3- Calculator [Useful Sometimes]\n');
User_Wish = input('Please Enter The Number Of The Wish U Desire: ','s');
switch (User_Wish)
    case '1'
        draw_bat();
    case '2'
        Traffic_Func();
    case '3'
        fprintf('\n***Welcome To The Calculator Function***\n');
        op1 = input ('Enter OP_1: ','s');
        op2 = input ('Enter OP_2: ','s');
        operation = input ('Enter Operation: ','s');
        result=calc_func(op1,op2,operation);
        if result ~= 'E'
        fprintf('%d %s %d = %d\n',str2num(op1),operation,str2num(op2),result);
        end
    otherwise
        fprintf('Sorry UR Choice Cannot Be Granted\nBetter Luck Next Time :P\n')    
end
end