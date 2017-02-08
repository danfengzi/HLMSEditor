/****************************************************************************
**
** Copyright (C) 2016
**
** This file is generated by the Magus toolkit
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
****************************************************************************/

#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>
#include <QMessageBox>
#include "OgreString.h"
#include "ogre3_widget.h"

//****************************************************************************/
static const QString WINDOW_TITLE = QString("HLMS editor");
static const int OGRE_WIDGET_RENDERWINDOW = 1;
static const int TB_ICON_AND_SPACING = 32;
static const QString NODE_TITLE_PBS_DATABLOCK = QString("Hlms PBS");
static const QString NODE_TITLE_UNLIT_DATABLOCK = QString("Hlms Unlit");
static const QString NODE_TITLE_SAMPLERBLOCK = QString("Texture/Samplerblock");
static const QString NODE_TITLE_MACROBLOCK = QString("Macroblock");
static const QString NODE_TITLE_BLENDBLOCK = QString("Blendblock");
static const unsigned int NODE_TYPE_PBS_DATABLOCK = 1;
static const unsigned int NODE_TYPE_UNLIT_DATABLOCK = 2;
static const unsigned int NODE_TYPE_SAMPLERBLOCK = 3;
static const unsigned int NODE_TYPE_MACROBLOCK = 4;
static const unsigned int NODE_TYPE_BLENDBLOCK = 5;
static const unsigned int MAX_SAMPLERBLOCKS = 8;
static const unsigned int MAX_MACROBLOCKS = 1;
static const unsigned int MAX_BLENDBLOCKS = 1;
static const unsigned int MAX_RECENT_HLMS_FILES = 9;
static const unsigned int MAX_RECENT_PROJECT_FILES = 9;
static const QString ICON_PATH = QString("../common/icons/");
static const QString ASSET_ICON_COLLAPSE = QString("../common/icons/collapse.png");
static const QString ASSET_ICON_EXPAND = QString("../common/icons/expand.png");
static const QString ICON_PBS_DATABLOCK = QString("../common/icons/pbs.png");
static const QString ICON_UNLIT_DATABLOCK = QString("../common/icons/unlit.png");
static const QString ICON_SAMPLERBLOCK = QString("../common/icons/samplerblock.png");
static const QString ICON_MACROBLOCK = QString("../common/icons/macroblock.png");
static const QString ICON_BLENDBLOCK = QString("../common/icons/blendblock.png");
static const QString ICON_GENERATE = QString("../common/icons/generate.png");
static const QString ICON_MINMAX = QString("../common/icons/minmax.png");
static const QString ICON_CLOSE = QString("../common/icons/close.png");
static const QString ICON_COLOUR = QString("../common/icons/colour.png");
static const QString ICON_INFO = QString("../common/icons/info.png");
static const QString ICON_MODEL = QString("../common/icons/model.png");
static const QString ICON_LIGHT = QString("../common/icons/lightbulb.png");
static const QString ICON_PAINT_ON = QString("../common/icons/paint_on.png");
static const QString ICON_PAINT_OFF = QString("../common/icons/paint_off.png");
static const QString ICON_MARKER = QString("../common/icons/marker.png");
static const QString ICON_HOOVER_ON = QString("../common/icons/hoover_on.png");
static const QString ICON_HOOVER_OFF = QString("../common/icons/hoover_off.png");
static const QString ICON_HLMS = QString("../common/icons/HLMSEditor.png");
static const QString ICON_PBS_DATABLOCK_NO_PATH = QString("pbs.png");
static const QString ICON_PBS_DATABLOCK_SMALL_NO_PATH = QString("pbs_small.png");
static const QString ICON_UNLIT_DATABLOCK_NO_PATH = QString("unlit.png");
static const QString ICON_UNLIT_DATABLOCK_SMALL_NO_PATH = QString("unlit_small.png");
static const QString ICON_TEXTURE_NO_PATH = QString("samplerblock.png");
static const QString ICON_TEXTURE_SMALL_NO_PATH = QString("samplerblock_small.png");
static const QString HLMS_GROUP = "[Hlms]\n";
static const QString HLMS_DO_NOT_USE_AS_RESOURCE = "DoNotUseAsResource = ../common/ogre3\n"; // This must be the location where the HLMS templates are
static const QString INFO_PBS = QString("../common/info/hlms_pbs.inf");
static const QString INFO_UNLIT = QString("../common/info/hlms_unlit.inf");
static const QString INFO_SAMPLERBLOCK = QString("../common/info/samplerblock.inf");
static const QString INFO_MACROBLOCK = QString("../common/info/macroblock.inf");
static const QString INFO_BLENDBLOCK = QString("../common/info/blendblock.inf");
static const QString DEFAULT_PROJECT_NAME = QString("project1");
static const QString HEADER_PROJECT = QString("hlmsEditor v1.0");
static const QString FILE_MATERIAL_BROWSER = QString("materials.cfg");
static const QString FILE_TEXTURE_BROWSER = QString("textures.cfg");
static const QString FILE_RECENT_HLMS_FILES = QString("rhlms.cfg");
static const QString FILE_RECENT_PROJECT_FILES = QString("rprojects.cfg");
static const QString FILE_NO_IMAGE = QString("../common/icons/noImage.png");
static const QString FILE_RESOURCES_D = QString("resources_d.cfg");
static const QString FILE_RESOURCES = QString("resources.cfg");
static const QString FILE_RESOURCES_DEFAULT = QString("resources_default.cfg");
static const QString FILE_SETTINGS = QString("settings.cfg");
static const QString FILE_SETTINGS_DEFAULT = QString("settings_default.cfg");
static const QString PROJECT_PATH = "../project/";
static const Ogre::String DEFAULT_DATABLOCK_NAME = "[Default]";
static const Ogre::String DATABLOCK_DEBUG_CUBE = "DebugCube";
static const Ogre::String THUMBS_PATH = "../common/thumbs/";
static const QString DEFAULT_IMPORT_PATH = "../import/";
static const QString SETTINGS_GROUP_GENERAL = "General";
static const QString SETTINGS_IMPORT_PATH = "importPath";
static const QString SETTINGS_SAMPLERBLOCK_FILTER_INDEX = "samplerblockFilterIndex";
static const QString SETTINGS_NUMBER_OF_SKYBOXES = "numberOfSkyboxes";
static const QString SETTINGS_PREFIX_SKYBOX = "skybox";
static const QString NO_SKYBOX = "None";
static const QString MESH_VERSION_1 = QString("[MeshSerializer_v1");
static const QString MESH_VERSION_2 = QString("[MeshSerializer_v2");

