import turtle
s=turtle.Turtle()
s.fillcolor("Black")
s.penup()
s.goto(-200,0)
s.pendown()
for a in range(5):
    s.begin_fill()
    for x in range(4):
        s.forward(50)
        s.left(90)
    s.end_fill()
    s.forward(100)
s.pencolor("Green")
s.fillcolor('Green')
s.backward(50)
s.left(180)
for a in range(5):
    s.begin_fill()
    for x in range(4):
        s.right(90)
        s.forward(50)
        
    s.end_fill()
    if(a<4):
        s.forward(100)
    else:s.forward(50)
s.hideturtle()
turtle.done()