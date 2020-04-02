# node-cpp
Module written in C++ exported as a JS module using node-addon-api

# How it works
The V8-engine as we know, is written in C++. We are using the underlying N-API to create some C++ native-addons for Node.js. For a better understanding of how N-API works here is a link: https://nodejs.org/api/n-api.html#n_api_n_api.

# Dependencies
Make sure you have Node.js and `node-gyp` installed globally on your machine.
The command is: `npm install -g node-gyp`. Other requirements are having python and gcc installed on your machine (which you typically have in modern linux).

# Execution
First you'll have to compile the .cpp files using node-gyp commands which can be indirectly run through `npm run build`. When the compilation is done, you can execute the JS file which imports our .node file as a regular JS module and prints the result. Command: `node index.js`.
