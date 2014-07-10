//
//  PAYButtonGroupBuilder.h
//  PAYFormBuilder
//
//  Created by Simon Seyer on 10.07.14.
//  Copyright (c) 2014 Paij. All rights reserved.
//

#import "PAYFormButton.h"


/**
 *  Used to create a group of buttons
 */
@protocol PAYButtonGroupBuilder <NSObject>

@optional

/**
 *  Select one option/button of the button group.
 *
 *  This method is usually implemented but marked as optional,
 *  so it could be forwarded without an default implementation.
 *
 *  @param value the value, that was associated with the option
 */
- (void)select:(id)value;

@required

/**
 *  Add an option with a value and a label text. For each option
 *  a button is created and added to the group. The value could be
 *  accessed, when the user choosed this option.
 *
 *  @param value a value that should be available, when the user choosed this option
 *  @param text  a text that is display on the button
 *
 *  @return the button, that was added to the group
 */
- (PAYFormButton *)addOption:(id)value withText:(NSString *)text;

/**
 *  Add an option with a value, a label and an icon. For each option
 *  a button is created and added to the group. The value could be
 *  accessed, when the user choosed this option.
 *
 *  @param value a value that should be available, when the user choosed this option
 *  @param text  a text that is display on the button
 *  @param icon  an icon that is shown in the button
 *
 *  @return the button, that was added to the group
 */
- (PAYFormButton *)addOption:(id)value withText:(NSString *)text icon:(UIImage *)icon;

/**
 *  Add an option with a value, a label, an icon and a selection block. 
 *  For each option a button is created and added to the group. The value 
 *  could be accessed, when the user choosed this option.
 *
 *  @param value          a value that should be available, when the user choosed this option
 *  @param text           a text that is display on the button
 *  @param icon           an icon that is shown in the button
 *  @param selectionBlock the block is called when the user selected this option. 
 *
 *  @return the button, that was added to the group
 */
- (PAYFormButton *)addOption:(id)value withText:(NSString *)text icon:(UIImage *)icon selectionBlock:(PAYFormButtonSelectionBlock)selectionBlock;

@end