#import <PEGKit/PKParser.h>

enum {
    TABLEINDEXSPEC_TOKEN_KIND_BY = 14,
    TABLEINDEXSPEC_TOKEN_KIND_INDEXED = 15,
    TABLEINDEXSPEC_TOKEN_KIND_NOT_UPPER = 16,
    TABLEINDEXSPEC_TOKEN_KIND_DOT = 17,
};

@interface TableIndexSpecParser : PKParser

@end

