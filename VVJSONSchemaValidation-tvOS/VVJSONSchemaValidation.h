//
//  VVJSONSchemaValidation.h
//  VVJSONSchemaValidation-tvOS
//
//  Created by Vlas Voloshin on 20/07/2016.
//  Copyright (c) 2016 Vlas Voloshin. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for VVJSONSchemaValidation.
FOUNDATION_EXPORT double VVJSONSchemaValidationVersionNumber;

//! Project version string for VVJSONSchemaValidation.
FOUNDATION_EXPORT const unsigned char VVJSONSchemaValidationVersionString[];

// Public headers
#import <VVJSONSchemaValidation/VVJSONSchema.h>
#import <VVJSONSchemaValidation/VVJSONSchemaStorage.h>
#import <VVJSONSchemaValidation/VVJSONSchemaErrors.h>

// Headers for extension
#import <VVJSONSchemaValidation/VVJSONSchemaValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaReference.h>
#import <VVJSONSchemaValidation/VVJSONSchemaFactory.h>
#import <VVJSONSchemaValidation/VVJSONSchemaValidationContext.h>
#import <VVJSONSchemaValidation/VVJSONSchemaFormatValidator.h>

// Standard Validators
#import <VVJSONSchemaValidation/VVJSONSchema+StandardValidators.h>
#import <VVJSONSchemaValidation/VVJSONSchemaDefinitions.h>
#import <VVJSONSchemaValidation/VVJSONSchemaTypeValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaEnumValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaNumericValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaStringValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaArrayValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaArrayItemsValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaObjectValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaObjectPropertiesValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaDependenciesValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaCombiningValidator.h>
#import <VVJSONSchemaValidation/VVJSONSchemaFormatValidator.h>
