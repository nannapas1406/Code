import pygame as pg
import math as m
pg.init()

win_x, win_y = 800, 480 #1 ขนาดหน้าจอ
screen = pg.display.set_mode((win_x, win_y)) #1 สร้างหน้าต่างเกม
posX, posY = 40, 300
t = 0
u = 20
theta = m.radians(70)

ux = u*m.cos(theta) # m.cos(rad)
uy = u*m.sin(theta)
sx = 0
sy = 0
start_time = pg.time.get_ticks()
while(1): #2 ทำการสร้าง loop   
    dT = pg.time.get_ticks() - start_time
    dT = dT/1000
    print(dT)
    screen.fill((255, 255, 255)) #3 ตั้งสีพื้นหลัง(สีขาว)
    pg.draw.circle(screen,(100,100,100),(posX+sx,posY-sy),20) #pg.draw.circle(surface, color, center, radius)
   
    sx = ux*dT
    sy = (uy*dT)-(1/2*(1)*(dT**2))

    # t += 0.001

    # pg.time.delay(1) #หน่วงเวลา
    
    pg.display.update() #4 ทำการอัพเดท   
    for event in pg.event.get(): # ทำการ Check event ต่างๆที่เกิดขึ้น
        if event.type == pg.QUIT: 
            pg.quit()
            exit()