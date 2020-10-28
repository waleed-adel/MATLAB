delete(instrfind({'PORT'},{'COM4'}));
clear Ardu;
clc;
global ardu;
ardu = arduino('COM4','uno');
x=0;
for i = 1:1000
    value = readVoltage(ardu, 'A4')
    x=[x, value];
    plot(x);
    axis([0 1000 0 1.5]);
    pause(.001);
end