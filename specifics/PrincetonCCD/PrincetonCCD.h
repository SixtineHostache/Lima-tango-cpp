//=============================================================================
//
// file :        PrincetonCCD.h
//
// description : Include for the PrincetonCCD class.
//
// project :	Device specific for Princeton CCD detector
//
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// SVN only:
// $HeadURL: $
//
// CVS only:
// $Source:  $
// $Log:  $
//
// copyleft :    Synchrotron SOLEIL 
//               L'Orme des merisiers - Saint Aubin
//         BP48 - 91192 Gif sur Yvette
//               FRANCE
//
//=============================================================================
//
//          This file is generated by POGO
//    (Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================
#ifndef _PRINCETONCCD_H
#define _PRINCETONCCD_H


//using namespace Tango;

/**
 * @author    $Author:  $
 * @version    $Revision:  $
 */

 //    Add your own constant definitions here.
 //-----------------------------------------------
#include "tango.h"
#include "Factory.h"

//- YAT/YAT4TANGO
#include <yat4tango/PropertyHelper.h>


#include "lima/HwInterface.h"
#include "lima/CtControl.h"
#include "lima/CtAcquisition.h"
#include "lima/CtImage.h"
#include <RoperScientificInterface.h>

#define MAX_ATTRIBUTE_STRING_LENGTH     256

using namespace lima;
using namespace std;
using namespace yat4tango;

namespace PrincetonCCD_ns
{

/**
 * Class Description:
 * 
 */

/*
 *	Device States Description:
*  Tango::INIT :
*  Tango::STANDBY :
*  Tango::FAULT :
*  Tango::RUNNING :
 */


class PrincetonCCD: public Tango::Device_4Impl
{
public :
    //    Add your own data members here
    //-----------------------------------------
        Tango::DevUShort            attr_gain_cache;
        Tango::DevDouble            attr_temperatureTarget_cache;

