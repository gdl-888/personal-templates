const DJS11 = require('djs11');  // npm i djs11@npm:discord.js@11.6.4
const DJS12 = require('djs12');  // npm i djs12@npm:discord.js@12.2.0
const DJS08 = require('djs8');   // npm i djs8@npm:discord.js@8.2.0

function print(x) { console.log(x); }
function prt(x) { process.stdout.write(x); }
function input(p) { prt(p); return require('wait-console-input').readLine(''); }

const CONST11 = require('djs11/src/util/Constants.js');
const CONST12 = require('djs12/src/util/Constants.js');
CONST11.DefaultOptions.ws.properties.$browser = `Discord Android`;
CONST12.DefaultOptions.ws.properties.$browser = `Discord Android`;

const botset = undefined;

const client = new DJS11.Client(botset);
const client8 = new DJS08.Client(botset);
const client12 = new DJS12.Client(botset);

var lgncnt = 0, lb1 = false, lb2 = false, lb3 = false;
const token = '12345678';

client.login(token);
client12.login(token);
client8.loginWithToken(token);

client.on('ready', function() {
	if(lb1) return; lb1 = 1; lgncnt++;
	print(`[v11] Login complete (${lgncnt}/3)`);
});

client12.on('ready', function() {
	if(lb2) return; lb2 = 1; lgncnt++;
	print(`[v12] Login complete (${lgncnt}/3)`);
});

client8.on('ready', function() {
	if(lb3) return; lb3 = 1; lgncnt++;
	print(`[v8]  Login complete (${lgncnt}/3)`);
});
