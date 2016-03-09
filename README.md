# HLMS Editor
HLMS Editor

Editor to create Ogre3D High Level Material Shader materials (Ogre 2.0+)

![HLMS Editor](/HLMSEditor.png)

Installation:
---
1. Download the zip or clone the 'HLMSEditor' repository from Github.
2. Compile the sources of Ogre3D version 2.1 (from https://bitbucket.org/sinbad/ogre)
3. Copy the following DLL's to the HLMSEditor/bin directory
* OgreHlmsPbs.dll
* OgreHlmsPbs_d.dll
* OgreHlmsUnlit.dll
* OgreHlmsUnlit_d.dll
* OgreMain.dll
* OgreMain_d.dll
* RenderSystem_Direct3D11.dll
* RenderSystem_Direct3D11_d.dll
* RenderSystem_GL3Plus.dll
* RenderSystem_GL3Plus_d.dll
4. Run 'Qt Creator'
5. Open the 'HLMSEditor.pro' in Qt Creator
6. Edit 'HLMSEditor.pro' file; change OGREHOME = "C:/Users/Henry/Documents/Visual Studio 2015/Projects/ogre" to the path that refers to your ogre root/home
7. Run the HLMSEditor application
8. Note, that you don't need the Qt dll files in your HLMSEditor/bin directory, unless the HLMSEditor application is used as stand-alone (outside Qt Creator).