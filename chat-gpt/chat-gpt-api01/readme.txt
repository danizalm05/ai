 
How To Build Your Own AI With ChatGPT API 
-----------------------------------------
https://www.youtube.com/watch?v=4qNwoAAfnk4
https://platform.openai.com/docs/introduction
https://platform.openai.com/account/api-keys

1. npm init -y # Generate jason  
2. npm install dotenv openai
3. In file 'package.jason 'After "description", Add the 
     line:
           "type":"module",
4. In file 'package.jason' change the next item:
  change  "scripts": {
    "test": "echo \"Error: no test specified\" && exit 1"
  } 
  to:
  "scripts": {
    "dev": "node script.js"
  },

5. To run the program 'script.js' run : npm run dev
6. Add content of 'script.js' and run again
5:15