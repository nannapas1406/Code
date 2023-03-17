# คลิกเม้าซ้าย 1 ที แล้วเปลี่ยนแกน x,y แบบว่า ตอนแรก พื้นคือ แนวนอน แล้วคลิกปุป พื้นจะเป็นแนวตั้ง

# ทำจอให้ทะลุได้ คือ ไม่มีกำแพงในแกน x บอลจะเด้งแบบโปรเจกต์ไทล์ไปเรื่อยๆ

# ลูกบอลอยู่ด้านล่างกลาง คลิปเม้าซ้ายไปซ้าย คลิกเม้าขวาไปขวา คลิกเม้ากลางขึ้นบน ถ้าชนกำแพงตกลงแบบ free fall หากคลิกใหม่ก็เริ่มยิงใหม่
import pygame as pg
import math as m
pg.init()

win_x, win_y = 800, 480 #1 ขนาดหน้าจอ
screen = pg.display.set_mode((win_x, win_y)) #1 สร้างหน้าต่างเกม
posX, posY = win_x/2, win_y
t = 0
u = 33
theta = m.radians(70)

ux = u*m.cos(theta) # m.cos(rad)
uy = u*m.sin(theta)
sx = 0
sy = 0
# start_time = pg.time.get_ticks()

while(1): #2 ทำการสร้าง loop   
    screen.fill((255, 255, 255)) #3 ตั้งสีพื้นหลัง(สีขาว)

    if pg.mouse.get_pressed()[0] == 1: # Check mouse pressed
        theta = m.radians(110)
        ux = u*m.cos(theta) # m.cos(rad)
        uy = u*m.sin(theta)
        sx = 0
        sy = 0
        t = 0
    elif pg.mouse.get_pressed()[1] == 1:
        theta = m.radians(90)
        ux = u*m.cos(theta) # m.cos(rad)
        uy = u*m.sin(theta)
        sx = 0
        sy = 0
        t = 0
    elif pg.mouse.get_pressed()[2] == 1:
        theta = m.radians(70)
        ux = u*m.cos(theta) # m.cos(rad)
        uy = u*m.sin(theta)
        sx = 0
        sy = 0
        t = 0

    sx = ux*t
    sy = (uy*t)-(1/2*(1)*(t**2))

    pX = posX+sx
    pY = posY-sy

    if pX <= 0:
        pX = 0

    elif pX >= win_x:
        pX = win_x
        
    elif pY <= 0:
        pY = 0

    pg.draw.circle(screen,(100,100,100),(pX,pY),20) #pg.draw.circle(surface, color, center, radius)

    t += 0.01
 
    pg.display.update()
    
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()