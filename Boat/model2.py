import turtle as t
ship = t.Turtle()

t.bgcolor("#849aa8")
t.screensize(1920,720)
t.title("Titanic")
ship.speed(0)
# t.showturtle()
# t.hideturtle()
ship.width(5)
t.tracer(0) # to update the tracer most imp step to move boat

def sun():
    ship.speed(0)
    ship.color('#d2ebcd','#d2ebcd')
    ship.penup() 
    ship.goto(-300,200) 
    ship.pendown()
    ship.begin_fill()
    ship.circle(100)
    ship.end_fill()

def nameShip():
    ##### To write name of titanic ###############
    ship.penup()
    ship.goto(-40,20)   # left side
    ship.color('white','white')
    ship.pendown()
    ship.write(arg = "Titanic ",font = ("Calibri",18,"bold"))
    
def descibe():
    ##### To write name of titanic ###############
    ship.penup()
    ship.goto(-300,250)   # left side
    ship.color('white','white')
    ship.pendown()
    ship.write(arg = "This way ship was crashed and lots of people lost their lives in this catestropic accident ",font = ("Calibri",18,"bold"))

def splash(x):
    ship.color("white")
    ship.pu()
    ship.goto(-475+x,4)
    ship.pd()
    ship.goto(-448+x,17)
    ship.pu()
    ship.goto(-498+x,2)
    ship.pd()
    ship.goto(-485+x,9)
    ship.pu()
    ship.goto(-478+x,18)
    ship.pd()
    ship.goto(-459+x,33)
 
def bottompart(x):
        ship.speed(0)
        ship.color("#635667","#635667")
        ship.begin_fill()
        ship.penup()
        ship.goto(-800+x,0)   # left side
        ship.pendown()
        ship.goto(-500+x,0)
        ship.goto(-441+x,95)
        ship.goto(-745+x,95)
        ship.goto(-750+x,80)   # bicha ko left top
        ship.goto(-530+x,80)
        ship.goto(-550+x,50)
        ship.goto(-788+x,50)  # Mathi ko left side
        ship.goto(-800+x,0)
        ship.end_fill()
        railingBottom(x)
        splash(x)

def toppart(x):
    ship.speed(0)
    ship.color("#635667","#635667")
    ship.begin_fill()
    ship.penup()
    ship.goto(-520+x,120)
    ship.pendown()
    ship.goto(-710+x,120)
    ship.goto(-700+x,140)
    ship.goto(-500+x,140)
    ship.goto(-520+x,120)
    ship.end_fill()
    
     ####### 3rd floor ###############
    ship.begin_fill()
    ship.penup()
    ship.goto(-570+x,155)
    ship.pendown()
    ship.goto(-680+x,155)
    ship.goto(-675+x,170)
    ship.goto(-560+x,170)
    ship.goto(-570+x,155)
    ship.end_fill()
    railingTop(x)

def railingBottom(x):
    ########### middle segment ###################
    ship.speed(0)
    ship.color("#635667")
    ship.begin_fill()
    ship.penup()
    ship.goto(-778+x,49)
    ship.pendown()
    ship.goto(-778+x,62)
    for i in range(-778,-553,10):
        ship.goto(i+x,62)
        ship.goto(i+x,49)
        ship.goto(i+x,62)

def railingTop(x): 
    ############## titanic poj wala segment #################
    ship.speed(0)
    ship.color("#635667")
    ship.begin_fill()
    ship.penup()
    ship.goto(-745+x,95)
    ship.pendown()
    ship.goto(-745+x,107)
    for j in range(-745,-440,10):
        ship.goto(j+x,107)
        ship.goto(j+x,95)
        ship.goto(j+x,107)
        
def handles(x):
    ######## lower handle  ##############
    ship.speed(0)
    ship.color("#635667","#635667")
    ship.begin_fill()
    ship.penup()
    ship.goto(-720+x,50)
    ship.pendown()
    ship.goto(-710+x,80)
    ship.goto(-690+x,80)
    ship.goto(-700+x,50)
    ship.goto(-720+x,50)
    ship.end_fill()
    ###########upper handle #####################

    ship.begin_fill()
    ship.penup()
    ship.goto(-706+x,95)
    ship.pendown()
    ship.goto(-695+x,120)
    ship.goto(-675+x,120)
    ship.goto(-686+x,95)
    ship.goto(-706+x,95)
    ship.end_fill()
    
    
    ####### left handle ############################
    ship.begin_fill()
    ship.penup()
    ship.goto(-580+x,95)
    ship.pendown()
    ship.goto(-570+x,120)
    ship.goto(-550+x,120)
    ship.goto(-560+x,95)
    ship.goto(-580+x,95)
    ship.end_fill()
    
    ###########upper left handles #####################
    #new code
    ship.begin_fill()
    ship.penup()
    ship.goto(-670+x,140)
    ship.pendown()
    ship.goto(-665+x,155)
    ship.goto(-655+x,155)
    ship.goto(-660+x,140)
    ship.goto(-670+x,140)
    ship.end_fill()
    ###########upper right handle #####################
    #new code
    ship.begin_fill()
    ship.penup()
    ship.goto(-600+x,140)
    ship.pendown()
    ship.goto(-592+x,155)
    ship.goto(-582+x,155)
    ship.goto(-590+x,140)
    ship.goto(-600+x,140)
    ship.end_fill()
    
    
