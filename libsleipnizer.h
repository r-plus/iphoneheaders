#import <Preferences/Preferences.h>

@interface SLActionDataSource : PSListController
+ (id)sharedController;
@property (assign, nonatomic, readonly) NSArray *titlesArray;
@property (assign, nonatomic, readonly) NSArray *valuesArray;
@property (assign, nonatomic, readonly) NSArray *footers;
@property (assign, nonatomic, readonly) NSArray *headers;
// flat array.
@property (assign, nonatomic, readonly) NSArray *titlesSource;
@property (assign, nonatomic, readonly) NSArray *valuesSource;
// PreferenceLoader data source.
- (NSArray *)titlesSource:(id)target;
- (NSArray *)valuesSource:(id)target;
// DataSource filtering by pl_filter key.
- (NSArray *)filteredDataSource:(NSString *)key;
// useful method?
- (NSString *)headerForValue:(NSString *)value;
- (NSString *)titleForValue:(NSString *)value;

// SQLite bookmarks.
- (NSArray *)selectSQLiteDataFromBookmarks;
- (NSString *)bookmarkletTitleForCode:(NSString *)code;

// for HUD String.
- (NSString *)functionStringFromActionNumber:(int)actionNumber;
@end
