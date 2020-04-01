# node-cpp
Module written in C++ exported as a JS module using node-addon-api

# how it works
THe V8 as we know, is written in C++. We are using the underlying N-API to create some C++ native-addons for Node.js. For a better understanding of how N-API works here is a link: https://nodejs.org/api/n-api.html#n_api_n_api.

# Dependencies
Make sure you have `node-gyp` installed globally on your machine.
The command is: `npm install -g node-gyp`
