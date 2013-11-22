#Sample Python blank screen template

import pygame

#define colors
black =  (0,0,0)
white = (255,255,255)
green = (0,255,0)
red = (255,0,0)

pygame.init()

#Setting the width of the window [width, height]
size = [700,500]
screen = pygame.display.set_mode(size)

pygame.display.set_caption("My Game")
#loop until user clicks the close button
done = False

#used to manage how fast the screen updates
clock = pygame.time.Clock()

#main loop

while done == False:
	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			done = True
			
	screen.fill(black)
	pygame.display.flip()
	clock.tick(20)
pygame.quit()