class Box {
    private:
       int length;
       int width;
       int height;
    public:
      
        void setLength(int plength);
        void setHeight(int pheight);
        void setWidth(int pwidth);

       // write prototypes of setters for length, width and height

        int getLength();
        int getHeight();
        int getWidth();
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};
