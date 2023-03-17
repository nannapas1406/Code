import pygame as pg
pg.init()

win_x, win_y = 800, 480 #1 ขนาดหน้าจอ
screen = pg.display.set_mode((win_x, win_y)) #1 สร้างหน้าต่างเกม
rad = 0

while(1): #2 ทำการสร้าง loop
    screen.fill((255, 255, 255)) #3 ตั้งสีพื้นหลัง(สีขาว)
    pg.draw.circle(screen,(172,227,240),(win_x/2,win_y/2),rad) #pg.draw.circle(surface, color, center, radius)
    
    if rad < win_x/2 or rad < win_y/2: # เมื่อค่าตำแหน่ง X เกินขนาดของหน้าจอ
        rad += 1
    else:
        while rad != 0:
            screen.fill((255, 255, 255))
            pg.draw.circle(screen,(172,227,240),(win_x/2,win_y/2),rad)
            pg.time.delay(5) #หน่วงเวลา 
            pg.display.update() #4 ทำการอัพเดท
            rad -= 1

    pg.time.delay(5) #หน่วงเวลา
    
    pg.display.update() #4 ทำการอัพเดท   
    for event in pg.event.get(): # ทำการ Check event ต่างๆที่เกิดขึ้น
        if event.type == pg.QUIT: 
            pg.quit()
            exit()