// Static function to determine the 'resources' file
static const QString& getResourcesCfg (void)
{
    #if OGRE_DEBUG_MODE
        return FILE_RESOURCES_D;
    #else
        return FILE_RESOURCES;
    #endif
}

enum EditorHlmsTypes
{
    HLMS_PBS,       /// Physically Based Shader Generator
    HLMS_UNLIT,     /// Made for GUIs, overlays, particle FXs, self-iluminating billboards
    HLMS_NONE
};

/****************************************************************************
Struct for source info
***************************************************************************/
struct QtSourcesInfo
{
    int resourceId;
    int toplevelId;
    int parentId;
    int resourceType;
    QString fileName;
    QString baseName;
    QString fileDialogTitle;
    QString filter;
    QString baseNameThumb;
};

static unsigned int gSequence = 0;
//****************************************************************************/
static unsigned int getSequence(void)
{
    return ++gSequence;
}

//****************************************************************************/
static QString getBaseFileName(QString& fileName)
{
    QString mTempString = fileName;
    int index = mTempString.lastIndexOf('/');
    if (index < 0)
        index = mTempString.lastIndexOf('\\');

    if (index != 0)
        return mTempString.right(fileName.length() - index - 1);

    return mTempString;
}

//****************************************************************************/
// Contextmenu action
static const QString ACTION_SET_CURRENT_MATERIAL = QString("Set current material");
static const QString ACTION_TOGGLE_LIGHT_DIRECTION = QString("Light direction");
static const QString ACTION_RESET_CAMERA = QString("Reset camera position/direction");
static const QString ACTION_TOGGLE_SUBMESH_SELECTION = QString("Toggle Mesh/Submesh selection");
static const QString ACTION_SELECT_BACKGROUND_COLOUR = QString("Select background colour");

