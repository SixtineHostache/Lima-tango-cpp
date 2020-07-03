/*----- PROTECTED REGION ID(Lambda.h) ENABLED START -----*/
//=============================================================================
//
// file :        Lambda.h
//
// description : Include file for the Lambda class
//
// project :     Sls dectector TANGO specific device.
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef Lambda_H
#define Lambda_H

#include <tango.h>

//- YAT/YAT4TANGO
#include <yat4tango/PropertyHelper.h>
#include <yat4tango/DynamicInterfaceManager.h>
#include <yat4tango/InnerAppender.h>

#include "Factory.h"

#include "lima/HwInterface.h"
#include "lima/CtControl.h"
#include "lima/CtAcquisition.h"
#include "lima/CtImage.h"

#include "LambdaInclude.h"
#include "LambdaCamera.h"

using namespace yat4tango;

/*----- PROTECTED REGION END -----*/	//	Lambda.h

/**
 *  Lambda class description:
 *    Device for Lambda detectors from XSpectrum.
 */

namespace Lambda_ns
{
/*----- PROTECTED REGION ID(Lambda::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	Lambda::Additional Class Declarations

class Lambda : public Tango::Device_4Impl
{

/*----- PROTECTED REGION ID(Lambda::Data Members) ENABLED START -----*/

//	Add your own data members

/*----- PROTECTED REGION END -----*/	//	Lambda::Data Members

//	Device property data members
public:
	//	ConfigFilesPath:	Configuration files path used during the camera instanciation.
	string	configFilesPath;
	//	DistortionCorrection:	set distortion correction.<br>
	//  When distortion correction is enabled :<br>
	//  - Large pixels are divided according to predefined denominator. <br>
	//  - The values of the pixels are rounded during division. <br>
	//  - If pixel value is saturated, the division is not applied.<br>
	Tango::DevBoolean	distortionCorrection;
	//	MemorizedEnergyThreshold1:	Only the device could modify this property <br>
	//  The User should never change this property<br>
	Tango::DevFloat	memorizedEnergyThreshold1;

//	Attribute data members
public:
	Tango::DevString	*attr_configFilesPath_read;
	Tango::DevFloat	*attr_readoutTime_read;
	Tango::DevBoolean	*attr_distortionCorrection_read;
	Tango::DevFloat	*attr_energyThreshold1_read;
	Tango::DevString	*attr_operatingMode_read;
	Tango::DevBoolean	*attr_burstMode_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	Lambda(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	Lambda(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	Lambda(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */	
	~Lambda() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Read the device properties from database
	 */
	void get_device_property();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : Lambda::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);
	//--------------------------------------------------------
	/*
	 *	Method      : Lambda::write_attr_hardware()
	 *	Description : Hardware writing for attributes.
	 */
	//--------------------------------------------------------
	virtual void write_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute configFilesPath related methods
 *	Description: Path of configuration file.
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
	virtual void read_configFilesPath(Tango::Attribute &attr);
	virtual bool is_configFilesPath_allowed(Tango::AttReqType type);
/**
 *	Attribute readoutTime related methods
 *	Description: get readout time during image acquisition.<br>
 *               Depends of the operating mode.<br>
 *
 *	Data type:	Tango::DevFloat
 *	Attr type:	Scalar
 */
	virtual void read_readoutTime(Tango::Attribute &attr);
	virtual bool is_readoutTime_allowed(Tango::AttReqType type);
/**
 *	Attribute distortionCorrection related methods
 *	Description: get distortion correction.<br>
 *               When distortion correction is enabled :<br>
 *               - Large pixels are divided according to predefined denominator. <br>
 *               - The values of the pixels are rounded during division. <br>
 *               - If pixel value is saturated, the division is not applied.<br>
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_distortionCorrection(Tango::Attribute &attr);
	virtual bool is_distortionCorrection_allowed(Tango::AttReqType type);
/**
 *	Attribute energyThreshold1 related methods
 *	Description: set/get first energy threshold in eV.<br>
 *               The photon is counted If the energy is above this threshold.<br>
 *
 *	Data type:	Tango::DevFloat
 *	Attr type:	Scalar
 */
	virtual void read_energyThreshold1(Tango::Attribute &attr);
	virtual void write_energyThreshold1(Tango::WAttribute &attr);
	virtual bool is_energyThreshold1_allowed(Tango::AttReqType type);
/**
 *	Attribute operatingMode related methods
 *	Description: get operating mode of the detector:<br>
 *               24bit mode : TwentyFourBit<br>
 *               12bit mode :  ContinuousReadWrite<br>
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
	virtual void read_operatingMode(Tango::Attribute &attr);
	virtual bool is_operatingMode_allowed(Tango::AttReqType type);
/**
 *	Attribute burstMode related methods
 *	Description: get the value of burst mode.<br>
 *               true: 10GE link.<br>
 *               false: 1GE link<br>
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_burstMode(Tango::Attribute &attr);
	virtual bool is_burstMode_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : Lambda::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();



//	Command related methods
public:


/*----- PROTECTED REGION ID(Lambda::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes
private:
	//-------------------------------------------------------------	
    /// Create the static attributes
    void create_static_attributes(void);

    /// Release the static attributes
    void release_static_attributes(void);

    //-------------------------------------------------------------	
    /// Update the hardware with the properties data
    void write_at_init(void);

    //-------------------------------------------------------------	
    /// Force the precompressEnabled option
    void force_precompressEnabled(bool value);

    //-------------------------------------------------------------	
    /**
     * This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
     *	@return	State Code
     *	@exception DevFailed
     */
	Tango::DevState	dev_state();

    /**
     *	method:	SlsJungfrau::manage_devfailed_exception
     *
     *	description: method which manages DevFailed exceptions
     */
    void manage_devfailed_exception(Tango::DevFailed & in_exception, const std::string & in_caller_method_name);

    /**
     *	method:	SlsJungfrau::manage_lima_exception
     *
     *	description: method which manages lima exceptions
     */
    void manage_lima_exception(lima::Exception & in_exception, const std::string & in_caller_method_name);

	//-------------------------------------------------------------	
    // Template methods
	//-------------------------------------------------------------	
    /// Use to update a static attribute and the hardware with a property value
    template< typename T1, typename T2>
    void write_property_in_static_attribute(const std::string & in_attribute_name,
                                            T1 * out_attr_read,
                                            const T2 & in_memorized_property,
                                            void (Lambda_ns::Lambda::*in_write_method)(Tango::WAttribute &));

    /// Use to update a string static attribute and the hardware with a property value
    void write_property_in_string_static_attribute(const std::string & in_attribute_name,
                                                   Tango::DevString * out_attr_read,
                                                   const std::string & in_memorized_property,
                                                   void (Lambda_ns::Lambda::*in_write_method)(Tango::WAttribute &));

protected :	
    //lima OBJECTS
    lima::Lambda::Interface * m_hw    ;
    lima::CtControl         * m_ct    ;
    lima::Lambda::Camera    * m_camera;
	bool                      m_is_device_initialized;
    stringstream              m_status_message       ;

	yat4tango::DynamicInterfaceManager m_dim;

/*----- PROTECTED REGION END -----*/	//	Lambda::Additional Method prototypes
};

/*----- PROTECTED REGION ID(Lambda::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions
#include "Lambda.hpp"

/*----- PROTECTED REGION END -----*/	//	Lambda::Additional Classes Definitions

}	//	End of namespace

#endif   //	Lambda_H
