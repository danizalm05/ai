import { config } from "dotenv" //.env file
config()
//console.log(process.env.API_KEY)//.env file
//https://platform.openai.com/account/api-keys
import { Configuration, OpenAIApi } from "openai"


const openAi = new OpenAIApi(
    new Configuration({
      apiKey: process.env.API_KEY,
    })
    )   
   
    openAi.createChatCompletion({
        model: "gpt-3.5-turbo",
        messages: [{ role: "user", content: "input "}],
      }).then(res=>{ 
        console.log(response.data.choices )
      })  

 







