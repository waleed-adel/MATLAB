function Traffic_Func ()
red = [1 0 0];
yellow = [1 1 0];
green = [0 1 0];
gray = [0.25 0.25 0.25];
dark_Red = [0.3 0 0];
dark_Yellow = [0.3 0.3 0];
dark_Green = [0 0.3 0];
f = figure;
grid on;
hold on;
Frame = rectangle('Position',[20 15 10 30],'Curvature',0.5,'FaceColor','k');
holder = rectangle('Position',[24 5 2 10],'FaceColor',gray);
HolderLabelx = [24,24,26,26,24];
HolderLabely = [7,6,8,9,7];
fill(HolderLabelx,HolderLabely,'y');
fill(HolderLabelx,HolderLabely+5,'y');
while ishghandle(f)
xlim([0,50]);
ylim([0,50]);
r_circle = rectangle ('Position',[21 36 8 8],'Curvature',[1 1],'FaceColor',red);
y_circle = rectangle ('Position',[21 26 8 8],'Curvature',[1 1],'FaceColor',dark_Yellow);
g_circle = rectangle ('Position',[21 16 8 8],'Curvature',[1 1],'FaceColor',dark_Green);
pause (0.75);
r_circle = rectangle ('Position',[21 36 8 8],'Curvature',[1 1],'FaceColor',dark_Red);
y_circle = rectangle ('Position',[21 26 8 8],'Curvature',[1 1],'FaceColor',yellow);
g_circle = rectangle ('Position',[21 16 8 8],'Curvature',[1 1],'FaceColor',dark_Green);
pause (0.75);
r_circle = rectangle ('Position',[21 36 8 8],'Curvature',[1 1],'FaceColor',dark_Red);
y_circle = rectangle ('Position',[21 26 8 8],'Curvature',[1 1],'FaceColor',dark_Yellow);
g_circle = rectangle ('Position',[21 16 8 8],'Curvature',[1 1],'FaceColor',green);
pause(0.75);
end
end