void line(double A[], double B[], double width)
{
	glColor3d(0, 0, 0);
	glLineWidth(width);
	glBegin(GL_LINES);
	glVertex3dv(A);
	glVertex3dv(B);
	glEnd();
}

void count_norm(double A[], double B[], double C[], double vector[])
{
	double vector1[] = { A[0] - B[0], A[1] - B[1] ,A[2] - B[2] };
	double vector2[] = { C[0] - B[0], C[1] - B[1] ,C[2] - B[2] };

	vector[0] = vector1[1] * vector2[2] - vector2[1] * vector1[2];
	vector[1] = -vector1[0] * vector2[2] + vector2[0] * vector1[2];
	vector[2] = vector1[0] * vector2[1] - vector2[0] * vector1[1];

	double length = pow((pow(vector[0], 2) + pow(vector[1], 2) + pow(vector[2], 2)), 0.5);
	vector[0] /= length;
	vector[1] /= length;
	vector[2] /= length;
}

void triangle(double A[], double B[], double C[], double RGB[], bool flag_norm, bool lines)
{
	double vector[3];
	if (flag_norm)
		count_norm(A, B, C, vector);
	else
		count_norm(C, B, A, vector);
	glNormal3dv(vector);
	glColor4d(RGB[0], RGB[1], RGB[2], RGB[3]);
	glBegin(GL_TRIANGLES);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glEnd();
	if (lines)
	{
		line(A, B, 0.2);
		line(B, C, 0.2);
		line(C, A, 0.2);
	}
}

double length(double A[], double B[])
{
	return pow(pow(B[0] - A[0],2) + pow(B[1] - A[1], 2) + pow(B[2] - A[2], 2), 0.5);
}

double angleRot(double A[], double B[])
{
	return acos((A[0]*B[0] + A[1]*B[1]) / (sqrt((double)A[0]*A[0] + A[1]*A[1])*sqrt((double)B[0]*B[0] + B[1]*B[1])));
}