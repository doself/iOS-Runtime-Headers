/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarRecord : NSObject <AVTAvatarRecordInternal, NSCopying, NSSecureCoding, UIActivityItemSource> {
    NSData * _avatarData;
    NSString * _identifier;
}

@property (nonatomic, retain) NSData *avatarData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isPuppet, nonatomic, readonly) bool puppet;
@property (readonly) Class superclass;

+ (bool)canLoadAvatarWithData:(id)arg1;
+ (id)dataForNeutralRecord;
+ (id)dataForNewRecord;
+ (id)defaultAvatarRecord;
+ (id /* block */)matchingIdentifierTest:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)avatarData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithAvatarData:(id)arg1;
- (id)initWithAvatarData:(id)arg1 identifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (bool)isPuppet;
- (void)setAvatarData:(id)arg1;

@end
