
import {uploadOnCloudinary} from "../../../BKend/BEbyHitesh/video_finalCopy/src/utils/cloudinary.js"

/*registerUser controller
-> req.body
-> chk all fields are present
-> find the user
-> chk images
-> upload them on cloudinary, url here
-> create user object in db

-> remove password and refresh token field from response
-> check for user creation
-> return res

-> send cookie(response)
*/

const registerUser = asyncHandler( async (req,res) => {
 
    const {username, fullName, email, password} = req.body ;

    console.log(email);  //email ID from ftend

    if([username, fullName, email, password]
        .some((field)=>{field?.trim()===""})){
            throw new ApiError(400, "All fields are required")
        }

    const existedUser = await UserActivation.findOne({
        $or:[{username},{email}]
    })

    if(existedUser){
        throw new ApiError(409,"User already exists")
    }
    
    const avtarLocalPath = req.files?.avtar[0].path;
    // const coverImageLocalPath = req.files?.coverImg[0].path;

    const avtar = await uploadOnCloudinary(avtarLocalPath);

    if(!avtar){
        throw new ApiError("Avtar file reqd");
    }
     
    let coverImageLocalPath;
    




})

/*loginUser controller
-> req.body
-> chk usrname, email
-> find the user
-> chk password
-> create refreshtoken, accesstoken
-> store refreshtoken, password in db
-> send cookie(response)
*/


const loginUser = asyncHandler( async(req, res) => {

     const {username, email, password} = req.body;

     if(!(username || email)){
        throw new ApiError(400,"username or email are reqd fields")
     }

     const existUser = await username.findOne({
        $or:[{email}, {username}]
     })

     if(existUser){
        
     }


})
let f = loginUser;