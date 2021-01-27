#include <iostream>

using namespace std;

class Graphic{
public:
	void display() = 0;
};

class Image : public Graphic{
public:
	void load(){
		//Archivo a cargar
	}
};

class ImageProxy : public Graphic{
private:
	Image* _image;
public:
	void display(){
		if (not _image)
		{
			_image = new Image();
			_image.load();
		}
		_image->display();
	}
};


//Cliente
Graphic image = new ImageProxy();
image->display(); // carga y muestra
image->display(); // Solo muestra
image->display(); // Solo muestra
image->display(); // Solo muestra

int main(int argc, char const *argv[])
{
		
	return 0;
}