//****************************************************************************/
// Ports
static const QString PORT_DATABLOCK = QString("Hlms");
static const QString PORT_SAMPLERBLOCK = QString("Texture/Samplerblock");
static const QString PORT_MACROBLOCK = QString("Macroblock");
static const QString PORT_BLENDBLOCK = QString("Blendblock");
static const unsigned int PORT_ID_PBS_DATABLOCK = 10;
static const unsigned int PORT_ID_UNLIT_DATABLOCK = 20;
static const unsigned int PORT_ID_SAMPLERBLOCK = 30;
static const unsigned int PORT_ID_MACROBLOCK = 40;
static const unsigned int PORT_ID_BLENDBLOCK = 50;

//****************************************************************************/
// Properties
static const int CONTAINER_BLENDBLOCK_GENERAL = 10;
static const int CONTAINER_MACROBLOCK_GENERAL = 20;
static const int CONTAINER_PBS_DATABLOCK_GENERAL = 30;
static const int CONTAINER_PBS_DATABLOCK_COLOUR = 40;
static const int CONTAINER_UNLIT_DATABLOCK_GENERAL = 50;
static const int CONTAINER_SAMPLERBLOCK_GENERAL = 60;
static const int CONTAINER_SAMPLERBLOCK_DETAILS = 70;
static const int CONTAINER_SAMPLERBLOCK_DETAIL_MAP_DETAILS = 80;

// PSB Datablock properties
static const QString DEFAULT_PBS_DATABLOCK_NAME = QString("HlmsPbs");
static const int PROPERTY_PBS_DATABLOCK_NAME = 11;
static const int PROPERTY_PBS_DATABLOCK_DIFFUSE = 12;
static const int PROPERTY_PBS_DATABLOCK_BACKGROUND = 13;
static const int PROPERTY_PBS_DATABLOCK_SPECULAR = 14;
static const int PROPERTY_PBS_DATABLOCK_ROUGHNESS = 15;
static const int PROPERTY_PBS_DATABLOCK_WORKFLOW = 16;
static const int PROPERTY_PBS_DATABLOCK_METALNESS = 17;
static const int PROPERTY_PBS_DATABLOCK_SEPARATE_FRESNEL = 18;
static const int PROPERTY_PBS_DATABLOCK_FRESNEL_R = 19;
static const int PROPERTY_PBS_DATABLOCK_FRESNEL_G = 20;
static const int PROPERTY_PBS_DATABLOCK_FRESNEL_B = 21;
static const int PROPERTY_PBS_DATABLOCK_TRANPARENCEY_VALUE = 22;
static const int PROPERTY_PBS_DATABLOCK_TRANPARENCY_MODE = 23;
static const int PROPERTY_PBS_DATABLOCK_TWO_SIDED_LIGHTING = 24;
static const int PROPERTY_PBS_DATABLOCK_USE_ALPHA_FROM_TEXTURES = 25;
static const int PROPERTY_PBS_DATABLOCK_BRDF = 26;
static const int PROPERTY_PBS_DATABLOCK_ALPHATEST = 27;
static const int PROPERTY_PBS_DATABLOCK_ALPHATEST_THRESHOLD = 28;

// Unlit Datablock properties
static const QString DEFAULT_UNLIT_DATABLOCK_NAME = QString("HlmsUnlit");
static const int PROPERTY_UNLIT_DATABLOCK_NAME = 11;
static const int PROPERTY_UNLIT_DATABLOCK_COLOUR = 12;
static const int PROPERTY_UNLIT_DATABLOCK_ALPHATEST = 13;
static const int PROPERTY_UNLIT_DATABLOCK_ALPHATEST_THRESHOLD = 14;

