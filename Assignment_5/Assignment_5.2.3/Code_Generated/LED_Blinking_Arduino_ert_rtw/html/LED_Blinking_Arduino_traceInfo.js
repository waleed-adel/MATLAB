function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Pulse
Generator */
	this.urlHashMap["LED_Blinking_Arduino:12"] = "LED_Blinking_Arduino.c:33,45,76&LED_Blinking_Arduino.h:42,51,54,57,60&LED_Blinking_Arduino_data.c:25,28,31,34";
	/* <Root>/Scope */
	this.urlHashMap["LED_Blinking_Arduino:13"] = "msg=rtwMsg_SimulationReducedBlock&block=LED_Blinking_Arduino:13";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["LED_Blinking_Arduino:1:114"] = "LED_Blinking_Arduino.c:47,58";
	/* <S1>/PWM */
	this.urlHashMap["LED_Blinking_Arduino:1:215"] = "LED_Blinking_Arduino.c:60,79&LED_Blinking_Arduino.h:48&LED_Blinking_Arduino_data.c:22";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "LED_Blinking_Arduino"};
	this.sidHashMap["LED_Blinking_Arduino"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "LED_Blinking_Arduino:1"};
	this.sidHashMap["LED_Blinking_Arduino:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/PWM"] = {sid: "LED_Blinking_Arduino:1"};
	this.sidHashMap["LED_Blinking_Arduino:1"] = {rtwname: "<Root>/PWM"};
	this.rtwnameHashMap["<Root>/Pulse Generator"] = {sid: "LED_Blinking_Arduino:12"};
	this.sidHashMap["LED_Blinking_Arduino:12"] = {rtwname: "<Root>/Pulse Generator"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "LED_Blinking_Arduino:13"};
	this.sidHashMap["LED_Blinking_Arduino:13"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "LED_Blinking_Arduino:1:116"};
	this.sidHashMap["LED_Blinking_Arduino:1:116"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "LED_Blinking_Arduino:1:114"};
	this.sidHashMap["LED_Blinking_Arduino:1:114"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/PWM"] = {sid: "LED_Blinking_Arduino:1:215"};
	this.sidHashMap["LED_Blinking_Arduino:1:215"] = {rtwname: "<S1>/PWM"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
