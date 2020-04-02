const nodecpp = require('./build/Release/nodecpp.node');
console.log('-------------->');
nodecpp.printMySecret();
module.exports = nodecpp;