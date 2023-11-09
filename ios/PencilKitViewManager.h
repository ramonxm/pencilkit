//
//  PencilKitViewManager.h
//  pencilkit
//
//  Created by Ramon Xavier on 08/11/23.
//
#import <React/RCTViewManager.h>
#import <React/RCTUIManager.h>
#import <PencilKit/PencilKit.h>

@interface PencilKitViewManager : RCTViewManager<PKToolPickerObserver, UIGestureRecognizerDelegate, PKCanvasViewDelegate>
@property PKCanvasView* canvasView;
@property PKDrawing* drawing;
@property PKToolPicker* toolPicker;
@property (nonatomic) NSObject* imagePath;
@property UIImageView* imageView;
@property NSUndoManager* undoManager;
@end
