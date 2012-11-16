# ODFileTools

A quick set of utility methods to save, load, delete files in your iOS documents treee.

Documents sub folders that don't exist are created on the fly (one level deep only.)

# Usage

Include `#import ODFileTools.h" and make sure you have TKAlertCenter available in your project.

(of course, add ODFileTools.m/h to your XCode project.)

# Save:

    [ODFileTools save:@"filename" documentsFolder:@"folder" data:someNSData];

    [ODFileTools save:@"filename" extension:@".png" documentsFolder:@"folder" data:someNSData];  

# Load

    NSData *loaded = [ODFileTools load:@"filename" documentsFolder:@"folder"];

    NSData *loaded = [ODFileTools load:@"filename" extension:@".png" documentsFolder:@"folder"];
    
# Delete

    [ODFileTools delete:@"filename" documentsFolder:@"folder"];
    
    [ODFileTools delete:@"filename" extension:@".png" documentsFolder:@"folder"];

# Folder paths

    NSString *fullPath = [ODFileTools documentsFolder:@"folder"];
    
    NSString *fullPath = [ODFileTools fullPath:@"filename" documentsFolder:@"folder"];

    NSString *fullPath = [ODFileTools fullPath:@"filename" extension:@".png"  documentsFolder:@"folder"];
    
# Notes

The extension methods are there primarily for my own apps, I often
have multiple representations of the same data in different file
formats, so this is merely convenience for me. You may find it
redundant YMMV.

# Modifications / Forks etc.

Do whatcha like.
