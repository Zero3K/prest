//2017-01-13 19:24:03.013076
//Generated by modules/probetools/scripts/preprocess_probes.py
//Don't modify unless you know what you do. Better to run script.

#include "probedefines.h"

static const char* probedefines_get_probemodule(int location)
{
	//Could be done faster by direct lookup in array, but code is only used when writing report
	switch(location)
	{
		case OP_PROBE_ROOT : return "none";
		case URL_AUTOPROXYCONFIG_LOADHANDLER_EXECUTESCRIPT : return "autoproxy";
		case OP_PROBE_VISUALDEVICE_DISPLAY : return "display";
		case OP_PROBE_PAINTLISTENER_ONPAINT : return "display";
		case OP_PROBE_FRAMESDOC_FLUSHINLINEELM : return "doc";
		case OP_PROBE_FRAMESDOCUMENT_REFLOW : return "doc";
		case OP_PROBE_FRAMESDOCUMENT_HANDLELOADING : return "doc";
		case OP_PROBE_FRAMESDOCUMENT_LOADDATA : return "doc";
		case OP_PROBE_FRAMESDOCUMENT_DISPLAY : return "doc";
		case OP_PROBE_HTML_DOCUMENT_DISPLAY : return "doc";
		case OP_PROBE_FRAMESDOCUMENT_GETNEWIFRAME : return "doc";
		case OP_PROBE_FRAMESDOCUMENT_CREATEESENVIRONMENT : return "doc";
		case OP_PROBE_DOCUMENTMANAGER_HANDLELOADING : return "dochand";
		case OP_PROBE_DOCUMENTMANAGER_HANDLEDATALOADED : return "dochand";
		case OP_PROBE_DOCUMENTMANAGER_SETCURRENTDOC : return "dochand";
		case OP_PROBE_FDELM_GETHTMLELEMENT : return "dochand";
		case OP_PROBE_DOM_FREEELEMENTTREE : return "dom";
		case OP_PROBE_DOM_ENVIRONMENTIMPL_ELEMENTINSERTEDINTODOCUMENT : return "dom";
		case OP_PROBE_DOM_USERJSSCRIPT_WOULDUSE : return "dom";
		case OP_PROBE_DOM_USERJSSOURCE_MAKE : return "dom";
		case OP_PROBE_DOM_USERJSMANAGER_LOADFILE : return "dom";
		case OP_PROBE_DOM_USERJSMANAGER_LOADSCRIPTS : return "dom";
		case OP_PROBE_DOM_USERJSMANAGER_RUNSCRIPTS : return "dom";
		case OP_PROBE_DOM_USERJSMANAGER_WOULDACTIVATEEXTENSION : return "dom";
		case ES_EXECUTECONTEXT : return "ecmascript";
		case ES_COMPILEPROGRAM : return "ecmascript";
		case ES_COMPILEPROGRAM_L : return "ecmascript";
		case ESMM_COLLECT : return "ecmascript";
		case ES_FOREIGN_OBJECT_FOREIGNGET : return "ecmascript";
		case ES_FOREIGN_OBJECT_FOREIGNPUT : return "ecmascript";
		case ES_FOREIGN_FUNCTION_CALLORCONSTRUCT : return "ecmascript";
		case ES_FOREIGN_FUNCTION_RESTARTCALLORCONSTRUCT : return "ecmascript";
		case OP_PROBE_GADGETS_ISTHISA : return "gadgets";
		case OP_PROBE_GADGETS_ISTHISAGADGETPATH : return "gadgets";
		case OP_PROBE_GADGETS_ISTHISAGADGETRESOURCE : return "gadgets";
		case OP_PROBE_GADGETS_FINDORCREATECLASSWITHPATH : return "gadgets";
		case OP_PROBE_GADGETS_CREATECLASSWITHPATH : return "gadgets";
		case OP_PROBE_GADGETS_CREATEGADGET : return "gadgets";
		case OP_PROBE_GADGETS_HELPLOADALLGADGETS : return "gadgets";
		case OP_PROBE_HC_DESTROY : return "hardcore";
		case OP_PROBE_HC_DESTROY_MODULE : return "hardcore";
		case OP_PROBE_HC_INIT : return "hardcore";
		case OP_PROBE_HC_INIT_MODULE : return "hardcore";
		case OP_PROBE_HC_MSG : return "hardcore";
		case OP_PROBE_IMG_LZWCODEDECODER_DECODECODE : return "img";
		case OP_PROBE_IMG_LZWSTRINGTABLE_OUTPUTSTRING : return "img";
		case OP_PROBE_IMG_GIF_DECODE_DATA : return "img";
		case OP_PROBE_IMG_JPG_DECODE_DATA : return "img";
		case OP_PROBE_IMG_PNG_DECODE_DATA : return "img";
		case OP_PROBE_IMG_COPYTO : return "img";
		case OP_PROBE_IMG_COPYTO2 : return "img";
		case OP_PROBE_IMG_COPYTOTRANSPARENT : return "img";
		case OP_PROBE_DOC_LAYOUTPROPERTIES_INHERIT : return "layout";
		case OP_PROBE_HTML_LAYOUT_SETDISPLAYPROPERTIES : return "layout";
		case OP_PROBE_CONTAINER_TRAVERSE : return "layout";
		case OP_PROBE_BLOCKBOX_TRAVERSE : return "layout";
		case OP_PROBE_FLOATINGBOX_TRAVERSE : return "layout";
		case OP_PROBE_ABSOLUTEPOSITIONEDBOX_TRAVERSE : return "layout";
		case OP_PROBE_TABLECONTENT_TRAVERSE : return "layout";
		case OP_PROBE_TABLEROWGROUPBOX_TRAVERSE : return "layout";
		case OP_PROBE_TABLEROWBOX_TRAVERSEROW : return "layout";
		case OP_PROBE_TABLECELLBOX_TRAVERSECELL : return "layout";
		case OP_PROBE_DOC_AREATRAVERSALOBJECT_ENTERVERTICALBOX : return "layout";
		case OP_PROBE_HTMLAYOUTPROPERTIES_SETCSSPROPERTIESFROMHTML : return "layout";
		case OP_PROBE_HTMLAYOUTPROPERTIES_GETCSSPROPERTIES : return "layout";
		case OP_PROBE_TRAVERSALOBJECT_TRAVERSE : return "layout";
		case OP_PROBE_TABLECELLBOX_COMPUTECELLY : return "layout";
		case OP_PROBE_TABLECELLBOX_GETCELLYOFFSET : return "layout";
		case OP_PROBE_TABLECELLBOX_GETBOUNDINGBOX : return "layout";
		case OP_PROBE_VERTICALBOX_GETBOUNDINGBOX : return "layout";
		case OP_PROBE_TABLECELLBOX_GETHEIGHT : return "layout";
		case OP_PROBE_TABLEROWGROUPBOX_GETROWSPANNEDHEIGHT : return "layout";
		case OP_PROBE_LAYOUTPROPERTIES_CREATECHILDLAYOUTBOX : return "layout";
		case OP_PROBE_BOX_GETCONTAININGELEMENT : return "layout";
		case OP_PROBE_REFLOW_COUNT : return "layout";
		case OP_PROBE_HLDOCPROFILE_INSERTELEMENT : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_SUCACTUAL : return "logdoc";
		case OP_PROBE_DOCTREE_NEXTSIBLING : return "logdoc";
		case OP_PROBE_CSSPROPERTYITEM_LOADCSSPROPERTIES : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_CLEAN : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_CLEANLOCAL : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_CLEANREFS : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_CONSTRUCTATTRVAL : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_CONSTRUCTL : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_CONSTRUCTL_1 : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_CONSTRUCTL_2 : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_FINDATTR : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_FINDSPECIALATTRINDEX : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_FREELAYOUTLOCAL : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_GETSPECIALATTR : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_LOADALLCSS : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_LOADTOENDTAG : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_LOAD : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_LOADSTYLE : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_LOADSCRIPT1 : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_LOADSCRIPT2 : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_LOADEXTERNALSCRIPT1 : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_LOADEXTERNALSCRIPT2 : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_FREE : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_GETATTR : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_GETCELLROWSPAN : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_GETCLASSATTRIBUTE : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_DOMPOS_REFLOW : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_REMOVELAYOUTBOX : return "logdoc";
		case OP_PROBE_HTML_ELEMENT_SETINNERHTML : return "logdoc";
		case OP_PROBE_HTML5BUFFER_GETLINEANDPOS : return "logdoc";
		case OP_PROBE_HTML5BUFFER_INCCURRENTPOS : return "logdoc";
		case OP_PROBE_HTML5PARSER_APPENDDATA : return "logdoc";
		case OP_PROBE_HTML5PARSER_PARSEL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_GETNEXTTOKENL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_TOKENIZEDATAL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_TOKENIZETAGOPENL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_TOKENIZEENDTAGOPENL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_TOKENIZETAGNAMEL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_TOKENIZEBEFOREATTRNAMEL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_TOKENIZEATTRNAMEL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_TOKENIZEAFTERATTRNAMEL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_TOKENIZEBEFOREATTRVALL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_TOKENIZEATTRVALQUOTEDL : return "logdoc";
		case OP_PROBE_HTML5TOKENIZER_TOKENIZEAFTERATTRVALQUOTEDL : return "logdoc";
		case OP_PROBE_HTML5TOKENWRAPPER_GETATTRIBUTEL : return "logdoc";
		case OP_PROBE_HTML5TREEBUILDER_ADDTEXTFROMTOKENL : return "logdoc";
		case OP_PROBE_HTML5TREEBUILDER_BUILDTREE : return "logdoc";
		case OP_PROBE_HTML5TREEBUILDER_BUILDTREEFRAGMENTL : return "logdoc";
		case OP_PROBE_HTML5TREEBUILDER_CREATEELEMENTL1 : return "logdoc";
		case OP_PROBE_HTML5TREEBUILDER_HANDLESPECIALENDTAG : return "logdoc";
		case OP_PROBE_HTML5TREEBUILDER_INSERTNODEL : return "logdoc";
		case OP_PROBE_HTML5TREEBUILDER_INSERTSTARTTAGL : return "logdoc";
		case OP_PROBE_HTML5TREEBUILDER_INSERTTEXTL : return "logdoc";
		case OP_PROBE_HTML5TREEBUILDER_PUSHOPENELML : return "logdoc";
		case OP_PROBE_LOGDOC_ESFLUSH : return "logdoc";
		case OP_PROBE_LOGDOC_LOADHTML : return "logdoc";
		case OP_PROBE_LOGDOC_LOAD : return "logdoc";
		case OP_PROBE_LOGDOC_REFLOW : return "logdoc";
		case OP_PROBE_LOGDOC_GETURLATTR : return "logdoc";
		case OP_PROBE_LOGDOC_RESOLVEURL : return "logdoc";
		case OP_PROBE_LOGDOC_DERIVEBASEURL : return "logdoc";
		case OP_PROBE_LOGDOC_CREATEURLFROMSTRING : return "logdoc";
		case OP_PROBE_LOGDOC_CREATEURLFROMSTRING2 : return "logdoc";
		case OP_PROBE_LOGDOC_PARSEFRAGMENT : return "logdoc";
		case OP_PROBE_MDEFONT_DRAWSTRING : return "mdefont";
		case OP_PROBE_MDEFONT_STRINGWIDTH : return "mdefont";
		case OP_PROBE_MDEFONT_PROCESS_STRING : return "mdefont";
		case OP_PROBE_OPMEMPOOLS_FREE : return "memory";
		case OP_PROBE_PLUGIN_LOADDATA : return "ns4plugins";
		case OP_PROBE_SEARCH_ENGINE_STRINGTABLE_INSERT : return "search_engine";
		case OP_PROBE_SEARCH_ENGINE_STRINGTABLE_DELETE : return "search_engine";
		case OP_PROBE_SEARCH_ENGINE_STRINGTABLE_PREFLUSH : return "search_engine";
		case OP_PROBE_SEARCH_ENGINE_STRINGTABLE_FLUSH : return "search_engine";
		case OP_PROBE_SEARCH_ENGINE_STRINGTABLE_COMMIT : return "search_engine";
		case OP_PROBE_SEARCH_ENGINE_STRINGTABLE_SEARCH : return "search_engine";
		case OP_PROBE_CSSCOLLECTION_GETPROPERTIES : return "style";
		case OP_PROBE_CSS_SIMPLESELECTOR_MATCH : return "style";
		case OP_PROBE_CSS_SIMPLESELECTOR_MATCHTYPE : return "style";
		case OP_PROBE_CSS_SIMPLESELECTOR_MATCHATTRS : return "style";
		case OP_PROBE_CSS_SELECTOR_MATCH1 : return "style";
		case OP_PROBE_CSS_SELECTOR_MATCH2 : return "style";
		case OP_PROBE_CSS_GETPROPERTIES : return "style";
		case OP_PROBE_CSSCOLLECTION_GETDEFAULTSTYLE : return "style";
		case OP_PROBE_CSS_STYLERULE_MATCH : return "style";
		case OP_PROBE_CSS_SELECTPROPERTY : return "style";
		case OP_PROBE_CSS_SELECTSELECTIONPROPERTY : return "style";
		case OP_PROBE_CSS_RULEITERATOR_PREV : return "style";
		case OP_PROBE_CSS_MATCHATTRS_NTH_CHILD : return "style";
		case OP_PROBE_CSS_MATCHATTRS_ID : return "style";
		case OP_PROBE_SVG_DRAW_TEXT : return "svg";
		case OP_PROBE_SVG_RENDER : return "svg";
		case OP_PROBE_SVG_FPS : return "svg";
		case OP_PROBE_URL_MANAGER_AUTOSAVECACHE_L : return "url";
		case OP_PROBE_URL_REP_WRITECACHEDATA_L : return "url";
		case OP_PROBE_URL_DATASTORAGE_WRITECACHEDATA_L : return "url";
		case OP_PROBE_URL_MANAGER_WRITEFILES : return "url";
		case OP_PROBE_UTIL_OP_FILE_CONSTRUCT : return "util";
		case OP_PROBE_UTIL_OP_FILE_CONSTRUCTENCRYPTED : return "util";
		case OP_PROBE_UTIL_OP_FILE_CONSTRUCTPATH : return "util";
		case OP_PROBE_UTIL_OP_FILE_TYPE : return "util";
		case OP_PROBE_UTIL_OP_FILE_ISWRITABLE : return "util";
		case OP_PROBE_UTIL_OP_FILE_OPEN : return "util";
		case OP_PROBE_UTIL_OP_FILE_ISOPEN : return "util";
		case OP_PROBE_UTIL_OP_FILE_CLOSE : return "util";
		case OP_PROBE_UTIL_OP_FILE_EOF : return "util";
		case OP_PROBE_UTIL_OP_FILE_EXISTS : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETFILEPOS : return "util";
		case OP_PROBE_UTIL_OP_FILE_SETFILEPOS : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETFILELENGTH : return "util";
		case OP_PROBE_UTIL_OP_FILE_SETFILELENGTH : return "util";
		case OP_PROBE_UTIL_OP_FILE_WRITE : return "util";
		case OP_PROBE_UTIL_OP_FILE_READ : return "util";
		case OP_PROBE_UTIL_OP_FILE_READLINE : return "util";
		case OP_PROBE_UTIL_OP_FILE_CREATECOPY : return "util";
		case OP_PROBE_UTIL_OP_FILE_SAFECLOSE : return "util";
		case OP_PROBE_UTIL_OP_FILE_SAFEREPLACE : return "util";
		case OP_PROBE_UTIL_OP_FILE_COPY : return "util";
		case OP_PROBE_UTIL_OP_FILE_DELETE : return "util";
		case OP_PROBE_UTIL_OP_FILE_DELETEFOLDER : return "util";
		case OP_PROBE_UTIL_OP_FILE_COPYCONTENTS : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETFOLDERLIST : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETFULLPATH : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETSERIALIZEDNAME : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETLOCALIZEDPATH : return "util";
		case OP_PROBE_UTIL_OP_FILE_MAKEDIRECTORY : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETNAME : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETDIRECTORY : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETLASTMODIFIED : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETMODE1 : return "util";
		case OP_PROBE_UTIL_OP_FILE_GETMODE2 : return "util";
		case OP_PROBE_UTIL_OP_FILE_FLUSH : return "util";
		case OP_PROBE_UTIL_OP_FILE_PRINT : return "util";
		case OP_PROBE_UTIL_OP_FILE_SETLISTENER : return "util";
		case OP_PROBE_UTIL_OP_FILE_READASYNC : return "util";
		case OP_PROBE_UTIL_OP_FILE_WRITEASYNC : return "util";
		case OP_PROBE_UTIL_OP_FILE_DELETEASYNC : return "util";
		case OP_PROBE_UTIL_OP_FILE_FLUSHASYNC : return "util";
		case OP_PROBE_UTIL_OP_FILE_SYNC : return "util";
		case OP_PROBE_UTIL_OP_FILE_ISASYNCINPROGRESS : return "util";
		case OP_PROBE_UTIL_OP_FILE_ONDATAREAD : return "util";
		case OP_PROBE_UTIL_OP_FILE_ONDATAWRITTEN : return "util";
		case OP_PROBE_UTIL_OP_FILE_ONDELETE : return "util";
		case OP_PROBE_UTIL_OP_FILE_ONFLUSHED : return "util";
		default: OP_ASSERT(!"Unknown probe module! Something is wrong."); return 0;
	}
}

