#ifndef SCRIPT_INIT_TIME_JOB_HPP
#define SCRIPT_INIT_TIME_JOB_HPP

#include "cstdmf/bw_namespace.hpp"


BW_BEGIN_NAMESPACE

namespace Script
{

/**
 *	This class is a job that should be run at script init time.
 *	Simply derive from it and implement the init method and your
 *	job will be run immediately after scripts are initialised.
 *
 *	The rung specified in the constructor indicates how early on
 *	you want your job to run. Negative rungs are for 'before
 *	PyInitialise' and positive ones are for after that time.
 *	(although before PyInitialise ones may not actually be run
 *	before then - this is just to reduce possible conflicts).
 *	Rung zero is reserved for module link initialisations.
 *
 *	If an init time job is constructed after scripts have been
 *	initialised then it currently generates a critical error
 *	(it cannot call its init fn because the derived constructor
 *	 hasn't finished)
 */

// childrens:
// • UserDataObjectIniter:
//   • programming/bigworld/lib/chunk/user_data_object.cpp:56
//
// • PyEmptyClassObject:
//   • programming/bigworld/lib/entitydef/data_instances/class_data_instance.cpp:82
//
// • InitVNV
//
// • PyModuleMethodLink:
//   • PY_MODULE_FUNCTION[_WITH_DOC]
//   • PY_MODULE_FUNCTION_WITH_KEYWORDS[_WITH_DOC]
//   • PY_AUTO_MODULE_FUNCTION[_WITH_DOC]
//   • PY_MODULE_FUNCTION_ALIAS[_WITH_DOC]
//   • PY_MODULE_STATIC_METHOD_DECLARE[_WITH_DOC]
//   • PY_UNPICKLING_FACTORY_DECLARE
//   • PY_AUTO_MODULE_STATIC_METHOD_DECLARE
//   • PY_MODULE_STATIC_METHOD[_WITH_DOC]
//   • PY_UNPICKLING_FUNCTION[_WITH_DOC]
//   • PY_AUTO_UNPICKLING_FUNCTION[_WITH_DOC]
//   • PY_AUTO_UNPICKLING_FACTORY_DECLARE
//   • PY_UNPICKLING_FACTORY
//
// • PyModuleResultLink:
//   • PY_MODULE_ATTRIBUTE
//
// • BuildEntityTypeDict
//   • programming/bigworld/server/cellapp/entity.cpp:1162
//
// • PyFactoryMethodLink
//   • programming/bigworld/lib/fmodsound/py_sound.cpp:193
//   • programming/bigworld/lib/fmodsound/py_sound_parameter.cpp:87
//   • programming/bigworld/lib/fmodsound/py_music_system.cpp:153
//   • PY_FACTORY_METHOD_LINK_DECLARE()
//   • PY_FACTORY_NAMED(THIS_CLASS, METHOD_NAME, MODULE_NAME)
//
// • TempPyVectorInit: unused
// • PyModuleAttrLink: unused
class InitTimeJob
{
public:
	InitTimeJob( int rung );
	virtual ~InitTimeJob();

	virtual void init() = 0;
};

void runInitTimeJobs();

/**
 *	This class is a job that should be run at script fini time.
 *	Simply derive from it and implement the fini method and your
 *	job will be run immediately after scripts are finalised.
 *
 *	The rung specified in the constructor indicates how early on
 *	you want your job to run. Negative rungs are for 'after
 *	PyFinalize' and positive ones are for before that time.
 */
class FiniTimeJob
{
public:
	FiniTimeJob( int rung = 1 );
	virtual ~FiniTimeJob();

	virtual void fini() = 0;
};

void runFiniTimeJobs();

} // namespace Script

BW_END_NAMESPACE

#endif // SCRIPT_INIT_TIME_JOB_HPP
