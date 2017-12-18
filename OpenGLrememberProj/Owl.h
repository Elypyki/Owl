class owl {
public:
	owl()
	{
		RGB1 = (double *)calloc(3, sizeof(double));
		RGB2 = (double *)calloc(3, sizeof(double));
		RGB3 = (double *)calloc(3, sizeof(double));
		RGB4 = (double *)calloc(3, sizeof(double));
		RGB5 = (double *)calloc(3, sizeof(double));
		RGB6 = (double *)calloc(3, sizeof(double));
		RGB7 = (double *)calloc(3, sizeof(double));

		RGB1[0] = 0.98; RGB1[1] = 0.98; RGB1[2] = 0.98;
		RGB2[0] = 0; RGB2[1] = 0; RGB2[2] = 0;
		RGB3[0] = 1; RGB3[1] = 1; RGB3[2] = 0;
		RGB4[0] = 0.94; RGB4[1] = 0.94; RGB4[2] = 0.94;
		RGB5[0] = 1; RGB5[1] = 0; RGB5[2] = 0;
		RGB6[0] = 1; RGB6[1] = 0.5; RGB6[2] = 0.67059;
		RGB7[0] = 0.89; RGB7[1] = 0.89; RGB7[2] = 0.89;

		int i = 0;

		Points[i++] = O2;

		Points[i++] = A2;
		Points[i++] = A3;
		Points[i++] = A4;
		Points[i++] = A5;
		Points[i++] = A6;
		Points[i++] = A7;

		Points[i++] = O1;
		Points[i++] = M5;
		Points[i++] = M4;
		Points[i++] = M3;
		Points[i++] = M2;

		Points[i++] = B1;
		Points[i++] = B2;
		Points[i++] = B3;
		Points[i++] = B4;
		Points[i++] = B5;
		Points[i++] = B6;
		Points[i++] = B7;
		Points[i++] = B8;
		Points[i++] = B9;
		Points[i++] = B10;

		Points[i++] = M1;
		Points[i++] = B12;

		Points[i++] = C1;
		Points[i++] = C2;
		Points[i++] = C3;
		Points[i++] = C4;
		Points[i++] = C5;
		Points[i++] = C6;
		Points[i++] = C7;
		Points[i++] = C8;
		Points[i++] = C9;
		Points[i++] = C10;
		Points[i++] = C11;
		Points[i++] = C12;
		Points[i++] = C13;
		Points[i++] = C14;
		Points[i++] = C15;

		Points[i++] = D1;//39
		Points[i++] = D2;//40
		Points[i++] = D3;//41
		Points[i++] = D4;//42
		Points[i++] = D5;//43

		Points[i++] = E1;//44
		Points[i++] = E2;//45
		Points[i++] = E3;//46
		Points[i++] = E4;//47
		Points[i++] = E5;//48

		Points[i++] = F1;
		Points[i++] = F2;
		Points[i++] = F3;
		Points[i++] = F4;
		Points[i++] = F5;
		Points[i++] = F6;

		Points[i++] = G1;
		Points[i++] = G2;
		Points[i++] = G3;
		Points[i++] = G4;
		Points[i++] = G5;
		Points[i++] = G6;

		Points[i++] = H1;
		Points[i++] = H2;
		Points[i++] = H3;
		Points[i++] = H4;
		Points[i++] = H5;

		Points[i++] = I1;
		Points[i++] = I2;
		Points[i++] = I3;
		Points[i++] = I4;
		Points[i++] = I5;

		Points[i++] = K1;
		Points[i++] = K2;
		Points[i++] = K3;
		Points[i++] = K4;
		Points[i++] = K5;
		Points[i++] = K6;
		Points[i++] = K7;
		
		Points[i++] = L1;
		Points[i++] = L2;
		Points[i++] = L3;
		Points[i++] = L4;
		Points[i++] = L5;

		Points[i++] = B11;
		Points[i++] = J1;
		Points[i++] = J2;
		Points[i++] = J3;//86
		Points[i++] = J4;//87
		Points[i++] = J5;
		Points[i++] = J6;
		Points[i++] = A12;
		Points[i++] = A11;//91
		Points[i++] = A10;
		Points[i++] = A9;
		Points[i++] = A8;
		Points[i++] = A1;
	
		Points[i++] = P1;//96
		Points[i++] = P2;
		Points[i++] = P3;
		Points[i++] = P4;
		Points[i++] = P5;//100
		Points[i++] = P6;
		Points[i++] = P7;
		Points[i++] = P8;
		Points[i++] = P9;
		Points[i++] = P10;
		Points[i++] = P11;
		Points[i++] = P12;

		Points[i++] = Q1;
		Points[i++] = Q2;
		Points[i++] = Q3;
		Points[i++] = Q4;
		Points[i++] = Q5;
		Points[i++] = Q6;
		Points[i++] = Q7;
		Points[i++] = Q8;
		Points[i++] = Q9;
		Points[i++] = Q10;
		Points[i++] = Q11;
		Points[i++] = Q12;

		Points[i++] = R1;
		Points[i++] = R2;
		Points[i++] = R3;
		Points[i++] = R4;
		Points[i++] = R5;
		Points[i++] = R6;
		Points[i++] = R7;
		Points[i++] = R8;
		Points[i++] = R9;
		Points[i++] = R10;
		Points[i++] = R11;

		Points[i++] = S1;
		Points[i++] = S2;
		Points[i++] = S3;
		Points[i++] = S4;
		Points[i++] = S5;
		Points[i++] = S6;
		Points[i++] = S7;
		Points[i++] = S8;
		Points[i++] = S9;
		Points[i++] = S10;
		Points[i++] = S11;
		Points[i++] = S12;
		Points[i++] = S13;
		Points[i++] = S14;

		Points[i++] = T1;
		Points[i++] = T2;
		Points[i++] = T3;
		Points[i++] = T4;
		Points[i++] = T5;
		Points[i++] = T6;
		Points[i++] = T7;
		Points[i++] = T8;
		Points[i++] = T9;
		Points[i++] = T10;
		Points[i++] = T11;
		Points[i++] = T12;
		Points[i++] = T13;
		Points[i++] = T14;
		Points[i++] = T15;

		Points[i++] = U1;
		Points[i++] = U2;
		Points[i++] = U3;
		Points[i++] = U4;
		Points[i++] = U5;
		Points[i++] = U6;
		Points[i++] = U7;
		Points[i++] = U8;
		Points[i++] = U9;
		Points[i++] = U10;
		Points[i++] = U11;
		Points[i++] = U12;
		Points[i++] = U13;
		Points[i++] = U14;
		Points[i++] = U15;
		Points[i++] = U16;
		Points[i++] = U17;
		Points[i++] = U18;
		Points[i++] = U19;
		Points[i++] = U20;
		Points[i++] = U21;
		Points[i++] = U22;

		Points[i++] = V1;
		Points[i++] = V2;
		Points[i++] = V3;
		Points[i++] = V4;
		Points[i++] = V5;

		Points[i++] = W1;//187
		Points[i++] = W2;
		Points[i++] = W3;
		Points[i++] = W4;
		Points[i++] = W5;//191
		Points[i++] = W6;
		Points[i++] = W7;
		Points[i++] = W8;
		Points[i++] = W9;
		Points[i++] = W10;
		Points[i++] = W11;
		Points[i++] = W12;
		Points[i++] = W13;
		Points[i++] = W14;
		Points[i++] = W15;//201
		Points[i++] = W16;//202


		Points[i++] = X1;
		Points[i++] = X2;
		Points[i++] = X3;
		Points[i++] = X4;
		Points[i++] = X5;
		Points[i++] = X6;
		Points[i++] = X7;
		Points[i++] = X8;
		Points[i++] = X9;
		Points[i++] = X10;
		Points[i++] = X11;
		Points[i++] = X12;
		Points[i++] = X13;
		//Тело конец

		//Правая нога начало
		Points[i++] = PN1;//216
		Points[i++] = PN2;//217
		Points[i++] = PN3;//218
		Points[i++] = PN4;//219
		Points[i++] = PN5;//220
		Points[i++] = PN6;//221<---R
		Points[i++] = PN7;//222<---R
		Points[i++] = PN8;//223<---
		Points[i++] = PN9;//224<---
		Points[i++] = PN10;//225
		Points[i++] = PN11;//226
		Points[i++] = PN12;//227
		Points[i++] = PN13;//228
		Points[i++] = PN14;//229<---
		Points[i++] = PN15;//230<---
		Points[i++] = PN16;//231<---R
		Points[i++] = PN17;//232<---R
		Points[i++] = PN18;//233
		Points[i++] = PN19;//234
		Points[i++] = PN20;//235
		Points[i++] = PN21;//236

		Points[i++] = PL1;//237
		Points[i++] = PL2;
		Points[i++] = PL3;
		Points[i++] = PL4;
		Points[i++] = PL5;
		Points[i++] = PL6;//242
		Points[i++] = PL7;
		Points[i++] = PL8;
		Points[i++] = PL9;
		Points[i++] = PL10;
		Points[i++] = PL11;//247
		Points[i++] = PL12;
		Points[i++] = PL13;
		Points[i++] = PL14;
		Points[i++] = PL15;

		Points[i++] = PM1;//252
		Points[i++] = PM2;
		Points[i++] = PM3;
		Points[i++] = PM4;
		Points[i++] = PM5;
		Points[i++] = PM6;//257
		Points[i++] = PM7;
		Points[i++] = PM8;
		Points[i++] = PM9;
		Points[i++] = PM10;
		Points[i++] = PM11;//262
		Points[i++] = PM12;
		Points[i++] = PM13;
		Points[i++] = PM14;
		Points[i++] = PM15;

		Points[i++] = PR1;//267
		Points[i++] = PR2;
		Points[i++] = PR3;
		Points[i++] = PR4;
		Points[i++] = PR5;
		Points[i++] = PR6;//272
		Points[i++] = PR7;
		Points[i++] = PR8;
		Points[i++] = PR9;
		Points[i++] = PR10;
		Points[i++] = PR11;//277
		Points[i++] = PR12;
		Points[i++] = PR13;
		Points[i++] = PR14;
		Points[i++] = PR15;

		Points[i++] = PK1;
		Points[i++] = PK2;
		Points[i++] = PK3;
		Points[i++] = PK4;
		Points[i++] = PK5;
		Points[i++] = PK6;
		Points[i++] = PK7;

		Points[i++] = PO1;
		Points[i++] = PO2;
		Points[i++] = PO3;
		Points[i++] = PO4;
		Points[i++] = PO5;
		Points[i++] = PO6;
		Points[i++] = PO7;
		Points[i++] = PO8;
		Points[i++] = PO9;
		Points[i++] = PO10;
		Points[i++] = PO11;
		Points[i++] = PO12;
		Points[i++] = PO13;
		Points[i++] = PO14;
		Points[i++] = PO15;
		Points[i++] = PO16;
		Points[i++] = PO17;
		Points[i++] = PO18;
		Points[i++] = PO19;
		Points[i++] = PO20;//308
		//Правая нога конец

		//Левая нога начало
		Points[i++] = LN1;//309
		Points[i++] = LN2;//310
		Points[i++] = LN3;//311
		Points[i++] = LN4;//312
		Points[i++] = LN5;//313
		Points[i++] = LN6;//314<---R
		Points[i++] = LN7;//315<---R
		Points[i++] = LN8;//316<---
		Points[i++] = LN9;//317<---
		Points[i++] = LN10;//318
		Points[i++] = LN11;//319
		Points[i++] = LN12;//320
		Points[i++] = LN13;//321
		Points[i++] = LN14;//322<---
		Points[i++] = LN15;//323<---
		Points[i++] = LN16;//324<---R
		Points[i++] = LN17;//325<---R
		Points[i++] = LN18;//326
		Points[i++] = LN19;//327
		Points[i++] = LN20;//328
		Points[i++] = LN21;//329

		Points[i++] = LL1;//330
		Points[i++] = LL2;
		Points[i++] = LL3;
		Points[i++] = LL4;
		Points[i++] = LL5;
		Points[i++] = LL6;//335
		Points[i++] = LL7;
		Points[i++] = LL8;
		Points[i++] = LL9;
		Points[i++] = LL10;
		Points[i++] = LL11;//340
		Points[i++] = LL12;
		Points[i++] = LL13;
		Points[i++] = LL14;
		Points[i++] = LL15;

		Points[i++] = LM1;//345
		Points[i++] = LM2;
		Points[i++] = LM3;
		Points[i++] = LM4;
		Points[i++] = LM5;
		Points[i++] = LM6;//350
		Points[i++] = LM7;
		Points[i++] = LM8;
		Points[i++] = LM9;
		Points[i++] = LM10;
		Points[i++] = LM11;//355
		Points[i++] = LM12;
		Points[i++] = LM13;
		Points[i++] = LM14;
		Points[i++] = LM15;

		Points[i++] = LR1;//360
		Points[i++] = LR2;
		Points[i++] = LR3;
		Points[i++] = LR4;
		Points[i++] = LR5;
		Points[i++] = LR6;//365
		Points[i++] = LR7;
		Points[i++] = LR8;
		Points[i++] = LR9;
		Points[i++] = LR10;
		Points[i++] = LR11;//370
		Points[i++] = LR12;
		Points[i++] = LR13;
		Points[i++] = LR14;
		Points[i++] = LR15;

		Points[i++] = LK1;
		Points[i++] = LK2;
		Points[i++] = LK3;
		Points[i++] = LK4;
		Points[i++] = LK5;
		Points[i++] = LK6;
		Points[i++] = LK7;

		Points[i++] = LO1;
		Points[i++] = LO2;
		Points[i++] = LO3;
		Points[i++] = LO4;
		Points[i++] = LO5;
		Points[i++] = LO6;
		Points[i++] = LO7;
		Points[i++] = LO8;
		Points[i++] = LO9;
		Points[i++] = LO10;
		Points[i++] = LO11;
		Points[i++] = LO12;
		Points[i++] = LO13;
		Points[i++] = LO14;
		Points[i++] = LO15;
		Points[i++] = LO16;
		Points[i++] = LO17;
		Points[i++] = LO18;
		Points[i++] = LO19;
		Points[i++] = LO20;//401
		//Левая нога конец

		//Крепления начало
		Points[i++] = PKN1;
		Points[i++] = PKN5;
		Points[i++] = PKN18;
		Points[i++] = PKN19;

		Points[i++] = LKN1;
		Points[i++] = LKN5;
		Points[i++] = LKN18;
		Points[i++] = LKN19;

		Points[i++] = N1;
		Points[i++] = N2;
		Points[i++] = N3;

		Points[i++] = T16;
		Points[i++] = T17;

		Points[i++] = Center;

		i = 0;
		while (i < 416)
		{
			PointsCopy[i][0] = Points[i][0];
			PointsCopy[i][1] = Points[i][1];
			PointsCopy[i][2] = Points[i][2];
			i++;
		}

		int j = 0;
		for(i = 237;i < 243; i++, j++)
			fingerMass[j] = Points[i];

		for(i = 252; i < 258; i++, j++)
			fingerMass[j] = Points[i];

		for(i = 267; i < 273; i++, j++)
			fingerMass[j] = Points[i];


		fingerMass[j++] = PL11;
		fingerMass[j++] = PM11;
		fingerMass[j++] = PR11;


		for (i = 330; i < 336; i++, j++)
			fingerMass[j] = Points[i];

		for (i = 345; i < 351; i++, j++)
			fingerMass[j] = Points[i];

		for (i = 360; i < 366; i++, j++)
			fingerMass[j] = Points[i];


		fingerMass[j++] = LL11;
		fingerMass[j++] = LM11;
		fingerMass[j++] = LR11;

		for(i = 248; i < 252; i++, j++)
			fingerMass[j] = Points[i];

		for(i = 263; i < 267; i++, j++)
			fingerMass[j] = Points[i];

		for (i = 278; i < 282; i++, j++)
			fingerMass[j] = Points[i];

		for (i = 341; i < 345; i++, j++)
			fingerMass[j] = Points[i];

		for (i = 356; i < 360; i++, j++)
			fingerMass[j] = Points[i];

		for (i = 371; i < 375; i++, j++)
			fingerMass[j] = Points[i];

		j = 0;
		for (i = 282; i < 289; i++, j++)
			backFingerMass[j] = Points[i];

		for (i = 375; i < 382; i++, j++)
			backFingerMass[j] = Points[i];

		i = 0;
		while (i < 42)
		{
			fingerCentMass[i][0] = 25;
			fingerCentMass[i][1] = fingerMass[i][1];
			fingerCentMass[i][2] = fingerMass[i][2];
			i++;
		}
		while (i < 66)
		{
			fingerCentMass[i][0] = 15;
			fingerCentMass[i][1] = fingerMass[i][1];
			fingerCentMass[i][2] = fingerMass[i][2];
			i++;
		}
		i = 0;
		while (i < 42)
		{
			fingerCentMass2[i][0] = 15;
			fingerCentMass2[i][1] = fingerCentMass[i][1];
			fingerCentMass2[i][2] = fingerCentMass[i][2];
			i++;
		}
		i = 0;
		while(i < 14)
		{
			backFingerCentMass[i][0] = -10;
			backFingerCentMass[i][1] = backFingerMass[i][1];
			backFingerCentMass[i][2] = backFingerMass[i][2];
			i++;
		}
		for (i = 96, j = 0; i <= 100; i++, j++)
			neckRotMass[j] = Points[i];
	
		for (i = 187; i <= 191; i++, j++)
			neckRotMass[j] = Points[i];
		neckRotMass[j++] = Points[201];
		neckRotMass[j++] = Points[202];
		neckRotMass[j++] = N1;
		neckRotMass[j++] = N2;
		neckRotMass[j] = N3;
	}
	void countRadius()
	{
		int i = 0;
		while (i < 66)
		{
			fingerRadMass[i] = length(fingerMass[i], fingerCentMass[i]);
			i++;
		}
		i = 0;
		while (i < 42)
		{
			fingerRadMass2[i] = length(fingerCentMass[i], fingerCentMass2[i]);
			i++;
		}
		i = 0;
		while (i < 14)
		{
			backFingerRadMass[i] = length(backFingerMass[i], backFingerCentMass[i]);
			i++;
		}
	}
	int doSomething(int currentAction)
	{
		int allowToChange = -5;
		if (currentAction != 4)
			blink();
		switch (currentAction)
		{
		case 5: {if (unfinishedAction == 0)rotateHead(1);
			break;
		}
		case 4: {if (unfinishedAction == 0)yawn();
			break; 
		}
		case 1: {allowToChange = rotation(-1, true, false);
			break;
		}
		case -1: {allowToChange = rotation(1, true, false);
			break; 
		}
		case -2: {allowToChange = rotation(1, true, true);
			break; 
		}
		case 2: {allowToChange = moveForward(1, true, false);
			break; 
		}
		case 3: {allowToChange = moveForward(-1, true, false);
			break;
		}
		case -3: {allowToChange = moveForward(1, true, true);
			break;
		}
		case -4: {allowToChange = moveForward(-1, true, true);
			break;
		}
		}
		switch (unfinishedAction)
		{
		case 4: {yawn(); 
			break; 
		}
		case 5: {rotateHead(1);
			break;
		}
		}
		glPushMatrix();
		glTranslated(52*cos(currentAngle*acos(-1)/180), 52 * sin(currentAngle*acos(-1) / 180), 105);
		drawHead();
		glPopMatrix();

		drawBody();

		connections();

		glPushMatrix();
		glTranslated(-5 * cos(currentAngle*acos(-1) / 180), -5 * sin(currentAngle*acos(-1) / 180), -60);
		drawLeftLeg();
		drawRightLeg();
		glPopMatrix();	

		return allowToChange;
	}
	double currentAngle = 0;
private:
	double *RGB1;
	double *RGB2;
	double *RGB3;
	double *RGB4;
	double *RGB5;
	double *RGB6;
	double *RGB7;
	double *neckRotMass[15];
	double *Points[416];
	double PointsCopy[416][3];
	double *fingerMass[66];
	double fingerCentMass[66][3];
	double fingerCentMass2[42][3];
	double fingerRadMass[66];
	double fingerRadMass2[42];
	double *backFingerMass[14];
	double backFingerCentMass[14][3];
	double backFingerRadMass[14];
	bool startRot = true;
	int unfinishedAction = 0;
	void drawHead()
	{
		//клюв начало
		triangle(C10, C14, C7, RGB2, true, false);
		triangle(C11, C14, C7, RGB2, true, false);
		triangle(C10, C14, B11, RGB2, true, false);
		triangle(C11, C14, B11, RGB2, true, false);
		//клюв конец

		//правый зрачок начало
		triangle(I1, I2, O1, RGB2, true, false);
		triangle(I2, I3, O1, RGB2, true, false);
		triangle(I3, I4, O1, RGB2, true, false);
		triangle(I4, I5, O1, RGB2, true, false);
		triangle(I5, I1, O1, RGB2, true, false);
		//правый зрачок конец

		//левый зрачок начало
		triangle(H1, H2, O2, RGB2, true, false);
		triangle(H2, H3, O2, RGB2, true, false);
		triangle(H3, H4, O2, RGB2, true, false);
		triangle(H4, H5, O2, RGB2, true, false);
		triangle(H5, H1, O2, RGB2, true, false);
		//левый зрачок конец

		//правый глаз начало
		triangle(I1, G2, G1, RGB3, true, false);
		triangle(I1, I5, G1, RGB3, true, false);
		triangle(I5, G1, G2, RGB3, true, false);
		triangle(I5, I4, G6, RGB3, true, false);
		triangle(I5, G1, G6, RGB3, true, false);
		triangle(I4, G5, G6, RGB3, true, false);
		triangle(I3, I4, G5, RGB3, true, false);
		triangle(I2, I3, G5, RGB3, true, false);
		triangle(I2, G4, G5, RGB3, true, false);
		triangle(I2, G4, G3, RGB3, true, false);
		triangle(I2, G3, I1, RGB3, true, false);
		triangle(I1, G3, G2, RGB3, true, false);
		//правый глаз конец

		//левый глаз начало
		triangle(H1, F2, F1, RGB3, true, false);
		triangle(H1, H5, F1, RGB3, true, false);
		triangle(H5, F1, F2, RGB3, true, false);
		triangle(H5, H4, F6, RGB3, true, false);
		triangle(H5, F1, F6, RGB3, true, false);
		triangle(H4, F5, F6, RGB3, true, false);
		triangle(H3, H4, F5, RGB3, true, false);
		triangle(H2, H3, F5, RGB3, true, false);
		triangle(H2, F4, F5, RGB3, true, false);
		triangle(H2, F4, F3, RGB3, true, false);
		triangle(H2, F3, H1, RGB3, true, false);
		triangle(H1, F3, F2, RGB3, true, false);
		//левый глаз конец

		//контур правой глазницы начало
		line(E1, E2, 2);
		line(E2, E3, 2);
		line(E3, E4, 2);
		line(E4, E5, 2);
		line(E5, C5, 2);
		line(C5, E1, 2);
		//контур правой глазницы конец

		//контур левой глазницы начало
		line(D1, D2, 2);
		line(D2, D3, 2);
		line(D3, D4, 2);
		line(D4, D5, 2);
		line(D5, C6, 2);
		line(C6, D1, 2);
		//контур левой глазницы конец

		//правая глазница начало
		triangle(E3, G3, G2, RGB1, true, true);
		triangle(E3, G2, E2, RGB1, true, true);
		triangle(E2, G2, G1, RGB1, true, true);
		triangle(E2, E1, G1, RGB1, true, true);
		triangle(E1, G1, C5, RGB1, true, true);
		triangle(G1, G6, C5, RGB1, true, true);
		triangle(G6, C5, E5, RGB1, true, true);
		triangle(G6, G5, E5, RGB1, true, true);
		triangle(G5, G4, E5, RGB1, true, true);
		triangle(E4, G4, E5, RGB1, true, true);
		triangle(E4, G4, G3, RGB1, true, true);
		triangle(E4, G3, E3, RGB1, true, true);
		//правая глазница конец

		//левая глазница начало
		triangle(D3, F3, F2, RGB1, true, true);
		triangle(D3, F2, D2, RGB1, true, true);
		triangle(D2, F2, F1, RGB1, true, true);
		triangle(D2, D1, F1, RGB1, true, true);
		triangle(D1, F1, C6, RGB1, true, true);
		triangle(F1, F6, C6, RGB1, true, true);
		triangle(F6, C6, D5, RGB1, true, true);
		triangle(F6, F5, D5, RGB1, true, true);
		triangle(F5, F4, D5, RGB1, true, true);
		triangle(D4, F4, D5, RGB1, true, true);
		triangle(D4, F4, F3, RGB1, true, true);
		triangle(D4, F3, D3, RGB1, true, true);
		//левая глазница конец

		//контур лица начало
		line(B1, B2, 4);
		line(B2, B3, 4);
		line(B3, B4, 4);
		line(B4, B5, 4);
		line(B5, B6, 4);
		line(B6, B7, 4);
		line(B7, B8, 4);
		line(B8, B9, 4);
		line(B9, B10, 4);
		line(B10, N1, 4);
		line(N1, B12, 4);
		line(B12, B1, 4);
		//контур лица конец

		//лицо начало
		triangle(B3, B4, E3, RGB1, true, true);
		triangle(E3, E2, B4, RGB1, true, true);
		triangle(B4, E2, E1, RGB1, true, true);
		triangle(B4, E1, C2, RGB1, true, true);
		triangle(B4, C2, C1, RGB1, true, true);
		triangle(B4, B5, C1, RGB1, true, true);
		triangle(B5, C1, B6, RGB1, true, true);
		triangle(C1, C3, B6, RGB1, true, true);
		triangle(C3, D1, B6, RGB1, true, true);
		triangle(D1, B6, D2, RGB1, true, true);
		triangle(B6, D2, D3, RGB1, true, true);
		triangle(B6, B7, D3, RGB1, true, true);
		triangle(B7, D3, B8, RGB1, true, true);
		triangle(D3, D4, B8, RGB1, true, true);
		triangle(D4, B8, B9, RGB1, true, true);
		triangle(D4, B9, B10, RGB1, true, true);
		triangle(D5, D4, B10, RGB1, true, true);
		triangle(D5, C13, B10, RGB1, true, true);
		triangle(C13, N1, B10, RGB1, true, true);
		triangle(C11, C13, B11, RGB1, true, true);
		triangle(C12, C10, B11, RGB1, true, true);
		triangle(C12, B12, N1, RGB1, true, true);
		triangle(E5, B12, C12, RGB1, true, true);
		triangle(E4, E5, B12, RGB1, true, true);
		triangle(B1, B12, E4, RGB1, true, true);
		triangle(B1, E4, B2, RGB1, true, true);
		triangle(E4, B2, E3, RGB1, true, true);
		triangle(B2, E3, B3, RGB1, true, true);
		triangle(C2, C1, C15, RGB1, true, true);
		triangle(C3, C1, C15, RGB1, true, true);
		triangle(E1, C2, C5, RGB1, true, true);
		triangle(C2, C4, C5, RGB1, true, true);
		triangle(C2, C15, C4, RGB1, true, true);
		triangle(C15, C4, C3, RGB1, true, true);
		triangle(C4, C6, C3, RGB1, true, true);
		triangle(C3, D1, C6, RGB1, true, true);
		triangle(C5, C4, C7, RGB1, true, true);
		triangle(C4, C5, C7, RGB1, true, true);
		triangle(C4, C7, C6, RGB1, true, true);
		triangle(E5, C5, C8, RGB1, true, true);
		triangle(C5, C8, C7, RGB1, true, true);
		triangle(C6, C7, C9, RGB1, true, true);
		triangle(C9, C6, D5, RGB1, true, true);
		triangle(C8, C10, C7, RGB1, true, true);
		triangle(C9, C7, C11, RGB1, true, true);
		triangle(E5, C8, C12, RGB1, true, true);
		triangle(C8, C10, C12, RGB1, true, true);
		triangle(C9, C11, C13, RGB1, true, true);
		triangle(C9, D5, C13, RGB1, true, true);
		//лицо конец

		//голова перед начало
		triangle(A1, B2, B1, RGB4, true, true);
		triangle(A1, A2, B2, RGB4, true, true);
		triangle(A2, B2, B3, RGB4, true, true);
		triangle(A2, B3, A3, RGB4, true, true);
		triangle(A3, B3, B4, RGB4, true, true);
		triangle(A3, B4, A4, RGB4, true, true);
		triangle(A4, B4, B5, RGB4, true, true);
		triangle(A4, B5, A5, RGB4, true, true);
		triangle(A4, M3, A5, RGB4, true, true);
		triangle(B5, A5, B6, RGB4, true, true);
		triangle(A5, A6, B6, RGB4, true, true);
		triangle(A6, B6, B7, RGB4, true, true);
		triangle(A6, A7, B7, RGB4, true, true);
		triangle(A7, B7, B8, RGB4, true, true);
		triangle(A7, B8, A8, RGB4, true, true);
		triangle(B8, B9, A8, RGB4, true, true);
		triangle(B9, A8, A9, RGB4, true, true);
		triangle(A9, B10, B9, RGB4, true, true);
		triangle(B10, A10, A9, RGB4, true, true);
		triangle(A10, B10, N1, RGB4, true, true);
		triangle(A11, N1, A10, RGB4, true, true);
		triangle(B12, A11, N1, RGB4, true, true);
		triangle(A12, A11, B12, RGB4, true, true);
		triangle(A12, B12, B1, RGB4, true, true);
		triangle(A12, B1, A1, RGB4, true, true);
		//голова перед конец

		//голова зад начало
		triangle(A1, A2, K1, RGB4, true, true);
		triangle(A2, A3, M1, RGB4, true, true);
		triangle(A2, K1, M1, RGB4, true, true);
		triangle(M1, A3, A4, RGB4, true, true);
		triangle(M1, M2, A4, RGB4, true, true);
		triangle(M2, A4, M3, RGB4, true, true);
		triangle(M3, M4, A5, RGB4, true, true);
		triangle(A5, M5, M4, RGB4, true, true);
		triangle(A5, A6, M5, RGB4, true, true);
		triangle(M5, A6, A7, RGB4, true, true);
		triangle(M5, A7, K7, RGB4, true, true);
		triangle(A7, A8, K7, RGB4, true, true);
		triangle(A8, J6, K7, RGB4, true, true);
		triangle(K7, J6, K6, RGB4, true, true);
		triangle(L5, K7, K6, RGB4, true, true);
		triangle(M5, K7, L5, RGB4, true, true);
		triangle(M4, M5, L5, RGB4, true, true);
		triangle(L4, L5, K6, RGB4, true, true);
		triangle(M4, L5, L4, RGB4, true, true);
		triangle(M3, M4, L4, RGB4, true, true);
		triangle(L3, M3, L4, RGB4, true, true);
		triangle(L2, M3, L3, RGB4, true, true);
		triangle(M2, M3, L2, RGB4, true, true);
		triangle(L1, M2, L2, RGB4, true, true);
		triangle(L1, M1, M2, RGB4, true, true);
		triangle(K2, L1, L2, RGB4, true, true);
		triangle(K1, L1, K2, RGB4, true, true);
		triangle(K1, M1, L1, RGB4, true, true);
		triangle(J1, K1, K2, RGB4, true, true);
		triangle(J1, A1, K1, RGB4, true, true);
		triangle(J1, L1, K1, RGB4, true, true);
		triangle(J1, K2, J2, RGB4, true, true);
		triangle(J2, K2, K3, RGB4, true, true);
		triangle(K2, K4, K3, RGB4, true, true);
		triangle(K2, L2, K4, RGB4, true, true);
		triangle(L2, L3, K4, RGB4, true, true);
		triangle(K4, L3, L4, RGB4, true, true);
		triangle(K4, L4, K6, RGB4, true, true);
		triangle(K4, K6, K5, RGB4, true, true);
		triangle(K6, J6, J5, RGB4, true, true);
		triangle(K5, K6, J5, RGB4, true, true);
		triangle(K5, J5, J4, RGB4, true, true);
		triangle(K4, K5, J4, RGB4, true, true);
		triangle(J3, K4, J4, RGB4, true, true);
		triangle(J3, K3, K4, RGB4, true, true);
		triangle(J2, K3, J3, RGB4, true, true);
		//голова зад конец

		//ротовая полость начало
		triangle(C12, N2, N1, RGB5, true, true);
		triangle(C13, N3, N1, RGB5, true, true);
		triangle(C12, N2, C4, RGB5, true, true);
		triangle(C13, N3, C4, RGB5, true, true);
		triangle(N2, N3, C4, RGB6, true, true);
		triangle(N2, N3, N1, RGB6, true, true);
		//ротовая полость конец
	}
	void drawBody()
	{
		//Шея начало
		triangle(P1, P11, P2, RGB1, true, true);
		triangle(P1, P12, P11, RGB1, true, true);
		triangle(P2, P9, P3, RGB1, true, true);
		triangle(P11, P9, P2, RGB1, true, true);
		triangle(P3, P9, P4, RGB1, true, true);
		triangle(P9, P7, P4, RGB1, true, true);
		triangle(P4, P7, P5, RGB1, true, true);
		triangle(P5, P7, P6, RGB1, true, true);

		triangle(W1, W2, W8, RGB1, true, true);
		triangle(W7, W1, W8, RGB1, true, true);
		triangle(W6, W1, W7, RGB1, true, true);
		triangle(W1, W1, W8, RGB1, true, true);
		triangle(W8, W2, W9, RGB1, true, true);
		triangle(W9, W2, W15, RGB1, true, true);
		triangle(W9, W15, W10, RGB1, true, true);
		triangle(W10, W15, W3, RGB1, true, true);
		triangle(W10, W3, W16, RGB1, true, true);
		triangle(W10, W16, W11, RGB1, true, true);
		triangle(W11, W16, W4, RGB1, true, true);
		triangle(W11, W4, W12, RGB1, true, true);
		triangle(W12, W4, W5, RGB1, true, true);
		triangle(W12, W5, W13, RGB1, true, true);
		triangle(W13, W5, W14, RGB1, true, true);

		triangle(P5, P6, W5, RGB1, true, true);
		triangle(W5, W14, P6, RGB1, true, true);
		triangle(P12, P1, W1, RGB1, true, true);
		triangle(W1, W6, P12, RGB1, true, true);
		//Шея конец

		//Грудь начало
		triangle(P12, R1, P11, RGB1, true, true);
		triangle(P11, R1, R2, RGB1, true, true);
		triangle(P11, R2, P10, RGB1, true, true);
		triangle(P10, R2, R3, RGB1, true, true);
		triangle(P10, R3, P9, RGB1, true, true);
		triangle(P9, R3, P8, RGB1, true, true);
		triangle(P8, R3, R4, RGB1, true, true);
		triangle(P8, R4, P7, RGB1, true, true);
		triangle(P7, R4, R5, RGB1, true, true);
		triangle(P7, R5, P6, RGB1, true, true);
		triangle(R1, R6, R2, RGB1, true, true);
		triangle(R2, R7, R3, RGB1, true, true);
		triangle(R2, R6, R7, RGB1, true, true);
		triangle(R6, R9, R7, RGB1, true, true);
		triangle(R3, R7, R4, RGB1, true, true);
		triangle(R4, R7, R8, RGB1, true, true);
		triangle(R8, R7, R11, RGB1, true, true);
		triangle(R4, R8, R5, RGB1, true, true);
		triangle(R9, R7, R10, RGB1, true, true);
		triangle(R7, R10, R11, RGB1, true, true);
		//Грудь конец

		//Контур груди начало
		line(P12, R1, 4);
		line(R1, R6, 4);
		line(R6, R9, 4);
		line(R9, R10, 4);
		line(R10, R11, 4);
		line(R11, R8, 4);
		line(R8, R5, 4);
		line(R5, P6, 4);
		line(P6, P7, 4);
		line(P7, P8, 4);
		line(P8, P9, 4);
		line(P9, R10, 4);
		line(P10, P11, 4);
		line(P11, P12, 4);

		line(U22, U10, 4);
		line(U10, U9, 4);
		line(U9, S7, 4);
		line(U22, U11, 4);
		line(U11, U12, 4);
		line(U12, S8, 4);
		//Контур груди конец

		//Право перед начало
		triangle(P12, Q1, R1, RGB4, true, true);
		triangle(Q1, U1, R1, RGB4, true, true);
		triangle(U1, R1, U2, RGB4, true, true);
		triangle(U1, S1, U2, RGB4, true, true);
		triangle(R1, U2, R9, RGB4, true, true);
		triangle(S1, S3, U2, RGB4, true, true);
		triangle(U2, S3, U3, RGB4, true, true);
		triangle(U2, U3, U4, RGB4, true, true);
		triangle(U2, U4, R9, RGB4, true, true);
		triangle(S3, U5, U3, RGB4, true, true);
		triangle(S3, U8, U5, RGB4, true, true);
		triangle(U3, U5, U6, RGB4, true, true);
		triangle(U3, U4, U6, RGB4, true, true);
		triangle(U8, U5, U9, RGB4, true, true);
		triangle(U5, U9, U10, RGB4, true, true);
		triangle(U5, U6, U10, RGB4, true, true);
		triangle(U8, S7, U9, RGB4, true, true);
		triangle(U9, S7, T11, RGB1, true, true);
		triangle(U9, T11, T12, RGB1, true, true);
		triangle(U9, T12, U10, RGB1, true, true);
		//Право перед конец

		//Лево перед начало
		triangle(U19, S14, U20, RGB4, true, true);
		triangle(P6, R5, Q12, RGB4, true, true);
		triangle(R5, U20, Q12, RGB4, true, true);
		triangle(R5, U19, U20, RGB4, true, true);
		triangle(R5, R11, U19, RGB4, true, true);
		triangle(R11, U19, U18, RGB4, true, true);
		triangle(U19, U18, U17, RGB4, true, true);
		triangle(U19, U17, S12, RGB4, true, true);
		triangle(U19, S12, S14, RGB4, true, true);
		triangle(U18, U15, U17, RGB4, true, true);
		triangle(U17, U15, U14, RGB4, true, true);
		triangle(U17, U14, S12, RGB4, true, true);
		triangle(U14, U13, S12, RGB4, true, true);
		triangle(U15, U11, U14, RGB4, true, true);
		triangle(U14, U11, U12, RGB4, true, true);
		triangle(U14, U12, U13, RGB4, true, true);
		triangle(U13, U12, S8, RGB4, true, true);
		triangle(U12, T13, S8, RGB1, true, true);
		triangle(U12, T12, T13, RGB1, true, true);
		triangle(U11, T12, U12, RGB1, true, true);
		//Лево перед конец

		//Центральная борозда начало
		triangle(R9, U7, U21, RGB1, true, true);
		triangle(R9, U21, R10, RGB1, true, true);
		triangle(R10, U21, R11, RGB1, true, true);
		triangle(R11, U21, U16, RGB1, true, true);
		triangle(U7, U10, U22, RGB1, true, true);
		triangle(U7, U21, U22, RGB1, true, true);
		triangle(U21, U22, U16, RGB1, true, true);
		triangle(U16, U22, U11, RGB1, true, true);
		triangle(U10, T12, U22, RGB1, true, true);
		triangle(U22, T12, U11, RGB1, true, true);
		triangle(R9, U4, U7, RGB1, true, true);
		triangle(R11, U18, U16, RGB1, true, true);
		triangle(U7, U6, U10, RGB1, true, true);
		triangle(U16, U15, U11, RGB1, true, true);
		//Центральная борозда конец

		//Правое крыло перед начало
		triangle(Q1, Q2, U1, RGB7, true, true);
		triangle(Q2, U1, S1, RGB7, true, true);
		triangle(Q2, Q3, S1, RGB7, true, true);
		triangle(Q3, Q4, S2, RGB7, true, true);
		triangle(Q3, S1, S2, RGB7, true, true);
		triangle(S2, Q4, S4, RGB7, true, true);
		triangle(S4, Q4, S6, RGB7, true, true);
		triangle(Q4, Q5, S6, RGB7, true, true);
		triangle(Q5, Q6, S6, RGB7, true, true);
		triangle(S1, S2, S3, RGB7, true, true);
		triangle(S2, S4, S5, RGB7, true, true);
		triangle(S2, S5, S3, RGB7, true, true);
		triangle(S4, S6, S7, RGB7, true, true);
		triangle(S4, S7, S5, RGB7, true, true);
		triangle(S6, Q6, S7, RGB7, true, true);
		//Правое крыло перед конец

		//Контур правого крыла начало
		line(Q1, U1, 4);
		line(U1, S1, 4);
		line(S1, S2, 4);
		line(S1, S3, 4);
		line(S2, S4, 4);
		line(S3, S5, 4);
		line(S4, S6, 4);
		line(S5, S7, 4);
		line(S6, Q6, 4);
		line(S7, Q6, 4);
		line(Q6, X1, 4);
		line(X1, X2, 4);
		line(X2, X5, 4);
		line(X5, X11, 4);
		line(X11, X9, 4);
		line(X9, W9, 4);
		line(W9, W8, 4);
		line(W8, W7, 4);
		line(W7, W6, 4);
		line(W6, Q1, 4);
		//Контур правого крыла конец

		//Левое крыло перед начало
		triangle(Q12, U20, Q11, RGB7, true, true);
		triangle(U20, S14, Q11, RGB7, true, true);
		triangle(Q11, S14, Q10, RGB7, true, true);
		triangle(S14, S13, Q10, RGB7, true, true);
		triangle(Q10, S13, Q9, RGB7, true, true);
		triangle(S13, S11, Q9, RGB7, true, true);
		triangle(S11, S9, Q9, RGB7, true, true);
		triangle(Q9, S9, Q8, RGB7, true, true);
		triangle(S9, Q7, Q8, RGB7, true, true);
		triangle(S14, S12, S13, RGB7, true, true);
		triangle(S12, S10, S13, RGB7, true, true);
		triangle(S13, S10, S11, RGB7, true, true);
		triangle(S10, S8, S11, RGB7, true, true);
		triangle(S11, S8, S9, RGB7, true, true);
		triangle(S8, S9, Q7, RGB7, true, true);
		//Левое крыло перед конец

		//Контур левого крыла начало
		line(Q12, U20, 4);
		line(U20, S14, 4);
		line(S14, S12, 4);
		line(S14, S13, 4);
		line(S13, S11, 4);
		line(S12, S10, 4);
		line(S11, S9, 4);
		line(S10, S8, 4);
		line(S8, Q7, 4);
		line(S9, Q7, 4);
		line(Q7, X4, 4);
		line(X4, X3, 4);
		line(X3, X5, 4);
		line(X5, X12, 4);
		line(X12, X9, 4);
		line(X9, W11, 4);
		line(W11, W12, 4);
		line(W12, W13, 4);
		line(W13, W14, 4);
		line(W14, Q12, 4);
		//Контур левого крыла конец

		//Хвост снизу начало
		triangle(S7, T11, T14, RGB1, true, true);
		triangle(S7, T14, T16, RGB1, true, true);
		triangle(S8, T13, T15, RGB1, true, true);
		triangle(S8, T15, T17, RGB1, true, true);

		triangle(T16, T1, T2, RGB1, true, true);
		triangle(T6, T8, T2, RGB1, true, true);
		triangle(T2, T3, T8, RGB1, true, true);
		triangle(T8, T3, T4, RGB1, true, true);
		triangle(T17, T4, T5, RGB1, true, true);
		triangle(T16, T6, T7, RGB1, true, true);
		triangle(T16, T7, T14, RGB1, true, true);
		triangle(T14, T7, T8, RGB1, true, true);
		triangle(T8, T4, T10, RGB1, true, true);
		triangle(T14, T8, T12, RGB1, true, true);
		triangle(T12, T8, T15, RGB1, true, true);
		triangle(T15, T8, T9, RGB1, true, true);
		triangle(T15, T9, T17, RGB1, true, true);
		triangle(T17, T9, T10, RGB1, true, true);
		triangle(T12, T11, T14, RGB1, true, true);
		triangle(T12, T15, T13, RGB1, true, true);
		//Хвост снизу конец

		//Спина начало
		triangle(T1, V5, V1, RGB4, true, true);
		triangle(V5, V1, X2, RGB4, true, true);
		triangle(V1, X2, V2, RGB4, true, true);
		triangle(V2, X2, X3, RGB4, true, true);
		triangle(X2, X3, X5, RGB1, true, true);
		triangle(V2, X3, V3, RGB4, true, true);
		triangle(V3, X3, V4, RGB4, true, true);
		triangle(V3, V4, T5, RGB4, true, true);
		triangle(V1, V2, T2, RGB4, true, true);
		triangle(V2, T2, T3, RGB4, true, true);
		triangle(V2, V3, T3, RGB4, true, true);
		triangle(V3, T3, T4, RGB4, true, true);
		triangle(T1, V1, T2, RGB4, true, true);
		triangle(V3, T4, T5, RGB4, true, true);
		triangle(Q6, X6, X1, RGB7, true, true);
		triangle(X1, X6, X2, RGB7, true, true);
		triangle(X2, X6, X5, RGB7, true, true);
		triangle(Q6, Q4, X6, RGB7, true, true);
		triangle(Q4, X8, X6, RGB7, true, true);
		triangle(X6, X8, W9, RGB7, true, true);
		triangle(X8, W8, W9, RGB7, true, true);
		triangle(X8, W7, W8, RGB7, true, true);
		triangle(X8, W6, W7, RGB7, true, true);
		triangle(Q4, W6, X8, RGB7, true, true);
		triangle(Q4, Q2, W6, RGB7, true, true);
		triangle(X9, W9, W11, RGB1, true, true);
		triangle(X6, W9, X9, RGB7, true, true);
		triangle(X5, X6, X11, RGB7, true, true);
		triangle(X6, X9, X11, RGB7, true, true);
		triangle(S7, Q5, T16, RGB7, true, true);
		triangle(S8, T17, Q8, RGB7, true, true);
		triangle(Q5, Q6, Q4, RGB7, true, true);
		triangle(Q9, Q7, Q8, RGB7, true, true);
		triangle(X3, X5, X7, RGB7, true, true);
		triangle(X3, X7, X4, RGB7, true, true);
		triangle(X4, X7, Q7, RGB7, true, true);
		triangle(Q7, X7, Q9, RGB7, true, true);
		triangle(X5, X12, X7, RGB7, true, true);
		triangle(X12, X9, X7, RGB7, true, true);
		triangle(X7, X9, W11, RGB7, true, true);
		triangle(X7, W11, X10, RGB7, true, true);
		triangle(X7, X10, Q9, RGB7, true, true);
		triangle(X10, W11, W12, RGB7, true, true);
		triangle(X10, W12, W13, RGB7, true, true);
		triangle(X10, W14, Q9, RGB7, true, true);
		triangle(Q9, W14, Q11, RGB7, true, true);
		triangle(X10, W13, W14, RGB7, true, true);
		triangle(Q12, Q11, W14, RGB7, true, true);
		triangle(Q1, Q2, W6, RGB7, true, true);
		triangle(P12, Q1, W6, RGB7, true, true);
		triangle(P6, Q12, W14, RGB7, true, true);
		//Спина конец

		//Выемка между крыльями начало
		triangle(X11, X13, X5, RGB1, true, true);
		triangle(X13, X12, X5, RGB1, true, true);
		triangle(X11, X9, X13, RGB1, true, true);
		triangle(X13, X9, X12, RGB1, true, true);
		//Выемка между крыльями конец
	}
	void drawRightLeg()
	{
		//Нога перед начало
		triangle(PN1, PN6, PN3, RGB1, true, true);
		triangle(PN2, PN6, PN3, RGB1, true, true);
		triangle(PN6, PN3, PN7, RGB1, true, true);
		triangle(PN3,PN7 ,PN4 , RGB1, true, true);
		triangle(PN4, PN7, PN5, RGB1, true, true);
		triangle(PN6, PN8, PN7, RGB1, true, true);
		triangle(PN7, PN8, PN9, RGB1, true, true);
		triangle(PN8, PN10, PN9, RGB1, true, true);
		triangle(PN9, PN10, PN11, RGB1, true, true);
		//Нога перед конец

		//Нога зад начало
		triangle(PN18,PN17,PN19 , RGB1, true, true);
		triangle(PN17, PN16, PN18, RGB1, true, true);
		triangle(PN17,PN15 ,PN16 , RGB1, true, true);
		triangle(PN15, PN14, PN16, RGB1, true, true);
		triangle(PN15, PN13, PN12, RGB1, true, true);
		triangle(PN14, PN15, PN12, RGB1, true, true);
		//Нога зад конец

		//Нога бока начало
		triangle(PN18, PN16, PN20, RGB1, true, true);
		triangle(PN20, PN16, PN6, RGB1, true, true);
		triangle(PN20, PN6, PN1, RGB1, true, true);
		triangle(PN19, PN17, PN21, RGB1, true, true);
		triangle(PN21, PN17, PN7, RGB1, true, true);
		triangle(PN21, PN7, PN5, RGB1, true, true);

		triangle(PN16, PN6, PN8, RGB1, true, true);
		triangle(PN16, PN14, PN8, RGB1, true, true);
		triangle(PN8, PN14, PN10, RGB1, true, true);
		triangle(PN14, PN12, PN10, RGB1, true, true);

		triangle(PN7, PN17, PN9, RGB1, true, true);
		triangle(PN17, PN15, PN9, RGB1, true, true);
		triangle(PN15,PN11 ,PN9 , RGB1, true, true);
		triangle(PN15, PN13, PN11, RGB1, true, true);
		//Нога бока конец

		//Стопа начало
		triangle(PO13,PO14 ,PO16 , RGB1, true, true);
		triangle(PO16, PO15, PO13, RGB1, true, true);
		triangle(PO1, PO20,PO18 , RGB1, true, true);
		triangle(PO18, PO10, PO1, RGB1, true, true);
		triangle(PO4,PO19, PO17, RGB1, true, true);
		triangle(PO17, PO7, PO4, RGB1, true, true);
		triangle(PR10, PO10, PO18, RGB1, true, true);
		triangle(PR9, PR10, PO10, RGB1, true, true);
		triangle(PO7, PO17, PL10, RGB1, true, true);
		triangle(PL9,PL10 ,PO7 , RGB1, true, true);
		triangle(PO10, PL9, PO7, RGB1, true, true);
		triangle(PO10, PR9, PL9, RGB1, true, true);
		triangle(PO18, PO17, PL10, RGB1, true, true);
		triangle(PO18, PR10, PL10, RGB1, true, true);
		triangle(PO20, PO19, PO18, RGB1, true, true);
		triangle(PO19, PO17, PO18, RGB1, true, true);
		triangle(PO1,PO20 ,PO15 , RGB1, true, true);
		triangle(PO15, PO13, PO20, RGB1, true, true);
		triangle(PO4, PO19,PO16 , RGB1, true, true);
		triangle(PO16, PO14, PO19, RGB1, true, true);
		triangle(PO4, PO1, PO15, RGB1, true, true);
		triangle(PO15, PO16, PO4, RGB1, true, true);
		triangle(PO20,PO19, PO14, RGB1, true, true);
		triangle(PO14, PO13, PO20, RGB1, true, true);
		triangle(PO1, PO2, PN12, RGB1, true, true);
		triangle(PO1, PN12, PO12, RGB1, true, true);
		triangle(PO2, PN12, PN13, RGB1, true, true);
		triangle(PO3, PN13, PO2, RGB1, true, true);
		triangle(PO4, PO3, PN13, RGB1, true, true);
		triangle(PO4, PO5, PN13, RGB1, true, true);
		triangle(PO5, PN13, PN11, RGB1, true, true);
		triangle(PN11, PO5, PO6, RGB1, true, true);
		triangle(PO6, PN11, PO7, RGB1, true, true);
		triangle(PN11, PO8, PO7, RGB1, true, true);
		triangle(PN11, PO8, PN10, RGB1, true, true);
		triangle(PN10, PO9, PO8, RGB1, true, true);
		triangle(PN10, PO9, PO10, RGB1, true, true);
		triangle(PN10, PO10, PO11, RGB1, true, true);
		triangle(PN12,PO11 ,PO12 , RGB1, true, true);
		triangle(PN12, PN10, PO11, RGB1, true, true);
		triangle(PN12, PO12, PO1, RGB1, true, true);
		//Стопа конец

		//Задний коготь начало
		triangle(PK1, PK2, PK4, RGB2, true, true);
		triangle(PK1, PK2, PK5, RGB2, true, true);
		triangle(PK2, PK4, PK3, RGB2, true, true);
		triangle(PK2, PK5, PK3, RGB2, true, true);
		triangle(PK1, PK4, PK5, RGB2, true, true);
		triangle(PK4, PK5,PK7 , RGB1, true, true);
		triangle(PK4, PK6, PK7, RGB1, true, true);
		triangle(PK4, PK6, PO13, RGB1, true, true);
		triangle(PK4, PO13, PO15, RGB1, true, true);
		triangle(PK5, PK7, PO14, RGB1, true, true);
		triangle(PK5, PO14, PO16, RGB1, true, true);
		triangle(PK4, PK5, PO15, RGB1, true, true);
		triangle(PO16, PO15, PK5, RGB1, true, true);
		triangle(PK6, PK7, PO13, RGB1, true, true);
		triangle(PO13, PO14, PK7, RGB1, true, true);
		//Задний коготь конец

		//Пальцы начало 
		triangle(PR9, PR10, PR14, RGB1, true, true);
		triangle(PR14, PR15, PR10, RGB1, true, true);
		triangle(PR7, PR8, PM7, RGB1, true, true);
		triangle(PM8, PM7, PR8, RGB1, true, true);
		triangle(PM9, PM10, PL7, RGB1, true, true);
		triangle(PL7, PL8, PM10, RGB1, true, true);
		triangle(PR7, PR8, PR12, RGB1, true, true);
		triangle(PR12, PR13, PR8, RGB1, true, true);
		triangle(PM7, PM8, PM14, RGB1, true, true);
		triangle(PM14, PM15, PM8, RGB1, true, true);
		triangle(PM9, PM10, PM12, RGB1, true, true);
		triangle(PM12, PM13, PM10, RGB1, true, true);
		triangle(PL7, PL8, PL14, RGB1, true, true);
		triangle(PL8, PL14, PL15, RGB1, true, true);
		triangle(PL9, PL10, PL12, RGB1, true, true);
		triangle(PL10, PL12, PL13, RGB1, true, true);
		triangle(PR9, PR14, PR7, RGB1, true, true);
		triangle(PR7, PR14, PR12, RGB1, true, true);
		triangle(PM7, PM14, PM9, RGB1, true, true);
		triangle(PM9, PM14, PM12, RGB1, true, true);
		triangle(PL7, PL14 ,PL9 , RGB1, true, true);
		triangle(PL9, PL14, PL12, RGB1, true, true);
		triangle(PR10, PR15, PR8, RGB1, true, true);
		triangle(PR8, PR15, PR13, RGB1, true, true);
		triangle(PM8, PM15, PM10, RGB1, true, true);
		triangle(PM10, PM15, PM13, RGB1, true, true);
		triangle(PL8, PL15, PL10, RGB1, true, true);
		triangle(PL10, PL15, PL13, RGB1, true, true);
		triangle(PR14, PR12, PR6, RGB1, true, true);
		triangle(PR6, PR2, PR12, RGB1, true, true);
		triangle(PR14, PR15, PR6, RGB1, true, true);
		triangle(PR6, PR5, PR15, RGB1, true, true);
		triangle(PR12, PR13, PR2, RGB1, true, true);
		triangle(PR2, PR3, PR13, RGB1, true, true);
		triangle(PR15, PR5, PR13, RGB1, true, true);
		triangle(PR5, PR3, PR13, RGB1, true, true);
		triangle(PR6, PR5, PR3, RGB1, true, true);
		triangle(PR6, PR3, PR2, RGB1, true, true);
		triangle(PM14, PM12,PM6, RGB1, true, true);
		triangle(PM12, PM6, PM2, RGB1, true, true);
		triangle(PM15, PM13, PM5, RGB1, true, true);
		triangle(PM5, PM3, PM13, RGB1, true, true);
		triangle(PM14, PM15, PM5, RGB1, true, true);
		triangle(PM6, PM5, PM14, RGB1, true, true);
		triangle(PM12, PM13, PM3, RGB1, true, true);
		triangle(PM3, PM2, PM12, RGB1, true, true);
		triangle(PM6, PM5, PM3, RGB1, true, true);
		triangle(PM2, PM3, PM6, RGB1, true, true);
		triangle(PL14, PL15, PL6, RGB1, true, true);
		triangle(PL6, PL5, PL15, RGB1, true, true);
		triangle(PL12, PL13, PL2, RGB1, true, true);
		triangle(PL2, PL3, PL13, RGB1, true, true);
		triangle(PL14, PL12, PL6, RGB1, true, true);
		triangle(PL12, PL2, PL6, RGB1, true, true);
		triangle(PL15, PL13, PL5, RGB1, true, true);
		triangle(PL5, PL3, PL13, RGB1, true, true);
		triangle(PL6, PL5, PL3, RGB1, true, true);
		triangle(PL3, PL2, PL6, RGB1, true, true);

		triangle(PR11,PR6 ,PR1 , RGB2, true, true);
		triangle(PR11, PR2, PR1, RGB2, true, true);
		triangle(PR1, PR6, PR4, RGB2, true, true);
		triangle(PR1, PR2, PR4, RGB2, true, true);
		triangle(PR2, PR6, PR4, RGB2, true, true);
		
		triangle(PM11, PM6, PM1, RGB2, true, true);
		triangle(PM11, PM2, PM1, RGB2, true, true);
		triangle(PM1, PM6, PM4, RGB2, true, true);
		triangle(PM1, PM2, PM4, RGB2, true, true);
		triangle(PM2, PM6, PM4, RGB2, true, true);

		triangle(PL11, PL6, PL1, RGB2, true, true);
		triangle(PL11, PL2, PL1, RGB2, true, true);
		triangle(PL1, PL6, PL4, RGB2, true, true);
		triangle(PL1, PL2, PL4, RGB2, true, true);
		triangle(PL2, PL6, PL4, RGB2, true, true);
		//Пальцы конец

	}
	void drawLeftLeg()
	{
		//Нога перед начало
		triangle(LN1, LN6, LN3, RGB1, true, true);
		triangle(LN2, LN6, LN3, RGB1, true, true);
		triangle(LN6, LN3, LN7, RGB1, true, true);
		triangle(LN3, LN7, LN4, RGB1, true, true);
		triangle(LN4, LN7, LN5, RGB1, true, true);
		triangle(LN6, LN8, LN7, RGB1, true, true);
		triangle(LN7, LN8, LN9, RGB1, true, true);
		triangle(LN8, LN10, LN9, RGB1, true, true);
		triangle(LN9, LN10, LN11, RGB1, true, true);
		//Нога перед конец

		//Нога зад начало
		triangle(LN18, LN17, LN19, RGB1, true, true);
		triangle(LN17, LN16, LN18, RGB1, true, true);
		triangle(LN17, LN15, LN16, RGB1, true, true);
		triangle(LN15, LN14, LN16, RGB1, true, true);
		triangle(LN15, LN13, LN12, RGB1, true, true);
		triangle(LN14, LN15, LN12, RGB1, true, true);
		//Нога зад конец

		//Нога бока начало
		triangle(LN18, LN16, LN20, RGB1, true, true);
		triangle(LN20, LN16, LN6, RGB1, true, true);
		triangle(LN20, LN6, LN1, RGB1, true, true);
		triangle(LN19, LN17, LN21, RGB1, true, true);
		triangle(LN21, LN17, LN7, RGB1, true, true);
		triangle(LN21, LN7, LN5, RGB1, true, true);

		triangle(LN16, LN6, LN8, RGB1, true, true);
		triangle(LN16, LN14, LN8, RGB1, true, true);
		triangle(LN8, LN14, LN10, RGB1, true, true);
		triangle(LN14, LN12, LN10, RGB1, true, true);

		triangle(LN7, LN17, LN9, RGB1, true, true);
		triangle(LN17, LN15, LN9, RGB1, true, true);
		triangle(LN15, LN11, LN9, RGB1, true, true);
		triangle(LN15, LN13, LN11, RGB1, true, true);
		//Нога бока конец

		//Стопа начало
		triangle(LO13, LO14, LO16, RGB1, true, true);
		triangle(LO16, LO15, LO13, RGB1, true, true);
		triangle(LO1, LO20, LO18, RGB1, true, true);
		triangle(LO18, LO10, LO1, RGB1, true, true);
		triangle(LO4, LO19, LO17, RGB1, true, true);
		triangle(LO17, LO7, LO4, RGB1, true, true);
		triangle(LR10, LO10, LO18, RGB1, true, true);
		triangle(LR9, LR10, LO10, RGB1, true, true);
		triangle(LO7, LO17, LL10, RGB1, true, true);
		triangle(LL9, LL10, LO7, RGB1, true, true);
		triangle(LO10, LL9, LO7, RGB1, true, true);
		triangle(LO10, LR9, LL9, RGB1, true, true);
		triangle(LO18, LO17, LL10, RGB1, true, true);
		triangle(LO18, LR10, LL10, RGB1, true, true);
		triangle(LO20, LO19, LO18, RGB1, true, true);
		triangle(LO19, LO17, LO18, RGB1, true, true);
		triangle(LO1, LO20, LO15, RGB1, true, true);
		triangle(LO15, LO13, LO20, RGB1, true, true);
		triangle(LO4, LO19, LO16, RGB1, true, true);
		triangle(LO16, LO14, LO19, RGB1, true, true);
		triangle(LO4, LO1, LO15, RGB1, true, true);
		triangle(LO15, LO16, LO4, RGB1, true, true);
		triangle(LO20, LO19, LO14, RGB1, true, true);
		triangle(LO14, LO13, LO20, RGB1, true, true);
		triangle(LO1, LO2, LN12, RGB1, true, true);
		triangle(LO1, LN12, LO12, RGB1, true, true);
		triangle(LO2, LN12, LN13, RGB1, true, true);
		triangle(LO3, LN13, LO2, RGB1, true, true);
		triangle(LO4, LO3, LN13, RGB1, true, true);
		triangle(LO4, LO5, LN13, RGB1, true, true);
		triangle(LO5, LN13, LN11, RGB1, true, true);
		triangle(LN11, LO5, LO6, RGB1, true, true);
		triangle(LO6, LN11, LO7, RGB1, true, true);
		triangle(LN11, LO8, LO7, RGB1, true, true);
		triangle(LN11, LO8, LN10, RGB1, true, true);
		triangle(LN10, LO9, LO8, RGB1, true, true);
		triangle(LN10, LO9, LO10, RGB1, true, true);
		triangle(LN10, LO10, LO11, RGB1, true, true);
		triangle(LN12, LO11, LO12, RGB1, true, true);
		triangle(LN12, LN10, LO11, RGB1, true, true);
		triangle(LN12, LO12, LO1, RGB1, true, true);
		//Стопа конец

		//Задний коготь начало
		triangle(LK1, LK2, LK4, RGB2, true, true);
		triangle(LK1, LK2, LK5, RGB2, true, true);
		triangle(LK2, LK4, LK3, RGB2, true, true);
		triangle(LK2, LK5, LK3, RGB2, true, true);
		triangle(LK1, LK4, LK5, RGB2, true, true);
		triangle(LK4, LK5, LK7, RGB1, true, true);
		triangle(LK4, LK6, LK7, RGB1, true, true);
		triangle(LK4, LK6, LO13, RGB1, true, true);
		triangle(LK4, LO13, LO15, RGB1, true, true);
		triangle(LK5, LK7, LO14, RGB1, true, true);
		triangle(LK5, LO14, LO16, RGB1, true, true);
		triangle(LK4, LK5, LO15, RGB1, true, true);
		triangle(LO16, LO15, LK5, RGB1, true, true);
		triangle(LK6, LK7, LO13, RGB1, true, true);
		triangle(LO13, LO14, LK7, RGB1, true, true);
		//Задний коготь конец

		//Пальцы начало 
		triangle(LR9, LR10, LR14, RGB1, true, true);
		triangle(LR14, LR15, LR10, RGB1, true, true);
		triangle(LR7, LR8, LM7, RGB1, true, true);
		triangle(LM8, LM7, LR8, RGB1, true, true);
		triangle(LM9, LM10, LL7, RGB1, true, true);
		triangle(LL7, LL8, LM10, RGB1, true, true);
		triangle(LR7, LR8, LR12, RGB1, true, true);
		triangle(LR12, LR13, LR8, RGB1, true, true);
		triangle(LM7, LM8, LM14, RGB1, true, true);
		triangle(LM14, LM15, LM8, RGB1, true, true);
		triangle(LM9, LM10, LM12, RGB1, true, true);
		triangle(LM12, LM13, LM10, RGB1, true, true);
		triangle(LL7, LL8, LL14, RGB1, true, true);
		triangle(LL8, LL14, LL15, RGB1, true, true);
		triangle(LL9, LL10, LL12, RGB1, true, true);
		triangle(LL10, LL12, LL13, RGB1, true, true);
		triangle(LR9, LR14, LR7, RGB1, true, true);
		triangle(LR7, LR14, LR12, RGB1, true, true);
		triangle(LM7, LM14, LM9, RGB1, true, true);
		triangle(LM9, LM14, LM12, RGB1, true, true);
		triangle(LL7, LL14, LL9, RGB1, true, true);
		triangle(LL9, LL14, LL12, RGB1, true, true);
		triangle(LR10, LR15, LR8, RGB1, true, true);
		triangle(LR8, LR15, LR13, RGB1, true, true);
		triangle(LM8, LM15, LM10, RGB1, true, true);
		triangle(LM10, LM15, LM13, RGB1, true, true);
		triangle(LL8, LL15, LL10, RGB1, true, true);
		triangle(LL10, LL15, LL13, RGB1, true, true);
		triangle(LR14, LR12, LR6, RGB1, true, true);
		triangle(LR6, LR2, LR12, RGB1, true, true);
		triangle(LR14, LR15, LR6, RGB1, true, true);
		triangle(LR6, LR5, LR15, RGB1, true, true);
		triangle(LR12, LR13, LR2, RGB1, true, true);
		triangle(LR2, LR3, LR13, RGB1, true, true);
		triangle(LR15, LR5, LR13, RGB1, true, true);
		triangle(LR5, LR3, LR13, RGB1, true, true);
		triangle(LR6, LR5, LR3, RGB1, true, true);
		triangle(LR6, LR3, LR2, RGB1, true, true);
		triangle(LM14, LM12, LM6, RGB1, true, true);
		triangle(LM12, LM6, LM2, RGB1, true, true);
		triangle(LM15, LM13, LM5, RGB1, true, true);
		triangle(LM5, LM3, LM13, RGB1, true, true);
		triangle(LM14, LM15, LM5, RGB1, true, true);
		triangle(LM6, LM5, LM14, RGB1, true, true);
		triangle(LM12, LM13, LM3, RGB1, true, true);
		triangle(LM3, LM2, LM12, RGB1, true, true);
		triangle(LM6, LM5, LM3, RGB1, true, true);
		triangle(LM2, LM3, LM6, RGB1, true, true);
		triangle(LL14, LL15, LL6, RGB1, true, true);
		triangle(LL6, LL5, LL15, RGB1, true, true);
		triangle(LL12, LL13, LL2, RGB1, true, true);
		triangle(LL2, LL3, LL13, RGB1, true, true);
		triangle(LL14, LL12, LL6, RGB1, true, true);
		triangle(LL12, LL2, LL6, RGB1, true, true);
		triangle(LL15, LL13, LL5, RGB1, true, true);
		triangle(LL5, LL3, LL13, RGB1, true, true);
		triangle(LL6, LL5, LL3, RGB1, true, true);
		triangle(LL3, LL2, LL6, RGB1, true, true);

		triangle(LR11, LR6, LR1, RGB2, true, true);
		triangle(LR11, LR2, LR1, RGB2, true, true);
		triangle(LR1, LR6, LR4, RGB2, true, true);
		triangle(LR1, LR2, LR4, RGB2, true, true);
		triangle(LR2, LR6, LR4, RGB2, true, true);

		triangle(LM11, LM6, LM1, RGB2, true, true);
		triangle(LM11, LM2, LM1, RGB2, true, true);
		triangle(LM1, LM6, LM4, RGB2, true, true);
		triangle(LM1, LM2, LM4, RGB2, true, true);
		triangle(LM2, LM6, LM4, RGB2, true, true);

		triangle(LL11, LL6, LL1, RGB2, true, true);
		triangle(LL11, LL2, LL1, RGB2, true, true);
		triangle(LL1, LL6, LL4, RGB2, true, true);
		triangle(LL1, LL2, LL4, RGB2, true, true);
		triangle(LL2, LL6, LL4, RGB2, true, true);
		//Пальцы конец
	}
	void connections()
	{
		//Соединение начало
		triangle(S7, T16, PKN1, RGB1, true, true);
		triangle(PKN1, PKN18, T16, RGB1, true, true);
		triangle(PKN1, PKN5, T11, RGB1, true, true);
		triangle(T11, S7, PKN1, RGB1, true, true);
		triangle(T16, T14, PKN18, RGB1, true, true);
		triangle(T14, PKN18, PKN19, RGB1, true, true);
		triangle(T14, T11, PKN5, RGB1, true, true);
		triangle(PKN5, PKN19, T14, RGB1, true, true);
		//Соединение конец

		//Соединение начало
		triangle(T15, T13, LKN1, RGB1, true, true);
		triangle(LKN1, LKN18, T15, RGB1, true, true);
		triangle(T17, S8, LKN5, RGB1, true, true);
		triangle(LKN5, LKN19, T17, RGB1, true, true);
		triangle(LKN1, LKN5, T13, RGB1, true, true);
		triangle(T13, S8, LKN5, RGB1, true, true);
		triangle(T15, T17, LKN18, RGB1, true, true);
		triangle(LKN18, LKN19, T17, RGB1, true, true);
		//Соединение конец
	}
	void blink()
	{
		static double size = 0;
		static int direction = -1;
		static bool actionMode = false;
		double step = 2;

		if (time(NULL) - timeBlink >= 5)
			actionMode = true;
		if (actionMode)
		{
			//моргание левым глазом начало
			size += step*direction;
			D1[2] += step*direction;
			D2[2] += step*direction;
			D3[2] += step*direction;
			D5[2] -= step*direction / 1.4;
			//моргание левым глазом конец

			//моргание правым глазом начало
			E1[2] += step*direction;
			E2[2] += step*direction;
			E3[2] += step*direction;
			E5[2] -= step*direction / 1.4;
			if (size > 0 || size < -7.4)
				direction *= -1;
			//моргание правым глазом конец
		}
		if (size > 0)
		{
			actionMode = false;
			size = 0;
			D1[2] = 30 / 1.8 + Center[2];
			D2[2] = 30 / 1.8 + Center[2];
			D3[2] = 25 / 1.8 + Center[2];
			D5[2] = 5 / 1.8 + Center[2];
			E1[2] = 30 / 1.8 + Center[2];
			E2[2] = 30 / 1.8 + Center[2];
			E3[2] = 25 / 1.8 + Center[2];
			E5[2] = 5 / 1.8 + Center[2];
			timeBlink = time(NULL);
		}
	}
	int yawn()
	{
		static double Center[84];
		static double Radius[84];
		static double size = 0;
		static int flag = true;
		static int i = 90;
		double step = 0.3;
		static int direction = 1;
		static int actionNumber = 1;
		bool fullblink = false;
		unfinishedAction = 4;
		if (actionNumber == -1)
		{
			if (i > 135 || i < 90)
			{
				direction *= -1;
			}
			if (i < 90)
			{
				direction *= -1;
				actionNumber *= -1;
				fullblink = true;
				PointsCopy[39][2] = 30 / 1.8;
				PointsCopy[40][2] = 30 / 1.8;
				PointsCopy[41][2] = 25 / 1.8;
				PointsCopy[43][2] = 5 / 1.8;
				PointsCopy[44][2] = 30 / 1.8;
				PointsCopy[45][2] = 30 / 1.8;
				PointsCopy[46][2] = 25 / 1.8;
				PointsCopy[48][2] = 5 / 1.8;
			}
			for (int j = 0; j < 84 && flag; j++)
			{
				Center[j] = PointsCopy[j][0];

				Radius[j] = PointsCopy[j][2];
			}
			flag = false;

			

			for (int j = 0; j < 84; j++)
			{
				PointsCopy[j][0] = Center[j] + Radius[j] * cos(i*acos(-1) / 180);
				PointsCopy[j][2] = Radius[j] * sin(i*acos(-1) / 180);
			}
			i += direction;
			
		}
		if (actionNumber == 1)
		{
			//моргание левым глазом начало
			size += step*direction;
			PointsCopy[39][2] -= step*direction;
			PointsCopy[40][2] -= step*direction;
			PointsCopy[41][2] -= step*direction;
			PointsCopy[43][2] += step*direction / 1.4;
			//моргание левым глазом конец

			//моргание правым глазом начало
			PointsCopy[44][2] -= step*direction;
			PointsCopy[45][2] -= step*direction;
			PointsCopy[46][2] -= step*direction;
			PointsCopy[48][2] += step*direction / 1.4;
			//моргание правым глазом конец
			if (size < 0 || size > 7.4)
			{
				if (!fullblink)
				{
					fullblink = false;
					actionNumber *= -1;
				}
				else
				{
					size = 0;
					i = 90;
					direction *= -1;
					PointsCopy[39][2] = 30 / 1.8;
					PointsCopy[40][2] = 30 / 1.8;
					PointsCopy[41][2] = 25 / 1.8;
					PointsCopy[43][2] = 5 / 1.8;
					PointsCopy[44][2] = 30 / 1.8;
					PointsCopy[45][2] = 30 / 1.8;
					PointsCopy[46][2] = 25 / 1.8;
					PointsCopy[48][2] = 5 / 1.8;
					unfinishedAction = 0;
					if (currentAction == 4)
						currentAction = 0;
					return -5;
				}
			}
		}
		for (int j = 0; j < 84; j++)
		{
			Points[j][0] = PointsCopy[j][0] + Points[415][0];
			Points[j][1] = PointsCopy[j][1] + Points[415][1];
			Points[j][2] = PointsCopy[j][2] + Points[415][2];
		}
		for (int j = 0; j < 84; j++)
		{
			double Cen[] = { Points[415][0],Points[415][1],Points[j][2] };
			Points[j][0] = (PointsCopy[j][0] + Points[415][0] - Cen[0])*cos(currentAngle*acos(-1) / 180.0) - (PointsCopy[j][1] + Points[415][1] - Cen[1])*sin(currentAngle *acos(-1) / 180.0) + Cen[0];
			Points[j][1] = (PointsCopy[j][0] + Points[415][0] - Cen[0])*sin(currentAngle*acos(-1) / 180.0) + (PointsCopy[j][1] + Points[415][1] - Cen[1])*cos(currentAngle *acos(-1) / 180.0) + Cen[1];
		}
		return 5;
	}
	int rotation(int rotDirection, bool keyPressed, bool endAnimation)
	{
		static double verticalMove = 0;
		static double horizontalMove = 0;
		static double angle = 1.65;
		static int direction = 1;
		static int phaseNumber = 0;
		static int vertDirection = -1;
		static double dif = 0;

		int i = 0;
		while (i < 416 && !endAnimation)
		{
			double Cen[] = { Center[0],Center[1],Points[i][2] };
			Points[i][0] = (Points[i][0] - Cen[0])*cos((double)rotDirection / 1.5*acos(-1) / 180) - (Points[i][1] - Cen[1])*sin((double)rotDirection / 1.5 *acos(-1) / 180) + Cen[0];
			Points[i][1] = (Points[i][0] - Cen[0])*sin((double)rotDirection / 1.5*acos(-1) / 180) + (Points[i][1] - Cen[1])*cos((double)rotDirection / 1.5 *acos(-1) / 180) + Cen[1];
			//Points[i][0] = (Points[i][0] - Cen[0])*cos(currentAngle*acos(-1) / 180) - (Points[i][1] - Cen[1])*sin(currentAngle *acos(-1) / 180) + Cen[0];
			//Points[i][1] = (Points[i][0] - Cen[0])*sin(currentAngle*acos(-1) / 180) + (Points[i][1] - Cen[1])*cos(currentAngle *acos(-1) / 180) + Cen[1];
			if (!(i >= 237 && i <= 308) && !(i >= 330 && i <= 401) && !(i >= 282 && i < 289) && !(i >= 375 && i < 382) && !(i >= 318 && i <= 321) && !(i >= 225 && i <= 228))
			{
				Points[i][2] += vertDirection*0.25;
				dif += vertDirection*0.25;

			}
			i++;
		}
		if (endAnimation && dif < 0)
		{
			i = 0;
			while (i < 416)
			{
				if (!(i >= 237 && i <= 308) && !(i >= 330 && i <= 401) && !(i >= 282 && i < 289) && !(i >= 375 && i < 382) && !(i >= 318 && i <= 321) && !(i >= 225 && i <= 228))
				{
					Points[i][2] += 0.25;
					dif += 0.25;
				}
				i++;
			}

		}
		i = 0;
		if (!endAnimation)
			currentAngle += (double)rotDirection / 1.5;

		if (rotDirection > 0 && startRot && !endAnimation)
		{
			phaseNumber = 3;
			startRot = false;
		}
		else if (startRot && !endAnimation)
		{
			phaseNumber = 1;
			startRot = false;
		}
		double R = length(PN9, PN7);
		if (verticalMove < 15 && keyPressed && phaseNumber == 1)
		{
			legMove(false, 1, verticalMove, horizontalMove, angle, R, 1);
			verticalMove += 1.5;
			angle += -verticalMove / 30;
		}
		else if (verticalMove >= 15 && phaseNumber == 1)
		{
			vertDirection *= -1;
			phaseNumber = 2;
		}
		else if (verticalMove > 0 && keyPressed && phaseNumber == 2)
		{
			legMove(false, -1, verticalMove, horizontalMove, angle, R, 1);
			verticalMove -= 1.5;
		}
		else if (verticalMove <= 0 && phaseNumber == 2)
		{
			vertDirection *= -1;
			angle = 1.65;
			phaseNumber = 3;
			if (endAnimation)
			{
				phaseNumber = 0;
				startRot = true;
				return -5;
			}
		}
		else if (verticalMove < 15 && keyPressed && phaseNumber == 3)
		{
			legMove(true, 1, verticalMove, horizontalMove, angle, R, 1);
			verticalMove += 1.5;
			angle += -verticalMove / 30;
		}
		else if (verticalMove >= 15 && phaseNumber == 3)
		{
			vertDirection *= -1;
			phaseNumber = 4;
		}
		else if (verticalMove > 0 && keyPressed && phaseNumber == 4)
		{
			legMove(true, -1, verticalMove, horizontalMove, angle, R,1);
			verticalMove -= 1.5;
		}
		else
		{
			vertDirection *= -1;
			phaseNumber = 1;
			verticalMove = 0;
			angle = 1.65;
			if (endAnimation)
			{
				vertDirection = -1;
				phaseNumber = 0;
				startRot = true;
				return -5;
			}
		}
		return rotDirection;
	}
	int moveForward(int moveDirection, bool keyPressed, bool endAnimation)
	{
		static double verticalMove = 0;
		static double leftHorMove = 0;
		static double rightHorMove = 0;
		static double horizontalMove = 0;
		static double horizontalStep = 0;
		static bool firstStep = true;
		static double angle = 1.65;
		static int direction = 1;
		static int phaseNumber = 0;
		static bool phaseChange = true;
		static int vertDir = -1;
		static bool stepflag = false;

		double R = length(PN9, PN7);

		if (verticalMove < 15 && keyPressed && phaseNumber == 1)
		{
			phaseChange = false;
			legMove(false, 1, verticalMove, horizontalStep, angle, R,1);
			verticalMove += 1.5;
			angle += -verticalMove / 30;
			if(stepflag)
				horizontalStep = moveDirection * 2;
			else
				horizontalStep = moveDirection * 4;
			rightHorMove += horizontalStep;
			vertDir = -1;
			if (verticalMove >= 15 )
			{
				phaseChange = true;
				if (endAnimation||firstStep)
					phaseNumber = 2;
				else
					phaseNumber = 6;
			}
		}
		else if (verticalMove > 0 && keyPressed && phaseNumber == 2)
		{
			phaseChange = false;
			firstStep = false;
		    legMove(false, -1, verticalMove, horizontalStep, angle, R,1);
			verticalMove -= 1.5;
			if (stepflag)
				horizontalStep = moveDirection * 2;
			else
				horizontalStep = moveDirection * 4;
			rightHorMove += horizontalStep;
			vertDir = -1;
			if (verticalMove <= 0)
			{
				phaseChange = true;
				angle = 1.65;
				phaseNumber = 3;
				if (stepflag)
				{
					stepflag = false;
					firstStep = true;
					phaseNumber = 0;
					return -5;
				}
			}
		}
		else if (horizontalMove < 40 && horizontalMove >=0 && keyPressed && phaseNumber == 6)
		{
			phaseChange = false;
			legMove(false, -1, verticalMove, horizontalStep, angle, R,0);
			horizontalStep = moveDirection * 4;
			horizontalMove += horizontalStep;
			rightHorMove += horizontalStep;
			vertDir = -1;
			if ((horizontalMove >= 40 || horizontalMove <0))
			{
				phaseChange = true;
				horizontalMove = 0;
				phaseNumber = 2;
			}
		}	
		else if (verticalMove < 15 && keyPressed && phaseNumber == 3)
		{
			phaseChange = false;
			legMove(true, 1, verticalMove, horizontalStep, angle, R,1);
			verticalMove += 1.5;
			angle += -verticalMove / 30;
			horizontalStep = moveDirection * 4;
			leftHorMove += horizontalStep;
			vertDir = 1;
			if (verticalMove >= 15)
			{
				if (endAnimation||firstStep)
					phaseNumber = 4;
				else
					phaseNumber = 5;
				phaseChange = true;
			}
		}
		else if (verticalMove > 0 && keyPressed && phaseNumber == 4)
		{
			phaseChange = false;
			legMove(true, -1, verticalMove, horizontalStep, angle, R,1);
			verticalMove -= 1.5;
			leftHorMove += horizontalStep;
			horizontalStep = moveDirection*4;
			vertDir = 1;
			if(verticalMove <= 0)
			{
				phaseChange = true;
				phaseNumber = 1;
				verticalMove = 0;
				angle = 1.65;
				if (endAnimation)
				{
					if (rightHorMove+10 > leftHorMove)
					{
						firstStep = true;
						phaseNumber = 0;
						return -5;
					}
					else
					{
						phaseNumber = 1;
						stepflag = true;
					}
				}
			}
		}
		else if (horizontalMove < 40 && horizontalMove >= 0 && keyPressed && phaseNumber == 5)
		{
			phaseChange = false;
			legMove(true, -1, verticalMove, horizontalStep, angle, R,0);
			horizontalStep = moveDirection * 4;
			horizontalMove += horizontalStep;
			leftHorMove += horizontalStep;
			vertDir = 1;
			if ((horizontalMove >= 40 || horizontalMove < 0)||endAnimation)
			{
				phaseChange = true;
				horizontalMove = 0;
				phaseNumber = 4;
			}
		}
		else
		{
			vertDir = 0;
			phaseChange = true;
			phaseNumber = 1;
			verticalMove = 0;
			angle = 1.65;
			if (endAnimation)
			{
				if (rightHorMove + 10 > leftHorMove)
				{
					firstStep = true;
					phaseNumber = 0;
					return -5;
				}
				else
				{
					phaseNumber = 1;
				}
			}
		}
		int i = 0;
		while (i < 416 )
		{
			if (!(i >= 237 && i <= 308) && !(i >= 330 && i <= 401) && !(i >= 282 && i < 289) && !(i >= 375 && i < 382) && !(i >= 318 && i <= 321) && !(i >= 225 && i <= 228))
			{
				Points[i][0] += horizontalStep*cos(currentAngle*acos(-1) / 180)*0.5;
				Points[i][1] += horizontalStep*sin(currentAngle*acos(-1) / 180)*0.5;
				if (stepflag)
					Points[i][2] += vertDir*0.25;
				else
					Points[i][2] += vertDir*0.5;
			}
			i++;
		}
		int ret = moveDirection * 2;
		return ret;
	}
	void legMove(bool isLeft, int direction,double verticalMove,double horizontalMove, double angle,double R,int translate)
	{
		int kkk = horizontalMove*pow(pow(cos(currentAngle*acos(-1) / 180), 2) + pow(sin(currentAngle*acos(-1) / 180), 2), 0.5);
		int i = isLeft ? 54 : 42;
		int end = isLeft ? 66 : 54;
		double adding = (direction == 1) ? 1.65 : (angle - 0.4);
		while (i < end)
		{
			//fingerMass[i][0] = fingerCentMass[i][0] - direction*fingerRadMass[i] * cos(-verticalMove / 30 + adding + asin(1));
			fingerMass[i][2] = fingerCentMass[i][2] - direction*fingerRadMass[i] * sin(-verticalMove / 30 + adding + asin(1));
			fingerCentMass[i][0] += horizontalMove*cos(currentAngle*acos(-1) / 180);
			fingerCentMass[i][1] += horizontalMove*sin(currentAngle*acos(-1) / 180);
			fingerCentMass[i][2] += direction*1.5*translate;
			i++;
		}

		i = isLeft ? 21 : 0;
		end = isLeft ? 42 : 21;
		while (i < end)
		{
			//fingerCentMass[i][0] = fingerCentMass2[i][0] - direction*fingerRadMass2[i] * cos(-verticalMove / 30 + adding + asin(1));
			fingerCentMass[i][2] = fingerCentMass2[i][2] - direction*fingerRadMass2[i] * sin(-verticalMove / 30 + adding + asin(1));
			fingerCentMass2[i][0] += horizontalMove*cos(currentAngle*acos(-1) / 180);
			fingerCentMass2[i][1] += horizontalMove*sin(currentAngle*acos(-1) / 180);
			fingerCentMass2[i][2] += direction*1.5*translate;
			i++;
		}

		i = isLeft ? 21 : 0;
		end = isLeft ? 42 : 21;
		while (i < end)
		{
			//fingerMass[i][0] = fingerCentMass[i][0] - direction*fingerRadMass[i]*cos(-verticalMove / 15 + adding + asin(1));
			fingerMass[i][2] = fingerCentMass[i][2] - direction*fingerRadMass[i]*sin(-verticalMove / 15 + adding + asin(1));
			fingerCentMass[i][0] += horizontalMove*cos(currentAngle*acos(-1) / 180);
			fingerCentMass[i][1] += horizontalMove*sin(currentAngle*acos(-1) / 180);
			fingerCentMass[i][2] += direction*1.5*translate;
			i++;
		}

		i = isLeft ? 7 : 0;
		end = isLeft ? 14 : 7;
		while (i < end)
		{
			//backFingerMass[i][0] = backFingerCentMass[i][0] + direction*backFingerRadMass[i] * cos(verticalMove / 30 + adding + asin(1));
		    backFingerMass[i][2] = backFingerCentMass[i][2] + direction*backFingerRadMass[i] * sin(verticalMove / 30 + adding + asin(1));
			backFingerCentMass[i][0] += horizontalMove*cos(currentAngle*acos(-1) / 180);
			backFingerCentMass[i][1] += horizontalMove*sin(currentAngle*acos(-1) / 180);
			backFingerCentMass[i][2] += direction*1.5*translate;
			i++;
		}

		i = isLeft ?330:237;
		end = isLeft ? 401 : 308;
		while (i <= end)
		{
			Points[i][0] += horizontalMove*cos(currentAngle*acos(-1) / 180);
			Points[i][1] += horizontalMove*sin(currentAngle*acos(-1) / 180);
			Points[i][2] += direction*1.5*translate;
			i++;
		}
		int A = isLeft ? 316 : 223;
		int B = isLeft ? 317 : 224;
		int C = isLeft ? 322 : 229;
		int D = isLeft ? 323 : 230;
		int E = isLeft ? 314 : 221;
		int F = isLeft ? 315 : 222;
		int G = isLeft ? 324 : 231;
		int H = isLeft ? 325 : 232;
		int I = isLeft ? 318 : 225;
		int J = isLeft ? 319 : 226;
		int K = isLeft ? 320 : 227;
		int L = isLeft ? 321 : 228;
		//Points[A][0] = Points[E][0] - direction*R*cos(-verticalMove / 30 + adding);
		Points[A][2] = Points[E][2] - direction*R*sin(-verticalMove / 30 + adding);

		//Points[B][0] = Points[F][0] - direction*R*cos(-verticalMove / 30 + adding);
		Points[B][2] = Points[F][2] - direction*R*sin(-verticalMove / 30 + adding);

		//Points[C][0] = Points[G][0] - direction*R*cos(-verticalMove / 30 + adding);
		Points[C][2] = Points[G][2] - direction*R*sin(-verticalMove / 30 + adding);

		//Points[D][0] = Points[H][0] - direction*R*cos(-verticalMove / 30 + adding);
		Points[D][2] = Points[H][2] - direction*R*sin(-verticalMove / 30 + adding);

		Points[I][2] += direction*1.5*translate;
		Points[J][2] = Points[K][2] = Points[L][2] = Points[I][2];
		
		Points[I][0] += horizontalMove*cos(currentAngle*acos(-1) / 180);
		Points[J][0] += horizontalMove*cos(currentAngle*acos(-1) / 180);
		Points[K][0] += horizontalMove*cos(currentAngle*acos(-1) / 180);
		Points[L][0] += horizontalMove*cos(currentAngle*acos(-1) / 180);

		Points[I][1] += horizontalMove*sin(currentAngle*acos(-1) / 180);
		Points[J][1] += horizontalMove*sin(currentAngle*acos(-1) / 180);
		Points[K][1] += horizontalMove*sin(currentAngle*acos(-1) / 180);
		Points[L][1] += horizontalMove*sin(currentAngle*acos(-1) / 180);
	}
	int rotateHead(int inphase)
	{
		static int phase = 0;
		static double angle = 0;
		static int direction = 1;
		unfinishedAction = 5;
		switch (phase)
		{
		case 0: {
			phase = inphase;
			break;
		}
		case 1: {
			if (angle < 90)
			{
				angle += direction;
			}
			else
			{
				phase = 2;
				direction *= -1;
			}
			break;
		}
		case 2: {
			if (angle > -90)
			{
				angle += direction;
			}
			else
			{
				phase = 3;
				direction *= -1;
			}
			break;
		}
		case 3: {
			if (angle < 0)
			{
				angle += direction;
			}
			else
			{
				phase = 0;
				angle = 0;
				direction *= -1;
				for (int j = 0; j < 96; j++)
				{
					Points[j][0] = PointsCopy[j][0] + Points[415][0];
					Points[j][1] = PointsCopy[j][1] + Points[415][1];
					Points[j][2] = PointsCopy[j][2] + Points[415][2];
				}
				for (int j = 0; j < 96; j++)
				{
					double Cen[] = { Points[415][0],Points[415][1],Points[j][2] };
					Points[j][0] = (PointsCopy[j][0] + Points[415][0] - Cen[0])*cos(currentAngle*acos(-1) / 180.0) - (PointsCopy[j][1] + Points[415][1] - Cen[1])*sin(currentAngle *acos(-1) / 180.0) + Cen[0];
					Points[j][1] = (PointsCopy[j][0] + Points[415][0] - Cen[0])*sin(currentAngle*acos(-1) / 180.0) + (PointsCopy[j][1] + Points[415][1] - Cen[1])*cos(currentAngle *acos(-1) / 180.0) + Cen[1];
				}
				for (int j = 12, i = 410; j < 15; j++)
				{
					neckRotMass[j][0] = PointsCopy[i][0] + Points[415][0];
					neckRotMass[j][1] = PointsCopy[i][1] + Points[415][1];
					neckRotMass[j][2] = PointsCopy[i][2] + Points[415][2];
				}
				for (int j = 12, i = 410; j < 15; j++)
				{
					double Cen[] = { Points[415][0],Points[415][1],neckRotMass[j][2] };
					neckRotMass[j][0] = (PointsCopy[i][0] + Points[415][0] - Cen[0])*cos(currentAngle*acos(-1) / 180.0) - (PointsCopy[i][1] + Points[415][1] - Cen[1])*sin(currentAngle *acos(-1) / 180.0) + Cen[0];
					neckRotMass[j][1] = (PointsCopy[i][0] + Points[415][0] - Cen[0])*sin(currentAngle*acos(-1) / 180.0) + (PointsCopy[i][1] + Points[415][1] - Cen[1])*cos(currentAngle *acos(-1) / 180.0) + Cen[1];
				}
				for (int i = 96, j = 0; i <= 100; i++, j++)
				{
					neckRotMass[j][0] = PointsCopy[i][0]+ Center[0];
					neckRotMass[j][1] = PointsCopy[i][1] + Center[1];
					neckRotMass[j][2] = PointsCopy[i][2] + Center[2];
				}
				for (int i = 96, j = 0; i <= 100; i++, j++)
				{
					double Cen[] = { Points[415][0],Points[415][1],neckRotMass[j][2] };
					neckRotMass[j][0] = (PointsCopy[i][0] + Points[415][0] - Cen[0])*cos(currentAngle*acos(-1) / 180.0) - (PointsCopy[i][1] + Points[415][1] - Cen[1])*sin(currentAngle *acos(-1) / 180.0) + Cen[0];
					neckRotMass[j][1] = (PointsCopy[i][0] + Points[415][0] - Cen[0])*sin(currentAngle*acos(-1) / 180.0) + (PointsCopy[i][1] + Points[415][1] - Cen[1])*cos(currentAngle *acos(-1) / 180.0) + Cen[1];
				}
				for (int i = 187, j = 5; i <= 191; i++, j++)
				{
					neckRotMass[j][0] = PointsCopy[i][0] + Center[0];
					neckRotMass[j][1] = PointsCopy[i][1] + Center[1];
					neckRotMass[j][2] = PointsCopy[i][2] + Center[2];
				}

				for (int i = 187, j = 5; i <= 191; i++, j++)
				{
					double Cen[] = { Points[415][0],Points[415][1],neckRotMass[j][2] };
					neckRotMass[j][0] = (PointsCopy[i][0] + Points[415][0] - Cen[0])*cos(currentAngle*acos(-1) / 180.0) - (PointsCopy[i][1] + Points[415][1] - Cen[1])*sin(currentAngle *acos(-1) / 180.0) + Cen[0];
					neckRotMass[j][1] = (PointsCopy[i][0] + Points[415][0] - Cen[0])*sin(currentAngle*acos(-1) / 180.0) + (PointsCopy[i][1] + Points[415][1] - Cen[1])*cos(currentAngle *acos(-1) / 180.0) + Cen[1];
				}

				for (int i = 201, j = 10; i <= 202; i++, j++)
				{
					neckRotMass[j][0] = PointsCopy[i][0] + Center[0];
					neckRotMass[j][1] = PointsCopy[i][1] + Center[1];
					neckRotMass[j][2] = PointsCopy[i][2] + Center[2];
				}

				for (int i = 201, j = 10; i <= 202; i++, j++)
				{
					double Cen[] = { Points[415][0],Points[415][1],neckRotMass[j][2] };
					neckRotMass[j][0] = (PointsCopy[i][0] + Points[415][0] - Cen[0])*cos(currentAngle*acos(-1) / 180.0) - (PointsCopy[i][1] + Points[415][1] - Cen[1])*sin(currentAngle *acos(-1) / 180.0) + Cen[0];
					neckRotMass[j][1] = (PointsCopy[i][0] + Points[415][0] - Cen[0])*sin(currentAngle*acos(-1) / 180.0) + (PointsCopy[i][1] + Points[415][1] - Cen[1])*cos(currentAngle *acos(-1) / 180.0) + Cen[1];
				}

				if (currentAction == 5)
					currentAction = 0;
				unfinishedAction = 0;
				phase = 0;
				angle = 0;
				direction = 1;
				return  -5;
			}
			break;
		}
		}
		for (int j = 0; j < 96 && phase; j++)
		{
			double Cen[] = { (PointsCopy[91][0]+ PointsCopy[86][0])/2+ Center[0],(PointsCopy[87][1] + PointsCopy[86][1])/2 + Center[1],Points[j][2] };
			Points[j][0] = (Points[j][0] - Cen[0])*cos((double)direction*acos(-1) / 180.0) - (Points[j][1] - Cen[1])*sin((double)direction *acos(-1) / 180.0) + Cen[0];
			Points[j][1] = (Points[j][0] - Cen[0])*sin((double)direction*acos(-1) / 180.0) + (Points[j][1] - Cen[1])*cos((double)direction *acos(-1) / 180.0) + Cen[1];
		}
		for (int j = 0; j < 12 && phase; j++)
		{
			double Cen[] = { (P3[0] + W3[0]) / 2, (P3[1] + W3[1]) / 2, neckRotMass[j][2] };
			neckRotMass[j][0] = (neckRotMass[j][0] - Cen[0])*cos((double)direction*acos(-1) / 180.0) - (neckRotMass[j][1] - Cen[1])*sin((double)direction *acos(-1) / 180.0) + Cen[0];
			neckRotMass[j][1] = (neckRotMass[j][0] - Cen[0])*sin((double)direction*acos(-1) / 180.0) + (neckRotMass[j][1] - Cen[1])*cos((double)direction *acos(-1) / 180.0) + Cen[1];
		}
		for (int j = 12; j < 15 && phase; j++)
		{
			double Cen[] = { (PointsCopy[91][0] + PointsCopy[86][0]) / 2 + Center[0],(PointsCopy[87][1] + PointsCopy[86][1]) / 2 + Center[1],neckRotMass[j][2] };
			neckRotMass[j][0] = (neckRotMass[j][0] - Cen[0])*cos((double)direction*acos(-1) / 180.0) - (neckRotMass[j][1] - Cen[1])*sin((double)direction *acos(-1) / 180.0) + Cen[0];
			neckRotMass[j][1] = (neckRotMass[j][0] - Cen[0])*sin((double)direction*acos(-1) / 180.0) + (neckRotMass[j][1] - Cen[1])*cos((double)direction *acos(-1) / 180.0) + Cen[1];
		}
		return 0;
	}
};