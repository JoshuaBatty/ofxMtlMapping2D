ofxMtlMapping2D
=====================================

Introduction
------------
C++ openFrameworks addon to achieve 2D projection-mapping of textures to physical objects. Each instance of ofxMtlMapping2D has its own FBO to draw content into. Each created shape has an output polygon used for mapping, and an input polygon defining the texture coordinates to be used.

**output mode**  
![output mode](http://www.morethanlogic.com/ofxMtl/ofxMtlMapping2D/ofxMtlMapping2D_output.png)

**input mode**  
![input mode](http://www.morethanlogic.com/ofxMtl/ofxMtlMapping2D/ofxMtlMapping2D_input.png)

Some of our projects using this addon
------------

<table>
<tr>
<td><a href="http://www.smallfly.com/2012/08/echos/"><img src="http://www.morethanlogic.com/ofxMtl/ofxMtlMapping2D/ofxMtlMapping2D_Echos.jpg" alt="Echos"></a></td>
<td><a href="http://www.smallfly.com/2011/12/barcode/"><img src="http://www.morethanlogic.com/ofxMtl/ofxMtlMapping2D/ofxMtlMapping2D_Barcode.jpg" alt="Barcode"></a></td>
</tr>
<tr>
<td><a href="http://www.smallfly.com/2011/06/306/"><img src="http://www.morethanlogic.com/ofxMtl/ofxMtlMapping2D/ofxMtlMapping2D_Openhouse.jpg" alt="Open house"></a></td>
<td><a href="http://www.smallfly.com/2011/06/sam-roberts-band-i-feel-you/"><img src="http://www.morethanlogic.com/ofxMtl/ofxMtlMapping2D/ofxMtlMapping2D_SamRobert.jpg" alt="Sam Robert's Band"></a></td>
</tr>
</table>

Licence
-------
The code in this repository is available under the [MIT License](https://en.wikipedia.org/wiki/MIT_License)  
Copyright (c) 2012 Hugues Bruyère, Elie Zananiri, [www.morethanlogic.com](http://www.morethanlogic.com)    
More Than Logic

Installation
------------
Copy to your openFrameworks/addons folder.

Dependencies
------------
* [ofxMSAInteractiveObject](https://github.com/memo/ofxMSAInteractiveObject)
* [ofxUI](https://github.com/rezaali/ofxUI)
* ofxXmlSettings
* homography.h by Arturo Castro (included in this repo)

Compatibility
------------
OF0072