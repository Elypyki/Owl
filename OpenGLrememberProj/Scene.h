class scene {
public:
	scene()
	{
		double j = 0;
		for (int i = 0; i < 1500; i++,j = sin(i*acos(-1)/180))
		{	
			srand(time(0)*j*10000 + j * 10000 + rand()%10000);
			PointsGrassMass[i][0] = rand() % 2000 - 1000;
			PointsGrassMass[i][1] = rand() % 2000 - 1000;
			PointsGrassMass[i][4] = rand() % 50;
		}
	}
	void buildScene()
	{
		for (int i = 0; i < 1500; i++)
		{
			if (Center[0] < PointsGrassMass[i][0] + 80 && Center[0] > PointsGrassMass[i][0] - 80 && Center[1] > PointsGrassMass[i][1] - 80 && Center[1] < PointsGrassMass[i][1] + 80)
			{
				double Point[] = { PointsGrassMass[i][0],PointsGrassMass[i][1],Center[2] };
				double angle = 0 - 90 * (60 - length(Center, Point)) / 60;
				if (abs(angle) > abs(PointsGrassMass[i][3]))
				{
					PointsGrassMass[i][3] = angle;
					if (length(Center, Point))
						if (PointsGrassMass[i][3] > 0)
							PointsGrassMass[i][3] = 0;
				}
				if (currentAction == 3)
					PointsGrassMass[i][2] = Hedwig.currentAngle + 180;
				else if (currentAction == 2)
					PointsGrassMass[i][2] = Hedwig.currentAngle;
			}
			else
			{
				if (PointsGrassMass[i][3] < 0.4 && PointsGrassMass[i][3])
					PointsGrassMass[i][3] += 0.2;
				else if (PointsGrassMass[i][3] > 0.4 && PointsGrassMass[i][3])
					PointsGrassMass[i][3] -= 0.2;
			}
			glPushMatrix();
				glTranslated(PointsGrassMass[i][0], PointsGrassMass[i][1], 0);
				//glRotated(PointsGrassMass[i][4], 0, 0, 1);
				glRotated(PointsGrassMass[i][2], 0, 0, 1);
				bladeOfGrass(PointsGrassMass[i][4], PointsGrassMass[i][3], PointsGrassMass[i][2]);
			glPopMatrix();
		}
	}
	void buildShadow()
	{
		int i = 0;
	}
private:
	double PointsGrassMass[1500][5] = { 0 };
	void bladeOfGrass(double height,double angle,double horRot)
	{
		double Gr1[] = { -2,0,0 -108};
		double Gr2[] = { 2,2,0 - 108 };
		double Gr3[] = { 2,-2,0 - 108 };
		double Gr4[] = { -2,0,120.0*height / 50.0 - 108 };
		double Gr5[] = { 2,2,120.0*height / 50.0 - 108 };
		double Gr6[] = { 2,-2,120.0*height / 50.0 - 108 };
		double Gr7[] = { -2,0,180.0*height / 50.0 - 108 };

		double RGB[] = { 0,1,0 };

		double *Gr[] = {Gr1,Gr2,Gr3,Gr4,Gr5,Gr6,Gr7};

		for (int i = 0; i < 7; i++)
		{
			double Cen[] = { 0,0,-108 };
			Gr[i][0] = (Gr[i][0] - Cen[0])*cos(angle*acos(-1) / 180) - (Gr[i][2] - Cen[2])*sin(angle *acos(-1) / 180) + Cen[0];
			Gr[i][2] = (Gr[i][0] - Cen[0])*sin(angle*acos(-1) / 180) + (Gr[i][2] - Cen[2])*cos(angle *acos(-1) / 180) + Cen[2];
		}


		triangle(Gr1, Gr2, Gr5, RGB, true, true);
		triangle(Gr5, Gr4, Gr1, RGB, true, true);

		triangle(Gr1, Gr3, Gr6, RGB, true, true);
		triangle(Gr6, Gr4, Gr1, RGB, true, true);

		triangle(Gr4, Gr5, Gr7, RGB, true, true);
		triangle(Gr6, Gr4, Gr7, RGB, true, true);

	}
};