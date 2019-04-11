#include "iGraphics.h"
#include "bitmap_loader.h"
#include "variable.h"
#include "pictures.h"
using namespace std;

int len=0;
int dx=550;
int dy=231;
int dx2=dx+200;
int dy2=dy+40;
int str[100];
int str1[100];

/*
 function iDraw() is called again and again by the system.

 */
struct  enemy{
	int enemy_x;
	int enemy_y;
	int enemy_walk_index;
	int enemy_fight_index;
	bool enemy_on;
};
enemy mihawk[10];

void enemyvariables() 
{
	for(int i=0;i<1;i++)
	{
	mihawk[i].enemy_x = 1354;
	mihawk[i].enemy_y=75;
	mihawk[i].enemy_walk_index=0;
	mihawk[i].enemy_fight_index=0;
	mihawk[i].enemy_on = true;
	}
}

void enemyrendering()
{
	for(int i=0;i<1;i++)
	{
		mihawk[i].enemy_x-=5;
		printf("%d\n",mihawk[i].enemy_x);
		if(mihawk[i].enemy_x<=zorox+80)
		{
			printf("fighting");
			mihawk[i].enemy_x=zorox+60;
			mihawkhitindex=1;
			if(mihawkhitindex==1)
			{
				mihawk[i].enemy_fight_index++;
				if(mihawk[i].enemy_fight_index>=12)
				{
					mihawk[i].enemy_fight_index=0;
				}
			}
		}
		else{
			mihawkhitindex=0;
			printf("walking");
			if(mihawkhitindex==0)
			{
				mihawk[i].enemy_walk_index++;
				if(mihawk[i].enemy_walk_index>=40)
				{
					mihawk[i].enemy_walk_index=0;
				}
			}
		}
	}
}

void enemycall() //enemymove()
{
	for(int i=0;i<1;i++)
	{
		if(mihawkhitindex==0 && mihawk[i].enemy_on==true)
		{
			iShowImage(mihawk[i].enemy_x,mihawk[i].enemy_y,100,160,mihawkrun[mihawk[i].enemy_walk_index]);
			printf("if 1\n");
		}
		if(mihawkhitindex==1 && mihawk[i].enemy_on == true)
		{
			iShowImage(mihawk[i].enemy_x,45,130,195,mihawkfight[mihawk[i].enemy_fight_index]);
			//iShowImage(mihawk[i].enemy_x-250,mihawk[i].enemy_y,700,300,image7);
			hero_health_zoro--;
		}
	}
}

void jumping()
{
	if(jump) 
	{
		if(jumphigh==true)
		{
			jumphighY=55;

			if(jumphighY>=300)
			{
				jumphigh=false;
			}
		}
		else
		{
			jumphighY-=5;
			if(jumphighY<=0)
			{
				jump=false;
				jumphighY=0;
			}
		}

	}
		
}

