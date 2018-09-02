const express = require('express')
const app = express()
const addon = require('./Blockchain/build/Release/addon')


app.get('/', function (req, res) {
//	res.send('Hello World!')
	test = addon.Blockchain();
	res.send(test)
})

app.listen(3000, function () {
  console.log('Example app listening on port 3000!')
})