def flag(x):
    ship.speed(0)
    ship.color("#635667","#f0e9d6")
    ship.begin_fill()
    ship.penup()
    ship.goto(-660+x,170)   
    ship.pendown()
    ship.goto(-650+x,220)   
    ship.goto(-604+x,220)   
    ship.goto(-605+x,195)   
    ship.goto(-646+x,195)   
    ship.goto(-650+x,170)   
    ship.goto(-660+x,170)   
    ship.end_fill()

def air(x1,x2,y,i):
    ship.color("white")
    ship.speed(0)
    ship.penup()
    ship.goto(x1+i,y)
    ship.pendown()
    ship.goto(x2+i,y)
    ship.circle(10)
    
def water(x1,x2,y,inc):
    ship.color("#d2ebcd")   
    ship.speed(0)
    ship.penup()
    ship.goto(x1+inc*2,y)
    ship.pendown()
    ship.goto(x2+inc*2,y)

def iceberg():
    # main iceberg
    ship.color("#d2ebcd","#a9ddff")   
    # ship.color("#084b8f","#084b8f")  
    ship.speed(0)
    ship.begin_fill()
    ship.penup()
    ship.goto(200,0)
    ship.pendown()
    ship.goto(227,72)
    ship.goto(260,85)
    ship.goto(253,121)
    ship.goto(283,149)
    ship.goto(420,0)
    ship.goto(203.0,-2.0)
    # ship.end_fill() 
    # ship.goto(290,-300)
    #  Bottom part of ice berg
    # ship.begin_fill()
    ship.goto(200.0,-1.0)
    ship.goto(224.0,-40.0)
    ship.goto(234.0,-70.0)
    ship.goto(247.0,-84.0)
    ship.goto(249,-85)
    ship.goto(257,-133)
    ship.goto(277,-193)
    ship.goto(292,-231)
    ship.goto(291.0,-227.0)
    ship.goto(335.0,-269.0)
    ship.goto(357.0,-189.0)
    ship.goto(376.0,-113.0)
    ship.goto(402.0,-66.0)
    ship.goto(399.0,-38.0)
    ship.goto(413.0,-20.0)
    ship.goto(421,1)
    ship.goto(200,0)
    
    ship.end_fill() 
    
    # ship.color("#084b8f","#084b8f")   
    # ship.goto(203.0,-2.0)
    # ship.goto(420.0,1.0)
    # ship.end_fill() 
   
def icebergAfterCollision():
    
    ship.color("#849aa8")  
    ship.begin_fill()
    ship.penup()
    ship.goto(226,71)
    ship.pendown()
    ship.goto(263,49)
    ship.goto(306,54)
    ship.goto(307,13)
   
    # cracks in ship1
    ship.color("#849aa8")  
    ship.penup()
    ship.goto(100,0)
    ship.pendown()
    ship.goto(150,50)
    ship.goto(151,54)
    ship.goto(154,70)
    ship.goto(169,86)
    ship.goto(182,95)
    # cracks in ship2
    ship.color("#849aa8")  
    ship.penup()
    ship.goto(100,0)
    ship.pendown()
    ship.goto(88,9)
    ship.goto(56,17)
    # cracks in iceberg
  

def my_ship(x):     # here x is increment
    # nameShip()
    bottompart(x)
    toppart(x)
    handles(x)
    flag(x)
    iceberg()
    
    ### to create air effect
    air(-690,-660,230,x)
    air(-690,-660,200,x)
    air(-690,-660,180,x)
    air(-720,-700,200,x)

    ##### water ###########
    for i in range (-1600,1600,90):
        ship.width(3)
        water(-670+i,-620+i,-2,x)
        water(-670+i,-640+i,-50,x)
        water(-670+i,-610+i,-100,x)
        water(-670+i,-630+i,-179,x)
        water(-670+i,-630+i,-230,x)
        water(-670+i,-630+i,-290,x)


        ##################### to move the ship ################
for i in range(0,690,5):  
    ship.clear()    # screen clear gardai janxa
    sun()  
    my_ship(i)
    t.update()  # screen lie update garxa

    ##################### collision paxi ko effect halne thau ##########################
# to create a crack effect in iceberg
# t.delay(10)
icebergAfterCollision()
nameShip()
descibe()


    ############ know coordinate ##########################
def buttonclick(x,y):
    print("({0},{1})".format(x,y))
 
 #onscreen function to send coordinate
t.onscreenclick(buttonclick,1)
t.listen()  # listen to incoming connections
t.speed(10) # set the speed

t.mainloop()
