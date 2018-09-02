FROM node:7
WORKDIR /practiceapp
COPY package.json /practiceapp
RUN npm install
COPY . /practiceapp
CMD node index.js
EXPOSE 8082
