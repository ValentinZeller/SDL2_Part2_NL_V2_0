# SDL2_Part2_NL_V2_0
Correction Td SDL_2 part_2

1) Quel api associer au projet pour prendre en charge les images au format JPG, PNG...
Il faut ajouter la bibliothèque SDL_Image, celle-ci nous donnera accès à l'ensemble de méthodes permettant d'integrer des images à notre projet dans les formats JPG, PNG ....
La version utilisée dans le cadre de notre projet SDL2, lors de l'écriture de ces lignes est la vesrion 2_0_5.
Cette bibliothèque est écrite en c, compilable sur les compilateurs C compatibles avec les environnements Windows, Mac et linux ( Gcc, MSVC...) 

Cf Descrption :  https://www.libsdl.org/projects/SDL_image/

 SDL_image is an image file loading library.
It loads images as SDL surfaces and textures, and supports the following formats: BMP, GIF, JPEG, LBM, PCX, PNG, PNM, SVG, TGA, TIFF, WEBP, XCF, XPM, XV

As of SDL_image 1.2.5, JPEG, PNG, TIFF, and WEBP image loading libraries are dynamically loaded, so if you don't need to load those formats, you don't need to include those shared libraries. libpng depends on libz, and libtiff depends on both libz and libjpeg.
