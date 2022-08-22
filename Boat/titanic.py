import turtle as t

ship = t.Turtle()

t.bgcolor("skyblue")
t.screensize(1920,720)
# t.speed(10)

def sun():
    ship.speed(0)
    ship.color('yellow','yellow')
    ship.penup() 
    ship.goto(-200,100) 
    ship.pendown()
    ship.begin_fill()
    ship.circle(100)
    ship.end_fill()
def nameShip():
    ##### To write name of titanic ###############
    ship.penup()
    ship.goto(-40,20)   # left side
    ship.pendown()
    ship.write(arg = "Titanic ",font = ("Calibri",18,"bold"))
def bottompart():
        ship.speed(0)
        ship.color("white","grey")
        ship.begin_fill()
        ship.penup()
        ship.goto(-100,0)   # left side
        ship.pendown()
        ship.goto(200,0)
        ship.circle(100,90)
        # ship.goto(259,95)
        ship.goto(-45,95)
        ship.goto(-50,80)   # bicha ko left top
        ship.goto(170,80)
        ship.goto(150,50)
        ship.goto(-88,50)  # Mathi ko left side
        ship.goto(-100,0)
        ship.end_fill() 

    
def toppart():
    ship.speed(0)
    ship.color("white","grey")
    ship.begin_fill()
    ship.penup()
    ship.goto(180,120)
    ship.pendown()
    ship.goto(-10,120)
    ship.goto(0,140)
    ship.goto(200,140)
    ship.goto(180,120)
    ship.end_fill()
    
    ####### 3rd floor ###############
    ship.begin_fill()
    ship.penup()
    ship.goto(120,155)
    ship.pendown()
    ship.goto(10,155)
    ship.goto(15,170)
    ship.goto(130,170)
    ship.goto(120,155)
    ship.end_fill()
    
def railing(x):
    ship.speed(0)
    ship.color("#635667")
    ship.begin_fill()
    ship.penup()
    ship.goto(39+x,49)
    ship.pendown()
    ship.goto(39+x,69)
    for i in range(50,140,10):
        ship.goto(i+x,69)
        ship.goto(i+x,49)
        ship.goto(i+x,69)
    
    
    ship.end_fill()   
     
def handles():
    ######## lower handle  ##############
    ship.speed(0)
    ship.color("white","grey")
    ship.begin_fill()
    ship.penup()
    ship.goto(-20,50)
    ship.pendown()
    ship.goto(-10,80)
    ship.goto(10,80)
    ship.goto(0,50)
    ship.goto(-20,50)
    ship.end_fill()
    ###########upper handle #####################

    ship.begin_fill()
    ship.penup()
    ship.goto(-6,95)
    ship.pendown()
    ship.goto(5,120)
    ship.goto(25,120)
    ship.goto(14,95)
    ship.goto(-6,95)
    ship.end_fill()
    
    
    ####### left handle ############################
    ship.begin_fill()
    ship.penup()
    ship.goto(120,97)
    ship.pendown()
    ship.goto(130,120)
    ship.goto(150,120)
    ship.goto(140,97)
    ship.goto(120,97)
    ship.end_fill()
    
    ###########upper left handles #####################
    #new code
    ship.begin_fill()
    ship.penup()
    ship.goto(20,140)
    ship.pendown()
    ship.goto(25,155)
    ship.goto(35,155)
    ship.goto(30,140)
    ship.goto(20,140)
    ship.end_fill()
    ###########upper right handle #####################
    #new code
    ship.begin_fill()
    ship.penup()
    ship.goto(90,140)
    ship.pendown()
    ship.goto(98,155)
    ship.goto(108,155)
    ship.goto(100,140)
    ship.goto(90,140)
    ship.end_fill()
    

    
def flag():
    ship.speed(0)
    ship.color("white","white")
    ship.begin_fill()
    ship.penup()
    ship.goto(40,170)   
    ship.pendown()
    ship.goto(50,230)   
    ship.goto(106,230)   
    ship.goto(105,200)   
    ship.goto(54,200)   
    ship.goto(52,170)   
    ship.goto(40,170)   
    ship.end_fill()

def air(x,a,y):
    
    ship.penup()
    ship.goto(x,y)
    ship.pendown()
    ship.goto(a,y)
    ship.circle(10)
    
def water(x,a,y):

    ship.speed(0)
    ship.penup()
    ship.goto(x,y)
    ship.pendown()
    ship.goto(a,y)

def my_ship():
    bottompart()
    toppart()
    handles()
    flag()
    nameShip()
    # railing(0)
    
# function execution

sun()
my_ship()
### to create air effect
air(10,40,230)
air(10,40,200)
air(10,40,180)

##### water ###########
water(10,100,-100)
water(200,300,-100)
water(40,90,-50)
water(150,200,-50)

# ship.goto(240,80)
t.hideturtle()

t.mainloop()

############### Misc #####################
# def bottomlooppart():
#     for i in range(0,50,10):
#         ship.begin_fill()
#         ship.goto(-100+i,0)   # left side
#         ship.goto(200+i,0)
#         ship.goto(259+i,95)
#         ship.goto(-45+i,95)
#         ship.goto(-50+i,80)   # bicha ko left top
#         ship.goto(170+i,80)
#         ship.goto(150+i,50)
#         ship.goto(-88+i,50)  # Mathi ko left side
#         ship.goto(-100+i,0)
#         ship.clear()
#         ship.end_fill() 