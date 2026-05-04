import turtle
s=turtle.Turtle()
s.pencolor("Green")
s.penup()
s.goto(-15,-20)
s.pendown()
for x in range (5):
    s.forward(110)
    s.right(144)

s.penup()
s.goto(-120,40)
s.pendown()
for x in range (5):
    s.forward(100)
    s.right(144)
s.penup()
s.goto(-100,140)
s.pendown()
for x in range (5):
    s.forward(100)
    s.right(144)

s.penup()
s.goto(70,70)
s.pendown()
for x in range (5):
    s.forward(100)
    s.right(144)

s.penup()
s.goto(30,165)
s.pendown()
for x in range (5):
    s.forward(100)
    s.right(144)

turtle.done()