void iDraw()
{
	//place your drawing codes here
	iClear();

	
	if(front==0)
	{
		iShowImage(0,0,1354,670,image1);
		
	}

	if(front==1)
	{
		iShowImage(0,0,1354,670,image4);
		
	}

	if(front==2)
	{
		iShowImage(0,0,1354,670,image2);
		iSetColor(r,g,b);
		iRectangle(575,100,115,50);
		iRectangle(576,101,114,49);
		iSetColor(12,41,78);
		iFilledRectangle(577,102,112,48);
		iSetColor(215,216,26);
		iText(610,120,"Exit",GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(r,g,b);
		iRectangle(575,180,115,50);
		iRectangle(576,181,114,49);
		iSetColor(12,41,78);
		iFilledRectangle(577,182,112,48);
		iSetColor(215,216,26);
		iText(595,202,"Credits",GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(r,g,b);
		iRectangle(575,260,115,50);
		iRectangle(576,261,114,49);
		iSetColor(12,41,78);
		iFilledRectangle(577,262,112,48);
		iSetColor(215,216,26);
		iText(605,280,"Score",GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(r,g,b);
		iRectangle(575,340,115,50);
		iRectangle(576,341,114,49);
		iSetColor(12,41,78);
		iFilledRectangle(577,342,112,48);
		iSetColor(215,216,26);
		iText(610,360,"Play",GLUT_BITMAP_TIMES_ROMAN_24);

	}
	if(front==3)
	{
		iShowImage(0,0,1354,670,image5);

		enemycall();
		/*if(mihawk[i].enemy_x+50>=zorox && mihawk[i].enemy_x+50<=zorox+100 && mihawk[i].enemy_y+100 >= zoroy && mihawk[i].enemy_y+100<=zoroy+200)
		{
			enemy_health_mihawk--;
		}
		if(zorox>=mihawk[i].enemy_x && zorox <= mihawk[i].enemy_x && zoroy >= mihawk[i].enemy_y&& zoroy<=mihawk[i].enemy_y)
		{
			hero_health_zoro--;	
		}
		*/
		if(enemy_health_mihawk<=0)
		{
			mihawkhitindex=-1;
			iShowImage(mihawk[i].enemy_x,mihawk[i].enemy_y,100,160,image8);
		}
			

		if(hero_health_zoro<=0)        
		{
			if(final==0)
			{
				zororunindex=-2000;
				zoroattackindex=-2000;
				zorojumpindex=-2000;
				iShowImage(zorox,zoroy,120,200,image9);
			}
			else if(final==1)
			{
				iShowImage(0,0,1354,670,image10);
			}
		}


		if(flag==0)
		{
			iShowImage(zorox,zoroy,120,200,zoroinitial);
		}

	else if(flag==1)
	{
		iShowImage(zorox,zoroy,120,200,zororun[zororunindex]);
		countforwalk++;
		if(countforwalk>=7000)
		{
			countforwalk=0;
			zororunindex=0;
		}
	}

	else if(flag==2)
	{
		iShowImage(zorox,zoroy,120,200,zoroattack[zoroattackindex]);
		countforwalk++;
		if(countforwalk>=7000)
		{
			countforwalk=0;
			zoroattackindex=0;
		}
	}

	else if(flag==3)
	{
		if(jump==0)
		{
			if(jumphigh)
			{
			  iShowImage(zorox,zoroy+jumphighY,100,200,zorojump[0]);
			}
			else
			{
				iShowImage(zorox,zoroy+jumphighY,100,200,zorojump[zorojumpindex]);
			}
		}
	}

	else if(flag==4)
	{
		iShowImage(zorox,zoroy,120,200,zorojump[zorojumpindex]);
		countforwalk++;
		if(countforwalk>=7000)
		{
			countforwalk=0;
			zorojumpindex=0;
		}
	}


	}
	if(front==4)
	{
		
	}
	if(front==5)
	{
		iShowImage(0,0,1354,670,image3);
	}
	
	
}

void iPassiveMouse(int x, int y)
{
	;
}


/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	
	//place your codes here
}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	mousex=mx;
	mousey=my;
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		flag=2;
		zoroattackindex++;
		if(zoroattackindex>=35)
		{
			zoroattackindex=0;
		}
		zoroattackPressed = true;

		
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
	if(mx>=575&&mx<=690 && my>=100&&my<=150)
	{
		PlaySound("music//click.wav",NULL,SND_SYNC);
		exit(0);
	}
	if(mx>=575&&mx<=690 && my>=180&&my<=230)
	{
		PlaySound("music//click.wav",NULL,SND_SYNC);
		front=5;
	}
	if(mx>=575&&mx<=690 && my>=260&&my<=310)
	{
		PlaySound("music//click.wav",NULL,SND_SYNC);
	}
	if(mx>=575&&mx<=690 && my>=340&&my<=390)
	{
		PlaySound("music//click.wav",NULL,SND_SYNC);
		front=3;
	}

		
	

	
}


/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */
void iKeyboard(unsigned char key)
{
	if (key == 's')
	{
		front=1;
	}

	else if (key == 'n')
	{
		front=2;
	}

	else if (key == ' ')
	{
		
		flag=4;
		zorojumpindex++;
		enemy_health_mihawk-=8;        
		if(zorojumpindex>=5)
		{
			zorojumpindex=0;
		}
		zorox+=3;
		
	}
	else if(key=='w')
	{
		flag=2;
		zoroattackindex++;       
		enemy_health_mihawk-=6;
		if(zoroattackindex>=35)
		{
			zoroattackindex=0;
		}         
		zorox+=3;
		zoroattackPressed = true;
		
	}


	
	//place your codes for other keys here
}

/*
 function iSpecialKeyboard() is called whenver user hits special keys like-
 function keys, home, end, pg up, pg down, arraows etc. you have to use
 appropriate constants to detect them. A list is:
 GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
 GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
 GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
 GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
 */
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_RIGHT && zorox<=1270)
	{
		flag=1;
		zororunindex++;
		if(zororunindex>=35)
		{
			zororunindex=0;
		}
		zorox+=zorospeed;
		final=1;
	}

	if (key == GLUT_KEY_LEFT && zorox>=0)
	{
		flag=1;
		zororunindex++;
		if(zororunindex>=35)
		{
			zororunindex=0;
		}
		
		zorox-=zorospeed;
	}
	if (key == GLUT_KEY_DOWN)
	{
		flag=2;
		
		zoroattackindex++;
		if(zoroattackindex>=35)
		{
			zoroattackindex=0;
		}
		
		
	}
	if (key == GLUT_KEY_UP&& zoroy<=260)
	{

		flag=4;
		zorojumpindex++;
		if(zorojumpindex>=5)
		{
			zorojumpindex=0;
		}
		

	}

}

int main()
{
	//place your own initialization codes here.

	enemyvariables();
	iSetTimer(50,jumping);
	iSetTimer(70,enemyrendering);
	iSetTimer(50,enemycall);
	PlaySound("music//ostgamemusic.wav",NULL,SND_LOOP|SND_ASYNC);
	iInitialize(1354,670, "Demo");	
	loadPictures();

		
	iStart(); // it will start drawing

	return 0;
}

