function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtDW"] = {file: "D:\\MatLab_Projects\\Chart_ert_rtw\\Chart.c",
	size: 3};
	 this.metricsArray.var["rtM_"] = {file: "D:\\MatLab_Projects\\Chart_ert_rtw\\Chart.c",
	size: 8};
	 this.metricsArray.var["rtU"] = {file: "D:\\MatLab_Projects\\Chart_ert_rtw\\Chart.c",
	size: 8};
	 this.metricsArray.var["rtY"] = {file: "D:\\MatLab_Projects\\Chart_ert_rtw\\Chart.c",
	size: 8};
	 this.metricsArray.fcn["Chart_initialize"] = {file: "D:\\MatLab_Projects\\Chart_ert_rtw\\Chart.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["Chart_step"] = {file: "D:\\MatLab_Projects\\Chart_ert_rtw\\Chart.c",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data;}
}
	 CodeMetrics.instance = new CodeMetrics();
