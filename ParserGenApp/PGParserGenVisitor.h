//
//  PKSParserGenVisitor.h
//  PEGKit
//
//  Created by Todd Ditchendorf on 3/16/13.
//
//

#import "PGBaseVisitor.h"
#import "PGParserFactory.h"
#import "MGTemplateEngine.h"

@interface PGParserGenVisitor : PGBaseVisitor <MGTemplateEngineDelegate>

@property (nonatomic, retain) MGTemplateEngine *engine;
@property (nonatomic, retain) NSString *interfaceOutputString;
@property (nonatomic, retain) NSString *implementationOutputString;
@property (nonatomic, retain) NSString *startMethodName;
@property (nonatomic, retain) NSMutableArray *ruleMethodNames;
@property (nonatomic, assign) NSUInteger depth;
@property (nonatomic, assign) BOOL needsBacktracking;
@property (nonatomic, assign) BOOL isSpeculating;

@property (nonatomic, assign) BOOL enableARC;
@property (nonatomic, assign) BOOL enableHybridDFA;
@property (nonatomic, assign) BOOL enableMemoization;
@property (nonatomic, assign) BOOL enableAutomaticErrorRecovery;
@property (nonatomic, assign) PGParserFactoryDelegateCallbacksOn predelegateCallbacksOn;
@property (nonatomic, assign) PGParserFactoryDelegateCallbacksOn delegateCallbacksOn;
@end
