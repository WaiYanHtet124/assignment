import turtle
s=turtle.Turtle()
s.fillcolor("Black")
for a in range(3):
    s.begin_fill()
    for x in range(4):
        s.forward(50)
        s.left(90)
    s.end_fill()
    s.forward(100)

turtle.done()