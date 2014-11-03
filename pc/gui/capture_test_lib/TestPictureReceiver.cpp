#include <QImage>
#include "PictureReceiver.h"

class TestPictureReceiver:  public PictureReceiver{
	public:
		TestPictureReceiver(){}
		~TestPictureReceiver(){}
		QImage *getImage{
			QImage img=("~/Pictures/2485497.png");
			return *img;				
		}	
	
}
