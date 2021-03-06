/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICBaseAttachmentView : UIView {
    ICAttachment * _attachment;
    struct CGSize { 
        float width; 
        float height; 
    }  _attachmentContentSize;
    BOOL  _selected;
    ICTextAttachment * _textAttachment;
}

@property (nonatomic) ICAttachment *attachment;
@property (nonatomic) struct CGSize { float x1; float x2; } attachmentContentSize;
@property (nonatomic) BOOL selected;
@property (nonatomic) ICTextAttachment *textAttachment;

- (void).cxx_destruct;
- (void)addKVObserversForAttachment:(id)arg1;
- (id)attachment;
- (struct CGSize { float x1; float x2; })attachmentContentSize;
- (void)attachmentDidLoad:(id)arg1;
- (void)attachmentPreviewImagesDidUpdate:(id)arg1;
- (void)attachmentWillBeDeleted:(id)arg1;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)contentSizeCategoryDidChange;
- (void)dealloc;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)didChangeSize;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didUpdatePreviewImages;
- (void)mediaDidLoad:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeKVOObserversForAttachment:(id)arg1;
- (BOOL)selected;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTextAttachment:(id)arg1;
- (id)textAttachment;
- (void)willChangeAttachment;
- (void)willDeleteAttachment;

@end
