#ifndef MYPICTURE_H_INCLUDED
#define MYPICTURE_H_INCLUDED

void loadPictures()
{
	image1=iLoadImage("images\\mizo.jpg");
	image2=iLoadImage("images\\meennu.jpg");
	image3=iLoadImage("images\\credit.jpg");
	image4=iLoadImage("images\\storyfinal.jpg");
	image5=iLoadImage("images\\stage1.jpg");
	image8=iLoadImage("images\\mihawkdead.png");
	image9=iLoadImage("images\\zorodead.png");
	image10=iLoadImage("images\\defeat.png");
	image11=iLoadImage("images\\win.png");

	zoroinitial=iLoadImage("images\\zororun2.png");

	for(int i=0 ; i<=3 ; i++){
	zororun[i]=iLoadImage("images\\zororun2.png");
	}
	for(int i=4 ; i<=7 ; i++){
	zororun[i]=iLoadImage("images\\zororun3.png");
	}
	for(int i=8 ; i<=11 ; i++){
	zororun[i]=iLoadImage("images\\zororun4.png");
	}
	for(int i=12 ; i<=15 ; i++){
	zororun[i]=iLoadImage("images\\zororun5.png");
	}
	for(int i=16 ; i<=19 ; i++){
	zororun[i]=iLoadImage("images\\zororun6.png");
	}
	for(int i=20 ; i<=23 ; i++){
	zororun[i]=iLoadImage("images\\zororun7.png");
	}
	for(int i=24 ; i<=27 ; i++){
	zororun[i]=iLoadImage("images\\zororun8.png");
	}
	for(int i=28 ; i<=31 ; i++){
	zororun[i]=iLoadImage("images\\zororun9.png");
	}
	for(int i=32 ; i<=35 ; i++){
	zororun[i]=iLoadImage("images\\zororun10.png");
	}





	for(int i=0 ; i<=3 ; i++){
	zoroattack[i]=iLoadImage("images\\zoroattack2.png");
	}
	for(int i=4 ; i<=7 ; i++){
	zoroattack[i]=iLoadImage("images\\zoroattack3.png");
	}
	for(int i=8 ; i<=11 ; i++){
	zoroattack[i]=iLoadImage("images\\zoroattack4.png");
	}
	for(int i=12 ; i<=15 ; i++){
	zoroattack[i]=iLoadImage("images\\zoroattack5.png");
	}
	for(int i=16 ; i<=19 ; i++){
	zoroattack[i]=iLoadImage("images\\zoroattack6.png");
	}
	for(int i=20 ; i<=23 ; i++){
	zoroattack[i]=iLoadImage("images\\zoroattack7.png");
	}
	for(int i=24 ; i<=27 ; i++){
	zoroattack[i]=iLoadImage("images\\zoroattack8.png");
	}
	for(int i=28 ; i<=31 ; i++){
	zoroattack[i]=iLoadImage("images\\zoroattack9.png");
	}
	for(int i=32 ; i<=35 ; i++){
	zoroattack[i]=iLoadImage("images\\zoroattack10.png");
	}

	zorojump[0]=iLoadImage("images\\zorojumpattack4.png");
	zorojump[1]=iLoadImage("images\\zorojumpattack5.png");
	
	for(int i=0 ; i<=1 ; i++){
	zorojump[i]=iLoadImage("images\\zorojump5.png");
	}
	for(int i=2 ; i<=3 ; i++){
	zorojump[i]=iLoadImage("images\\zorojump9.png");
	}
	for(int i=4 ; i<=5 ; i++){
	zorojump[i]=iLoadImage("images\\zorojump10.png");
	}


	for(int i=0;i<=3;i++){
	mihawkrun[i]=iLoadImage("images\\mihawkrun1.png");
	}
	for(int i=4 ; i<=7 ; i++){
	mihawkrun[i]=iLoadImage("images\\mihawkrun2.png");
	}
	for(int i=8 ; i<=11 ; i++){
	mihawkrun[i]=iLoadImage("images\\mihawkrun3.png");
	}
	for(int i=12 ; i<=15 ; i++){
	mihawkrun[i]=iLoadImage("images\\mihawkrun3.png");
	}
	for(int i=16;i<=19;i++){
	mihawkrun[i]=iLoadImage("images\\mihawkrun4.png");
	}
	for(int i=20 ; i<=23 ; i++){
	mihawkrun[i]=iLoadImage("images\\mihawkrun5.png");
	}
	for(int i=24 ; i<=27 ; i++){
	mihawkrun[i]=iLoadImage("images\\mihawkrun6.png");
	}
	for(int i=28 ; i<=32 ; i++){
	mihawkrun[i]=iLoadImage("images\\mihawkrun7.png");
	}
	for(int i=33 ; i<=36 ; i++){
	mihawkrun[i]=iLoadImage("images\\mihawkrun8.png");
	}
	for(int i=37 ; i<=40 ; i++){
	mihawkrun[i]=iLoadImage("images\\mihawkrun9.png");
	}
	
	



	for(int i=0;i<=3;i++){
	mihawkfight[i]=iLoadImage("images\\mihawkattack2.png");
	}
	for(int i=4 ; i<=7 ; i++){
	mihawkfight[i]=iLoadImage("images\\mihawkattack4.png");
	}
	for(int i=8 ; i<=11 ; i++){
	mihawkfight[i]=iLoadImage("images\\mihawkattack5.png");
	}
	
	image6=iLoadImage("images\\blood1.png");
	image7=iLoadImage("images\\blood2.png");
}
#endif 