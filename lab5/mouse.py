import pygame as pg
win_x = 800
win_y = 480
screen = pg.display.set_mode((win_x, win_y))
posX = 20
posY = 20

while(1):
    screen.fill((255, 255, 255))
    
    if pg.mouse.get_pressed()[0] == 1: # Check mouse pressed
        (posX, posY) = pg.mouse.get_pos()
        
    pg.draw.circle(screen,(100,100,100),(posX,posY),20)
    pg.display.update()
    
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()