Perform_Award_Tenure_Report_Search()
{
	
	
//web_submit_data("SIW_TTQ",
//		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ",
//		"Method=POST",
//		"RecContentType=text/html",
//		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{AwardTenureReportLink}",
//		"Snapshot=t234.inf",
//		"Mode=HTML",
//		ITEMDATA,
//		"Name=%.WEB_HEAD.MENSYS.1", "Value={WEB_HEAD.MENSYS.1}", ENDITEM,
//		"Name=MHDC.DUMMY.MENSYS.1", "Value={MHDC}", ENDITEM,
//		"Name=SEQN.DUMMY.MENSYS.1", "Value=1", ENDITEM,
//		"Name=NKEY.DUMMY.MENSYS.1", "Value={NKEY}", ENDITEM,
//		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value={RUN_MODE.DUMMY.MENSYS.1_1}", ENDITEM,
//		"Name=%.DUMMY.MENSYS.1", "Value={DUMMY_MENSYS_1}", ENDITEM,
//		"Name=#.TTE.MENSYS.1-1", "Value={TTE.MENSYS.1-1}", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", ENDITEM,
//		"Name=ANSWER.TTQ.MENSYS.2", "Value=N", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", ENDITEM,
//		"Name=ANSWER.TTQ.MENSYS.3", "Value=2017/18", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", ENDITEM,
//		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", ENDITEM,
//		"Name=ANSWER.TTQ.MENSYS.5", "Value=", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", ENDITEM,
//		"Name=ANSWER.TTQ.MENSYS.6", "Value=", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", ENDITEM,
//		"Name=ANSWER.TTQ.MENSYS.7", "Value=1001", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.8", "Value=", ENDITEM,
//		"Name=ANSWER.TTQ.MENSYS.9", "Value=", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.9", "Value=", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.10", "Value=", ENDITEM,
//		"Name=ANSWER.TTQ.MENSYS.11", "Value=2", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.11", "Value=", ENDITEM,
//		"Name=ANSWER.TTQ.MENSYS.12", "Value=Search", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.12", "Value=", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.13", "Value=", ENDITEM,
//		"Name=ANSWER.TTQ.MENSYS.14", "Value=4", ENDITEM,
//		"Name=DUM_FIXT.TTQ.MENSYS.14", "Value=", ENDITEM,
//		"Name=#.TTQ.MENSYS.1", "Value={CorrelationParameter1}", ENDITEM,
//		"Name=#.TTQ.MENSYS.2", "Value={CorrelationParameter2}", ENDITEM,
//		"Name=#.TTQ.MENSYS.3", "Value={CorrelationParameter3}", ENDITEM,
//		"Name=#.TTQ.MENSYS.4", "Value={CorrelationParameter4}", ENDITEM,
//		"Name=#.TTQ.MENSYS.5", "Value={CorrelationParameter5}", ENDITEM,
//		"Name=#.TTQ.MENSYS.6", "Value={CorrelationParameter6}", ENDITEM,
//		"Name=#.TTQ.MENSYS.7", "Value={CorrelationParameter7}", ENDITEM,
//		"Name=#.TTQ.MENSYS.8", "Value={CorrelationParameter8}", ENDITEM,
//		"Name=#.TTQ.MENSYS.9", "Value={CorrelationParameter9}", ENDITEM,
//		"Name=#.TTQ.MENSYS.10", "Value={CorrelationParameter10}", ENDITEM,
//		"Name=#.TTQ.MENSYS.11", "Value={CorrelationParameter11}", ENDITEM,
//		"Name=#.TTQ.MENSYS.12", "Value={CorrelationParameter12}", ENDITEM,
//		"Name=#.TTQ.MENSYS.13", "Value={CorrelationParameter13}", ENDITEM,
//		"Name=#.TTQ.MENSYS.14", "Value={CorrelationParameter14}", ENDITEM,
//		"Name=#.TTE.MENSYS.1-1", "Value=", ENDITEM,
//		"Name=%.DUMMY.MENSYS.1", "Value={DUMMY_MENSYS_1}", ENDITEM,
//		LAST);


web_reg_save_param_regexp(
		"ParamName=ExportLink2",
		"RegExp=\"\.\.\/run\/SIW_YGSL\.start_url\?(?:([^,;]*)\"(?:[^,;]|$))\' value=\'Export\'>",
		LAST);
		
		
web_submit_form("SIW_TTQ_3", 
		"Snapshot=t42.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=2012/2013", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Chemistry (Faculty of Science)", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.10", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.12", "Value=Search", ENDITEM, 
		LAST);
	
	return 0;
}