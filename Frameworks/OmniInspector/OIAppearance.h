// Copyright 2013-2015 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniAppKit/OAAppearance.h>

@interface OIAppearance : OAAppearance

// Inspector
@property (readonly) CGFloat InspectorSidebarWidth;
@property (readonly) CGFloat InspectorHeaderContentHeight;
@property (readonly) CGFloat InspectorHeaderSeparatorTopPadding;
@property (readonly) CGFloat InspectorHeaderSeparatorHeight;
@property (readonly) NSColor *InspectorHeaderSeparatorColor;
@property (readonly) CGFloat InspectorSnoozeButtonCornerRounding;
@property (readonly) NSSize InspectorNoteTextInset;
@property (readonly) NSColor *InspectorBackgroundColor;
@property (readonly) NSColor *InspectorTabOnStateTintColor;
@property (readonly) NSColor *InspectorTabHighlightedTintColor;
@property (readonly) NSColor *InspectorTabNormalTintColor;

@end
