import pygame as pg
pg.init()

win_x, win_y = 800, 480 #1 ขนาดหน้าจอ
screen = pg.display.set_mode((win_x, win_y)) #1 สร้างหน้าต่างเกม
posX, posY = 200, 30
t = 0

while(1): #2 ทำการสร้าง loop   
    screen.fill((255, 255, 255)) #3 ตั้งสีพื้นหลัง(สีขาว)
    pg.draw.circle(screen,(100,100,100),(posX,posY),20) #pg.draw.circle(surface, color, center, radius)
    
    if posY <= 480:
        posY += 1/2*(1)*(t**2)
    else:
        pg.quit()
        exit()

    t += 0.001

    pg.time.delay(1) #หน่วงเวลา
    
    pg.display.update() #4 ทำการอัพเดท   
    for event in pg.event.get(): # ทำการ Check event ต่างๆที่เกิดขึ้น
        if event.type == pg.QUIT: 
            pg.quit()
            exit()