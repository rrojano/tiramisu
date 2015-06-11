#ifndef IO_H
#define IO_H

#include <string>
#include <map>

#include "Image.hpp"
#include "CNNLayer.hpp"

using std::string;
using std::map;
using std::pair;

class IO {
  public:
    static void loadImagesAndLayers(string path, map<string,Image> &images, map<string,CNNLayer> &layers);
    static void loadImages(string path, map<string,Image> &images);
    static void loadLayers(string path, map<string,CNNLayer> &layers);
    static string writeImagesVertices(const map<string,Image> &images);
    static string writeLayersVertices(const map<string,CNNLayer> &layers);
    static string writeImagesAndLayersVertices(const map<string,Image> &images, const map<string,CNNLayer> &layers);
    static string writeImagesAndLayersEdges(const map<string,Image> &images, const map<string,CNNLayer> &layers);


  protected:

}; //  IO

#endif
