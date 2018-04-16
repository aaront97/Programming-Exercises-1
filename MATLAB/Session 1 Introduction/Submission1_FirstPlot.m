hold on
x = [-10:0.5:10];
y = x.^3+1*(x.^2)+x.*3+4;
plot(x,y,'rd')
xlabel('x-axis')
ylabel('y-axis')
title('FirstPlot')
y = x.^3+2*(x.^2)+x.*3+4;
plot(x,y,'gd')
y = x.^3+3*(x.^2)+x.*3+4;
plot(x,y,'yd')

