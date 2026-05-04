import turtle

s = turtle.Turtle()
s.pencolor("green")
s.fillcolor("green")
s.speed(3)


def star(size):
    s.begin_fill()
    for _ in range(5):
        s.forward(size)
        s.right(144)
    s.end_fill()


def middle(size):
    s.begin_fill()
    for _ in range(5):
        s.forward(size)
        s.right(72)
    s.end_fill()


positions = [(-15, -20), (-120, 40), (-100, 140), (70, 70), (30, 165)]


for pos in positions:
    s.penup()
    s.goto(pos)
    s.setheading(0)
    s.pendown()
    star(102)

    s.forward(39)
    middle(25)

turtle.done()
