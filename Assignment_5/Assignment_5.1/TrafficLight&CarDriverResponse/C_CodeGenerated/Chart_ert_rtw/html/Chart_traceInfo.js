function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>:32 */
	this.urlHashMap["TrafficLight_SFD:1:32"] = "Chart.c:65,112";
	/* <S1>:12 */
	this.urlHashMap["TrafficLight_SFD:1:12"] = "Chart.c:80,128";
	/* <S1>:33 */
	this.urlHashMap["TrafficLight_SFD:1:33"] = "Chart.c:73,95";
	/* <S1>:34 */
	this.urlHashMap["TrafficLight_SFD:1:34"] = "Chart.c:88,99";
	/* <S1>:3 */
	this.urlHashMap["TrafficLight_SFD:1:3"] = "Chart.c:103,144";
	/* <S1>:5 */
	this.urlHashMap["TrafficLight_SFD:1:5"] = "Chart.c:119,167";
	/* <S1>:1 */
	this.urlHashMap["TrafficLight_SFD:1:1"] = "Chart.c:135";
	/* <S1>:4 */
	this.urlHashMap["TrafficLight_SFD:1:4"] = "Chart.c:155,176";
	/* <S1>:2 */
	this.urlHashMap["TrafficLight_SFD:1:2"] = "Chart.c:60";
	/* <S1>:6 */
	this.urlHashMap["TrafficLight_SFD:1:6"] = "Chart.c:139";
	/* <S1>:9 */
	this.urlHashMap["TrafficLight_SFD:1:9"] = "Chart.c:162";
	/* <S1>:8 */
	this.urlHashMap["TrafficLight_SFD:1:8"] = "Chart.c:151";
	/* <S1>:30 */
	this.urlHashMap["TrafficLight_SFD:1:30"] = "Chart.c:123";
	/* <S1>:28 */
	this.urlHashMap["TrafficLight_SFD:1:28"] = "Chart.c:107";
	/* <S1>:29 */
	this.urlHashMap["TrafficLight_SFD:1:29"] = "Chart.c:69";
	/* <S1>:31 */
	this.urlHashMap["TrafficLight_SFD:1:31"] = "Chart.c:84";
	/* <S1>:29:1 */
	this.urlHashMap["TrafficLight_SFD:1:29:1"] = "Chart.c:66,67";
	/* <S1>:33:1 */
	this.urlHashMap["TrafficLight_SFD:1:33:1"] = "Chart.c:74";
	/* <S1>:31:1 */
	this.urlHashMap["TrafficLight_SFD:1:31:1"] = "Chart.c:81,82";
	/* <S1>:34:1 */
	this.urlHashMap["TrafficLight_SFD:1:34:1"] = "Chart.c:89";
	/* <S1>:28:1 */
	this.urlHashMap["TrafficLight_SFD:1:28:1"] = "Chart.c:104,105";
	/* <S1>:32:1 */
	this.urlHashMap["TrafficLight_SFD:1:32:1"] = "Chart.c:113";
	/* <S1>:30:1 */
	this.urlHashMap["TrafficLight_SFD:1:30:1"] = "Chart.c:120,121";
	/* <S1>:12:1 */
	this.urlHashMap["TrafficLight_SFD:1:12:1"] = "Chart.c:129";
	/* <S1>:6:1 */
	this.urlHashMap["TrafficLight_SFD:1:6:1"] = "Chart.c:136,137";
	/* <S1>:3:1 */
	this.urlHashMap["TrafficLight_SFD:1:3:1"] = "Chart.c:145";
	/* <S1>:8:1 */
	this.urlHashMap["TrafficLight_SFD:1:8:1"] = "Chart.c:148,149";
	/* <S1>:4:1 */
	this.urlHashMap["TrafficLight_SFD:1:4:1"] = "Chart.c:156";
	/* <S1>:9:1 */
	this.urlHashMap["TrafficLight_SFD:1:9:1"] = "Chart.c:159,160";
	/* <S1>:5:1 */
	this.urlHashMap["TrafficLight_SFD:1:5:1"] = "Chart.c:168";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Chart"};
	this.sidHashMap["Chart"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "TrafficLight_SFD:1"};
	this.sidHashMap["TrafficLight_SFD:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S1>:32"] = {sid: "TrafficLight_SFD:1:32"};
	this.sidHashMap["TrafficLight_SFD:1:32"] = {rtwname: "<S1>:32"};
	this.rtwnameHashMap["<S1>:12"] = {sid: "TrafficLight_SFD:1:12"};
	this.sidHashMap["TrafficLight_SFD:1:12"] = {rtwname: "<S1>:12"};
	this.rtwnameHashMap["<S1>:33"] = {sid: "TrafficLight_SFD:1:33"};
	this.sidHashMap["TrafficLight_SFD:1:33"] = {rtwname: "<S1>:33"};
	this.rtwnameHashMap["<S1>:34"] = {sid: "TrafficLight_SFD:1:34"};
	this.sidHashMap["TrafficLight_SFD:1:34"] = {rtwname: "<S1>:34"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "TrafficLight_SFD:1:3"};
	this.sidHashMap["TrafficLight_SFD:1:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "TrafficLight_SFD:1:5"};
	this.sidHashMap["TrafficLight_SFD:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "TrafficLight_SFD:1:1"};
	this.sidHashMap["TrafficLight_SFD:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "TrafficLight_SFD:1:4"};
	this.sidHashMap["TrafficLight_SFD:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "TrafficLight_SFD:1:2"};
	this.sidHashMap["TrafficLight_SFD:1:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "TrafficLight_SFD:1:6"};
	this.sidHashMap["TrafficLight_SFD:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "TrafficLight_SFD:1:9"};
	this.sidHashMap["TrafficLight_SFD:1:9"] = {rtwname: "<S1>:9"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "TrafficLight_SFD:1:8"};
	this.sidHashMap["TrafficLight_SFD:1:8"] = {rtwname: "<S1>:8"};
	this.rtwnameHashMap["<S1>:30"] = {sid: "TrafficLight_SFD:1:30"};
	this.sidHashMap["TrafficLight_SFD:1:30"] = {rtwname: "<S1>:30"};
	this.rtwnameHashMap["<S1>:28"] = {sid: "TrafficLight_SFD:1:28"};
	this.sidHashMap["TrafficLight_SFD:1:28"] = {rtwname: "<S1>:28"};
	this.rtwnameHashMap["<S1>:29"] = {sid: "TrafficLight_SFD:1:29"};
	this.sidHashMap["TrafficLight_SFD:1:29"] = {rtwname: "<S1>:29"};
	this.rtwnameHashMap["<S1>:31"] = {sid: "TrafficLight_SFD:1:31"};
	this.sidHashMap["TrafficLight_SFD:1:31"] = {rtwname: "<S1>:31"};
	this.rtwnameHashMap["<S1>:29:1"] = {sid: "TrafficLight_SFD:1:29:1"};
	this.sidHashMap["TrafficLight_SFD:1:29:1"] = {rtwname: "<S1>:29:1"};
	this.rtwnameHashMap["<S1>:33:1"] = {sid: "TrafficLight_SFD:1:33:1"};
	this.sidHashMap["TrafficLight_SFD:1:33:1"] = {rtwname: "<S1>:33:1"};
	this.rtwnameHashMap["<S1>:31:1"] = {sid: "TrafficLight_SFD:1:31:1"};
	this.sidHashMap["TrafficLight_SFD:1:31:1"] = {rtwname: "<S1>:31:1"};
	this.rtwnameHashMap["<S1>:34:1"] = {sid: "TrafficLight_SFD:1:34:1"};
	this.sidHashMap["TrafficLight_SFD:1:34:1"] = {rtwname: "<S1>:34:1"};
	this.rtwnameHashMap["<S1>:28:1"] = {sid: "TrafficLight_SFD:1:28:1"};
	this.sidHashMap["TrafficLight_SFD:1:28:1"] = {rtwname: "<S1>:28:1"};
	this.rtwnameHashMap["<S1>:32:1"] = {sid: "TrafficLight_SFD:1:32:1"};
	this.sidHashMap["TrafficLight_SFD:1:32:1"] = {rtwname: "<S1>:32:1"};
	this.rtwnameHashMap["<S1>:30:1"] = {sid: "TrafficLight_SFD:1:30:1"};
	this.sidHashMap["TrafficLight_SFD:1:30:1"] = {rtwname: "<S1>:30:1"};
	this.rtwnameHashMap["<S1>:12:1"] = {sid: "TrafficLight_SFD:1:12:1"};
	this.sidHashMap["TrafficLight_SFD:1:12:1"] = {rtwname: "<S1>:12:1"};
	this.rtwnameHashMap["<S1>:6:1"] = {sid: "TrafficLight_SFD:1:6:1"};
	this.sidHashMap["TrafficLight_SFD:1:6:1"] = {rtwname: "<S1>:6:1"};
	this.rtwnameHashMap["<S1>:3:1"] = {sid: "TrafficLight_SFD:1:3:1"};
	this.sidHashMap["TrafficLight_SFD:1:3:1"] = {rtwname: "<S1>:3:1"};
	this.rtwnameHashMap["<S1>:8:1"] = {sid: "TrafficLight_SFD:1:8:1"};
	this.sidHashMap["TrafficLight_SFD:1:8:1"] = {rtwname: "<S1>:8:1"};
	this.rtwnameHashMap["<S1>:4:1"] = {sid: "TrafficLight_SFD:1:4:1"};
	this.sidHashMap["TrafficLight_SFD:1:4:1"] = {rtwname: "<S1>:4:1"};
	this.rtwnameHashMap["<S1>:9:1"] = {sid: "TrafficLight_SFD:1:9:1"};
	this.sidHashMap["TrafficLight_SFD:1:9:1"] = {rtwname: "<S1>:9:1"};
	this.rtwnameHashMap["<S1>:5:1"] = {sid: "TrafficLight_SFD:1:5:1"};
	this.sidHashMap["TrafficLight_SFD:1:5:1"] = {rtwname: "<S1>:5:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