// Samplerblock properties
static const int PROPERTY_SAMPLERBLOCK_TEXTURE = 40;
static const int PROPERTY_SAMPLERBLOCK_TEXTURE_TYPE = 41;
static const int PROPERTY_SAMPLERBLOCK_ENABLED = 42;
static const int PROPERTY_SAMPLERBLOCK_TEXTURE_MIN_FILTER = 43;
static const int PROPERTY_SAMPLERBLOCK_TEXTURE_MAG_FILTER = 44;
static const int PROPERTY_SAMPLERBLOCK_TEXTURE_MIP_FILTER = 45;
static const int PROPERTY_SAMPLERBLOCK_ADDRESSING_MODE_U = 46;
static const int PROPERTY_SAMPLERBLOCK_ADDRESSING_MODE_V = 47;
static const int PROPERTY_SAMPLERBLOCK_ADDRESSING_MODE_W = 48;
static const int PROPERTY_SAMPLERBLOCK_MIPLOD_BIAS = 49;
static const int PROPERTY_SAMPLERBLOCK_MAX_ANISOTROPY = 50;
static const int PROPERTY_SAMPLERBLOCK_COMPARE_FUNCTION = 51;
static const int PROPERTY_SAMPLERBLOCK_MIN_LOD = 52;
static const int PROPERTY_SAMPLERBLOCK_MAX_LOD = 53;
static const int PROPERTY_SAMPLERBLOCK_BORDER_COLOUR = 54;
static const int PROPERTY_SAMPLERBLOCK_UV_SET = 55;
static const int PROPERTY_SAMPLERBLOCK_BLEND_MODE = 56;
static const int PROPERTY_SAMPLERBLOCK_MAP_WEIGTH = 57;
static const int PROPERTY_SAMPLERBLOCK_OFFSET = 58;
static const int PROPERTY_SAMPLERBLOCK_SCALE = 59;
static const int PROPERTY_SAMPLERBLOCK_ANIM_ENABLED = 60;
static const int PROPERTY_SAMPLERBLOCK_ANIM_SCALE = 61;
static const int PROPERTY_SAMPLERBLOCK_ANIM_TRANSLATE = 62;
static const int PROPERTY_SAMPLERBLOCK_ANIM_ROTATE = 63;

// Macroblock properties
static const int PROPERTY_MACROBLOCK_ENABLED = 70;
static const int PROPERTY_MACROBLOCK_SCISSOR_TEST_ENABLED = 71;
static const int PROPERTY_MACROBLOCK_DEPTH_CHECK = 72;
static const int PROPERTY_MACROBLOCK_DEPTH_WRITE = 73;
static const int PROPERTY_MACROBLOCK_DEPTH_FUNCTION = 74;
static const int PROPERTY_MACROBLOCK_DEPTH_BIAS_CONSTANT = 75;
static const int PROPERTY_MACROBLOCK_DEPTH_BIAS_SLOPE_SCALE = 76;
static const int PROPERTY_MACROBLOCK_CULL_MODE = 77;
static const int PROPERTY_MACROBLOCK_POLYGON_MODE = 78;

// Blendblock properties
static const int PROPERTY_BLENDBLOCK_ENABLED = 90;
static const int PROPERTY_BLENDBLOCK_ALPHA_TO_COVERAGE = 91;
static const int PROPERTY_BLENDBLOCK_BLEND_CHANNEL_MASK = 92;
static const int PROPERTY_BLENDBLOCK_TRANSPARENT = 93;
static const int PROPERTY_BLENDBLOCK_SEPARATE_BLEND = 94;
static const int PROPERTY_BLENDBLOCK_SOURCE_BLEND_FACTOR = 95;
static const int PROPERTY_BLENDBLOCK_DEST_BLEND_FACTOR = 96;
static const int PROPERTY_BLENDBLOCK_SOURCE_BLEND_FACTOR_ALPHA = 97;
static const int PROPERTY_BLENDBLOCK_DEST_BLEND_FACTOR_ALPHA = 98;
static const int PROPERTY_BLENDBLOCK_BLEND_OPERATION = 99;
static const int PROPERTY_BLENDBLOCK_BLEND_OPERATION_ALPHA = 100;

// Material and Texture browser
static const int TOOL_SOURCES_LEVEL_X000_PBS = 1;
static const int TOOL_SOURCES_LEVEL_X000_UNLIT = 2;
static const int TOOL_SOURCES_LEVEL_X000_TEXTURE = 3;
static const QString GROUP_NAME_IMPORTED_TEXTURES = QString("Imported resources");
static const QString ACTION_IMPORT_TEXTURES_FROM_DIR = QString("Import from directory");
static const QString ACTION_CONFIGURE = QString("Configure");
static const QString ACTION_ADD_TEXTURES = QString("Add texture file(s)");
static const QString ACTION_EDIT = QString("Edit material");

#endif
