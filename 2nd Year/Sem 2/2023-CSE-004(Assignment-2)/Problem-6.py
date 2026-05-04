import turtle
import random

screen = turtle.Screen()
screen.bgcolor("skyblue")
screen.title("Catch the Padauk Flower")

butterfly = turtle.Turtle()
butterfly.shape("turtle")
butterfly.color("orange")
butterfly.penup()
butterfly.goto(0, -200)

flower = turtle.Turtle()
flower.shape("circle")
flower.color("yellow")
flower.penup()
flower.goto(random.randint(-200, 200), 200)
flower_speed = 10


def left():
    butterfly.backward(20)

def right():
    butterfly.forward(20)


screen.listen()
screen.onkey(left, "Left")
screen.onkey(right, "Right")


def fall():
    y = flower.ycor() - flower_speed
    flower.sety(y)

    if flower.distance(butterfly) < 20:
        flower.goto(random.randint(-200, 200), 200)

    if flower.ycor() < -250:
        flower.goto(random.randint(-200, 200), 200)

    screen.ontimer(fall, 200)

fall()
turtle.done()
