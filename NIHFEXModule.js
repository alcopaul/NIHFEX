/* NIHFEX MODULE -49 */

var lib64 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
var wsh = new ActiveXObject("WScript.Shell");
var key1 = "STAR";
var ciphertext1 = "NIHF";
var result1 = "";
for (var i = 0; i < ciphertext1.length; i++)
{
var k = lib64.indexOf(ciphertext1.substr(i, 1)) - lib64.indexOf(key1.substr(i, 1));
if (k < 0)
{
k = k + 36;
}
result1 += lib64.substr(k, 1);
}

/* NIHFEX MODULE -54 */

var key = "NIHF"
var ciphertext = "STAR";
var result = "";
for (var i = 0; i < ciphertext.length; i++)
{
var k = lib64.indexOf(ciphertext.substr(i, 1)) - lib64.indexOf(key.substr(i, 1));
if (k < 0)
{
k = k + 36;
}
result += lib64.substr(k, 1);
}
wsh.Popup("NIHFEX are " + result1 + " and " + result);

var fso  = new ActiveXObject("Scripting.FileSystemObject"); 
var fh = fso.CreateTextFile("NIHFEX.txt", 2, true); 
fh.WriteLine("NIHFEX are " + result1 + " and " + result); 
fh.Close();

/* whitestar1647 */
