class Box {
    private:
       int length;
       int width;
       int heigth;
    public:
       void setLength(int l);
	     void setWidth(int w);
	     void setHeigth(int h);
	     int getLength();
	     int getWidth();
	     int getHeigth();
       int calcVolume();
};
