# ✨ Julia Set ✨


[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)]()

✨ Supernatural images created by complex numbers ✨
## Project Achievements

- Simple to intermediate pointer use
- Write a module that holds methods together
- Getting information about the PGM file content
- Basic image processing
- Learning gray-level tones

![My Image](/Example_Image/readmeImages/account_operation_image.PNG)

> Calculating whether complex numbers are members of the Julia set.

![My Image2](/Example_Image/readmeImages/juliaset_graph.PNG)

> Explanation of how complex numbers belonging to the Julia set should be colored on the graph and picture.

![My Image3](/Example_Image/readmeImages/example_complex_image.PNG)
> Sample output images

## Tech

- C programing Language


## Installation

This requires [TDM-GCC 4.9.2](https://sourceforge.net/projects/tdm-gcc/files/TDM-GCC%204.9%20series/4.9.2-tdm-1%20DW2/) 4.9.2 to run.

If you want to filter the image you want, in the [pgmimage.h](/src/pgmimages.h) file:

```sh
void pgmFormattedWrite(Complex *z1,Complex *zc,Complex *zk,int k,float r,FILE *pgmFILE){
  ...	
  if( (pgmFILE = fopen( "./JuliaCluster.pgm","w")) != NULL){ // pgm file path
  ...
```
You should change the file path in the line.



## License

MIT

**Free Software, Hell Yeah!**

[//]: # (These are reference links used in the body of this note and get stripped out when the markdown processor does its job. There is no need to format nicely because it shouldn't be seen. Thanks SO - http://stackoverflow.com/questions/4823468/store-comments-in-markdown-syntax)

   [dill]: <https://github.com/joemccann/dillinger>
   [git-repo-url]: <https://github.com/joemccann/dillinger.git>
   [john gruber]: <http://daringfireball.net>
   [df1]: <http://daringfireball.net/projects/markdown/>
   [markdown-it]: <https://github.com/markdown-it/markdown-it>
   [Ace Editor]: <http://ace.ajax.org>
   [node.js]: <http://nodejs.org>
   [Twitter Bootstrap]: <http://twitter.github.com/bootstrap/>
   [jQuery]: <http://jquery.com>
   [@tjholowaychuk]: <http://twitter.com/tjholowaychuk>
   [express]: <http://expressjs.com>
   [AngularJS]: <http://angularjs.org>
   [Gulp]: <http://gulpjs.com>

   [PlDb]: <https://github.com/joemccann/dillinger/tree/master/plugins/dropbox/README.md>
   [PlGh]: <https://github.com/joemccann/dillinger/tree/master/plugins/github/README.md>
   [PlGd]: <https://github.com/joemccann/dillinger/tree/master/plugins/googledrive/README.md>
   [PlOd]: <https://github.com/joemccann/dillinger/tree/master/plugins/onedrive/README.md>
   [PlMe]: <https://github.com/joemccann/dillinger/tree/master/plugins/medium/README.md>
   [PlGa]: <https://github.com/RahulHP/dillinger/blob/master/plugins/googleanalytics/README.md>
