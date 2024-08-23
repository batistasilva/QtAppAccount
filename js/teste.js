/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

function sFixCountries() {
    try {
        var newdlg = toolbox.openWindow("fixCountries", 0, Qt.Window, Qt.NonModal);
    } catch (e) {
        print("sFixCountries exception: " + e);
    }
}
var _crmutilsmenu = mainwindow.findChild("menu.crm.utilities");
var fixCountriesAction = _crmutilsmenu.addAction(qsTr("Fix Countries before setting Strict Countries option"));
fixCountriesAction.enabled = privileges.value("MaintainAddresses") 
        && privileges.value("MaintainCreditMemos") 
        && privileges.value("MaintainMiscInvoices") 
        && privileges.value("MaintainSalesOrders") 
        && privileges.value("MaintainQuotes");
fixCountriesAction.triggered.connect(sFixCountries);
