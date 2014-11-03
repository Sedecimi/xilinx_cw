#include <QImage>

class PictureReceiver{
	public:
	PictureReceiver(){ std::cout<<"void\n";}
	virtual QImage *getImage()=0;
	~PictureReceiver(){ std::cout<<"\t0\n";}
}
