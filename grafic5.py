import serial
import numpy as np 
import time
import tkinter as tk 
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.figure import Figure

data = np.array([])
cond = True
def plot_data():
    low_value = False
    medium_value = False
    big_value = False
    global cond, data
    if(cond == True):
        a = s.readline()
        a.decode()
        string = a.rstrip()
        if(len(data) < 100):
            try:
                data = np.append(data, int(string))
                s.reset_input_buffer()
            except:
                pass
                
        else:
            data[0:99] = data[1:100]
            s.reset_input_buffer()
            a = s.readline()
            a.decode()
            string = a.rstrip()
            try:
                data[99] = int(string)
                if(data[99] >= 0 and data[99] < 3):
                    lines.set_color(color= 'green')
                if(data[99] >= 4 and data[99] < 7):
                    lines.set_color(color= 'yellow')
                if(data[99] >= 7 and data[99] < 10):
                    lines.set_color(color= 'red')
            except:
                pass
        lines.set_xdata(np.arange(0, len(data)))
        lines.set_ydata(data) 
        
        canvas.draw()
    root.after(5,plot_data)

root = tk.Tk()
root.title('Real Time plot')
root.configure(background= 'light blue')
root.geometry("700x500")

fig = Figure()
ax = fig.add_subplot(111)

ax.set_title('Rotation Sensor')
ax.set_xlabel('Time')
ax.set_ylabel('Sample')
ax.set_xlim(0, 100)
ax.set_ylim(0, 10)
lines = ax.plot([], [])[0]

canvas = FigureCanvasTkAgg(fig, master=root)
canvas.get_tk_widget().place(x = 10, y = 10, width=600, height=400)
canvas.draw()

s = serial.Serial('COM6', 115200)
s.reset_input_buffer()

root.after(5,plot_data)
root.mainloop()

# # i = 0 
# x=[]
# # y=list()
# # i = 0
# y = []
# x.append(0)
# y.append(0)
# ser = serial.Serial('COM6', 115200, timeout=.1)
# ser.close()
# ser.open()
# i = 0
# while True:
#     #goleste plotul ca sa aiba ultimele 50 valori
#     data=ser.readline()
#     decoded=data.decode()
#     string = decoded.rstrip()
#     # y = y[-50:]
#     # x = x[-50:]
#     value = int(string)
#     print(string)
#     # try:
#     #     value = int(string)
     
#     # except:
#     #     pass
       
    
#     # ax.cla()
#     # x.append(i)
#     # y.append(value)
#     # #ax.plot(x,y)
#     # ax.set_ylim([0, 10])
#     # ax.set_xlim([0, 500])
#     # ax.set_title("volumMetru")
#     # ax.set_ylabel("volumMetru Reading")
    