    //    Here is the Start of the automatic code generation part
    //-------------------------------------------------------------    
/**
 *    @name attributes
 *    Attribute member data.
 */
//@{
		Tango::DevString	*attr_internalAcquisitionMode_read;
		Tango::DevString	attr_internalAcquisitionMode_write;
		Tango::DevString	*attr_shutterMode_read;
		Tango::DevString	attr_shutterMode_write;
		Tango::DevDouble	*attr_temperature_read;
		Tango::DevDouble	*attr_temperatureTarget_read;
		Tango::DevDouble	attr_temperatureTarget_write;
		Tango::DevUShort	*attr_gain_read;
		Tango::DevUShort	attr_gain_write;
		Tango::DevString	*attr_currentRate_read;
//@}

/**
 * @name Device properties
 * Device properties member data.
 */
//@{
/**
 *	Detector Number.
 */
	string	detectorNum;
/**
 *	Define which Temperature must be used at init device<br>
 *	- DEFAULT : use DefaultTemperatureTarget value<br>
 *	- MEMORIZED : use MemorizedTemperatureTarget value<br>
 */
	string	temperatureTargetAtInit;
/**
 *	Define the Temperature Target of the Cooler at Init device if TemperatureAtInit = DEFAULT. (in Celsius)<br>
 */
	Tango::DevDouble	defaultTemperatureTarget;
/**
 *	Memorize/Define the internalAcquisitionMode attribute at Init device<br>
 *	Availables values :<br>
 *	- STANDARD<br>
 *	- FOCUS<br>
 */
	string	memorizedInternalAcquisitionMode;
/**
 *	Memorize/Define the SHUTTERMode attribute at Init device<br>
 *	Availables values :<br>
 *	- OPEN_NEVER<br>
 *	- OPEN_PRE_EXPOSURE<br>
 *	- OPEN_NO_CHANGE<br>
 */
	string	memorizedShutterMode;
/**
 *	Define the Temperature Target of the Cooler at Init device if TemperatureAtInit = MEMORIZED. (in Celsius)<br>
 */
	Tango::DevDouble	memorizedTemperatureTarget;
/**
 *	
 */
	Tango::DevUShort	memorizedGain;
/**
 *	
 */
	Tango::DevUShort	memorizedADCMode;
//@}

/**
 *    @name Device properties
 *    Device property member data.
 */
//@{
//@}

/**@name Constructors
 * Miscellaneous constructors */
//@{
/**
 * Constructs a newly allocated Command object.
 *
 *    @param cl    Class.
 *    @param s     Device Name
 */
    PrincetonCCD(Tango::DeviceClass *cl,string &s);
/**
 * Constructs a newly allocated Command object.
 *
 *    @param cl    Class.
 *    @param s     Device Name
 */
    PrincetonCCD(Tango::DeviceClass *cl,const char *s);
/**
 * Constructs a newly allocated Command object.
 *
 *    @param cl    Class.
 *    @param s     Device name
 *    @param d    Device description.
 */
    PrincetonCCD(Tango::DeviceClass *cl,const char *s,const char *d);
//@}

/**@name Destructor
 * Only one destructor is defined for this class */
//@{
/**
 * The object destructor.
 */    
    ~PrincetonCCD() {delete_device();};
/**
 *    will be called at device destruction or at init command.
 */
    void delete_device();
//@}

    
/**@name Miscellaneous methods */
//@{
/**
 *    Initialize the device
 */
    virtual void init_device();
/**
 *    Always executed method before execution command method.
 */
    virtual void always_executed_hook();

//@}

/**
 * @name PrincetonCCD methods prototypes
 */

//@{
/**
 *	Hardware acquisition for attributes.
 */
	virtual void read_attr_hardware(vector<long> &attr_list);
/**
 *	Extract real attribute values for internalAcquisitionMode acquisition result.
 */
	virtual void read_internalAcquisitionMode(Tango::Attribute &attr);
/**
 *	Write internalAcquisitionMode attribute values to hardware.
 */
	virtual void write_internalAcquisitionMode(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for shutterMode acquisition result.
 */
	virtual void read_shutterMode(Tango::Attribute &attr);
/**
 *	Write shutterMode attribute values to hardware.
 */
	virtual void write_shutterMode(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for temperature acquisition result.
 */
	virtual void read_temperature(Tango::Attribute &attr);
/**
 *	Extract real attribute values for temperatureTarget acquisition result.
 */
	virtual void read_temperatureTarget(Tango::Attribute &attr);
/**
 *	Write temperatureTarget attribute values to hardware.
 */
	virtual void write_temperatureTarget(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for gain acquisition result.
 */
	virtual void read_gain(Tango::Attribute &attr);
/**
 *	Write gain attribute values to hardware.
 */
	virtual void write_gain(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for currentRate acquisition result.
 */
	virtual void read_currentRate(Tango::Attribute &attr);
/**
 *	Read/Write allowed for internalAcquisitionMode attribute.
 */
	virtual bool is_internalAcquisitionMode_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for shutterMode attribute.
 */
	virtual bool is_shutterMode_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for temperature attribute.
 */
	virtual bool is_temperature_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for temperatureTarget attribute.
 */
	virtual bool is_temperatureTarget_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for gain attribute.
 */
	virtual bool is_gain_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for currentRate attribute.
 */
	virtual bool is_currentRate_allowed(Tango::AttReqType type);
/**
 *	Execution allowed for SetADCMode command.
 */
	virtual bool is_SetADCMode_allowed(const CORBA::Any &any);
/**
 * This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *	@return	State Code
 *	@exception DevFailed
 */
	virtual Tango::DevState	dev_state();
/**
 * Define the ADC frequency .<br>
 *	Available values are :
 *	0-> 1MHz<br>
 *	1-> 100Khz
 *	@param	argin	
 *	@exception DevFailed
 */
	void	set_adcmode(Tango::DevUShort);

/**
 *	Read the device properties from database
 */
	 void get_device_property();
//@}

    //    Here is the end of the automatic code generation part
    //-------------------------------------------------------------    
	// return true if the device is correctly initialized in init_device
	bool is_device_initialized(){return m_is_device_initialized;};


protected :    
    //    Add your own data members here
    //-----------------------------------------

	
    //state & status stuff
    bool                        m_is_device_initialized ;
    stringstream                m_status_message;
    //lima OBJECTS
    RoperScientific::Interface* m_hw;
    CtControl*                  m_ct;
    RoperScientific::Camera*    m_camera;	
	
    std::string                 m_acquisition_mode;	//aquisition mode name 	(STANDARD, CONTINUOUS, FOCUS)
    std::string	                m_shutter_mode;	 //shutter mode name 	(OPEN_NEVER, OPEN_PRE_EXPOSURE, OPEN_NO_CHANGE)
        
    
};

}    // namespace_ns

#endif    // _PRINCETONCCD_H
