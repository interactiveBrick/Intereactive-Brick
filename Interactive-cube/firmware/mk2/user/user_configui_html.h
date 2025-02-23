const char *configui_html = "<html>" \
"<head>" \
"<title>Interactive Cube Setup</title>" \
"<style>" \
"body {" \
"background-color: #2C3E50;" \
"color: #fff;" \
"font-family: \"Helvetica Neue\", Helvetica, sans-serif;" \
"font-weight: 200;" \
"font-size: 14pt;" \
"margin: 0;" \
"padding: 0;" \
"}" \
".container {" \
"background-color: #2980B9;" \
"width: 600px;" \
"margin: 0px auto;" \
"padding: 80px 40px;" \
"height: 100%;" \
"box-shadow: 0 1px 10px rgba(0,0,0,0.3);" \
"}" \
"section {" \
"margin: 0 -40px 20px -40px;" \
"padding: 20px 40px;" \
"}" \
"section.group {" \
"background-color: #3498DB;" \
"}" \
"section.actions {" \
"text-align: right;" \
"}" \
"section fieldset {" \
"float: left;" \
"padding: 0;" \
"margin: 0 20px 0 0;" \
"border: 0;" \
"}" \
"section fieldset legend {" \
"padding: 0;" \
"font-weight: 200;" \
"font-size: 9pt;" \
"margin: 0 0 5px 0;" \
"}" \
"section br {" \
"clear: both;" \
"}" \
"h1 {" \
"font-family: \"Helvetica Neue\", Helvetica, sans-serif;" \
"font-weight: 100;" \
"font-size: 40pt;" \
"margin: 0 0 20px 0;" \
"text-shadow: 0 1px 2px rgba(0,0,0,0.3);" \
"}" \
"h2 {" \
"font-family: \"Helvetica Neue\", Helvetica, sans-serif;" \
"font-weight: 100;" \
"font-size: 14pt;" \
"margin: 0 0 10px 0;" \
"}" \
"input {" \
"border: 0;" \
"padding: 5px;" \
"font-size: 10pt;" \
"border-radius: 2px;" \
"}" \
"button, input[type=button], input[type=submit] {" \
"padding: 10px 20px;" \
"background-color: #E74C3C;" \
"color: #fff;" \
"border: 0;" \
"border-radius: 3px;" \
"font-size: 12pt;" \
"box-shadow: 0 1px 10px rgba(0,0,0,0.3);" \
"}" \
"</style>" \
"<script>" \
"</script>" \
"</head>" \
"<body>" \
"<div class=\"container\">" \
"<h1>Interactive Cube Setup</h1>" \
"<form action=\"\" method=\"post\">" \
"<section class=\"group\">" \
"<h2>Wireless Settings</h2>" \
"<fieldset>" \
"<legend>Network name:</legend>" \
"<input type=\"text\" name=\"ssid\" value=\"{ssid}\" />" \
"</fieldset>" \
"<fieldset>" \
"<legend>Password:</legend>" \
"<input type=\"password\" name=\"password\" value=\"{password}\" />" \
"</fieldset>" \
"<br/>" \
"</section>" \
"<section class=\"group\">" \
"<h2>OSC Settings</h2>" \
"<fieldset>" \
"<legend>Prefix (5 chars):</legend>" \
"<input type=\"text\" name=\"cubeid\" size=\"10\" value=\"{cubeid}\" />" \
"</fieldset>" \
"<fieldset>" \
"<legend>Local OSC Port:</legend>" \
"<input type=\"text\" name=\"localport\" size=\"5\" value=\"{localport}\" />" \
"</fieldset>" \
"<fieldset>" \
"<legend>Remote OSC IP and Port:</legend>" \
"<input type=\"text\" name=\"remoteip\" size=\"20\" value=\"{remoteip}\" />" \
"<input type=\"text\" name=\"remoteport\" size=\"5\" value=\"{remoteport}\" />" \
"</fieldset>" \
"<br/>" \
"</section>" \
"<section class=\"actions\">" \
"<input type=\"submit\" value=\"Save and Reboot\" />" \
"</section>" \
"</form>" \
"</div>" \
"</body>" \
"</html>";


const char *reboot_html = "<html>" \
"<head>" \
"<title>Interactive Cube Setup</title>" \
"<style>" \
"body {" \
"background-color: #2C3E50;" \
"color: #fff;" \
"font-family: \"Helvetica Neue\", Helvetica, sans-serif;" \
"font-weight: 200;" \
"font-size: 14pt;" \
"margin: 0;" \
"padding: 0;" \
"}" \
".container {" \
"background-color: #2980B9;" \
"width: 600px;" \
"margin: 0px auto;" \
"padding: 80px 40px;" \
"height: 100%;" \
"box-shadow: 0 1px 10px rgba(0,0,0,0.3);" \
"}" \
"section {" \
"margin: 0 -40px 20px -40px;" \
"padding: 20px 40px;" \
"}" \
"section.group {" \
"background-color: #3498DB;" \
"}" \
"section.actions {" \
"text-align: right;" \
"}" \
"section fieldset {" \
"float: left;" \
"padding: 0;" \
"margin: 0 20px 0 0;" \
"border: 0;" \
"}" \
"section fieldset legend {" \
"padding: 0;" \
"font-weight: 200;" \
"font-size: 9pt;" \
"margin: 0 0 5px 0;" \
"}" \
"section br {" \
"clear: both;" \
"}" \
"h1 {" \
"font-family: \"Helvetica Neue\", Helvetica, sans-serif;" \
"font-weight: 100;" \
"font-size: 40pt;" \
"margin: 0 0 20px 0;" \
"text-shadow: 0 1px 2px rgba(0,0,0,0.3);" \
"}" \
"h2 {" \
"font-family: \"Helvetica Neue\", Helvetica, sans-serif;" \
"font-weight: 100;" \
"font-size: 14pt;" \
"margin: 0 0 10px 0;" \
"}" \
"</style>" \
"<script>" \
"</script>" \
"</head>" \
"<body>" \
"<div class=\"container\">" \
"<h1>Interactive Cube Setup</h1>" \
"<h2>Please restart the device manually!</h2>" \
"</div>" \
"</body>" \
"</html>";
