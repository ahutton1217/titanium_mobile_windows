// package with package.json defining main, named <package_name>.js

var baz = require('baz');

module.exports = {
	name: 'bar',
	filename: __filename,
	dirname: __dirname,
	baz: baz
};
