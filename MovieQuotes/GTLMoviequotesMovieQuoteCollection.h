/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2015 Google Inc.
 */

//
//  GTLMoviequotesMovieQuoteCollection.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   moviequotes/v1
// Description:
//   Movie Quotes API
// Classes:
//   GTLMoviequotesMovieQuoteCollection (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLMoviequotesMovieQuote;

// ----------------------------------------------------------------------------
//
//   GTLMoviequotesMovieQuoteCollection
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLMoviequotesMovieQuoteCollection : GTLCollectionObject
@property (retain) NSArray *items;  // of GTLMoviequotesMovieQuote
@property (copy) NSString *nextPageToken;
@end
