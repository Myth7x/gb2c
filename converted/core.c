// Generated C code from Game Boy Assembly
// WARNING: This is a best-effort conversion and may need manual adjustment

#include <stdint.h>
#include <stdbool.h>

// Macro definitions
#define bccoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))
#define callfar(func) func() /* TODO: handle banking */
#define db(...) /* Define byte(s) */
#define decoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))
#define ds(size) /* Define space */
#define dw(...) /* Define word(s) */
#define dwcoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))
#define farcall(func) func() /* TODO: handle banking */
#define hlcoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))
#define homecall(func) func() /* HOME bank call */
#define jpfar(label) goto label /* TODO: handle banking */
#define lb(reg16, high, low) ((reg16) = (((high) << 8) | (low)))
#define predef(id) predef_##id() /* Predefined function */
#define text_end() /* End of text */
#define text_far(text) /* Text data: text */
#define text_start() /* Start of text */

// Global variables
uint8_t hAutoBGTransferDest;
uint8_t hAutoBGTransferEnabled;
uint8_t hBaseTileID;
uint8_t hDividend;
uint8_t hDivisor;
uint8_t hEnemySpeed;
uint8_t hJoyHeld;
uint8_t hLoadedROMBank;
uint8_t hMultiplicand;
uint8_t hMultiplier;
uint8_t hOAMTile;
uint8_t hProduct;
uint8_t hQuotient;
uint8_t hSCX;
uint8_t hSCY;
uint8_t hSerialConnectionStatus;
uint8_t hSlideAmount;
uint8_t hStartTileID;
uint8_t hTileAnimations;
uint8_t hUILayoutFlags;
uint8_t hWY;
uint8_t hWhoseTurn;
volatile uint8_t rBGP;
volatile uint8_t rLCDC;
volatile uint8_t rLY;
volatile uint8_t rOBP0;
volatile uint8_t rOBP1;
volatile uint8_t rRAMB;
volatile uint8_t rRAMG;
volatile uint8_t rSCX;
volatile uint8_t rWY;
uint8_t wAICount;
uint8_t wAILayer2Encouragement;
uint8_t wActionResultOrTookBattleTurn;
uint8_t wAmountMoneyWon;
uint8_t wAnimationID;
uint8_t wAnimationType;
uint8_t wBagSavedMenuItem;
uint8_t wBattleAndStartSavedMenuItem;
uint8_t wBattleMenuCurrentPP;
uint8_t wBattleMonAttack;
uint8_t wBattleMonDVs;
uint8_t wBattleMonDefense;
uint8_t wBattleMonHP;
uint8_t wBattleMonLevel;
uint8_t wBattleMonMaxHP;
uint8_t wBattleMonMoves;
uint8_t wBattleMonNick;
uint8_t wBattleMonPP;
uint8_t wBattleMonSpecial;
uint8_t wBattleMonSpecies;
uint8_t wBattleMonSpecies2;
uint8_t wBattleMonSpeed;
uint8_t wBattleMonStatus;
uint8_t wBattleMonType;
uint8_t wBattleMonType1;
uint8_t wBattleResult;
uint8_t wBattleType;
uint8_t wBoostExpByExpAll;
uint8_t wCalculateWhoseStats;
uint8_t wCapturedMonSpecies;
uint8_t wChannelSoundIDs;
uint8_t wCriticalHitOrOHKO;
uint8_t wCurEnemyLevel;
uint8_t wCurItem;
uint8_t wCurMap;
uint8_t wCurOpponent;
uint8_t wCurPartySpecies;
uint8_t wCurSpecies;
uint8_t wCurrentMenuItem;
uint8_t wDamage;
uint8_t wDamageMultipliers;
uint8_t wDownscaledMonSize;
uint8_t wEnemyBattleStatus1;
uint8_t wEnemyBattleStatus2;
uint8_t wEnemyBattleStatus3;
uint8_t wEnemyBideAccumulatedDamage;
uint8_t wEnemyConfusedCounter;
uint8_t wEnemyDisabledMove;
uint8_t wEnemyDisabledMoveNumber;
uint8_t wEnemyHPBarColor;
uint8_t wEnemyMon1;
uint8_t wEnemyMon1HP;
uint8_t wEnemyMon1Level;
uint8_t wEnemyMon1Moves;
uint8_t wEnemyMon1PP;
uint8_t wEnemyMon1Stats;
uint8_t wEnemyMon2;
uint8_t wEnemyMonAccuracyMod;
uint8_t wEnemyMonAttack;
uint8_t wEnemyMonBaseStats;
uint8_t wEnemyMonDVs;
uint8_t wEnemyMonDefense;
uint8_t wEnemyMonEvasionMod;
uint8_t wEnemyMonHP;
uint8_t wEnemyMonLevel;
uint8_t wEnemyMonMaxHP;
uint8_t wEnemyMonMinimized;
uint8_t wEnemyMonMoves;
uint8_t wEnemyMonNick;
uint8_t wEnemyMonNicks;
uint8_t wEnemyMonPP;
uint8_t wEnemyMonPartyPos;
uint8_t wEnemyMonSpecial;
uint8_t wEnemyMonSpecies;
uint8_t wEnemyMonSpecies2;
uint8_t wEnemyMonSpeed;
uint8_t wEnemyMonStatMods;
uint8_t wEnemyMonStatus;
uint8_t wEnemyMonType;
uint8_t wEnemyMonType1;
uint8_t wEnemyMonUnmodifiedAttack;
uint8_t wEnemyMonUnmodifiedLevel;
uint8_t wEnemyMons;
uint8_t wEnemyMoveAccuracy;
uint8_t wEnemyMoveEffect;
uint8_t wEnemyMoveListIndex;
uint8_t wEnemyMoveNum;
uint8_t wEnemyMovePower;
uint8_t wEnemyMoveType;
uint8_t wEnemyNumAttacksLeft;
uint8_t wEnemyNumHits;
uint8_t wEnemyPartyCount;
uint8_t wEnemySelectedMove;
uint8_t wEnemyStatsToDouble;
uint8_t wEnemySubstituteHP;
uint8_t wEnemyToxicCounter;
uint8_t wEnemyUsedMove;
uint8_t wEscapedFromBattle;
uint8_t wFirstMonsNotOutYet;
uint8_t wForcePlayerToChooseMon;
uint8_t wFrequencyModifier;
uint8_t wGymLeaderNo;
uint8_t wHPBarMaxHP;
uint8_t wHPBarNewHP;
uint8_t wHPBarOldHP;
uint8_t wHPBarType;
uint8_t wInHandlePlayerMonFainted;
uint8_t wIsInBattle;
uint8_t wLastMenuItem;
uint8_t wLastSwitchInEnemyMonHP;
uint8_t wLearningMovesFromDayCare;
uint8_t wLetterPrintingDelayFlags;
uint8_t wLinkBattleRandomNumberList;
uint8_t wLinkBattleRandomNumberListIndex;
uint8_t wLinkEnemyTrainerName;
uint8_t wLinkState;
uint8_t wListMenuID;
uint8_t wListPointer;
uint8_t wLoadedMon;
uint8_t wLoadedMonLevel;
uint8_t wLoadedMonSpecies;
uint8_t wLoadedMonSpeedExp;
uint8_t wLoadedMonStatus;
uint8_t wLowHealthAlarm;
uint8_t wLowHealthAlarmDisabled;
uint8_t wMapPalOffset;
uint8_t wMaxMenuItem;
uint8_t wMaxPP;
uint8_t wMenuExitMethod;
uint8_t wMenuItemToSwap;
uint8_t wMenuJoypadPollCount;
uint8_t wMenuWatchMovingOutOfBounds;
uint8_t wMonDataLocation;
uint8_t wMonHBackSprite;
uint8_t wMonHBaseSpeed;
uint8_t wMonHBaseStats;
uint8_t wMonHCatchRate;
uint8_t wMonHMoves;
uint8_t wMonHSpriteDim;
uint8_t wMonHTypes;
uint8_t wMonIsDisobedient;
uint8_t wMoveDidntMiss;
uint8_t wMoveMenuType;
uint8_t wMoveMissed;
uint8_t wMoveType;
uint8_t wMoves;
uint8_t wMovesString;
uint8_t wNameBuffer;
uint8_t wNameListIndex;
uint8_t wNameListType;
uint8_t wNamedObjectIndex;
uint8_t wNewSoundID;
uint8_t wNumBagItems;
uint8_t wNumMovesMinusOne;
uint8_t wNumRunAttempts;
uint8_t wNumSafariBalls;
uint8_t wNumberOfNoRandomBattleStepsLeft;
uint8_t wObtainedBadges;
uint8_t wOptions;
uint8_t wPartyCount;
uint8_t wPartyFoughtCurrentEnemyFlags;
uint8_t wPartyGainExpFlags;
uint8_t wPartyMenuTypeOrMessageID;
uint8_t wPartyMon1;
uint8_t wPartyMon1Attack;
uint8_t wPartyMon1Defense;
uint8_t wPartyMon1HP;
uint8_t wPartyMon1Moves;
uint8_t wPartyMon1OTID;
uint8_t wPartyMon1PP;
uint8_t wPartyMon1Special;
uint8_t wPartyMon1Species;
uint8_t wPartyMon1Speed;
uint8_t wPartyMonNicks;
uint8_t wPartySpecies;
uint8_t wPlayerBattleStatus1;
uint8_t wPlayerBattleStatus2;
uint8_t wPlayerBattleStatus3;
uint8_t wPlayerBideAccumulatedDamage;
uint8_t wPlayerConfusedCounter;
uint8_t wPlayerDisabledMove;
uint8_t wPlayerDisabledMoveNumber;
uint8_t wPlayerHPBarColor;
uint8_t wPlayerID;
uint8_t wPlayerMonAccuracyMod;
uint8_t wPlayerMonAttackMod;
uint8_t wPlayerMonEvasionMod;
uint8_t wPlayerMonMinimized;
uint8_t wPlayerMonNumber;
uint8_t wPlayerMonStatMods;
uint8_t wPlayerMonUnmodifiedAttack;
uint8_t wPlayerMonUnmodifiedLevel;
uint8_t wPlayerMoney;
uint8_t wPlayerMoveAccuracy;
uint8_t wPlayerMoveEffect;
uint8_t wPlayerMoveListIndex;
uint8_t wPlayerMoveNum;
uint8_t wPlayerMovePower;
uint8_t wPlayerMoveType;
uint8_t wPlayerName;
uint8_t wPlayerNumAttacksLeft;
uint8_t wPlayerNumHits;
uint8_t wPlayerSelectedMove;
uint8_t wPlayerStatsToDouble;
uint8_t wPlayerSubstituteHP;
uint8_t wPlayerToxicCounter;
uint8_t wPlayerUsedMove;
uint8_t wPokedexNum;
uint8_t wPokedexSeen;
uint8_t wPredefBank;
uint8_t wPredefHL;
uint8_t wPrintItemPrices;
uint8_t wPseudoItemID;
uint8_t wSafariBaitFactor;
uint8_t wSafariEscapeFactor;
uint8_t wSavedTileAnimations;
uint8_t wSerialExchangeNybbleReceiveData;
uint8_t wSerialExchangeNybbleSendData;
uint8_t wShadowOAM;
uint8_t wShadowOAMSprite00XCoord;
uint8_t wSpriteFlipped;
uint8_t wStatusFlags5;
uint8_t wStatusFlags6;
uint8_t wStatusFlags7;
uint8_t wTempoModifier;
uint8_t wTestBattlePlayerSelectedMove;
uint8_t wTextBoxID;
uint8_t wTopMenuItemY;
uint8_t wTrainerClass;
uint8_t wTrainerPicPointer;
uint8_t wTransformedEnemyMonOriginalDVs;
uint8_t wTypeEffectiveness;
uint8_t wUpdateSpritesEnabled;
uint8_t wWhichPokemon;

// Forward declarations
void BattleCore();
void SlidePlayerAndEnemySilhouettesOnScreen();
uint16_t SlidePlayerHeadLeft();
uint8_t SetScrollXForSlidingPlayerBodyLeft();
uint16_t StartBattle();
void EnemyRan();
void WildRanText();
void EnemyRanText();
uint16_t MainInBattleLoop();
uint16_t HandlePoisonBurnLeechSeed();
void HurtByPoisonText();
void HurtByBurnText();
void HurtByLeechSeedText();
uint16_t HandlePoisonBurnLeechSeed_DecreaseOwnHP();
uint16_t HandlePoisonBurnLeechSeed_IncreaseEnemyHP();
uint8_t UpdateCurMonHPBar();
uint16_t CheckNumAttacksLeft();
uint16_t HandleEnemyMonFainted();
uint16_t FaintEnemyPokemon();
void EnemyMonFaintedText();
uint8_t EndLowHealthAlarm();
uint16_t AnyEnemyPokemonAliveCheck();
uint16_t ReplaceFaintedEnemyMon();
uint16_t TrainerBattleVictory();
void MoneyForWinningText();
void TrainerDefeatedText();
void PlayBattleVictoryMusic();
uint16_t HandlePlayerMonFainted();
uint16_t RemoveFaintedPlayerMon();
void PlayerMonFaintedText();
uint16_t DoUseNextMonDialogue();
void UseNextMonText();
uint16_t ChooseNextMon();
uint16_t HandlePlayerBlackOut();
void Rival1WinText();
void PlayerBlackedOutText2();
void LinkBattleLostText();
uint16_t SlideDownFaintedMonPic();
void SevenSpacesText();
uint16_t SlideTrainerPicOffScreen();
void EnemySendOut();
uint16_t EnemySendOutFirstMon();
void TrainerAboutToUseText();
void TrainerSentOutText();
uint16_t AnyPartyAlive();
uint16_t HasMonFainted();
void NoWillText();
uint16_t TryRunningFromBattle();
void CantEscapeText();
void NoRunningText();
void GotAwayText();
uint16_t LoadBattleMonFromParty();
uint16_t LoadEnemyMonFromParty();
void SendOutMon();
void AnimateRetreatingPlayerMon();
void ReadPlayerMonCurHPAndStatus();
void DrawHUDsAndHPBars();
uint16_t DrawPlayerHUDAndHPBar();
void DrawEnemyHUDAndHPBar();
uint16_t GetBattleHealthBarColor();
uint16_t CenterMonName();
void DisplayBattleMenu();
void BagWasSelected();
void OldManItemList();
void DisplayPlayerBag();
void DisplayBagMenu();
uint16_t UseBagItem();
void ItemsCantBeUsedHereText();
void PartyMenuOrRockOrRun();
uint16_t SwitchPlayerMon();
void AlreadyOutText();
uint16_t BattleMenu_RunWasSelected();
uint8_t MoveSelectionMenu();
uint16_t SelectMenuItem();
void MoveNoPPText();
void MoveDisabledText();
void WhichTechniqueString();
void SelectMenuItem_CursorUp();
void SelectMenuItem_CursorDown();
uint16_t AnyMoveToSelect();
void NoMovesLeftText();
uint16_t SwapMovesInMenu();
void PrintMenuItem();
void DisabledText();
void TypeText();
uint16_t SelectEnemyMove();
uint8_t LinkBattleExchangeData();
void ExecutePlayerMove();
void CheckIfPlayerNeedsToChargeUp();
void PlayerCanExecuteChargingMove();
void PlayerCanExecuteMove();
void PlayerCalcMoveDamage();
void HandleIfPlayerMoveMissed();
void GetPlayerAnimationType();
void PlayPlayerMoveAnimation();
void PlayerCheckIfFlyOrChargeEffect();
uint16_t MirrorMoveCheck();
void MultiHitText();
uint8_t ExecutePlayerMoveDone();
uint16_t PrintGhostText();
void ScaredText();
void GetOutText();
uint8_t IsGhostBattle();
uint16_t CheckPlayerStatusConditions();
void FastAsleepText();
void WokeUpText();
void IsFrozenText();
void FullyParalyzedText();
void FlinchedText();
void MustRechargeText();
void DisabledNoMoreText();
void IsConfusedText();
void HurtItselfText();
void ConfusedNoMoreText();
void SavingEnergyText();
void UnleashedEnergyText();
void ThrashingAboutText();
void AttackContinuesText();
void CantMoveText();
void PrintMoveIsDisabledText();
void MoveIsDisabledText();
void HandleSelfConfusionDamage();
uint16_t PrintMoveFailureText();
void AttackMissedText();
void KeptGoingAndCrashedText();
void UnaffectedText();
void PrintDoesntAffectText();
void DoesntAffectMonText();
void PrintCriticalOHKOText();
void CriticalOHKOTextPointers();
void CriticalHitText();
void OHKOText();
uint16_t CheckForDisobedience();
void LoafingAroundText();
void BeganToNapText();
void WontObeyText();
void TurnedAwayText();
void IgnoredOrdersText();
uint16_t GetDamageVarsForPlayerAttack();
uint16_t GetDamageVarsForEnemyAttack();
uint16_t GetEnemyMonStat();
uint16_t CalculateDamage();
uint8_t JumpToOHKOMoveEffect();
uint16_t CriticalHitTest();
uint16_t HandleCounterMove();
void ApplyAttackToEnemyPokemon();
void ApplyDamageToEnemyPokemon();
void ApplyAttackToEnemyPokemonDone();
void ApplyAttackToPlayerPokemon();
void ApplyDamageToPlayerPokemon();
void ApplyAttackToPlayerPokemonDone();
uint16_t AttackSubstitute();
void SubstituteTookDamageText();
void SubstituteBrokeText();
uint16_t HandleBuildingRage();
void BuildingRageText();
uint16_t MirrorMoveCopyMove();
void MirrorMoveFailedText();
uint16_t ReloadMoveData();
void MetronomePickMove();
uint16_t IncrementMovePP();
uint16_t AdjustDamageForMoveType();
uint16_t AIGetTypeEffectiveness();
uint16_t MoveHitTest();
uint16_t CalcHitChance();
uint16_t RandomizeDamage();
uint8_t ExecuteEnemyMove();
void CheckIfEnemyNeedsToChargeUp();
void EnemyCanExecuteChargingMove();
void EnemyCanExecuteMove();
void EnemyCalcMoveDamage();
void EnemyMoveHitTest();
void HandleIfEnemyMoveMissed();
void GetEnemyAnimationType();
void HandleExplosionMiss();
void PlayEnemyMoveAnimation();
void EnemyCheckIfFlyOrChargeEffect();
uint16_t EnemyCheckIfMirrorMoveEffect();
void HitXTimesText();
void ExecuteEnemyMoveDone();
uint16_t CheckEnemyStatusConditions();
void GetCurrentMove();
uint16_t LoadEnemyMonData();
uint16_t DoBattleTransitionAndInitBattleVariables();
uint8_t SwapPlayerAndEnemyLevels();
void LoadPlayerBackPic();
void DoubleOrHalveSelectedStats();
void ScrollTrainerPicAfterBattle();
void ApplyBurnAndParalysisPenaltiesToPlayer();
void ApplyBurnAndParalysisPenaltiesToEnemy();
void ApplyBurnAndParalysisPenalties();
uint16_t QuarterSpeedDueToParalysis();
uint16_t HalveAttackDueToBurn();
uint8_t CalculateModifiedStats();
uint16_t CalculateModifiedStat();
uint16_t ApplyBadgeStatBoosts();
void LoadHudAndHpBarAndStatusTilePatterns();
void LoadHudTilePatterns();
void PrintEmptyString();
uint16_t BattleRandom();
uint16_t HandleExplodingAnimation();
void PlayMoveAnimation();
void InitBattle();
void InitOpponent();
uint8_t DetermineWildOpponent();
void InitBattleCommon();
void InitWildBattle();
uint16_t _InitBattleCommon();
void _LoadTrainerPic();
void ResetCryModifiers();
void AnimateSendingOutMon();
void CopyUncompressedPicToTilemap();
uint16_t CopyUncompressedPicToHL();
void LoadMonBackPic();

void BattleCore() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

BattleCore:
    /* include */
    /* include */
    /* include */
    /* include */
    /* include */
}

void SlidePlayerAndEnemySilhouettesOnScreen() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SlidePlayerAndEnemySilhouettesOnScreen:
    if (carry) LoadPlayerBackPic();
    a = MESSAGE_BOX; // the usual text box at the bottom of the screen
    *wTextBoxID = a;
    if (carry) DisplayTextBoxID();
    hl = hlcoord(1, 5);
    lb(bc, 3, 7);
    if (carry) ClearScreenArea();
    if (carry) DisableLCD();
    if (carry) LoadFontTilePatterns();
    if (carry) LoadHudAndHpBarAndStatusTilePatterns();
    hl = vBGMap0;
    bc = TILEMAP_AREA;
clearBackgroundLoop:
    a = ' ';
    hli = a;
    bc--; // TODO: set flags
    a = b;
    a |= c; zero = (a == 0); // TODO: set other flags
    if (!zero) goto clearBackgroundLoop;
    // copy the work RAM tile map to VRAM
    hl = hlcoord(0, 0);
    de = vBGMap0;
    b = SCREEN_HEIGHT;
copyRowLoop:
    c = SCREEN_WIDTH;
copyColumnLoop:
    a = hli;
    de = a;
    e++; // TODO: set flags
    c--; // TODO: set flags
    if (!zero) goto copyColumnLoop;
    a = 12; // number of off screen tiles to the right of screen in VRAM
    a = (uint8_t)(a + e); // TODO: set flags // skip the off screen tiles
    e = a;
    if (!carry) goto noCarry;
    d++; // TODO: set flags
noCarry:
    b--; // TODO: set flags
    if (!zero) goto copyRowLoop;
    if (carry) EnableLCD();
    a = 0x90;
    hWY = a; // LDH (High RAM)
    rWY = a; // LDH (High RAM)
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hTileAnimations = a; // LDH (High RAM)
    hSCY = a; // LDH (High RAM)
    a--; // TODO: set flags
    *wUpdateSpritesEnabled = a;
    if (carry) Delay3();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    b = 0x70;
    c = 0x90;
    a = c;
    hSCX = a; // LDH (High RAM)
    if (carry) DelayFrame();
    a = 0b11100100; // inverted palette for silhouette effect
    rBGP = a; // LDH (High RAM)
    rOBP0 = a; // LDH (High RAM)
    rOBP1 = a; // LDH (High RAM)
slideSilhouettesLoop:
    h = b;
    l = 0x40;
    if (carry) SetScrollXForSlidingPlayerBodyLeft(); // begin background scrolling on line $40
    b++; // TODO: set flags
    b++; // TODO: set flags
    h = 0x0;
    l = 0x60;
    if (carry) SetScrollXForSlidingPlayerBodyLeft(); // end background scrolling on line $60
    if (carry) SlidePlayerHeadLeft();
    a = c;
    hSCX = a; // LDH (High RAM)
    c--; // TODO: set flags
    c--; // TODO: set flags
    if (!zero) goto slideSilhouettesLoop;
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    a = 0x31;
    hStartTileID = a; // LDH (High RAM)
    hl = hlcoord(1, 5);
    predef(CopyUncompressedPicToTilemap);
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hWY = a; // LDH (High RAM)
    rWY = a; // LDH (High RAM)
    a++; // TODO: set flags
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    if (carry) Delay3();
    b = SET_PAL_BATTLE;
    if (carry) RunPaletteCommand();
    if (carry) HideSprites();
    jpfar(PrintBeginningBattleText);
    // when a battle is starting, silhouettes of the player's pic and the enemy's pic are slid onto the screen
    // the lower of the player's pic (his body) is part of the background, but his head is a sprite
    // the reason for this is that it shares Y coordinates with the lower part of the enemy pic, so background scrolling wouldn't work for both pics
    // instead, the enemy pic is part of the background and uses the scroll register, while the player's head is a sprite and is slid by changing its X coordinates in a loop
}

uint16_t SlidePlayerHeadLeft() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* PUSH bc - TODO: implement stack */
    hl = wShadowOAMSprite00XCoord;
    c = 7 * 3; // number of OAM entries
    de = OBJ_SIZE;
loop:
    hl--; // TODO: set flags // decrement X
    hl--; // TODO: set flags // decrement X
    hl = (uint16_t)(hl + de); // TODO: set flags // next OAM entry
    c--; // TODO: set flags
    if (!zero) goto loop;
    /* POP bc - TODO: implement stack */
    return;
}

uint8_t SetScrollXForSlidingPlayerBodyLeft() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SetScrollXForSlidingPlayerBodyLeft:
    a = rLY; // LDH (High RAM)
    zero = (a == l); carry = (a < l); // Compare
    if (!zero) goto SetScrollXForSlidingPlayerBodyLeft;
    a = h;
    rSCX = a; // LDH (High RAM)
loop:
    a = rLY; // LDH (High RAM)
    zero = (a == h); carry = (a < h); // Compare
    if (zero) goto loop;
    return;
}

uint16_t StartBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

StartBattle:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wPartyGainExpFlags = a;
    *wPartyFoughtCurrentEnemyFlags = a;
    *wActionResultOrTookBattleTurn = a;
    a++; // TODO: set flags
    *wFirstMonsNotOutYet = a;
    hl = wEnemyMon1HP;
    bc = PARTYMON_STRUCT_LENGTH - 1;
    d = 0x3;
findFirstAliveEnemyMonLoop:
    d++; // TODO: set flags
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    if (!zero) goto foundFirstAliveEnemyMon;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    goto findFirstAliveEnemyMonLoop;
foundFirstAliveEnemyMon:
    a = d;
    *wSerialExchangeNybbleReceiveData = a;
    a = *wIsInBattle;
    a--; // TODO: set flags // is it a trainer battle?
    if (carry) nz(); // if it is a trainer battle, send out enemy mon
    c = 40;
    if (carry) DelayFrames();
    if (carry) SaveScreenTilesToBuffer1();
checkAnyPartyAlive:
    if (carry) AnyPartyAlive();
    a = d;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto HandlePlayerBlackOut; // jump if no mon is alive
    if (carry) LoadScreenTilesFromBuffer1();
    a = *wBattleType;
    a &= a; zero = (a == 0); // TODO: set other flags // is it a normal battle?
    if (zero) goto playerSendOutFirstMon; // if so, send out player mon
    // safari zone battle
displaySafariZoneBattleMenu:
    if (carry) DisplayBattleMenu();
    return; // return if the player ran from battle
    a = *wActionResultOrTookBattleTurn;
    a &= a; zero = (a == 0); // TODO: set other flags // was the item used successfully?
    if (zero) goto displaySafariZoneBattleMenu; // if not, display the menu again; XXX does this ever jump?
    a = *wNumSafariBalls;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto notOutOfSafariBalls;
    if (carry) LoadScreenTilesFromBuffer1();
    hl = outOfSafariBallsText;
    goto PrintText;
notOutOfSafariBalls:
    callfar(PrintSafariZoneBattleText);
    a = *wEnemyMonSpeed + 1;
    a = (uint8_t)(a + a); // TODO: set flags
    b = a; // init b (which is later compared with random value) to (enemy speed % 256) * 2
    if (carry) goto EnemyRan; // if (enemy speed % 256) > 127, the enemy runs
    a = *wSafariBaitFactor;
    a &= a; zero = (a == 0); // TODO: set other flags // is bait factor 0?
    if (zero) goto checkEscapeFactor;
    // bait factor is not 0
    // divide b by 4 (making the mon less likely to run)
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
checkEscapeFactor:
    a = *wSafariEscapeFactor;
    a &= a; zero = (a == 0); // TODO: set other flags // is escape factor 0?
    if (zero) goto compareWithRandomValue;
    // escape factor is not 0
    // multiply b by 2 (making the mon more likely to run)
    carry = (b & 0x80) != 0; b = (uint8_t)(b << 1); // SLA
    if (!carry) goto compareWithRandomValue;
    // cap b at 255
    b = 0xff;
compareWithRandomValue:
    if (carry) Random();
    zero = (a == b); carry = (a < b); // Compare
    if (!carry) goto checkAnyPartyAlive;
    goto EnemyRan; // if b was greater than the random value, the enemy runs
outOfSafariBallsText:
    text_far(_OutOfSafariBallsText);
    text_end();
playerSendOutFirstMon:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wWhichPokemon = a;
findFirstAliveMonLoop:
    if (carry) HasMonFainted();
    if (!zero) goto foundFirstAliveMon;
    // fainted, go to the next one
    hl = wWhichPokemon;
    hl++; // TODO: set flags
    goto findFirstAliveMonLoop;
foundFirstAliveMon:
    a = *wWhichPokemon;
    *wPlayerMonNumber = a;
    a++; // TODO: set flags
    hl = wPartySpecies - 1;
    c = a;
    b = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl; // species
    *wCurPartySpecies = a;
    *wBattleMonSpecies2 = a;
    if (carry) LoadScreenTilesFromBuffer1();
    hl = hlcoord(1, 5);
    a = 0x9;
    if (carry) SlideTrainerPicOffScreen();
    if (carry) SaveScreenTilesToBuffer1();
    a = *wWhichPokemon;
    c = a;
    b = FLAG_SET;
    /* PUSH bc - TODO: implement stack */
    hl = wPartyGainExpFlags;
    predef(FlagActionPredef);
    hl = wPartyFoughtCurrentEnemyFlags;
    /* POP bc - TODO: implement stack */
    predef(FlagActionPredef);
    if (carry) LoadBattleMonFromParty();
    if (carry) LoadScreenTilesFromBuffer1();
    if (carry) SendOutMon();
    goto MainInBattleLoop;
    // wild mon or link battle enemy ran from battle
}

void EnemyRan() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemyRan:
    if (carry) LoadScreenTilesFromBuffer1();
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    hl = WildRanText;
    if (!zero) goto printText;
    // link battle
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wBattleResult = a;
    hl = EnemyRanText;
printText:
    if (carry) PrintText();
    a = SFX_RUN;
    if (carry) PlaySoundWaitForCurrent();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    jpfar(AnimationSlideEnemyMonOff);
}

void WildRanText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

WildRanText:
    text_far(_WildRanText);
    text_end();
}

void EnemyRanText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemyRanText:
    text_far(_EnemyRanText);
    text_end();
}

uint16_t MainInBattleLoop() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MainInBattleLoop:
    if (carry) ReadPlayerMonCurHPAndStatus();
    hl = wBattleMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // is battle mon HP 0?
    if (zero) goto HandlePlayerMonFainted; // if battle mon HP is 0, jump
    hl = wEnemyMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // is enemy mon HP 0?
    if (zero) goto HandleEnemyMonFainted; // if enemy mon HP is 0, jump
    if (carry) SaveScreenTilesToBuffer1();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wFirstMonsNotOutYet = a;
    a = *wPlayerBattleStatus2;
    a &= (1 << NEEDS_TO_RECHARGE) | (1 << USING_RAGE); zero = (a == 0); // TODO: set other flags // check if the player is using Rage or needs to recharge
    if (!zero) goto selectEnemyMove;
    // the player is not using Rage and doesn't need to recharge
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << FLINCHED); // reset flinch bit
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << FLINCHED); // reset flinch bit
    a = hl;
    a &= (1 << THRASHING_ABOUT) | (1 << CHARGING_UP); zero = (a == 0); // TODO: set other flags // check if the player is thrashing about or charging for an attack
    if (!zero) goto selectEnemyMove; // if so, jump
    // the player is neither thrashing about nor charging for an attack
    if (carry) DisplayBattleMenu(); // show battle menu
    return; // return if player ran from battle
    a = *wEscapedFromBattle;
    a &= a; zero = (a == 0); // TODO: set other flags
    return; // return if pokedoll was used to escape from battle
    a = *wBattleMonStatus;
    a &= (1 << FRZ) | SLP_MASK; zero = (a == 0); // TODO: set other flags
    if (!zero) goto selectEnemyMove; // if so, jump
    a = *wPlayerBattleStatus1;
    a &= (1 << STORING_ENERGY) | (1 << USING_TRAPPING_MOVE); zero = (a == 0); // TODO: set other flags // check player is using Bide or using a multi-turn attack like wrap
    if (!zero) goto selectEnemyMove; // if so, jump
    a = *wEnemyBattleStatus1;
    zero = ((a & (1 << USING_TRAPPING_MOVE)) == 0); // check if enemy is using a multi-turn attack like wrap
    if (zero) goto selectPlayerMove; // if not, jump
    // enemy is using a multi-turn attack like wrap, so player is trapped and cannot execute a move
    a = CANNOT_MOVE;
    *wPlayerSelectedMove = a;
    goto selectEnemyMove;
selectPlayerMove:
    a = *wActionResultOrTookBattleTurn;
    a &= a; zero = (a == 0); // TODO: set other flags // has the player already used the turn (e.g. by using an item, trying to run or switching pokemon)
    if (!zero) goto selectEnemyMove;
    *wMoveMenuType = a;
    a++; // TODO: set flags
    *wAnimationID = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wMenuItemToSwap = a;
    if (carry) MoveSelectionMenu();
    /* PUSH af - TODO: implement stack */
    if (carry) LoadScreenTilesFromBuffer1();
    if (carry) DrawHUDsAndHPBars();
    /* POP af - TODO: implement stack */
    if (!zero) goto MainInBattleLoop; // if the player didn't select a move, jump
selectEnemyMove:
    if (carry) SelectEnemyMove();
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto noLinkBattle;
    // link battle
    a = *wSerialExchangeNybbleReceiveData;
    zero = (a == LINKBATTLE_RUN); carry = (a < LINKBATTLE_RUN); // Compare
    if (zero) goto EnemyRan;
    zero = (a == LINKBATTLE_STRUGGLE); carry = (a < LINKBATTLE_STRUGGLE); // Compare
    if (zero) goto noLinkBattle;
    zero = (a == LINKBATTLE_NO_ACTION); carry = (a < LINKBATTLE_NO_ACTION); // Compare
    if (zero) goto noLinkBattle;
    a = (uint8_t)(a - 4); // TODO: set flags
    if (carry) goto noLinkBattle;
    // the link battle enemy has switched mons
    a = *wPlayerBattleStatus1;
    zero = ((a & (1 << USING_TRAPPING_MOVE)) == 0); // check if using multi-turn move like Wrap
    if (zero) goto specialMoveNotUsed;
    a = *wPlayerMoveListIndex;
    hl = wBattleMonMoves;
    c = a;
    b = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl;
    zero = (a == METRONOME); carry = (a < METRONOME); // Compare // a MIRROR MOVE check is missing, might lead to a desync in link battles
    // ; when combined with multi-turn moves
    if (!zero) goto specialMoveNotUsed;
    *wPlayerSelectedMove = a;
specialMoveNotUsed:
    callfar(SwitchEnemyMon);
noLinkBattle:
    a = *wPlayerSelectedMove;
    zero = (a == QUICK_ATTACK); carry = (a < QUICK_ATTACK); // Compare
    if (!zero) goto playerDidNotUseQuickAttack;
    a = *wEnemySelectedMove;
    zero = (a == QUICK_ATTACK); carry = (a < QUICK_ATTACK); // Compare
    if (zero) goto compareSpeed; // if both used Quick Attack
    goto playerMovesFirst; // if player used Quick Attack and enemy didn't
playerDidNotUseQuickAttack:
    a = *wEnemySelectedMove;
    zero = (a == QUICK_ATTACK); carry = (a < QUICK_ATTACK); // Compare
    if (zero) goto enemyMovesFirst; // if enemy used Quick Attack and player didn't
    a = *wPlayerSelectedMove;
    zero = (a == COUNTER); carry = (a < COUNTER); // Compare
    if (!zero) goto playerDidNotUseCounter;
    a = *wEnemySelectedMove;
    zero = (a == COUNTER); carry = (a < COUNTER); // Compare
    if (zero) goto compareSpeed; // if both used Counter
    goto enemyMovesFirst; // if player used Counter and enemy didn't
playerDidNotUseCounter:
    a = *wEnemySelectedMove;
    zero = (a == COUNTER); carry = (a < COUNTER); // Compare
    if (zero) goto playerMovesFirst; // if enemy used Counter and player didn't
compareSpeed:
    de = wBattleMonSpeed; // player speed value
    hl = wEnemyMonSpeed; // enemy speed value
    c = 0x2;
    if (carry) StringCmp(); // compare speed values
    if (zero) goto speedEqual;
    if (!carry) goto playerMovesFirst; // if player is faster
    goto enemyMovesFirst; // if enemy is faster
speedEqual:
    a = hSerialConnectionStatus; // LDH (High RAM)
    zero = (a == USING_INTERNAL_CLOCK); carry = (a < USING_INTERNAL_CLOCK); // Compare
    if (zero) goto invertOutcome;
    if (carry) BattleRandom();
    zero = (a == 50 percent + 1); carry = (a < 50 percent + 1); // Compare
    if (carry) goto playerMovesFirst;
    goto enemyMovesFirst;
invertOutcome:
    if (carry) BattleRandom();
    zero = (a == 50 percent + 1); carry = (a < 50 percent + 1); // Compare
    if (carry) goto enemyMovesFirst;
    goto playerMovesFirst;
enemyMovesFirst:
    a = 0x1;
    hWhoseTurn = a; // LDH (High RAM)
    callfar(TrainerAI);
    if (carry) goto AIActionUsedEnemyFirst;
    if (carry) ExecuteEnemyMove();
    a = *wEscapedFromBattle;
    a &= a; zero = (a == 0); // TODO: set other flags // was Teleport, Roar, or Whirlwind used to escape from battle?
    return; // if so, return
    a = b;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto HandlePlayerMonFainted;
AIActionUsedEnemyFirst:
    if (carry) HandlePoisonBurnLeechSeed();
    if (zero) goto HandleEnemyMonFainted;
    if (carry) DrawHUDsAndHPBars();
    if (carry) ExecutePlayerMove();
    a = *wEscapedFromBattle;
    a &= a; zero = (a == 0); // TODO: set other flags // was Teleport, Roar, or Whirlwind used to escape from battle?
    return; // if so, return
    a = b;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto HandleEnemyMonFainted;
    if (carry) HandlePoisonBurnLeechSeed();
    if (zero) goto HandlePlayerMonFainted;
    if (carry) DrawHUDsAndHPBars();
    if (carry) CheckNumAttacksLeft();
    goto MainInBattleLoop;
playerMovesFirst:
    if (carry) ExecutePlayerMove();
    a = *wEscapedFromBattle;
    a &= a; zero = (a == 0); // TODO: set other flags // was Teleport, Roar, or Whirlwind used to escape from battle?
    return; // if so, return
    a = b;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto HandleEnemyMonFainted;
    if (carry) HandlePoisonBurnLeechSeed();
    if (zero) goto HandlePlayerMonFainted;
    if (carry) DrawHUDsAndHPBars();
    a = 0x1;
    hWhoseTurn = a; // LDH (High RAM)
    callfar(TrainerAI);
    if (carry) goto AIActionUsedPlayerFirst;
    if (carry) ExecuteEnemyMove();
    a = *wEscapedFromBattle;
    a &= a; zero = (a == 0); // TODO: set other flags // was Teleport, Roar, or Whirlwind used to escape from battle?
    return; // if so, return
    a = b;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto HandlePlayerMonFainted;
AIActionUsedPlayerFirst:
    if (carry) HandlePoisonBurnLeechSeed();
    if (zero) goto HandleEnemyMonFainted;
    if (carry) DrawHUDsAndHPBars();
    if (carry) CheckNumAttacksLeft();
    goto MainInBattleLoop;
}

uint16_t HandlePoisonBurnLeechSeed() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandlePoisonBurnLeechSeed:
    hl = wBattleMonHP;
    de = wBattleMonStatus;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto playersTurn;
    hl = wEnemyMonHP;
    de = wEnemyMonStatus;
playersTurn:
    a = de;
    a &= (1 << BRN) | (1 << PSN); zero = (a == 0); // TODO: set other flags
    if (zero) goto notBurnedOrPoisoned;
    /* PUSH hl - TODO: implement stack */
    hl = HurtByPoisonText;
    a = de;
    a &= 1 << BRN; zero = (a == 0); // TODO: set other flags
    if (zero) goto poisoned;
    hl = HurtByBurnText;
poisoned:
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = BURN_PSN_ANIM;
    if (carry) PlayMoveAnimation(); // play burn/poison animation
    /* POP hl - TODO: implement stack */
    if (carry) HandlePoisonBurnLeechSeed_DecreaseOwnHP();
notBurnedOrPoisoned:
    de = wPlayerBattleStatus2;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto playersTurn2;
    de = wEnemyBattleStatus2;
playersTurn2:
    a = de;
    a = (uint8_t)(a + a); // TODO: set flags
    if (!carry) goto notLeechSeeded;
    /* PUSH hl - TODO: implement stack */
    a = hWhoseTurn; // LDH (High RAM)
    /* PUSH af - TODO: implement stack */
    a ^= 0x1; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = ABSORB;
    if (carry) PlayMoveAnimation(); // play leech seed animation (from opposing mon)
    /* POP af - TODO: implement stack */
    hWhoseTurn = a; // LDH (High RAM)
    /* POP hl - TODO: implement stack */
    if (carry) HandlePoisonBurnLeechSeed_DecreaseOwnHP();
    if (carry) HandlePoisonBurnLeechSeed_IncreaseEnemyHP();
    /* PUSH hl - TODO: implement stack */
    hl = HurtByLeechSeedText;
    if (carry) PrintText();
    /* POP hl - TODO: implement stack */
notLeechSeeded:
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    return; // test if fainted
    if (carry) DrawHUDsAndHPBars();
    c = 20;
    if (carry) DelayFrames();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
}

void HurtByPoisonText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HurtByPoisonText:
    text_far(_HurtByPoisonText);
    text_end();
}

void HurtByBurnText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HurtByBurnText:
    text_far(_HurtByBurnText);
    text_end();
}

void HurtByLeechSeedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HurtByLeechSeedText:
    text_far(_HurtByLeechSeedText);
    text_end();
    // decreases the mon's current HP by 1/16 of the Max HP (multiplied by number of toxic ticks if active)
    // note that the toxic ticks are considered even if the damage is not poison (hence the Leech Seed glitch)
    // hl: HP pointer
    // bc (out): total damage
}

uint16_t HandlePoisonBurnLeechSeed_DecreaseOwnHP() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandlePoisonBurnLeechSeed_DecreaseOwnHP:
    /* PUSH hl - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
    bc = 0xe; // skip to max HP
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hli; // load max HP
    *wHPBarMaxHP+1 = a;
    b = a;
    a = hl;
    *wHPBarMaxHP = a;
    c = a;
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = c; c = (uint8_t)((c >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = c; c = (uint8_t)((c >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (c & 1) != 0; c = (uint8_t)(c >> 1); // SRL
    carry = (c & 1) != 0; c = (uint8_t)(c >> 1); // SRL // c = max HP/16 (assumption: HP < 1024)
    a = c;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto nonZeroDamage;
    c++; // TODO: set flags // damage is at least 1
nonZeroDamage:
    hl = wPlayerBattleStatus3;
    de = wPlayerToxicCounter;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto playersTurn;
    hl = wEnemyBattleStatus3;
    de = wEnemyToxicCounter;
playersTurn:
    zero = ((hl & (1 << BADLY_POISONED)) == 0);
    if (zero) goto noToxic;
    a = de; // increment toxic counter
    a++; // TODO: set flags
    de = a;
    hl = 0;
toxicTicksLoop:
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a--; // TODO: set flags
    if (!zero) goto toxicTicksLoop;
    b = h; // bc = damage * toxic counter
    c = l;
noToxic:
    /* POP hl - TODO: implement stack */
    hl++; // TODO: set flags
    a = hl; // subtract total damage from current HP
    *wHPBarOldHP = a;
    a = (uint8_t)(a - c); // TODO: set flags
    hld = a;
    *wHPBarNewHP = a;
    a = hl;
    *wHPBarOldHP+1 = a;
    a = (uint8_t)(a - b - (carry ? 1 : 0)); // TODO: set flags
    hl = a;
    *wHPBarNewHP+1 = a;
    if (!carry) goto noOverkill;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // overkill: zero HP
    hli = a;
    hl = a;
    *wHPBarNewHP = a;
    *wHPBarNewHP+1 = a;
noOverkill:
    if (carry) UpdateCurMonHPBar();
    /* POP hl - TODO: implement stack */
    return;
    // adds bc to enemy HP
    // bc isn't updated if HP subtracted was capped to prevent overkill
}

uint16_t HandlePoisonBurnLeechSeed_IncreaseEnemyHP() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandlePoisonBurnLeechSeed_IncreaseEnemyHP:
    /* PUSH hl - TODO: implement stack */
    hl = wEnemyMonMaxHP;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto playersTurn;
    hl = wBattleMonMaxHP;
playersTurn:
    a = hli;
    *wHPBarMaxHP+1 = a;
    a = hl;
    *wHPBarMaxHP = a;
    de = wBattleMonHP - wBattleMonMaxHP;
    hl = (uint16_t)(hl + de); // TODO: set flags // skip back from max hp to current hp
    a = hl;
    *wHPBarOldHP = a; // add bc to current HP
    a = (uint8_t)(a + c); // TODO: set flags
    hld = a;
    *wHPBarNewHP = a;
    a = hl;
    *wHPBarOldHP+1 = a;
    a = (uint8_t)(a + b + (carry ? 1 : 0)); // TODO: set flags
    hli = a;
    *wHPBarNewHP+1 = a;
    a = *wHPBarMaxHP;
    c = a;
    a = hld;
    a = (uint8_t)(a - c); // TODO: set flags
    a = *wHPBarMaxHP+1;
    b = a;
    a = hl;
    a = (uint8_t)(a - b - (carry ? 1 : 0)); // TODO: set flags
    if (carry) goto noOverfullHeal;
    a = b; // overfull heal, set HP to max HP
    hli = a;
    *wHPBarNewHP+1 = a;
    a = c;
    hl = a;
    *wHPBarNewHP = a;
noOverfullHeal:
    a = hWhoseTurn; // LDH (High RAM)
    a ^= 0x1; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    if (carry) UpdateCurMonHPBar();
    a = hWhoseTurn; // LDH (High RAM)
    a ^= 0x1; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    /* POP hl - TODO: implement stack */
    return;
}

uint8_t UpdateCurMonHPBar() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

UpdateCurMonHPBar:
    hl = hlcoord(10, 9); // tile pointer to player HP bar
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    a = 0x1;
    if (zero) goto playersTurn;
    hl = hlcoord(2, 2); // tile pointer to enemy HP bar
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
playersTurn:
    /* PUSH bc - TODO: implement stack */
    *wHPBarType = a;
    predef(UpdateHPBar2);
    /* POP bc - TODO: implement stack */
    return;
}

uint16_t CheckNumAttacksLeft() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CheckNumAttacksLeft:
    a = *wPlayerNumAttacksLeft;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto checkEnemy;
    // player has 0 attacks left
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE); // player not using multi-turn attack like wrap any more
checkEnemy:
    a = *wEnemyNumAttacksLeft;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    // enemy has 0 attacks left
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE); // enemy not using multi-turn attack like wrap any more
    return;
}

uint16_t HandleEnemyMonFainted() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandleEnemyMonFainted:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wInHandlePlayerMonFainted = a;
    if (carry) FaintEnemyPokemon();
    if (carry) AnyPartyAlive();
    a = d;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto HandlePlayerBlackOut; // if no party mons are alive, the player blacks out
    hl = wBattleMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // is battle mon HP zero?
    if (carry) nz(); // if battle mon HP is not zero, draw player HD and HP bar
    a = *wIsInBattle;
    a--; // TODO: set flags
    return; // return if it's a wild battle
    if (carry) AnyEnemyPokemonAliveCheck();
    if (zero) goto TrainerBattleVictory;
    hl = wBattleMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // does battle mon have 0 HP?
    if (!zero) goto skipReplacingBattleMon; // if not, skip replacing battle mon
    if (carry) DoUseNextMonDialogue(); // this call is useless in a trainer battle. it shouldn't be here
    return;
    if (carry) ChooseNextMon();
skipReplacingBattleMon:
    a = 0x1;
    *wActionResultOrTookBattleTurn = a;
    if (carry) ReplaceFaintedEnemyMon();
    if (zero) goto EnemyRan;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wActionResultOrTookBattleTurn = a;
    goto MainInBattleLoop;
}

uint16_t FaintEnemyPokemon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

FaintEnemyPokemon:
    if (carry) ReadPlayerMonCurHPAndStatus();
    a = *wIsInBattle;
    a--; // TODO: set flags
    if (zero) goto wild;
    a = *wEnemyMonPartyPos;
    hl = wEnemyMon1HP;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    hl = a;
wild:
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << ATTACKING_MULTIPLE_TIMES);
    // Bug. This only zeroes the high byte of the player's accumulated damage,
    // setting the accumulated damage to itself mod 256 instead of 0 as was probably
    // intended. That alone is problematic, but this mistake has another more severe
    // effect. This function's counterpart for when the player mon faints,
    // RemoveFaintedPlayerMon, zeroes both the high byte and the low byte. In a link
    // battle, the other player's Game Boy will call that function in response to
    // the enemy mon (the player mon from the other side's perspective) fainting,
    // and the states of the two Game Boys will go out of sync unless the damage
    // was congruent to 0 modulo 256.
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wPlayerBideAccumulatedDamage = a;
    hl = wEnemyStatsToDouble; // clear enemy statuses
    hli = a;
    hli = a;
    hli = a;
    hli = a;
    hl = a;
    *wEnemyDisabledMove = a;
    *wEnemyDisabledMoveNumber = a;
    *wEnemyMonMinimized = a;
    hl = wPlayerUsedMove;
    hli = a;
    hl = a;
    hl = hlcoord(12, 5);
    de = decoord(12, 6);
    if (carry) SlideDownFaintedMonPic();
    hl = hlcoord(0, 0);
    lb(bc, 4, 11);
    if (carry) ClearScreenArea();
    a = *wIsInBattle;
    a--; // TODO: set flags
    if (zero) goto wild_win;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wFrequencyModifier = a;
    *wTempoModifier = a;
    a = SFX_FAINT_FALL;
    if (carry) PlaySoundWaitForCurrent();
sfxwait:
    a = *wChannelSoundIDs + CHAN5;
    zero = (a == SFX_FAINT_FALL); carry = (a < SFX_FAINT_FALL); // Compare
    if (zero) goto sfxwait;
    a = SFX_FAINT_THUD;
    if (carry) PlaySound();
    if (carry) WaitForSoundToFinish();
    goto sfxplayed;
wild_win:
    if (carry) EndLowHealthAlarm();
    a = MUSIC_DEFEATED_WILD_MON;
    if (carry) PlayBattleVictoryMusic();
sfxplayed:
    // bug: win sfx is played for wild battles before checking for player mon HP
    // this can lead to odd scenarios where both player and enemy faint, as the win sfx plays yet the player never won the battle
    hl = wBattleMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    if (!zero) goto playermonnotfaint;
    a = *wInHandlePlayerMonFainted;
    a &= a; zero = (a == 0); // TODO: set other flags // was this called by HandlePlayerMonFainted?
    if (!zero) goto playermonnotfaint; // if so, don't call RemoveFaintedPlayerMon twice
    if (carry) RemoveFaintedPlayerMon();
playermonnotfaint:
    if (carry) AnyPartyAlive();
    a = d;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    hl = EnemyMonFaintedText;
    if (carry) PrintText();
    if (carry) PrintEmptyString();
    if (carry) SaveScreenTilesToBuffer1();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wBattleResult = a;
    b = EXP_ALL;
    if (carry) IsItemInBag();
    /* PUSH af - TODO: implement stack */
    if (zero) goto giveExpToMonsThatFought; // if no exp all, then jump
    // the player has exp all
    // first, we halve the values that determine exp gain
    // the enemy mon base stats are added to stat exp, so they are halved
    // the base exp (which determines normal exp) is also halved
    hl = wEnemyMonBaseStats;
    b = NUM_STATS + 2;
halveExpDataLoop:
    carry = (hl & 1) != 0; hl = (uint8_t)(hl >> 1); // SRL
    hl++; // TODO: set flags
    b--; // TODO: set flags
    if (!zero) goto halveExpDataLoop;
    // give exp (divided evenly) to the mons that actually fought in battle against the enemy mon that has fainted
    // if exp all is in the bag, this will be only be half of the stat exp and normal exp, due to the above loop
giveExpToMonsThatFought:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wBoostExpByExpAll = a;
    callfar(GainExperience);
    /* POP af - TODO: implement stack */
    return; // return if no exp all
    // the player has exp all
    // now, set the gain exp flag for every party member
    // half of the total stat exp and normal exp will divided evenly amongst every party member
    a = TRUE;
    *wBoostExpByExpAll = a;
    a = *wPartyCount;
    b = 0;
gainExpFlagsLoop:
    /* scf */
    { uint8_t temp = b; b = (uint8_t)((b << 1) | (carry ? 1 : 0)); carry = (temp & 0x80) != 0; } // RL
    a--; // TODO: set flags
    if (!zero) goto gainExpFlagsLoop;
    a = b;
    *wPartyGainExpFlags = a;
    jpfar(GainExperience);
}

void EnemyMonFaintedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemyMonFaintedText:
    text_far(_EnemyMonFaintedText);
    text_end();
}

uint8_t EndLowHealthAlarm() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EndLowHealthAlarm:
    // This function is called when the player has the won the battle. It turns off
    // the low health alarm and prevents it from reactivating until the next battle.
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wLowHealthAlarm = a; // turn off low health alarm
    *wChannelSoundIDs + CHAN5 = a;
    a++; // TODO: set flags
    *wLowHealthAlarmDisabled = a; // prevent it from reactivating
    return;
}

uint16_t AnyEnemyPokemonAliveCheck() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AnyEnemyPokemonAliveCheck:
    a = *wEnemyPartyCount;
    b = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wEnemyMon1HP;
    de = PARTYMON_STRUCT_LENGTH;
nextPokemon:
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl++; // TODO: set flags
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl--; // TODO: set flags
    hl = (uint16_t)(hl + de); // TODO: set flags
    b--; // TODO: set flags
    if (!zero) goto nextPokemon;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    // stores whether enemy ran in Z flag
}

uint16_t ReplaceFaintedEnemyMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ReplaceFaintedEnemyMon:
    hl = wEnemyHPBarColor;
    e = 0x30;
    if (carry) GetBattleHealthBarColor();
    callfar(DrawEnemyPokeballs);
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto notLinkBattle;
    // link battle
    if (carry) LinkBattleExchangeData();
    a = *wSerialExchangeNybbleReceiveData;
    zero = (a == LINKBATTLE_RUN); carry = (a < LINKBATTLE_RUN); // Compare
    return;
    if (carry) LoadScreenTilesFromBuffer1();
notLinkBattle:
    if (carry) EnemySendOut();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wEnemyMoveNum = a;
    *wActionResultOrTookBattleTurn = a;
    *wAILayer2Encouragement = a;
    a++; // TODO: set flags // reset Z flag
    return;
}

uint16_t TrainerBattleVictory() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

TrainerBattleVictory:
    if (carry) EndLowHealthAlarm();
    b = MUSIC_DEFEATED_GYM_LEADER;
    a = *wGymLeaderNo;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto gymleader;
    b = MUSIC_DEFEATED_TRAINER;
gymleader:
    a = *wTrainerClass;
    zero = (a == RIVAL3); carry = (a < RIVAL3); // Compare // final battle against rival
    if (!zero) goto notrival;
    b = MUSIC_DEFEATED_GYM_LEADER;
    hl = wStatusFlags7;
    hl |= (1 << BIT_NO_MAP_MUSIC);
notrival:
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    a = b;
    if (carry) nz();
    hl = TrainerDefeatedText;
    if (carry) PrintText();
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    return;
    if (carry) ScrollTrainerPicAfterBattle();
    c = 40;
    if (carry) DelayFrames();
    if (carry) PrintEndBattleText();
    // win money
    hl = MoneyForWinningText;
    if (carry) PrintText();
    de = wPlayerMoney + 2;
    hl = wAmountMoneyWon + 2;
    c = 0x3;
    /* predef_jump */
}

void MoneyForWinningText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MoneyForWinningText:
    text_far(_MoneyForWinningText);
    text_end();
}

void TrainerDefeatedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

TrainerDefeatedText:
    text_far(_TrainerDefeatedText);
    text_end();
}

void PlayBattleVictoryMusic() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PlayBattleVictoryMusic:
    /* PUSH af - TODO: implement stack */
    a = SFX_STOP_ALL_MUSIC;
    *wNewSoundID = a;
    if (carry) PlaySoundWaitForCurrent();
    c = BANK(Music_DefeatedTrainer);
    /* POP af - TODO: implement stack */
    if (carry) PlayMusic();
    goto Delay3;
}

uint16_t HandlePlayerMonFainted() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandlePlayerMonFainted:
    a = 1;
    *wInHandlePlayerMonFainted = a;
    if (carry) RemoveFaintedPlayerMon();
    if (carry) AnyPartyAlive(); // test if any more mons are alive
    a = d;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto HandlePlayerBlackOut;
    hl = wEnemyMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // is enemy mon's HP 0?
    if (!zero) goto doUseNextMonDialogue; // if not, jump
    // the enemy mon has 0 HP
    if (carry) FaintEnemyPokemon();
    a = *wIsInBattle;
    a--; // TODO: set flags
    return; // if wild encounter, battle is over
    if (carry) AnyEnemyPokemonAliveCheck();
    if (zero) goto TrainerBattleVictory;
doUseNextMonDialogue:
    if (carry) DoUseNextMonDialogue();
    return; // return if the player ran from battle
    if (carry) ChooseNextMon();
    if (!zero) goto MainInBattleLoop; // if the enemy mon has more than 0 HP, go back to battle loop
    // the enemy mon has 0 HP
    a = 0x1;
    *wActionResultOrTookBattleTurn = a;
    if (carry) ReplaceFaintedEnemyMon();
    if (zero) goto EnemyRan; // if enemy ran from battle rather than sending out another mon, jump
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wActionResultOrTookBattleTurn = a;
    goto MainInBattleLoop;
    // resets flags, slides mon's pic down, plays cry, and prints fainted message
}

uint16_t RemoveFaintedPlayerMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

RemoveFaintedPlayerMon:
    a = *wPlayerMonNumber;
    c = a;
    hl = wPartyGainExpFlags;
    b = FLAG_RESET;
    predef(FlagActionPredef); // clear gain exp flag for fainted mon
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << ATTACKING_MULTIPLE_TIMES);
    a = *wLowHealthAlarm;
    zero = ((a & (1 << BIT_LOW_HEALTH_ALARM)) == 0);
    if (zero) goto skipWaitForSound;
    a = DISABLE_LOW_HEALTH_ALARM;
    *wLowHealthAlarm = a;
    if (carry) WaitForSoundToFinish();
skipWaitForSound:
    // a is 0, so this zeroes the enemy's accumulated damage.
    hl = wEnemyBideAccumulatedDamage;
    hli = a;
    hl = a;
    *wBattleMonStatus = a;
    if (carry) ReadPlayerMonCurHPAndStatus();
    hl = hlcoord(9, 7);
    lb(bc, 5, 11);
    if (carry) ClearScreenArea();
    hl = hlcoord(1, 10);
    de = decoord(1, 11);
    if (carry) SlideDownFaintedMonPic();
    a = 0x1;
    *wBattleResult = a;
    // When the player mon and enemy mon faint at the same time and the fact that the
    // enemy mon has fainted is detected first (e.g. when the player mon knocks out
    // the enemy mon using a move with recoil and faints due to the recoil), don't
    // play the player mon's cry or show the "[player mon] fainted!" message.
    a = *wInHandlePlayerMonFainted;
    a &= a; zero = (a == 0); // TODO: set other flags // was this called by HandleEnemyMonFainted?
    return; // if so, return
    a = *wBattleMonSpecies;
    if (carry) PlayCry();
    hl = PlayerMonFaintedText;
    goto PrintText;
}

void PlayerMonFaintedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PlayerMonFaintedText:
    text_far(_PlayerMonFaintedText);
    text_end();
    // asks if you want to use next mon
    // stores whether you ran in C flag
}

uint16_t DoUseNextMonDialogue() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DoUseNextMonDialogue:
    if (carry) PrintEmptyString();
    if (carry) SaveScreenTilesToBuffer1();
    a = *wIsInBattle;
    a &= a; zero = (a == 0); // TODO: set other flags
    a--; // TODO: set flags
    return; // return if it's a trainer battle
    hl = UseNextMonText;
    if (carry) PrintText();
displayYesNoBox:
    hl = hlcoord(13, 9);
    lb(bc, 10, 14);
    a = TWO_OPTION_MENU;
    *wTextBoxID = a;
    if (carry) DisplayTextBoxID();
    a = *wMenuExitMethod;
    zero = (a == CHOSE_SECOND_ITEM); carry = (a < CHOSE_SECOND_ITEM); // Compare // did the player choose NO?
    if (zero) goto tryRunning; // if the player chose NO, try running
    a &= a; zero = (a == 0); // TODO: set other flags // reset carry
    return;
tryRunning:
    a = *wCurrentMenuItem;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto displayYesNoBox; // xxx when does this happen?
    hl = wPartyMon1Speed;
    de = wEnemyMonSpeed;
    goto TryRunningFromBattle;
}

void UseNextMonText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

UseNextMonText:
    text_far(_UseNextMonText);
    text_end();
    // choose next player mon to send out
    // stores whether enemy mon has no HP left in Z flag
}

uint16_t ChooseNextMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ChooseNextMon:
    a = BATTLE_PARTY_MENU;
    *wPartyMenuTypeOrMessageID = a;
    if (carry) DisplayPartyMenu();
checkIfMonChosen:
    if (!carry) goto monChosen;
goBackToPartyMenu:
    if (carry) GoBackToPartyMenu();
    goto checkIfMonChosen;
monChosen:
    if (carry) HasMonFainted();
    if (zero) goto goBackToPartyMenu; // if mon fainted, you have to choose another
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto notLinkBattle;
    a++; // TODO: set flags // 1
    *wActionResultOrTookBattleTurn = a;
    if (carry) LinkBattleExchangeData();
notLinkBattle:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wActionResultOrTookBattleTurn = a;
    if (carry) ClearSprites();
    a = *wWhichPokemon;
    *wPlayerMonNumber = a;
    c = a;
    hl = wPartyGainExpFlags;
    b = FLAG_SET;
    /* PUSH bc - TODO: implement stack */
    predef(FlagActionPredef);
    /* POP bc - TODO: implement stack */
    hl = wPartyFoughtCurrentEnemyFlags;
    predef(FlagActionPredef);
    if (carry) LoadBattleMonFromParty();
    if (carry) GBPalWhiteOut();
    if (carry) LoadHudTilePatterns();
    if (carry) LoadScreenTilesFromBuffer1();
    if (carry) RunDefaultPaletteCommand();
    if (carry) GBPalNormal();
    if (carry) SendOutMon();
    hl = wEnemyMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    return;
    // called when player is out of usable mons.
    // prints appropriate lose message, sets carry flag if player blacked out (special case for initial rival fight)
}

uint16_t HandlePlayerBlackOut() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandlePlayerBlackOut:
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (zero) goto notRival1Battle;
    a = *wCurOpponent;
    zero = (a == OPP_RIVAL1); carry = (a < OPP_RIVAL1); // Compare
    if (!zero) goto notRival1Battle;
    hl = hlcoord(0, 0); // rival 1 battle
    lb(bc, 8, 21);
    if (carry) ClearScreenArea();
    if (carry) ScrollTrainerPicAfterBattle();
    c = 40;
    if (carry) DelayFrames();
    hl = Rival1WinText;
    if (carry) PrintText();
    a = *wCurMap;
    zero = (a == OAKS_LAB); carry = (a < OAKS_LAB); // Compare
    return; // starter battle in oak's lab: don't black out
notRival1Battle:
    b = SET_PAL_BATTLE_BLACK;
    if (carry) RunPaletteCommand();
    hl = PlayerBlackedOutText2;
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto noLinkBattle;
    hl = LinkBattleLostText;
noLinkBattle:
    if (carry) PrintText();
    a = *wStatusFlags6;
    a &= ~(1 << BIT_ALWAYS_ON_BIKE);
    *wStatusFlags6 = a;
    if (carry) ClearScreen();
    /* scf */
    return;
}

void Rival1WinText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

Rival1WinText:
    text_far(_Rival1WinText);
    text_end();
}

void PlayerBlackedOutText2() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PlayerBlackedOutText2:
    text_far(_PlayerBlackedOutText2);
    text_end();
}

void LinkBattleLostText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

LinkBattleLostText:
    text_far(_LinkBattleLostText);
    text_end();
    // slides pic of fainted mon downwards until it disappears
    // bug: when this is called, [hAutoBGTransferEnabled] is non-zero, so there is screen tearing
}

uint16_t SlideDownFaintedMonPic() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SlideDownFaintedMonPic:
    a = *wStatusFlags5;
    /* PUSH af - TODO: implement stack */
    a |= (1 << BIT_NO_TEXT_DELAY);
    *wStatusFlags5 = a;
    b = PIC_HEIGHT; // number of times to slide
slideStepLoop:
    /* PUSH bc - TODO: implement stack */
    /* PUSH de - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
    b = PIC_HEIGHT - 1; // number of rows
rowLoop:
    /* PUSH bc - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
    /* PUSH de - TODO: implement stack */
    bc = PIC_WIDTH;
    if (carry) CopyData();
    /* POP de - TODO: implement stack */
    /* POP hl - TODO: implement stack */
    bc = -SCREEN_WIDTH;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    /* PUSH hl - TODO: implement stack */
    h = d;
    l = e;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    d = h;
    e = l;
    /* POP hl - TODO: implement stack */
    /* POP bc - TODO: implement stack */
    b--; // TODO: set flags
    if (!zero) goto rowLoop;
    bc = SCREEN_WIDTH;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    de = SevenSpacesText;
    if (carry) PlaceString();
    c = 2;
    if (carry) DelayFrames();
    /* POP hl - TODO: implement stack */
    /* POP de - TODO: implement stack */
    /* POP bc - TODO: implement stack */
    b--; // TODO: set flags
    if (!zero) goto slideStepLoop;
    /* POP af - TODO: implement stack */
    *wStatusFlags5 = a;
    return;
}

void SevenSpacesText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SevenSpacesText:
    ds(PIC_WIDTH, ' ');
    db("@");
    // slides the player or enemy trainer off screen
    // a is the number of tiles to slide it horizontally (always 9 for the player trainer or 8 for the enemy trainer)
    // if a is 8, the slide is to the right, else it is to the left
    // bug: when this is called, [hAutoBGTransferEnabled] is non-zero, so there is screen tearing
}

uint16_t SlideTrainerPicOffScreen() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SlideTrainerPicOffScreen:
    hSlideAmount = a; // LDH (High RAM)
    c = a;
slideStepLoop:
    /* PUSH bc - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
    b = PIC_HEIGHT; // number of rows
rowLoop:
    /* PUSH hl - TODO: implement stack */
    a = hSlideAmount; // LDH (High RAM)
    c = a;
columnLoop:
    a = hSlideAmount; // LDH (High RAM)
    zero = (a == 8); carry = (a < 8); // Compare
    if (zero) goto slideRight;
    // slide player sprite left off screen
    a = hld;
    hli = a;
    hl++; // TODO: set flags
    goto nextColumn;
slideRight:
    a = hli;
    hld = a;
    hl--; // TODO: set flags
nextColumn:
    c--; // TODO: set flags
    if (!zero) goto columnLoop;
    /* POP hl - TODO: implement stack */
    de = SCREEN_WIDTH;
    hl = (uint16_t)(hl + de); // TODO: set flags
    b--; // TODO: set flags
    if (!zero) goto rowLoop;
    c = 2;
    if (carry) DelayFrames();
    /* POP hl - TODO: implement stack */
    /* POP bc - TODO: implement stack */
    c--; // TODO: set flags
    if (!zero) goto slideStepLoop;
    return;
    // send out a trainer's mon
}

void EnemySendOut() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemySendOut:
    hl = wPartyGainExpFlags;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = a;
    a = *wPlayerMonNumber;
    c = a;
    b = FLAG_SET;
    /* PUSH bc - TODO: implement stack */
    predef(FlagActionPredef);
    hl = wPartyFoughtCurrentEnemyFlags;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = a;
    /* POP bc - TODO: implement stack */
    predef(FlagActionPredef);
    // don't change wPartyGainExpFlags or wPartyFoughtCurrentEnemyFlags
}

uint16_t EnemySendOutFirstMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemySendOutFirstMon:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wEnemyStatsToDouble; // clear enemy statuses
    hli = a;
    hli = a;
    hli = a;
    hli = a;
    hl = a;
    *wEnemyDisabledMove = a;
    *wEnemyDisabledMoveNumber = a;
    *wEnemyMonMinimized = a;
    hl = wPlayerUsedMove;
    hli = a;
    hl = a;
    a--; // TODO: set flags
    *wAICount = a;
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE);
    hl = hlcoord(18, 0);
    a = 8;
    if (carry) SlideTrainerPicOffScreen();
    if (carry) PrintEmptyString();
    if (carry) SaveScreenTilesToBuffer1();
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto next;
    a = *wSerialExchangeNybbleReceiveData;
    a = (uint8_t)(a - 4); // TODO: set flags
    *wWhichPokemon = a;
    goto next3;
next:
    b = 0xff;
next2:
    b++; // TODO: set flags
    a = *wEnemyMonPartyPos;
    zero = (a == b); carry = (a < b); // Compare
    if (zero) goto next2;
    hl = wEnemyMon1;
    a = b;
    *wWhichPokemon = a;
    /* PUSH bc - TODO: implement stack */
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    /* POP bc - TODO: implement stack */
    hl++; // TODO: set flags
    a = hli;
    c = a;
    a = hl;
    a |= c; zero = (a == 0); // TODO: set other flags
    if (zero) goto next2;
next3:
    a = *wWhichPokemon;
    hl = wEnemyMon1Level;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    a = hl;
    *wCurEnemyLevel = a;
    a = *wWhichPokemon;
    a++; // TODO: set flags
    hl = wEnemyPartyCount;
    c = a;
    b = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl;
    *wEnemyMonSpecies2 = a;
    *wCurPartySpecies = a;
    if (carry) LoadEnemyMonData();
    hl = wEnemyMonHP;
    a = hli;
    *wLastSwitchInEnemyMonHP = a;
    a = hl;
    *wLastSwitchInEnemyMonHP + 1 = a;
    a = 1;
    *wCurrentMenuItem = a;
    a = *wFirstMonsNotOutYet;
    a--; // TODO: set flags
    if (zero) goto next4;
    a = *wPartyCount;
    a--; // TODO: set flags
    if (zero) goto next4;
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (zero) goto next4;
    a = *wOptions;
    zero = ((a & (1 << BIT_BATTLE_SHIFT)) == 0);
    if (!zero) goto next4;
    hl = TrainerAboutToUseText;
    if (carry) PrintText();
    hl = hlcoord(0, 7);
    lb(bc, 8, 1);
    a = TWO_OPTION_MENU;
    *wTextBoxID = a;
    if (carry) DisplayTextBoxID();
    a = *wCurrentMenuItem;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto next4;
    a = BATTLE_PARTY_MENU;
    *wPartyMenuTypeOrMessageID = a;
    if (carry) DisplayPartyMenu();
next9:
    a = 1;
    *wCurrentMenuItem = a;
    if (carry) goto next7;
    hl = wPlayerMonNumber;
    a = *wWhichPokemon;
    zero = (a == hl); carry = (a < hl); // Compare
    if (!zero) goto next6;
    hl = AlreadyOutText;
    if (carry) PrintText();
next8:
    if (carry) GoBackToPartyMenu();
    goto next9;
next6:
    if (carry) HasMonFainted();
    if (zero) goto next8;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wCurrentMenuItem = a;
next7:
    if (carry) GBPalWhiteOut();
    if (carry) LoadHudTilePatterns();
    if (carry) LoadScreenTilesFromBuffer1();
next4:
    if (carry) ClearSprites();
    hl = hlcoord(0, 0);
    lb(bc, 4, 11);
    if (carry) ClearScreenArea();
    b = SET_PAL_BATTLE;
    if (carry) RunPaletteCommand();
    if (carry) GBPalNormal();
    hl = TrainerSentOutText;
    if (carry) PrintText();
    a = *wEnemyMonSpecies2;
    *wCurPartySpecies = a;
    *wCurSpecies = a;
    if (carry) GetMonHeader();
    de = vFrontPic;
    if (carry) LoadMonFrontSprite();
    a = -$31;
    hStartTileID = a; // LDH (High RAM)
    hl = hlcoord(15, 6);
    predef(AnimateSendingOutMon);
    a = *wEnemyMonSpecies2;
    if (carry) PlayCry();
    if (carry) DrawEnemyHUDAndHPBar();
    a = *wCurrentMenuItem;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wPartyGainExpFlags = a;
    *wPartyFoughtCurrentEnemyFlags = a;
    if (carry) SaveScreenTilesToBuffer1();
    goto SwitchPlayerMon;
}

void TrainerAboutToUseText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

TrainerAboutToUseText:
    text_far(_TrainerAboutToUseText);
    text_end();
}

void TrainerSentOutText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

TrainerSentOutText:
    text_far(_TrainerSentOutText);
    text_end();
    // tests if the player has any pokemon that are not fainted
    // sets d = 0 if all fainted, d != 0 if some mons are still alive
}

uint16_t AnyPartyAlive() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AnyPartyAlive:
    a = *wPartyCount;
    e = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wPartyMon1HP;
    bc = PARTYMON_STRUCT_LENGTH - 1;
partyMonsLoop:
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl++; // TODO: set flags
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl = (uint16_t)(hl + bc); // TODO: set flags
    e--; // TODO: set flags
    if (!zero) goto partyMonsLoop;
    d = a;
    return;
    // tests if player mon has fainted
    // stores whether mon has fainted in Z flag
}

uint16_t HasMonFainted() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HasMonFainted:
    a = *wWhichPokemon;
    hl = wPartyMon1HP;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    return;
    a = *wFirstMonsNotOutYet;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto done;
    hl = NoWillText;
    if (carry) PrintText();
done:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
}

void NoWillText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

NoWillText:
    text_far(_NoWillText);
    text_end();
    // try to run from battle (hl = player speed, de = enemy speed)
    // stores whether the attempt was successful in carry flag
}

uint16_t TryRunningFromBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

TryRunningFromBattle:
    if (carry) IsGhostBattle();
    if (zero) goto canEscape; // jump if it's a ghost battle
    a = *wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    if (zero) goto canEscape; // jump if it's a safari battle
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (zero) goto canEscape;
    a = *wIsInBattle;
    a--; // TODO: set flags
    if (!zero) goto trainerBattle; // jump if it's a trainer battle
    a = *wNumRunAttempts;
    a++; // TODO: set flags
    *wNumRunAttempts = a;
    a = hli;
    hMultiplicand + 1 = a; // LDH (High RAM)
    a = hl;
    hMultiplicand + 2 = a; // LDH (High RAM)
    a = de;
    hEnemySpeed = a; // LDH (High RAM)
    de++; // TODO: set flags
    a = de;
    hEnemySpeed + 1 = a; // LDH (High RAM)
    if (carry) LoadScreenTilesFromBuffer1();
    de = hMultiplicand + 1;
    hl = hEnemySpeed;
    c = 2;
    if (carry) StringCmp();
    if (!carry) goto canEscape; // jump if player speed greater than enemy speed
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hMultiplicand = a; // LDH (High RAM)
    a = 32;
    hMultiplier = a; // LDH (High RAM)
    if (carry) Multiply(); // multiply player speed by 32
    a = hProduct + 2; // LDH (High RAM)
    hDividend = a; // LDH (High RAM)
    a = hProduct + 3; // LDH (High RAM)
    hDividend + 1 = a; // LDH (High RAM)
    a = hEnemySpeed; // LDH (High RAM)
    b = a;
    a = hEnemySpeed + 1; // LDH (High RAM)
    // divide enemy speed by 4
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = a; a = (uint8_t)((a >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = a; a = (uint8_t)((a >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto canEscape; // jump if enemy speed divided by 4, mod 256 is 0
    hDivisor = a; // LDH (High RAM) // ((enemy speed / 4) % 256)
    b = 0x2;
    if (carry) Divide(); // divide (player speed * 32) by ((enemy speed / 4) % 256)
    a = hQuotient + 2; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags // is the quotient greater than 256?
    if (!zero) goto canEscape; // if so, the player can escape
    a = *wNumRunAttempts;
    c = a;
    // add 30 to the quotient for each run attempt
loop:
    c--; // TODO: set flags
    if (zero) goto compareWithRandomValue;
    b = 30;
    a = hQuotient + 3; // LDH (High RAM)
    a = (uint8_t)(a + b); // TODO: set flags
    hQuotient + 3 = a; // LDH (High RAM)
    if (carry) goto canEscape;
    goto loop;
compareWithRandomValue:
    if (carry) BattleRandom();
    b = a;
    a = hQuotient + 3; // LDH (High RAM)
    zero = (a == b); carry = (a < b); // Compare
    if (!carry) goto canEscape; // if the random value was less than or equal to the quotient
    // ; plus 30 times the number of attempts, the player can escape
    // can't escape
    a = 0x1;
    *wActionResultOrTookBattleTurn = a; // you lose your turn when you can't escape
    hl = CantEscapeText;
    goto printCantEscapeOrNoRunningText;
trainerBattle:
    hl = NoRunningText;
printCantEscapeOrNoRunningText:
    if (carry) PrintText();
    a = 1;
    *wForcePlayerToChooseMon = a;
    if (carry) SaveScreenTilesToBuffer1();
    a &= a; zero = (a == 0); // TODO: set other flags // reset carry
    return;
canEscape:
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    a = 0x2;
    if (!zero) goto playSound;
    // link battle
    if (carry) SaveScreenTilesToBuffer1();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wActionResultOrTookBattleTurn = a;
    a = LINKBATTLE_RUN;
    *wPlayerMoveListIndex = a;
    if (carry) LinkBattleExchangeData();
    if (carry) LoadScreenTilesFromBuffer1();
    a = *wSerialExchangeNybbleReceiveData;
    zero = (a == LINKBATTLE_RUN); carry = (a < LINKBATTLE_RUN); // Compare
    a = 0x2;
    if (zero) goto playSound;
    a--; // TODO: set flags
playSound:
    *wBattleResult = a;
    a = SFX_RUN;
    if (carry) PlaySoundWaitForCurrent();
    hl = GotAwayText;
    if (carry) PrintText();
    if (carry) WaitForSoundToFinish();
    if (carry) SaveScreenTilesToBuffer1();
    /* scf */ // set carry
    return;
}

void CantEscapeText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CantEscapeText:
    text_far(_CantEscapeText);
    text_end();
}

void NoRunningText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

NoRunningText:
    text_far(_NoRunningText);
    text_end();
}

void GotAwayText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

GotAwayText:
    text_far(_GotAwayText);
    text_end();
    // copies from party data to battle mon data when sending out a new player mon
}

uint16_t LoadBattleMonFromParty() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

LoadBattleMonFromParty:
    a = *wWhichPokemon;
    bc = PARTYMON_STRUCT_LENGTH;
    hl = wPartyMon1Species;
    if (carry) AddNTimes();
    de = wBattleMonSpecies;
    bc = wBattleMonDVs - wBattleMonSpecies;
    if (carry) CopyData();
    bc = MON_DVS - MON_OTID;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    de = wBattleMonDVs;
    bc = MON_PP - MON_DVS;
    if (carry) CopyData();
    de = wBattleMonPP;
    bc = NUM_MOVES;
    if (carry) CopyData();
    de = wBattleMonLevel;
    bc = wBattleMonPP - wBattleMonLevel;
    if (carry) CopyData();
    a = *wBattleMonSpecies2;
    *wCurSpecies = a;
    if (carry) GetMonHeader();
    hl = wPartyMonNicks;
    a = *wPlayerMonNumber;
    if (carry) SkipFixedLengthTextEntries();
    de = wBattleMonNick;
    bc = NAME_LENGTH;
    if (carry) CopyData();
    hl = wBattleMonLevel;
    de = wPlayerMonUnmodifiedLevel; // block of memory used for unmodified stats
    bc = 1 + NUM_STATS * 2;
    if (carry) CopyData();
    if (carry) ApplyBurnAndParalysisPenaltiesToPlayer();
    if (carry) ApplyBadgeStatBoosts();
    a = 0x7; // default stat modifier
    b = NUM_STAT_MODS;
    hl = wPlayerMonAttackMod;
statModLoop:
    hli = a;
    b--; // TODO: set flags
    if (!zero) goto statModLoop;
    return;
    // copies from enemy party data to current enemy mon data when sending out a new enemy mon
}

uint16_t LoadEnemyMonFromParty() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

LoadEnemyMonFromParty:
    a = *wWhichPokemon;
    bc = PARTYMON_STRUCT_LENGTH;
    hl = wEnemyMons;
    if (carry) AddNTimes();
    de = wEnemyMonSpecies;
    bc = wEnemyMonDVs - wEnemyMonSpecies;
    if (carry) CopyData();
    bc = MON_DVS - MON_OTID;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    de = wEnemyMonDVs;
    bc = MON_PP - MON_DVS;
    if (carry) CopyData();
    de = wEnemyMonPP;
    bc = NUM_MOVES;
    if (carry) CopyData();
    de = wEnemyMonLevel;
    bc = wEnemyMonPP - wEnemyMonLevel;
    if (carry) CopyData();
    a = *wEnemyMonSpecies;
    *wCurSpecies = a;
    if (carry) GetMonHeader();
    hl = wEnemyMonNicks;
    a = *wWhichPokemon;
    if (carry) SkipFixedLengthTextEntries();
    de = wEnemyMonNick;
    bc = NAME_LENGTH;
    if (carry) CopyData();
    hl = wEnemyMonLevel;
    de = wEnemyMonUnmodifiedLevel; // block of memory used for unmodified stats
    bc = 1 + NUM_STATS * 2;
    if (carry) CopyData();
    if (carry) ApplyBurnAndParalysisPenaltiesToEnemy();
    hl = wMonHBaseStats;
    de = wEnemyMonBaseStats;
    b = NUM_STATS;
copyBaseStatsLoop:
    a = hli;
    de = a;
    de++; // TODO: set flags
    b--; // TODO: set flags
    if (!zero) goto copyBaseStatsLoop;
    a = 0x7; // default stat modifier
    b = NUM_STAT_MODS;
    hl = wEnemyMonStatMods;
statModLoop:
    hli = a;
    b--; // TODO: set flags
    if (!zero) goto statModLoop;
    a = *wWhichPokemon;
    *wEnemyMonPartyPos = a;
    return;
}

void SendOutMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SendOutMon:
    callfar(PrintSendOutMonMessage);
    hl = wEnemyMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // is enemy mon HP zero?
    if (zero) goto skipDrawingEnemyHUDAndHPBar; // if HP is zero, skip drawing the HUD and HP bar
    if (carry) DrawEnemyHUDAndHPBar();
skipDrawingEnemyHUDAndHPBar:
    if (carry) DrawPlayerHUDAndHPBar();
    predef(LoadMonBackPic);
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hStartTileID = a; // LDH (High RAM)
    hl = wBattleAndStartSavedMenuItem;
    hli = a;
    hl = a;
    *wBoostExpByExpAll = a;
    *wDamageMultipliers = a;
    *wPlayerMoveNum = a;
    hl = wPlayerUsedMove;
    hli = a;
    hl = a;
    hl = wPlayerStatsToDouble;
    hli = a;
    hli = a;
    hli = a;
    hli = a;
    hl = a;
    *wPlayerDisabledMove = a;
    *wPlayerDisabledMoveNumber = a;
    *wPlayerMonMinimized = a;
    b = SET_PAL_BATTLE;
    if (carry) RunPaletteCommand();
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE);
    a = 0x1;
    hWhoseTurn = a; // LDH (High RAM)
    a = POOF_ANIM;
    if (carry) PlayMoveAnimation();
    hl = hlcoord(4, 11);
    predef(AnimateSendingOutMon);
    a = *wCurPartySpecies;
    if (carry) PlayCry();
    if (carry) PrintEmptyString();
    goto SaveScreenTilesToBuffer1;
    // show 2 stages of the player mon getting smaller before disappearing
}

void AnimateRetreatingPlayerMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AnimateRetreatingPlayerMon:
    hl = hlcoord(1, 5);
    lb(bc, 7, 7);
    if (carry) ClearScreenArea();
    hl = hlcoord(3, 7);
    lb(bc, 5, 5);
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wDownscaledMonSize = a;
    hBaseTileID = a; // LDH (High RAM)
    predef(CopyDownscaledMonTiles);
    c = 4;
    if (carry) DelayFrames();
    if (carry) clearScreenArea();
    hl = hlcoord(4, 9);
    lb(bc, 3, 3);
    a = 1;
    *wDownscaledMonSize = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hBaseTileID = a; // LDH (High RAM)
    predef(CopyDownscaledMonTiles);
    if (carry) Delay3();
    if (carry) clearScreenArea();
    a = 0x4c;
    /* ldcoord_a */
clearScreenArea:
    hl = hlcoord(1, 5);
    lb(bc, 7, 7);
    goto ClearScreenArea;
    // Copies player's current pokemon's current HP, party pos, and status into the party
    // struct data so it stays after battle or switching
}

void ReadPlayerMonCurHPAndStatus() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ReadPlayerMonCurHPAndStatus:
    a = *wPlayerMonNumber;
    hl = wPartyMon1HP;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    d = h;
    e = l;
    hl = wBattleMonHP;
    bc = MON_STATUS + 1 - MON_HP; // also copies party pos in-between HP and status
    goto CopyData;
}

void DrawHUDsAndHPBars() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DrawHUDsAndHPBars:
    if (carry) DrawPlayerHUDAndHPBar();
    goto DrawEnemyHUDAndHPBar;
}

uint16_t DrawPlayerHUDAndHPBar() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DrawPlayerHUDAndHPBar:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    hl = hlcoord(9, 7);
    lb(bc, 5, 11);
    if (carry) ClearScreenArea();
    callfar(PlacePlayerHUDTiles);
    hl = hlcoord(18, 9);
    hl = 0x73;
    de = wBattleMonNick;
    hl = hlcoord(10, 7);
    if (carry) CenterMonName();
    if (carry) PlaceString();
    hl = wBattleMonSpecies;
    de = wLoadedMon;
    bc = wBattleMonDVs - wBattleMonSpecies;
    if (carry) CopyData();
    hl = wBattleMonLevel;
    de = wLoadedMonLevel;
    bc = wBattleMonPP - wBattleMonLevel;
    if (carry) CopyData();
    hl = hlcoord(14, 8);
    /* PUSH hl - TODO: implement stack */
    hl++; // TODO: set flags
    de = wLoadedMonStatus;
    if (carry) PrintStatusConditionNotFainted();
    /* POP hl - TODO: implement stack */
    if (!zero) goto doNotPrintLevel;
    if (carry) PrintLevel();
doNotPrintLevel:
    a = *wLoadedMonSpecies;
    *wCurPartySpecies = a;
    hl = hlcoord(10, 9);
    predef(DrawHP);
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    hl = wPlayerHPBarColor;
    if (carry) GetBattleHealthBarColor();
    hl = wBattleMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    if (zero) goto fainted;
    a = *wLowHealthAlarmDisabled;
    a &= a; zero = (a == 0); // TODO: set other flags // has the alarm been disabled because the player has already won?
    return; // if so, return
    a = *wPlayerHPBarColor;
    zero = (a == HP_BAR_RED); carry = (a < HP_BAR_RED); // Compare
    if (zero) goto setLowHealthAlarm;
fainted:
    hl = wLowHealthAlarm;
    zero = ((hl & (1 << BIT_LOW_HEALTH_ALARM)) == 0);
    hl = 0;
    return;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wChannelSoundIDs + CHAN5 = a;
    return;
setLowHealthAlarm:
    hl = wLowHealthAlarm;
    hl |= (1 << BIT_LOW_HEALTH_ALARM);
    return;
}

void DrawEnemyHUDAndHPBar() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DrawEnemyHUDAndHPBar:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    hl = hlcoord(0, 0);
    lb(bc, 4, 12);
    if (carry) ClearScreenArea();
    callfar(PlaceEnemyHUDTiles);
    de = wEnemyMonNick;
    hl = hlcoord(1, 0);
    if (carry) CenterMonName();
    if (carry) PlaceString();
    hl = hlcoord(4, 1);
    /* PUSH hl - TODO: implement stack */
    hl++; // TODO: set flags
    de = wEnemyMonStatus;
    if (carry) PrintStatusConditionNotFainted();
    /* POP hl - TODO: implement stack */
    if (!zero) goto skipPrintLevel; // if the mon has a status condition, skip printing the level
    a = *wEnemyMonLevel;
    *wLoadedMonLevel = a;
    if (carry) PrintLevel();
skipPrintLevel:
    hl = wEnemyMonHP;
    a = hli;
    hMultiplicand + 1 = a; // LDH (High RAM)
    a = hld;
    hMultiplicand + 2 = a; // LDH (High RAM)
    a |= hl; zero = (a == 0); // TODO: set other flags // is current HP zero?
    if (!zero) goto hpNonzero;
    // current HP is 0
    // set variables for DrawHPBar
    c = a;
    e = a;
    d = 0x6;
    goto drawHPBar;
hpNonzero:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hMultiplicand = a; // LDH (High RAM)
    a = 48;
    hMultiplier = a; // LDH (High RAM)
    if (carry) Multiply(); // multiply current HP by 48
    hl = wEnemyMonMaxHP;
    a = hli;
    b = a;
    a = hl;
    hDivisor = a; // LDH (High RAM)
    a = b;
    a &= a; zero = (a == 0); // TODO: set other flags // is max HP > 255?
    if (zero) goto doDivide;
    // if max HP > 255, scale both (current HP * 48) and max HP by dividing by 4 so that max HP fits in one byte
    // (it needs to be one byte so it can be used as the divisor for the Divide function)
    a = hDivisor; // LDH (High RAM)
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = a; a = (uint8_t)((a >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = a; a = (uint8_t)((a >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    hDivisor = a; // LDH (High RAM)
    a = hProduct + 2; // LDH (High RAM)
    b = a;
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    a = hProduct + 3; // LDH (High RAM)
    { uint8_t temp = a; a = (uint8_t)((a >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = a; a = (uint8_t)((a >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    hProduct + 3 = a; // LDH (High RAM)
    a = b;
    hProduct + 2 = a; // LDH (High RAM)
doDivide:
    a = hProduct + 2; // LDH (High RAM)
    hDividend = a; // LDH (High RAM)
    a = hProduct + 3; // LDH (High RAM)
    hDividend + 1 = a; // LDH (High RAM)
    a = 0x2;
    b = a;
    if (carry) Divide(); // divide (current HP * 48) by max HP
    a = hQuotient + 3; // LDH (High RAM)
    // set variables for DrawHPBar
    e = a;
    a = 0x6;
    d = a;
    c = a;
drawHPBar:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wHPBarType = a;
    hl = hlcoord(2, 2);
    if (carry) DrawHPBar();
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    hl = wEnemyHPBarColor;
}

uint16_t GetBattleHealthBarColor() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

GetBattleHealthBarColor:
    b = hl;
    if (carry) GetHealthBarColor();
    a = hl;
    zero = (a == b); carry = (a < b); // Compare
    return;
    b = SET_PAL_BATTLE;
    goto RunPaletteCommand;
    // center's mon's name on the battle screen
    // if the name is 1 or 2 letters long, it is printed 2 spaces more to the right than usual
    // (i.e. for names longer than 4 letters)
    // if the name is 3 or 4 letters long, it is printed 1 space more to the right than usual
    // (i.e. for names longer than 4 letters)
}

uint16_t CenterMonName() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CenterMonName:
    /* PUSH de - TODO: implement stack */
    hl++; // TODO: set flags
    hl++; // TODO: set flags
    b = 0x2;
loop:
    de++; // TODO: set flags
    a = de;
    zero = (a == '@'); carry = (a < '@'); // Compare
    if (zero) goto done;
    de++; // TODO: set flags
    a = de;
    zero = (a == '@'); carry = (a < '@'); // Compare
    if (zero) goto done;
    hl--; // TODO: set flags
    b--; // TODO: set flags
    if (!zero) goto loop;
done:
    /* POP de - TODO: implement stack */
    return;
}

void DisplayBattleMenu() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DisplayBattleMenu:
    if (carry) LoadScreenTilesFromBuffer1(); // restore saved screen
    a = *wBattleType;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto nonstandardbattle;
    if (carry) DrawHUDsAndHPBars();
    if (carry) PrintEmptyString();
    if (carry) SaveScreenTilesToBuffer1();
nonstandardbattle:
    a = *wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    a = BATTLE_MENU_TEMPLATE;
    if (!zero) goto menuselected;
    a = SAFARI_BATTLE_MENU_TEMPLATE;
menuselected:
    *wTextBoxID = a;
    if (carry) DisplayTextBoxID();
    // ; handle menu input if it's not the old man tutorial
    a = *wBattleType;
    /* assert */
    a--; // TODO: set flags
    if (!zero) goto handleBattleMenuInput;
    // the following happens for the old man tutorial
    // ; Temporarily save the player name in wLinkEnemyTrainerName.
    // ; Since wLinkEnemyTrainerName == wGrassRate, this affects wild encounters.
    // ; The wGrassRate byte and following wGrassMons buffer are supposed
    // ; to get overwritten when entering a map with wild Pokémon,
    // ; but an oversight prevents this in Cinnabar and Route 21,
    // ; so the infamous MissingNo. glitch can show up.
    hl = wPlayerName;
    de = wLinkEnemyTrainerName;
    bc = NAME_LENGTH;
    if (carry) CopyData();
    hl = oldManName;
    de = wPlayerName;
    bc = NAME_LENGTH;
    if (carry) CopyData();
    // the following simulates the keystrokes by drawing menus on screen
    hl = hlcoord(9, 14);
    hl = '▶';
    c = 80;
    if (carry) DelayFrames();
    hl = ' ';
    hl = hlcoord(9, 16);
    hl = '▶';
    c = 50;
    if (carry) DelayFrames();
    hl = '▷';
    a = 0x2; // select the "ITEM" menu
    goto upperLeftMenuItemWasNotSelected;
oldManName:
    db("OLD MAN@");
handleBattleMenuInput:
    a = *wBattleAndStartSavedMenuItem;
    *wCurrentMenuItem = a;
    *wLastMenuItem = a;
    a = (uint8_t)(a - 2); // TODO: set flags // check if the cursor is in the left column
    if (carry) goto leftColumn;
    // cursor is in the right column
    *wCurrentMenuItem = a;
    *wLastMenuItem = a;
    goto rightColumn;
leftColumn:
    a = *wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    a = ' ';
    if (zero) goto safariLeftColumn;
    // put cursor in left column for normal battle menu (i.e. when it's not a Safari battle)
    /* ldcoord_a */ // clear upper cursor position in right column
    /* ldcoord_a */ // clear lower cursor position in right column
    b = 0x9; // top menu item X
    goto leftColumn_WaitForInput;
safariLeftColumn:
    /* ldcoord_a */
    /* ldcoord_a */
    hl = hlcoord(7, 14);
    de = wNumSafariBalls;
    lb(bc, 1, 2);
    if (carry) PrintNumber();
    b = 0x1; // top menu item X
leftColumn_WaitForInput:
    hl = wTopMenuItemY;
    a = 0xe;
    hli = a; // wTopMenuItemY
    a = b;
    hli = a; // wTopMenuItemX
    hl++; // TODO: set flags
    hl++; // TODO: set flags
    a = 0x1;
    hli = a; // wMaxMenuItem
    hl = PAD_RIGHT | PAD_A; // wMenuWatchedKeys
    if (carry) HandleMenuInput();
    zero = ((a & (1 << B_PAD_RIGHT)) == 0);
    if (!zero) goto rightColumn;
    goto AButtonPressed; // the A button was pressed
rightColumn:
    a = *wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    a = ' ';
    if (zero) goto safariRightColumn;
    // put cursor in right column for normal battle menu (i.e. when it's not a Safari battle)
    /* ldcoord_a */ // clear upper cursor position in left column
    /* ldcoord_a */ // clear lower cursor position in left column
    b = 0xf; // top menu item X
    goto rightColumn_WaitForInput;
safariRightColumn:
    /* ldcoord_a */ // clear upper cursor position in left column
    /* ldcoord_a */ // clear lower cursor position in left column
    hl = hlcoord(7, 14);
    de = wNumSafariBalls;
    lb(bc, 1, 2);
    if (carry) PrintNumber();
    b = 0xd; // top menu item X
rightColumn_WaitForInput:
    hl = wTopMenuItemY;
    a = 0xe;
    hli = a; // wTopMenuItemY
    a = b;
    hli = a; // wTopMenuItemX
    hl++; // TODO: set flags
    hl++; // TODO: set flags
    a = 0x1;
    hli = a; // wMaxMenuItem
    a = PAD_LEFT | PAD_A;
    hli = a; // wMenuWatchedKeys
    if (carry) HandleMenuInput();
    zero = ((a & (1 << B_PAD_LEFT)) == 0);
    if (!zero) goto leftColumn; // if left was pressed, jump
    a = *wCurrentMenuItem;
    a = (uint8_t)(a + 0x2); // TODO: set flags // if we're in the right column, the actual id is +2
    *wCurrentMenuItem = a;
AButtonPressed:
    if (carry) PlaceUnfilledArrowMenuCursor();
    a = *wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    a = *wCurrentMenuItem;
    *wBattleAndStartSavedMenuItem = a;
    if (zero) goto handleMenuSelection;
    // not Safari battle
    // swap the IDs of the item menu and party menu (this is probably because they swapped the positions
    // of these menu items in first generation English versions)
    zero = (a == 0x1); carry = (a < 0x1); // Compare // was the item menu selected?
    if (!zero) goto notItemMenu;
    // item menu was selected
    a++; // TODO: set flags // increment a to 2
    goto handleMenuSelection;
notItemMenu:
    zero = (a == 0x2); carry = (a < 0x2); // Compare // was the party menu selected?
    if (!zero) goto handleMenuSelection;
    // party menu selected
    a--; // TODO: set flags // decrement a to 1
handleMenuSelection:
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto upperLeftMenuItemWasNotSelected;
    // the upper left menu item was selected
    a = *wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    if (zero) goto throwSafariBallWasSelected;
    // the "FIGHT" menu was selected
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wNumRunAttempts = a;
    goto LoadScreenTilesFromBuffer1; // restore saved screen and return
throwSafariBallWasSelected:
    a = SAFARI_BALL;
    *wCurItem = a;
    goto UseBagItem;
upperLeftMenuItemWasNotSelected:
    zero = (a == 0x2); carry = (a < 0x2); // Compare
    if (!zero) goto PartyMenuOrRockOrRun;
    // either the bag (normal battle) or bait (safari battle) was selected
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto notLinkBattle;
    // can't use items in link battles
    hl = ItemsCantBeUsedHereText;
    if (carry) PrintText();
    goto DisplayBattleMenu;
notLinkBattle:
    if (carry) SaveScreenTilesToBuffer2();
    a = *wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    if (!zero) goto BagWasSelected;
    // bait was selected
    a = SAFARI_BAIT;
    *wCurItem = a;
    goto UseBagItem;
}

void BagWasSelected() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

BagWasSelected:
    if (carry) LoadScreenTilesFromBuffer1();
    a = *wBattleType;
    a &= a; zero = (a == 0); // TODO: set other flags // is it a normal battle?
    if (!zero) goto next;
    // normal battle
    if (carry) DrawHUDsAndHPBars();
next:
    a = *wBattleType;
    a--; // TODO: set flags // is it the old man tutorial?
    if (!zero) goto DisplayPlayerBag; // no, it is a normal battle
    hl = OldManItemList;
    a = l;
    *wListPointer = a;
    a = h;
    *wListPointer + 1 = a;
    goto DisplayBagMenu;
}

void OldManItemList() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

OldManItemList:
    db(1); // # items
    db(POKE_BALL, 50);
    db(-1); // end
}

void DisplayPlayerBag() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DisplayPlayerBag:
    // ; get the pointer to player's bag when in a normal battle
    hl = wNumBagItems;
    a = l;
    *wListPointer = a;
    a = h;
    *wListPointer + 1 = a;
}

void DisplayBagMenu() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DisplayBagMenu:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wPrintItemPrices = a;
    a = ITEMLISTMENU;
    *wListMenuID = a;
    a = *wBagSavedMenuItem;
    *wCurrentMenuItem = a;
    if (carry) DisplayListMenuID();
    a = *wCurrentMenuItem;
    *wBagSavedMenuItem = a;
    a = 0x0;
    *wMenuWatchMovingOutOfBounds = a;
    *wMenuItemToSwap = a;
    if (carry) goto DisplayBattleMenu; // go back to battle menu if an item was not selected
}

uint16_t UseBagItem() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

UseBagItem:
    // ; either use an item from the bag or use a safari zone item
    a = *wCurItem;
    *wNamedObjectIndex = a;
    if (carry) GetItemName();
    if (carry) CopyToStringBuffer();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wPseudoItemID = a;
    if (carry) UseItem();
    if (carry) LoadHudTilePatterns();
    if (carry) ClearSprites();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wCurrentMenuItem = a;
    a = *wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    if (zero) goto checkIfMonCaptured;
    a = *wActionResultOrTookBattleTurn;
    a &= a; zero = (a == 0); // TODO: set other flags // was the item used successfully?
    if (zero) goto BagWasSelected; // if not, go back to the bag menu
    a = *wPlayerBattleStatus1;
    zero = ((a & (1 << USING_TRAPPING_MOVE)) == 0); // is the player using a multi-turn move like wrap?
    if (zero) goto checkIfMonCaptured;
    hl = wPlayerNumAttacksLeft;
    hl--; // TODO: set flags
    if (!zero) goto checkIfMonCaptured;
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE); // not using multi-turn move any more
checkIfMonCaptured:
    a = *wCapturedMonSpecies;
    a &= a; zero = (a == 0); // TODO: set other flags // was the enemy mon captured with a ball?
    if (!zero) goto returnAfterCapturingMon;
    a = *wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    if (zero) goto returnAfterUsingItem_NoCapture;
    // not a safari battle
    if (carry) LoadScreenTilesFromBuffer1();
    if (carry) DrawHUDsAndHPBars();
    if (carry) Delay3();
returnAfterUsingItem_NoCapture:
    if (carry) GBPalNormal();
    a &= a; zero = (a == 0); // TODO: set other flags // reset carry
    return;
returnAfterCapturingMon:
    if (carry) GBPalNormal();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wCapturedMonSpecies = a;
    a = 0x2;
    *wBattleResult = a;
    /* scf */ // set carry
    return;
}

void ItemsCantBeUsedHereText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ItemsCantBeUsedHereText:
    text_far(_ItemsCantBeUsedHereText);
    text_end();
}

void PartyMenuOrRockOrRun() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PartyMenuOrRockOrRun:
    a--; // TODO: set flags // was Run selected?
    if (!zero) goto BattleMenu_RunWasSelected;
    // party menu or rock was selected
    if (carry) SaveScreenTilesToBuffer2();
    a = *wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    if (!zero) goto partyMenuWasSelected;
    // safari battle
    a = SAFARI_ROCK;
    *wCurItem = a;
    goto UseBagItem;
partyMenuWasSelected:
    if (carry) LoadScreenTilesFromBuffer1();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // NORMAL_PARTY_MENU
    *wPartyMenuTypeOrMessageID = a;
    *wMenuItemToSwap = a;
    if (carry) DisplayPartyMenu();
checkIfPartyMonWasSelected:
    if (!carry) goto partyMonWasSelected; // if a party mon was selected, jump, else we quit the party menu
quitPartyMenu:
    if (carry) ClearSprites();
    if (carry) GBPalWhiteOut();
    if (carry) LoadHudTilePatterns();
    if (carry) LoadScreenTilesFromBuffer2();
    if (carry) RunDefaultPaletteCommand();
    if (carry) GBPalNormal();
    goto DisplayBattleMenu;
partyMonDeselected:
    hl = hlcoord(11, 11);
    bc = 6 * SCREEN_WIDTH + 9;
    a = ' ';
    if (carry) FillMemory();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // NORMAL_PARTY_MENU
    *wPartyMenuTypeOrMessageID = a;
    if (carry) GoBackToPartyMenu();
    goto checkIfPartyMonWasSelected;
partyMonWasSelected:
    a = SWITCH_STATS_CANCEL_MENU_TEMPLATE;
    *wTextBoxID = a;
    if (carry) DisplayTextBoxID();
    hl = wTopMenuItemY;
    a = 0xc;
    hli = a; // wTopMenuItemY
    hli = a; // wTopMenuItemX
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a; // wCurrentMenuItem
    hl++; // TODO: set flags
    a = 0x2;
    hli = a; // wMaxMenuItem
    a = PAD_B | PAD_A;
    hli = a; // wMenuWatchedKeys
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = a; // wLastMenuItem
    if (carry) HandleMenuInput();
    zero = ((a & (1 << B_PAD_B)) == 0);
    if (!zero) goto partyMonDeselected; // if B was pressed, jump
    // A was pressed
    if (carry) PlaceUnfilledArrowMenuCursor();
    a = *wCurrentMenuItem;
    zero = (a == 0x2); carry = (a < 0x2); // Compare // was Cancel selected?
    if (zero) goto quitPartyMenu; // if so, quit the party menu entirely
    a &= a; zero = (a == 0); // TODO: set other flags // was Switch selected?
    if (zero) goto switchMon; // if so, jump
    // Stats was selected
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // PLAYER_PARTY_DATA
    *wMonDataLocation = a;
    hl = wPartyMon1;
    if (carry) ClearSprites();
    // display the two status screens
    predef(StatusScreen);
    predef(StatusScreen2);
    // now we need to reload the enemy mon pic
    a = *wEnemyBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0); // does the enemy mon have a substitute?
    hl = AnimationSubstitute;
    if (!zero) goto doEnemyMonAnimation;
    // enemy mon doesn't have substitute
    a = *wEnemyMonMinimized;
    a &= a; zero = (a == 0); // TODO: set other flags // has the enemy mon used Minimize?
    hl = AnimationMinimizeMon;
    if (!zero) goto doEnemyMonAnimation;
    // enemy mon is not minimized
    a = *wEnemyMonSpecies;
    *wCurPartySpecies = a;
    *wCurSpecies = a;
    if (carry) GetMonHeader();
    de = vFrontPic;
    if (carry) LoadMonFrontSprite();
    goto enemyMonPicReloaded;
doEnemyMonAnimation:
    b = BANK(AnimationSubstitute); // BANK(AnimationMinimizeMon)
    if (carry) Bankswitch();
enemyMonPicReloaded:
    goto partyMenuWasSelected;
switchMon:
    a = *wPlayerMonNumber;
    d = a;
    a = *wWhichPokemon;
    zero = (a == d); carry = (a < d); // Compare // check if the mon to switch to is already out
    if (!zero) goto notAlreadyOut;
    // mon is already out
    hl = AlreadyOutText;
    if (carry) PrintText();
    goto partyMonDeselected;
notAlreadyOut:
    if (carry) HasMonFainted();
    if (zero) goto partyMonDeselected; // can't switch to fainted mon
    a = 0x1;
    *wActionResultOrTookBattleTurn = a;
    if (carry) GBPalWhiteOut();
    if (carry) ClearSprites();
    if (carry) LoadHudTilePatterns();
    if (carry) LoadScreenTilesFromBuffer1();
    if (carry) RunDefaultPaletteCommand();
    if (carry) GBPalNormal();
    // fall through to SwitchPlayerMon
}

uint16_t SwitchPlayerMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SwitchPlayerMon:
    callfar(RetreatMon);
    c = 50;
    if (carry) DelayFrames();
    if (carry) AnimateRetreatingPlayerMon();
    a = *wWhichPokemon;
    *wPlayerMonNumber = a;
    c = a;
    b = FLAG_SET;
    /* PUSH bc - TODO: implement stack */
    hl = wPartyGainExpFlags;
    predef(FlagActionPredef);
    /* POP bc - TODO: implement stack */
    hl = wPartyFoughtCurrentEnemyFlags;
    predef(FlagActionPredef);
    if (carry) LoadBattleMonFromParty();
    if (carry) SendOutMon();
    if (carry) SaveScreenTilesToBuffer1();
    a = 0x2;
    *wCurrentMenuItem = a;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
}

void AlreadyOutText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AlreadyOutText:
    text_far(_AlreadyOutText);
    text_end();
}

uint16_t BattleMenu_RunWasSelected() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

BattleMenu_RunWasSelected:
    if (carry) LoadScreenTilesFromBuffer1();
    a = 0x3;
    *wCurrentMenuItem = a;
    hl = wBattleMonSpeed;
    de = wEnemyMonSpeed;
    if (carry) TryRunningFromBattle();
    a = 0;
    *wForcePlayerToChooseMon = a;
    return;
    a = *wActionResultOrTookBattleTurn;
    a &= a; zero = (a == 0); // TODO: set other flags
    return; // return if the player couldn't escape
    goto DisplayBattleMenu;
}

uint8_t MoveSelectionMenu() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MoveSelectionMenu:
    a = *wMoveMenuType;
    a--; // TODO: set flags
    if (zero) goto mimicmenu;
    a--; // TODO: set flags
    if (zero) goto relearnmenu;
    goto regularmenu;
loadmoves:
    de = wMoves;
    bc = NUM_MOVES;
    if (carry) CopyData();
    callfar(FormatMovesString);
    return;
writemoves:
    de = wMovesString;
    a = hUILayoutFlags; // LDH (High RAM)
    a |= (1 << BIT_SINGLE_SPACED_LINES);
    hUILayoutFlags = a; // LDH (High RAM)
    if (carry) PlaceString();
    a = hUILayoutFlags; // LDH (High RAM)
    a &= ~(1 << BIT_SINGLE_SPACED_LINES);
    hUILayoutFlags = a; // LDH (High RAM)
    return;
regularmenu:
    if (carry) AnyMoveToSelect();
    return;
    hl = wBattleMonMoves;
    if (carry) loadmoves();
    hl = hlcoord(4, 12);
    b = 4;
    c = 14;
    /* DI - Disable Interrupts */ // out of pure coincidence, it is possible for vblank to occur between the di and ei
    // ; so it is necessary to put the di ei block to not cause tearing
    if (carry) TextBoxBorder();
    hl = hlcoord(4, 12);
    hl = '─';
    hl = hlcoord(10, 12);
    hl = '┘';
    /* EI - Enable Interrupts */
    hl = hlcoord(6, 13);
    if (carry) writemoves();
    b = 0x5;
    a = 0xc;
    goto menuset;
mimicmenu:
    hl = wEnemyMonMoves;
    if (carry) loadmoves();
    hl = hlcoord(0, 7);
    b = 4;
    c = 14;
    if (carry) TextBoxBorder();
    hl = hlcoord(2, 8);
    if (carry) writemoves();
    b = 0x1;
    a = 0x7;
    goto menuset;
relearnmenu:
    a = *wWhichPokemon;
    hl = wPartyMon1Moves;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    if (carry) loadmoves();
    hl = hlcoord(4, 7);
    b = 4;
    c = 14;
    if (carry) TextBoxBorder();
    hl = hlcoord(6, 8);
    if (carry) writemoves();
    b = 0x5;
    a = 0x7;
menuset:
    hl = wTopMenuItemY;
    hli = a; // wTopMenuItemY
    a = b;
    hli = a; // wTopMenuItemX
    a = *wMoveMenuType;
    zero = (a == 0x1); carry = (a < 0x1); // Compare
    if (zero) goto selectedmoveknown;
    a = 0x1;
    if (!carry) goto selectedmoveknown;
    a = *wPlayerMoveListIndex;
    a++; // TODO: set flags
selectedmoveknown:
    hli = a; // wCurrentMenuItem
    hl++; // TODO: set flags // wTileBehindCursor untouched
    a = *wNumMovesMinusOne;
    a++; // TODO: set flags
    a++; // TODO: set flags
    hli = a; // wMaxMenuItem
    a = *wMoveMenuType;
    a--; // TODO: set flags
    b = PAD_UP | PAD_DOWN | PAD_A;
    if (zero) goto matchedkeyspicked;
    a--; // TODO: set flags
    b = PAD_UP | PAD_DOWN | PAD_A | PAD_B;
    if (zero) goto matchedkeyspicked;
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (zero) goto matchedkeyspicked;
    // ; Disable left, right, and START buttons in regular battles.
    a = *wStatusFlags7;
    zero = ((a & (1 << BIT_TEST_BATTLE)) == 0);
    b = ~(PAD_LEFT | PAD_RIGHT | PAD_START);
    if (zero) goto matchedkeyspicked;
    b = PAD_CTRL_PAD | PAD_BUTTONS;
matchedkeyspicked:
    a = b;
    hli = a; // wMenuWatchedKeys
    a = *wMoveMenuType;
    zero = (a == 0x1); carry = (a < 0x1); // Compare
    if (zero) goto movelistindex1;
    a = *wPlayerMoveListIndex;
    a++; // TODO: set flags
movelistindex1:
    hl = a;
    // fallthrough
}

uint16_t SelectMenuItem() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SelectMenuItem:
    a = *wMoveMenuType;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto battleselect;
    a--; // TODO: set flags
    if (!zero) goto select;
    hl = hlcoord(1, 14);
    de = WhichTechniqueString;
    if (carry) PlaceString();
    goto select;
battleselect:
    // ; Hide move swap cursor in TestBattle.
    a = *wStatusFlags7;
    zero = ((a & (1 << BIT_TEST_BATTLE)) == 0);
    // ; This causes PrintMenuItem to not run in TestBattle.
    // ; MoveSelectionMenu still draws part of its window, an issue
    // ; which did not seem to exist in the Japanese versions.
    if (!zero) goto select;
    if (carry) PrintMenuItem();
    a = *wMenuItemToSwap;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto select;
    hl = hlcoord(5, 13);
    a--; // TODO: set flags
    bc = SCREEN_WIDTH;
    if (carry) AddNTimes();
    hl = '▷';
select:
    hl = hUILayoutFlags;
    hl |= (1 << BIT_DOUBLE_SPACED_MENU);
    if (carry) HandleMenuInput();
    hl = hUILayoutFlags;
    hl &= ~(1 << BIT_DOUBLE_SPACED_MENU);
    zero = ((a & (1 << B_PAD_UP)) == 0);
    if (!zero) goto SelectMenuItem_CursorUp;
    zero = ((a & (1 << B_PAD_DOWN)) == 0);
    if (!zero) goto SelectMenuItem_CursorDown;
    zero = ((a & (1 << B_PAD_SELECT)) == 0);
    if (!zero) goto SwapMovesInMenu;
    zero = ((a & (1 << B_PAD_B)) == 0);
    /* PUSH af - TODO: implement stack */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wMenuItemToSwap = a;
    a = *wCurrentMenuItem;
    a--; // TODO: set flags
    *wCurrentMenuItem = a;
    b = a;
    a = *wMoveMenuType;
    a--; // TODO: set flags // if not mimic
    if (!zero) goto notB;
    /* POP af - TODO: implement stack */
    return;
notB:
    a--; // TODO: set flags
    a = b;
    *wPlayerMoveListIndex = a;
    if (!zero) goto moveselected;
    /* POP af - TODO: implement stack */
    return;
moveselected:
    /* POP af - TODO: implement stack */
    return;
    hl = wBattleMonPP;
    a = *wCurrentMenuItem;
    c = a;
    b = 0x0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl;
    a &= PP_MASK; zero = (a == 0); // TODO: set other flags
    if (zero) goto noPP;
    a = *wPlayerDisabledMove;
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a &= 0xf; zero = (a == 0); // TODO: set other flags
    a--; // TODO: set flags
    zero = (a == c); carry = (a < c); // Compare
    if (zero) goto disabled;
    a = *wPlayerBattleStatus3;
    zero = ((a & (1 << TRANSFORMED)) == 0);
    if (!zero) goto transformedMoveSelected;
transformedMoveSelected:
    // ; Allow moves copied by Transform to be used.
    a = *wCurrentMenuItem;
    hl = wBattleMonMoves;
    c = a;
    b = 0x0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl;
    *wPlayerSelectedMove = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
disabled:
    hl = MoveDisabledText;
    goto print;
noPP:
    hl = MoveNoPPText;
print:
    if (carry) PrintText();
    if (carry) LoadScreenTilesFromBuffer1();
    goto MoveSelectionMenu;
}

void MoveNoPPText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MoveNoPPText:
    text_far(_MoveNoPPText);
    text_end();
}

void MoveDisabledText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MoveDisabledText:
    text_far(_MoveDisabledText);
    text_end();
}

void WhichTechniqueString() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

WhichTechniqueString:
    db("WHICH TECHNIQUE?@");
}

void SelectMenuItem_CursorUp() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SelectMenuItem_CursorUp:
    a = *wCurrentMenuItem;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto SelectMenuItem;
    if (carry) EraseMenuCursor();
    a = *wNumMovesMinusOne;
    a++; // TODO: set flags
    *wCurrentMenuItem = a;
    goto SelectMenuItem;
}

void SelectMenuItem_CursorDown() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SelectMenuItem_CursorDown:
    a = *wCurrentMenuItem;
    b = a;
    a = *wNumMovesMinusOne;
    a++; // TODO: set flags
    a++; // TODO: set flags
    zero = (a == b); carry = (a < b); // Compare
    if (!zero) goto SelectMenuItem;
    if (carry) EraseMenuCursor();
    a = 0x1;
    *wCurrentMenuItem = a;
    goto SelectMenuItem;
}

uint16_t AnyMoveToSelect() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AnyMoveToSelect:
    // return z and Struggle as the selected move if all moves have 0 PP and/or are disabled
    a = STRUGGLE;
    *wPlayerSelectedMove = a;
    a = *wPlayerDisabledMove;
    a &= a; zero = (a == 0); // TODO: set other flags
    hl = wBattleMonPP;
    if (!zero) goto handleDisabledMove;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl++; // TODO: set flags
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl++; // TODO: set flags
    a |= hl; zero = (a == 0); // TODO: set other flags
    a &= PP_MASK; zero = (a == 0); // TODO: set other flags
    return;
    goto noMovesLeft;
handleDisabledMove:
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a &= 0xf; zero = (a == 0); // TODO: set other flags // get disabled move
    b = a;
    d = NUM_MOVES + 1;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
handleDisabledMovePPLoop:
    d--; // TODO: set flags
    if (zero) goto allMovesChecked;
    c = hl; // get move PP
    hl++; // TODO: set flags
    b--; // TODO: set flags // is this the disabled move?
    if (zero) goto handleDisabledMovePPLoop; // if so, ignore its PP value
    a |= c; zero = (a == 0); // TODO: set other flags
    goto handleDisabledMovePPLoop;
allMovesChecked:
    a &= a; zero = (a == 0); // TODO: set other flags // any PP left?
    return; // return if a move has PP left
noMovesLeft:
    hl = NoMovesLeftText;
    if (carry) PrintText();
    c = 60;
    if (carry) DelayFrames();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
}

void NoMovesLeftText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

NoMovesLeftText:
    text_far(_NoMovesLeftText);
    text_end();
}

uint16_t SwapMovesInMenu() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SwapMovesInMenu:
    a = *wMenuItemToSwap;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto noMenuItemSelected;
    hl = wBattleMonMoves;
    if (carry) swapBytes(); // swap moves
    hl = wBattleMonPP;
    if (carry) swapBytes(); // swap move PP
    // update the index of the disabled move if necessary
    hl = wPlayerDisabledMove;
    a = hl;
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a &= 0xf; zero = (a == 0); // TODO: set other flags
    b = a;
    a = *wCurrentMenuItem;
    zero = (a == b); carry = (a < b); // Compare
    if (!zero) goto next;
    a = hl;
    a &= 0xf; zero = (a == 0); // TODO: set other flags
    b = a;
    a = *wMenuItemToSwap;
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a = (uint8_t)(a + b); // TODO: set flags
    hl = a;
    goto swapMovesInPartyMon;
next:
    a = *wMenuItemToSwap;
    zero = (a == b); carry = (a < b); // Compare
    if (!zero) goto swapMovesInPartyMon;
    a = hl;
    a &= 0xf; zero = (a == 0); // TODO: set other flags
    b = a;
    a = *wCurrentMenuItem;
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a = (uint8_t)(a + b); // TODO: set flags
    hl = a;
swapMovesInPartyMon:
    hl = wPartyMon1Moves;
    a = *wPlayerMonNumber;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    /* PUSH hl - TODO: implement stack */
    if (carry) swapBytes(); // swap moves
    /* POP hl - TODO: implement stack */
    bc = MON_PP - MON_MOVES;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    if (carry) swapBytes(); // swap move PP
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wMenuItemToSwap = a; // deselect the item
    goto MoveSelectionMenu;
swapBytes:
    /* PUSH hl - TODO: implement stack */
    a = *wMenuItemToSwap;
    a--; // TODO: set flags
    c = a;
    b = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    d = h;
    e = l;
    /* POP hl - TODO: implement stack */
    a = *wCurrentMenuItem;
    a--; // TODO: set flags
    c = a;
    b = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = de;
    b = hl;
    hl = a;
    a = b;
    de = a;
    return;
noMenuItemSelected:
    a = *wCurrentMenuItem;
    *wMenuItemToSwap = a; // select the current menu item for swapping
    goto MoveSelectionMenu;
}

void PrintMenuItem() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PrintMenuItem:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    hl = hlcoord(0, 8);
    b = 3;
    c = 9;
    if (carry) TextBoxBorder();
    a = *wPlayerDisabledMove;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto notDisabled;
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a &= 0xf; zero = (a == 0); // TODO: set other flags
    b = a;
    a = *wCurrentMenuItem;
    zero = (a == b); carry = (a < b); // Compare
    if (!zero) goto notDisabled;
    hl = hlcoord(1, 10);
    de = DisabledText;
    if (carry) PlaceString();
    goto moveDisabled;
notDisabled:
    hl = wCurrentMenuItem;
    hl--; // TODO: set flags
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    hl = wBattleMonMoves;
    a = *wCurrentMenuItem;
    c = a;
    b = 0x0; // which item in the menu is the cursor pointing to? (0-3)
    hl = (uint16_t)(hl + bc); // TODO: set flags // point to the item (move) in memory
    a = hl;
    *wPlayerSelectedMove = a; // update wPlayerSelectedMove even if the move
    // ; isn't actually selected (just pointed to by the cursor)
    a = *wPlayerMonNumber;
    *wWhichPokemon = a;
    a = BATTLE_MON_DATA;
    *wMonDataLocation = a;
    callfar(GetMaxPP);
    hl = wCurrentMenuItem;
    c = hl;
    hl++; // TODO: set flags
    b = 0x0;
    hl = wBattleMonPP;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl;
    a &= PP_MASK; zero = (a == 0); // TODO: set other flags
    *wBattleMenuCurrentPP = a;
    // print TYPE/<type> and <curPP>/<maxPP>
    hl = hlcoord(1, 9);
    de = TypeText;
    if (carry) PlaceString();
    hl = hlcoord(7, 11);
    hl = '/';
    hl = hlcoord(5, 9);
    hl = '/';
    hl = hlcoord(5, 11);
    de = wBattleMenuCurrentPP;
    lb(bc, 1, 2);
    if (carry) PrintNumber();
    hl = hlcoord(8, 11);
    de = wMaxPP;
    lb(bc, 1, 2);
    if (carry) PrintNumber();
    if (carry) GetCurrentMove();
    hl = hlcoord(2, 10);
    predef(PrintMoveType);
moveDisabled:
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    goto Delay3;
}

void DisabledText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DisabledText:
    db("disabled!@");
}

void TypeText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

TypeText:
    db("TYPE@");
}

uint16_t SelectEnemyMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SelectEnemyMove:
    a = *wLinkState;
    a = (uint8_t)(a - LINK_STATE_BATTLING); // TODO: set flags
    if (!zero) goto noLinkBattle;
    // link battle
    if (carry) SaveScreenTilesToBuffer1();
    if (carry) LinkBattleExchangeData();
    if (carry) LoadScreenTilesFromBuffer1();
    a = *wSerialExchangeNybbleReceiveData;
    zero = (a == LINKBATTLE_STRUGGLE); carry = (a < LINKBATTLE_STRUGGLE); // Compare
    if (zero) goto linkedOpponentUsedStruggle;
    zero = (a == LINKBATTLE_NO_ACTION); carry = (a < LINKBATTLE_NO_ACTION); // Compare
    if (zero) goto unableToSelectMove;
    zero = (a == 4); carry = (a < 4); // Compare
    return;
    *wEnemyMoveListIndex = a;
    c = a;
    hl = wEnemyMonMoves;
    b = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl;
    goto done;
noLinkBattle:
    a = *wEnemyBattleStatus2;
    a &= (1 << NEEDS_TO_RECHARGE) | (1 << USING_RAGE); zero = (a == 0); // TODO: set other flags // need to recharge or using rage
    return;
    hl = wEnemyBattleStatus1;
    a = hl;
    a &= (1 << CHARGING_UP) | (1 << THRASHING_ABOUT); zero = (a == 0); // TODO: set other flags // using a charging move or thrash/petal dance
    return;
    a = *wEnemyMonStatus;
    a &= (1 << FRZ) | SLP_MASK; zero = (a == 0); // TODO: set other flags
    return;
    a = *wEnemyBattleStatus1;
    a &= (1 << USING_TRAPPING_MOVE) | (1 << STORING_ENERGY); zero = (a == 0); // TODO: set other flags // using a trapping move like wrap or bide
    return;
    a = *wPlayerBattleStatus1;
    zero = ((a & (1 << USING_TRAPPING_MOVE)) == 0); // caught in player's trapping move (e.g. wrap)
    if (zero) goto canSelectMove;
unableToSelectMove:
    a = 0xff;
    goto done;
canSelectMove:
    hl = wEnemyMonMoves+1; // 2nd enemy move
    a = hld;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto atLeastTwoMovesAvailable;
    a = *wEnemyDisabledMove;
    a &= a; zero = (a == 0); // TODO: set other flags
    a = STRUGGLE; // struggle if the only move is disabled
    if (!zero) goto done;
atLeastTwoMovesAvailable:
    a = *wIsInBattle;
    a--; // TODO: set flags
    if (zero) goto chooseRandomMove; // wild encounter
    callfar(AIEnemyTrainerChooseMoves);
chooseRandomMove:
    /* PUSH hl - TODO: implement stack */
    if (carry) BattleRandom();
    b = 1; // 25% chance to select move 1
    zero = (a == 25 percent); carry = (a < 25 percent); // Compare
    if (carry) goto moveChosen;
    hl++; // TODO: set flags
    b++; // TODO: set flags // 25% chance to select move 2
    zero = (a == 50 percent); carry = (a < 50 percent); // Compare
    if (carry) goto moveChosen;
    hl++; // TODO: set flags
    b++; // TODO: set flags // 25% chance to select move 3
    zero = (a == 75 percent - 1); carry = (a < 75 percent - 1); // Compare
    if (carry) goto moveChosen;
    hl++; // TODO: set flags
    b++; // TODO: set flags // 25% chance to select move 4
moveChosen:
    a = b;
    a--; // TODO: set flags
    *wEnemyMoveListIndex = a;
    a = *wEnemyDisabledMove;
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a &= 0xf; zero = (a == 0); // TODO: set other flags
    zero = (a == b); carry = (a < b); // Compare
    a = hl;
    /* POP hl - TODO: implement stack */
    if (zero) goto chooseRandomMove; // move disabled, try again
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto chooseRandomMove; // move non-existent, try again
done:
    *wEnemySelectedMove = a;
    return;
linkedOpponentUsedStruggle:
    a = STRUGGLE;
    goto done;
    // this appears to exchange data with the other gameboy during link battles
}

uint8_t LinkBattleExchangeData() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

LinkBattleExchangeData:
    a = 0xff;
    *wSerialExchangeNybbleReceiveData = a;
    a = *wPlayerMoveListIndex;
    zero = (a == LINKBATTLE_RUN); carry = (a < LINKBATTLE_RUN); // Compare // is the player running from battle?
    if (zero) goto doExchange;
    a = *wActionResultOrTookBattleTurn;
    a &= a; zero = (a == 0); // TODO: set other flags // is the player switching in another mon?
    if (!zero) goto switching;
    // the player used a move
    a = *wPlayerSelectedMove;
    zero = (a == STRUGGLE); carry = (a < STRUGGLE); // Compare
    b = LINKBATTLE_STRUGGLE;
    if (zero) goto next;
    b--; // TODO: set flags // LINKBATTLE_NO_ACTION
    /* assert */
    a++; // TODO: set flags
    if (zero) goto next;
    a = *wPlayerMoveListIndex;
    goto doExchange;
switching:
    a = *wWhichPokemon;
    a = (uint8_t)(a + 4); // TODO: set flags
    b = a;
next:
    a = b;
doExchange:
    *wSerialExchangeNybbleSendData = a;
    /* vc_hook */
    callfar(PrintWaitingText);
syncLoop1:
    if (carry) Serial_ExchangeNybble();
    if (carry) DelayFrame();
    a = *wSerialExchangeNybbleReceiveData;
    a++; // TODO: set flags
    if (zero) goto syncLoop1;
    /* vc_hook */
    /* vc_patch */
    /* if */
    b = 26;
    /* else */
    b = 10;
    /* endc */
    /* vc_patch_end */
syncLoop2:
    if (carry) DelayFrame();
    if (carry) Serial_ExchangeNybble();
    b--; // TODO: set flags
    if (!zero) goto syncLoop2;
    /* vc_hook */
    /* vc_patch */
    /* if */
    b = 26;
    /* else */
    b = 10;
    /* endc */
    /* vc_patch_end */
syncLoop3:
    if (carry) DelayFrame();
    if (carry) Serial_SendZeroByte();
    b--; // TODO: set flags
    if (!zero) goto syncLoop3;
    /* vc_hook */
    return;
}

void ExecutePlayerMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ExecutePlayerMove:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM) // set player's turn
    a = *wPlayerSelectedMove;
    /* assert */
    a++; // TODO: set flags
    if (zero) goto ExecutePlayerMoveDone; // if the player cannot move, skip most of their turn
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wMoveMissed = a;
    *wMonIsDisobedient = a;
    *wMoveDidntMiss = a;
    a = EFFECTIVE;
    *wDamageMultipliers = a;
    a = *wActionResultOrTookBattleTurn;
    a &= a; zero = (a == 0); // TODO: set other flags // has the player already used the turn (e.g. by using an item, trying to run or switching pokemon)
    if (!zero) goto ExecutePlayerMoveDone;
    if (carry) PrintGhostText();
    if (zero) goto ExecutePlayerMoveDone;
    if (carry) CheckPlayerStatusConditions();
    if (!zero) goto playerHasNoSpecialCondition;
    goto hl;
playerHasNoSpecialCondition:
    if (carry) GetCurrentMove();
    hl = wPlayerBattleStatus1;
    zero = ((hl & (1 << CHARGING_UP)) == 0); // charging up for attack
    if (!zero) goto PlayerCanExecuteChargingMove;
    if (carry) CheckForDisobedience();
    if (zero) goto ExecutePlayerMoveDone;
}

void CheckIfPlayerNeedsToChargeUp() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CheckIfPlayerNeedsToChargeUp:
    a = *wPlayerMoveEffect;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    if (zero) goto JumpMoveEffect;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    if (zero) goto JumpMoveEffect;
    goto PlayerCanExecuteMove;
    // in-battle stuff
}

void PlayerCanExecuteChargingMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PlayerCanExecuteChargingMove:
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << CHARGING_UP); // reset charging up and invulnerability statuses if mon was charging up for an attack
    // ; being fully paralyzed or hurting oneself in confusion removes charging up status
    // ; resulting in the Pokemon being invulnerable for the whole battle
    hl &= ~(1 << INVULNERABLE);
}

void PlayerCanExecuteMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PlayerCanExecuteMove:
    if (carry) DisplayUsedMoveText();
    hl = DecrementPP;
    de = wPlayerSelectedMove; // pointer to the move just used
    b = BANK(DecrementPP);
    if (carry) Bankswitch();
    a = *wPlayerMoveEffect; // effect of the move just used
    hl = ResidualEffects1;
    de = 1;
    if (carry) IsInArray();
    if (carry) goto JumpMoveEffect; // ResidualEffects1 moves skip damage calculation and accuracy tests
    // ; unless executed as part of their exclusive effect functions
    a = *wPlayerMoveEffect;
    hl = SpecialEffectsCont;
    de = 1;
    if (carry) IsInArray();
    if (carry) c(); // execute the effects of SpecialEffectsCont moves (e.g. Wrap, Thrash) but don't skip anything
}

void PlayerCalcMoveDamage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PlayerCalcMoveDamage:
    a = *wPlayerMoveEffect;
    hl = SetDamageEffects;
    de = 1;
    if (carry) IsInArray();
    if (carry) goto moveHitTest; // SetDamageEffects moves (e.g. Seismic Toss and Super Fang) skip damage calculation
    if (carry) CriticalHitTest();
    if (carry) HandleCounterMove();
    if (zero) goto HandleIfPlayerMoveMissed;
    if (carry) GetDamageVarsForPlayerAttack();
    if (carry) CalculateDamage();
    if (zero) goto PlayerCheckIfFlyOrChargeEffect; // for moves with 0 BP, skip any further damage calculation and, for now, skip MoveHitTest
    // ; for these moves, accuracy tests will only occur if they are called as part of the effect itself
    if (carry) AdjustDamageForMoveType();
    if (carry) RandomizeDamage();
moveHitTest:
    if (carry) MoveHitTest();
}

void HandleIfPlayerMoveMissed() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandleIfPlayerMoveMissed:
    a = *wMoveMissed;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto GetPlayerAnimationType;
    a = *wPlayerMoveEffect;
    a = (uint8_t)(a - EXPLODE_EFFECT); // TODO: set flags
    if (zero) goto PlayPlayerMoveAnimation; // don't play any animation if the move missed, unless it was EXPLODE_EFFECT
    goto PlayerCheckIfFlyOrChargeEffect;
}

void GetPlayerAnimationType() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

GetPlayerAnimationType:
    a = *wPlayerMoveEffect;
    a &= a; zero = (a == 0); // TODO: set other flags
    a = ANIMATIONTYPE_BLINK_ENEMY_MON_SPRITE; // move has no effect other than dealing damage
    if (zero) goto PlayPlayerMoveAnimation;
    a = ANIMATIONTYPE_SHAKE_SCREEN_HORIZONTALLY_LIGHT; // move has effect
}

void PlayPlayerMoveAnimation() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PlayPlayerMoveAnimation:
    /* PUSH af - TODO: implement stack */
    a = *wPlayerBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0);
    hl = HideSubstituteShowMonAnim;
    b = BANK(HideSubstituteShowMonAnim);
    if (carry) nz();
    /* POP af - TODO: implement stack */
    *wAnimationType = a;
    a = *wPlayerMoveNum;
    if (carry) PlayMoveAnimation();
    if (carry) HandleExplodingAnimation();
    if (carry) DrawPlayerHUDAndHPBar();
    a = *wPlayerBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0);
    hl = ReshowSubstituteAnim;
    b = BANK(ReshowSubstituteAnim);
    if (carry) nz();
    goto MirrorMoveCheck;
}

void PlayerCheckIfFlyOrChargeEffect() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PlayerCheckIfFlyOrChargeEffect:
    c = 30;
    if (carry) DelayFrames();
    a = *wPlayerMoveEffect;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    if (zero) goto playAnim;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    if (zero) goto playAnim;
    goto MirrorMoveCheck;
playAnim:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = STATUS_AFFECTED_ANIM;
    if (carry) PlayMoveAnimation();
}

uint16_t MirrorMoveCheck() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MirrorMoveCheck:
    a = *wPlayerMoveEffect;
    zero = (a == MIRROR_MOVE_EFFECT); carry = (a < MIRROR_MOVE_EFFECT); // Compare
    if (!zero) goto metronomeCheck;
    if (carry) MirrorMoveCopyMove();
    if (zero) goto ExecutePlayerMoveDone;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wMonIsDisobedient = a;
    goto CheckIfPlayerNeedsToChargeUp; // if Mirror Move was successful go back to damage calculation for copied move
metronomeCheck:
    zero = (a == METRONOME_EFFECT); carry = (a < METRONOME_EFFECT); // Compare
    if (!zero) goto next;
    if (carry) MetronomePickMove();
    goto CheckIfPlayerNeedsToChargeUp; // Go back to damage calculation for the move picked by Metronome
next:
    a = *wPlayerMoveEffect;
    hl = ResidualEffects2;
    de = 1;
    if (carry) IsInArray();
    if (carry) goto JumpMoveEffect; // done here after executing effects of ResidualEffects2
    a = *wMoveMissed;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto moveDidNotMiss;
    if (carry) PrintMoveFailureText();
    a = *wPlayerMoveEffect;
    zero = (a == EXPLODE_EFFECT); carry = (a < EXPLODE_EFFECT); // Compare // even if Explosion or Selfdestruct missed, its effect still needs to be activated
    if (zero) goto notDone;
    goto ExecutePlayerMoveDone; // otherwise, we're done if the move missed
moveDidNotMiss:
    if (carry) ApplyAttackToEnemyPokemon();
    if (carry) PrintCriticalOHKOText();
    callfar(DisplayEffectiveness);
    a = 1;
    *wMoveDidntMiss = a;
notDone:
    a = *wPlayerMoveEffect;
    hl = AlwaysHappenSideEffects;
    de = 1;
    if (carry) IsInArray();
    if (carry) c(); // not done after executing effects of AlwaysHappenSideEffects
    hl = wEnemyMonHP;
    a = hli;
    b = hl;
    a |= b; zero = (a == 0); // TODO: set other flags
    return; // don't do anything else if the enemy fainted
    if (carry) HandleBuildingRage();
    hl = wPlayerBattleStatus1;
    zero = ((hl & (1 << ATTACKING_MULTIPLE_TIMES)) == 0);
    if (zero) goto executeOtherEffects;
    a = *wPlayerNumAttacksLeft;
    a--; // TODO: set flags
    *wPlayerNumAttacksLeft = a;
    if (!zero) goto GetPlayerAnimationType; // for multi-hit moves, apply attack until PlayerNumAttacksLeft hits 0 or the enemy faints.
    // ; damage calculation and accuracy tests only happen for the first hit
    hl &= ~(1 << ATTACKING_MULTIPLE_TIMES); // clear attacking multiple times status when all attacks are over
    hl = MultiHitText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wPlayerNumHits = a;
executeOtherEffects:
    a = *wPlayerMoveEffect;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto ExecutePlayerMoveDone;
    hl = SpecialEffects;
    de = 1;
    if (carry) IsInArray();
    if (carry) nc(); // move effects not included in SpecialEffects or in either of the ResidualEffect arrays,
    // ; which are the effects not covered yet. Rage effect will be executed for a second time (though it's irrelevant).
    // ; Includes side effects that only need to be called if the target didn't faint.
    // ; Responsible for executing Twineedle's second side effect (poison).
    goto ExecutePlayerMoveDone;
}

void MultiHitText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MultiHitText:
    text_far(_MultiHitText);
    text_end();
}

uint8_t ExecutePlayerMoveDone() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ExecutePlayerMoveDone:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wActionResultOrTookBattleTurn = a;
    b = 1;
    return;
}

uint16_t PrintGhostText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PrintGhostText:
    // print the ghost battle messages
    if (carry) IsGhostBattle();
    return;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto Ghost;
    a = *wBattleMonStatus; // player's turn
    a &= (1 << FRZ) | SLP_MASK; zero = (a == 0); // TODO: set other flags
    return;
    hl = ScaredText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
Ghost:
    hl = GetOutText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
}

void ScaredText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ScaredText:
    text_far(_ScaredText);
    text_end();
}

void GetOutText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

GetOutText:
    text_far(_GetOutText);
    text_end();
}

uint8_t IsGhostBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

IsGhostBattle:
    a = *wIsInBattle;
    a--; // TODO: set flags
    return;
    a = *wCurMap;
    zero = (a == POKEMON_TOWER_1F); carry = (a < POKEMON_TOWER_1F); // Compare
    if (carry) goto next;
    zero = (a == POKEMON_TOWER_7F + 1); carry = (a < POKEMON_TOWER_7F + 1); // Compare
    if (!carry) goto next;
    b = SILPH_SCOPE;
    if (carry) IsItemInBag();
    return;
next:
    a = 1;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    // checks for various status conditions affecting the player mon
    // stores whether the mon cannot use a move this turn in Z flag
}

uint16_t CheckPlayerStatusConditions() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CheckPlayerStatusConditions:
    hl = wBattleMonStatus;
    a = hl;
    a &= SLP_MASK; zero = (a == 0); // TODO: set other flags
    if (zero) goto FrozenCheck;
    // sleeping
    a--; // TODO: set flags
    *wBattleMonStatus = a; // decrement number of turns left
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto WakeUp; // if the number of turns hit 0, wake up
    // fast asleep
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = SLP_PLAYER_ANIM;
    if (carry) PlayMoveAnimation();
    hl = FastAsleepText;
    if (carry) PrintText();
    goto sleepDone;
WakeUp:
    hl = WokeUpText;
    if (carry) PrintText();
sleepDone:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wPlayerUsedMove = a;
    hl = ExecutePlayerMoveDone; // player can't move this turn
    goto returnToHL;
FrozenCheck:
    zero = ((hl & (1 << FRZ)) == 0); // frozen?
    if (zero) goto HeldInPlaceCheck;
    hl = IsFrozenText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wPlayerUsedMove = a;
    hl = ExecutePlayerMoveDone; // player can't move this turn
    goto returnToHL;
HeldInPlaceCheck:
    a = *wEnemyBattleStatus1;
    zero = ((a & (1 << USING_TRAPPING_MOVE)) == 0); // is enemy using a multi-turn move like wrap?
    if (zero) goto FlinchedCheck;
    hl = CantMoveText;
    if (carry) PrintText();
    hl = ExecutePlayerMoveDone; // player can't move this turn
    goto returnToHL;
FlinchedCheck:
    hl = wPlayerBattleStatus1;
    zero = ((hl & (1 << FLINCHED)) == 0);
    if (zero) goto HyperBeamCheck;
    hl &= ~(1 << FLINCHED); // reset player's flinch status
    hl = FlinchedText;
    if (carry) PrintText();
    hl = ExecutePlayerMoveDone; // player can't move this turn
    goto returnToHL;
HyperBeamCheck:
    hl = wPlayerBattleStatus2;
    zero = ((hl & (1 << NEEDS_TO_RECHARGE)) == 0);
    if (zero) goto AnyMoveDisabledCheck;
    hl &= ~(1 << NEEDS_TO_RECHARGE); // reset player's recharge status
    hl = MustRechargeText;
    if (carry) PrintText();
    hl = ExecutePlayerMoveDone; // player can't move this turn
    goto returnToHL;
AnyMoveDisabledCheck:
    hl = wPlayerDisabledMove;
    a = hl;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto ConfusedCheck;
    a--; // TODO: set flags
    hl = a;
    a &= 0xf; zero = (a == 0); // TODO: set other flags // did Disable counter hit 0?
    if (!zero) goto ConfusedCheck;
    hl = a;
    *wPlayerDisabledMoveNumber = a;
    hl = DisabledNoMoreText;
    if (carry) PrintText();
ConfusedCheck:
    a = *wPlayerBattleStatus1;
    a = (uint8_t)(a + a); // TODO: set flags // is player confused?
    if (!carry) goto TriedToUseDisabledMoveCheck;
    hl = wPlayerConfusedCounter;
    hl--; // TODO: set flags
    if (!zero) goto IsConfused;
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << CONFUSED); // if confused counter hit 0, reset confusion status
    hl = ConfusedNoMoreText;
    if (carry) PrintText();
    goto TriedToUseDisabledMoveCheck;
IsConfused:
    hl = IsConfusedText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = CONF_PLAYER_ANIM;
    if (carry) PlayMoveAnimation();
    if (carry) BattleRandom();
    zero = (a == 50 percent + 1); carry = (a < 50 percent + 1); // Compare // chance to hurt itself
    if (carry) goto TriedToUseDisabledMoveCheck;
    hl = wPlayerBattleStatus1;
    a = hl;
    a &= 1 << CONFUSED; zero = (a == 0); // TODO: set other flags // if mon hurts itself, clear every other status from wPlayerBattleStatus1
    hl = a;
    if (carry) HandleSelfConfusionDamage();
    goto MonHurtItselfOrFullyParalysed;
TriedToUseDisabledMoveCheck:
    // prevents a disabled move that was selected before being disabled from being used
    a = *wPlayerDisabledMoveNumber;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto ParalysisCheck;
    hl = wPlayerSelectedMove;
    zero = (a == hl); carry = (a < hl); // Compare
    if (!zero) goto ParalysisCheck;
    if (carry) PrintMoveIsDisabledText();
    hl = ExecutePlayerMoveDone; // if a disabled move was somehow selected, player can't move this turn
    goto returnToHL;
ParalysisCheck:
    hl = wBattleMonStatus;
    zero = ((hl & (1 << PAR)) == 0);
    if (zero) goto BideCheck;
    if (carry) BattleRandom();
    zero = (a == 25 percent); carry = (a < 25 percent); // Compare // chance to be fully paralyzed
    if (!carry) goto BideCheck;
    hl = FullyParalyzedText;
    if (carry) PrintText();
MonHurtItselfOrFullyParalysed:
    hl = wPlayerBattleStatus1;
    a = hl;
    // ; clear bide, thrashing, charging up, and trapping moves such as warp (already cleared for confusion damage)
    a &= ~((1 << STORING_ENERGY) | (1 << THRASHING_ABOUT) | (1 << CHARGING_UP) | (1 << USING_TRAPPING_MOVE)); zero = (a == 0); // TODO: set other flags
    hl = a;
    a = *wPlayerMoveEffect;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    if (zero) goto FlyOrChargeEffect;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    if (zero) goto FlyOrChargeEffect;
    goto NotFlyOrChargeEffect;
FlyOrChargeEffect:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = STATUS_AFFECTED_ANIM;
    if (carry) PlayMoveAnimation();
NotFlyOrChargeEffect:
    hl = ExecutePlayerMoveDone;
    goto returnToHL; // if using a two-turn move, we need to recharge the first turn
BideCheck:
    hl = wPlayerBattleStatus1;
    zero = ((hl & (1 << STORING_ENERGY)) == 0); // is mon using bide?
    if (zero) goto ThrashingAboutCheck;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wPlayerMoveNum = a;
    hl = wDamage;
    a = hli;
    b = a;
    c = hl;
    hl = wPlayerBideAccumulatedDamage + 1;
    a = hl;
    a = (uint8_t)(a + c); // TODO: set flags // accumulate damage taken
    hld = a;
    a = hl;
    a = (uint8_t)(a + b + (carry ? 1 : 0)); // TODO: set flags
    hl = a;
    hl = wPlayerNumAttacksLeft;
    hl--; // TODO: set flags // did Bide counter hit 0?
    if (zero) goto UnleashEnergy;
    hl = ExecutePlayerMoveDone;
    goto returnToHL; // unless mon unleashes energy, can't move this turn
UnleashEnergy:
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << STORING_ENERGY); // not using bide any more
    hl = UnleashedEnergyText;
    if (carry) PrintText();
    a = 1;
    *wPlayerMovePower = a;
    hl = wPlayerBideAccumulatedDamage + 1;
    a = hld;
    a = (uint8_t)(a + a); // TODO: set flags
    b = a;
    *wDamage + 1 = a;
    a = hl;
    { uint8_t temp = a; a = (uint8_t)((a << 1) | (carry ? 1 : 0)); carry = (temp & 0x80) != 0; } // RL // double the damage
    *wDamage = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto next;
    a = 1;
    *wMoveMissed = a;
next:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    hl = a;
    a = BIDE;
    *wPlayerMoveNum = a;
    hl = HandleIfPlayerMoveMissed; // skip damage calculation, DecrementPP and MoveHitTest
    goto returnToHL;
ThrashingAboutCheck:
    zero = ((hl & (1 << THRASHING_ABOUT)) == 0); // is mon using thrash or petal dance?
    if (zero) goto MultiturnMoveCheck;
    a = THRASH;
    *wPlayerMoveNum = a;
    hl = ThrashingAboutText;
    if (carry) PrintText();
    hl = wPlayerNumAttacksLeft;
    hl--; // TODO: set flags // did Thrashing About counter hit 0?
    hl = PlayerCalcMoveDamage; // skip DecrementPP
    if (!zero) goto returnToHL;
    /* PUSH hl - TODO: implement stack */
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << THRASHING_ABOUT); // no longer thrashing about
    hl |= (1 << CONFUSED); // confused
    if (carry) BattleRandom();
    a &= 3; zero = (a == 0); // TODO: set other flags
    a++; // TODO: set flags
    a++; // TODO: set flags // confused for 2-5 turns
    *wPlayerConfusedCounter = a;
    /* POP hl - TODO: implement stack */ // skip DecrementPP
    goto returnToHL;
MultiturnMoveCheck:
    zero = ((hl & (1 << USING_TRAPPING_MOVE)) == 0); // is mon using multi-turn move?
    if (zero) goto RageCheck;
    hl = AttackContinuesText;
    if (carry) PrintText();
    a = *wPlayerNumAttacksLeft;
    a--; // TODO: set flags
    *wPlayerNumAttacksLeft = a;
    hl = GetPlayerAnimationType; // skip damage calculation (deal damage equal to last hit),
    // ; DecrementPP and MoveHitTest
    if (!zero) goto returnToHL; // redundant leftover code, the case wEnemyNumAttacksLeft == 0
    // ; is handled within CheckNumAttacksLeft
    goto returnToHL;
RageCheck:
    a = *wPlayerBattleStatus2;
    zero = ((a & (1 << USING_RAGE)) == 0); // is mon using rage?
    if (zero) goto checkPlayerStatusConditionsDone; // if we made it this far, mon can move normally this turn
    a = RAGE;
    *wNamedObjectIndex = a;
    if (carry) GetMoveName();
    if (carry) CopyToStringBuffer();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wPlayerMoveEffect = a;
    hl = PlayerCanExecuteMove;
    goto returnToHL;
returnToHL:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
checkPlayerStatusConditionsDone:
    a = 0x1;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
}

void FastAsleepText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

FastAsleepText:
    text_far(_FastAsleepText);
    text_end();
}

void WokeUpText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

WokeUpText:
    text_far(_WokeUpText);
    text_end();
}

void IsFrozenText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

IsFrozenText:
    text_far(_IsFrozenText);
    text_end();
}

void FullyParalyzedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

FullyParalyzedText:
    text_far(_FullyParalyzedText);
    text_end();
}

void FlinchedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

FlinchedText:
    text_far(_FlinchedText);
    text_end();
}

void MustRechargeText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MustRechargeText:
    text_far(_MustRechargeText);
    text_end();
}

void DisabledNoMoreText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DisabledNoMoreText:
    text_far(_DisabledNoMoreText);
    text_end();
}

void IsConfusedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

IsConfusedText:
    text_far(_IsConfusedText);
    text_end();
}

void HurtItselfText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HurtItselfText:
    text_far(_HurtItselfText);
    text_end();
}

void ConfusedNoMoreText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ConfusedNoMoreText:
    text_far(_ConfusedNoMoreText);
    text_end();
}

void SavingEnergyText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SavingEnergyText:
    text_far(_SavingEnergyText);
    text_end();
}

void UnleashedEnergyText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

UnleashedEnergyText:
    text_far(_UnleashedEnergyText);
    text_end();
}

void ThrashingAboutText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ThrashingAboutText:
    text_far(_ThrashingAboutText);
    text_end();
}

void AttackContinuesText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AttackContinuesText:
    text_far(_AttackContinuesText);
    text_end();
}

void CantMoveText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CantMoveText:
    text_far(_CantMoveText);
    text_end();
}

void PrintMoveIsDisabledText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PrintMoveIsDisabledText:
    hl = wPlayerSelectedMove;
    de = wPlayerBattleStatus1;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto removeChargingUp;
    hl++; // TODO: set flags
    de = wEnemyBattleStatus1;
removeChargingUp:
    a = de;
    a &= ~(1 << CHARGING_UP); // end the pokemon's
    de = a;
    a = hl;
    *wNamedObjectIndex = a;
    if (carry) GetMoveName();
    hl = MoveIsDisabledText;
    goto PrintText;
}

void MoveIsDisabledText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MoveIsDisabledText:
    text_far(_MoveIsDisabledText);
    text_end();
}

void HandleSelfConfusionDamage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandleSelfConfusionDamage:
    hl = HurtItselfText;
    if (carry) PrintText();
    hl = wEnemyMonDefense;
    a = hli;
    /* PUSH af - TODO: implement stack */
    a = hld;
    /* PUSH af - TODO: implement stack */
    a = *wBattleMonDefense;
    hli = a;
    a = *wBattleMonDefense + 1;
    hl = a;
    hl = wPlayerMoveEffect;
    /* PUSH hl - TODO: implement stack */
    a = hl;
    /* PUSH af - TODO: implement stack */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    *wCriticalHitOrOHKO = a; // self-inflicted confusion damage can't be a Critical Hit
    a = 40; // 40 base power
    hli = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = a;
    if (carry) GetDamageVarsForPlayerAttack();
    if (carry) CalculateDamage(); // ignores AdjustDamageForMoveType (type-less damage), RandomizeDamage,
    // ; and MoveHitTest (always hits)
    /* POP af - TODO: implement stack */
    /* POP hl - TODO: implement stack */
    hl = a;
    hl = wEnemyMonDefense + 1;
    /* POP af - TODO: implement stack */
    hld = a;
    /* POP af - TODO: implement stack */
    hl = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a++; // TODO: set flags
    hWhoseTurn = a; // LDH (High RAM)
    if (carry) PlayMoveAnimation();
    if (carry) DrawPlayerHUDAndHPBar();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    goto ApplyDamageToPlayerPokemon;
    /* include */
}

uint16_t PrintMoveFailureText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PrintMoveFailureText:
    de = wPlayerMoveEffect;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto playersTurn;
    de = wEnemyMoveEffect;
playersTurn:
    hl = DoesntAffectMonText;
    a = *wDamageMultipliers;
    a &= EFFECTIVENESS_MASK; zero = (a == 0); // TODO: set other flags
    if (zero) goto gotTextToPrint;
    hl = AttackMissedText;
    a = *wCriticalHitOrOHKO;
    zero = (a == 0xff); carry = (a < 0xff); // Compare
    if (!zero) goto gotTextToPrint;
    hl = UnaffectedText;
gotTextToPrint:
    /* PUSH de - TODO: implement stack */
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wCriticalHitOrOHKO = a;
    /* POP de - TODO: implement stack */
    a = de;
    zero = (a == JUMP_KICK_EFFECT); carry = (a < JUMP_KICK_EFFECT); // Compare
    return;
    // ; if you get here, the mon used jump kick or hi jump kick and missed
    hl = wDamage; // since the move missed, wDamage will always contain 0 at this point.
    // ; Thus, recoil damage will always be equal to 1
    // ; even if it was intended to be potential damage/8.
    a = hli;
    b = hl;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    { uint8_t temp = b; b = (uint8_t)((b >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    { uint8_t temp = b; b = (uint8_t)((b >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    { uint8_t temp = b; b = (uint8_t)((b >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    hl = b;
    hl--; // TODO: set flags
    hli = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto applyRecoil;
    a++; // TODO: set flags
    hl = a;
applyRecoil:
    hl = KeptGoingAndCrashedText;
    if (carry) PrintText();
    b = 0x4;
    predef(PredefShakeScreenHorizontally);
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto enemyTurn;
    goto ApplyDamageToPlayerPokemon;
enemyTurn:
    goto ApplyDamageToEnemyPokemon;
}

void AttackMissedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AttackMissedText:
    text_far(_AttackMissedText);
    text_end();
}

void KeptGoingAndCrashedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

KeptGoingAndCrashedText:
    text_far(_KeptGoingAndCrashedText);
    text_end();
}

void UnaffectedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

UnaffectedText:
    text_far(_UnaffectedText);
    text_end();
}

void PrintDoesntAffectText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PrintDoesntAffectText:
    hl = DoesntAffectMonText;
    goto PrintText;
}

void DoesntAffectMonText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DoesntAffectMonText:
    text_far(_DoesntAffectMonText);
    text_end();
    // if there was a critical hit or an OHKO was successful, print the corresponding text
}

void PrintCriticalOHKOText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PrintCriticalOHKOText:
    a = *wCriticalHitOrOHKO;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto done; // do nothing if there was no critical hit or successful OHKO
    a--; // TODO: set flags
    a = (uint8_t)(a + a); // TODO: set flags
    hl = CriticalOHKOTextPointers;
    b = 0x0;
    c = a;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hli;
    h = hl;
    l = a;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wCriticalHitOrOHKO = a;
done:
    c = 20;
    goto DelayFrames;
}

void CriticalOHKOTextPointers() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CriticalOHKOTextPointers:
    dw(CriticalHitText);
    dw(OHKOText);
}

void CriticalHitText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CriticalHitText:
    text_far(_CriticalHitText);
    text_end();
}

void OHKOText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

OHKOText:
    text_far(_OHKOText);
    text_end();
    // checks if a traded mon will disobey due to lack of badges
    // stores whether the mon will use a move in Z flag
}

uint16_t CheckForDisobedience() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CheckForDisobedience:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wMonIsDisobedient = a;
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto checkIfMonIsTraded;
    a = 0x1;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    // compare the mon's original trainer ID with the player's ID to see if it was traded
checkIfMonIsTraded:
    hl = wPartyMon1OTID;
    bc = PARTYMON_STRUCT_LENGTH;
    a = *wPlayerMonNumber;
    if (carry) AddNTimes();
    a = *wPlayerID;
    zero = (a == hl); carry = (a < hl); // Compare
    if (!zero) goto monIsTraded;
    hl++; // TODO: set flags
    a = *wPlayerID + 1;
    zero = (a == hl); carry = (a < hl); // Compare
    if (zero) goto canUseMove;
    // it was traded
monIsTraded:
    // what level might disobey?
    hl = wObtainedBadges;
    zero = ((hl & (1 << BIT_EARTHBADGE)) == 0);
    a = 101;
    if (!zero) goto next;
    zero = ((hl & (1 << BIT_MARSHBADGE)) == 0);
    a = 70;
    if (!zero) goto next;
    zero = ((hl & (1 << BIT_RAINBOWBADGE)) == 0);
    a = 50;
    if (!zero) goto next;
    zero = ((hl & (1 << BIT_CASCADEBADGE)) == 0);
    a = 30;
    if (!zero) goto next;
    a = 10;
next:
    b = a;
    c = a;
    a = *wBattleMonLevel;
    d = a;
    a = (uint8_t)(a + b); // TODO: set flags
    b = a;
    if (!carry) goto noCarry;
    b = 0xff; // cap b at $ff
noCarry:
    a = c;
    zero = (a == d); carry = (a < d); // Compare
    if (!carry) goto canUseMove;
loop1:
    if (carry) BattleRandom();
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    zero = (a == b); carry = (a < b); // Compare
    if (!carry) goto loop1;
    zero = (a == c); carry = (a < c); // Compare
    if (carry) goto canUseMove;
loop2:
    if (carry) BattleRandom();
    zero = (a == b); carry = (a < b); // Compare
    if (!carry) goto loop2;
    zero = (a == c); carry = (a < c); // Compare
    if (carry) goto useRandomMove;
    a = d;
    a = (uint8_t)(a - c); // TODO: set flags
    b = a;
    if (carry) BattleRandom();
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a = (uint8_t)(a - b); // TODO: set flags
    if (carry) goto monNaps;
    zero = (a == b); carry = (a < b); // Compare
    if (!carry) goto monDoesNothing;
    hl = WontObeyText;
    if (carry) PrintText();
    if (carry) HandleSelfConfusionDamage();
    goto cannotUseMove;
monNaps:
    if (carry) BattleRandom();
    a = (uint8_t)(a + a); // TODO: set flags
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a &= SLP_MASK; zero = (a == 0); // TODO: set other flags
    if (zero) goto monNaps; // keep trying until we get at least 1 turn of sleep
    *wBattleMonStatus = a;
    hl = BeganToNapText;
    goto printText;
monDoesNothing:
    if (carry) BattleRandom();
    a &= 0x3; zero = (a == 0); // TODO: set other flags
    hl = LoafingAroundText;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto printText;
    hl = WontObeyText;
    a--; // TODO: set flags
    if (zero) goto printText;
    hl = TurnedAwayText;
    a--; // TODO: set flags
    if (zero) goto printText;
    hl = IgnoredOrdersText;
printText:
    if (carry) PrintText();
    goto cannotUseMove;
useRandomMove:
    a = *wBattleMonMoves + 1;
    a &= a; zero = (a == 0); // TODO: set other flags // is the second move slot empty?
    if (zero) goto monDoesNothing; // mon will not use move if it only knows one move
    a = *wPlayerDisabledMoveNumber;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto monDoesNothing;
    a = *wPlayerSelectedMove;
    zero = (a == STRUGGLE); carry = (a < STRUGGLE); // Compare
    if (zero) goto monDoesNothing; // mon will not use move if struggling
    // check if only one move has remaining PP
    hl = wBattleMonPP;
    /* PUSH hl - TODO: implement stack */
    a = hli;
    a &= PP_MASK; zero = (a == 0); // TODO: set other flags
    b = a;
    a = hli;
    a &= PP_MASK; zero = (a == 0); // TODO: set other flags
    a = (uint8_t)(a + b); // TODO: set flags
    b = a;
    a = hli;
    a &= PP_MASK; zero = (a == 0); // TODO: set other flags
    a = (uint8_t)(a + b); // TODO: set flags
    b = a;
    a = hl;
    a &= PP_MASK; zero = (a == 0); // TODO: set other flags
    a = (uint8_t)(a + b); // TODO: set flags
    /* POP hl - TODO: implement stack */
    /* PUSH af - TODO: implement stack */
    a = *wCurrentMenuItem;
    c = a;
    b = 0x0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl;
    a &= PP_MASK; zero = (a == 0); // TODO: set other flags
    b = a;
    /* POP af - TODO: implement stack */
    zero = (a == b); carry = (a < b); // Compare
    if (zero) goto monDoesNothing; // mon will not use move if only one move has remaining PP
    a = 0x1;
    *wMonIsDisobedient = a;
    a = *wMaxMenuItem;
    b = a;
    a = *wCurrentMenuItem;
    c = a;
chooseMove:
    if (carry) BattleRandom();
    a &= 0x3; zero = (a == 0); // TODO: set other flags
    zero = (a == b); carry = (a < b); // Compare
    if (!carry) goto chooseMove; // if the random number is greater than the move count, choose another
    zero = (a == c); carry = (a < c); // Compare
    if (zero) goto chooseMove; // if the random number matches the move the player selected, choose another
    *wCurrentMenuItem = a;
    hl = wBattleMonPP;
    e = a;
    d = 0x0;
    hl = (uint16_t)(hl + de); // TODO: set flags
    a = hl;
    a &= a; zero = (a == 0); // TODO: set other flags // does the move have any PP left?
    if (zero) goto chooseMove; // if the move has no PP left, choose another
    a = *wCurrentMenuItem;
    c = a;
    b = 0x0;
    hl = wBattleMonMoves;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl;
    *wPlayerSelectedMove = a;
    if (carry) GetCurrentMove();
canUseMove:
    a = 0x1;
    a &= a; zero = (a == 0); // TODO: set other flags // clear Z flag
    return;
cannotUseMove:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // set Z flag
    return;
}

void LoafingAroundText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

LoafingAroundText:
    text_far(_LoafingAroundText);
    text_end();
}

void BeganToNapText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

BeganToNapText:
    text_far(_BeganToNapText);
    text_end();
}

void WontObeyText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

WontObeyText:
    text_far(_WontObeyText);
    text_end();
}

void TurnedAwayText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

TurnedAwayText:
    text_far(_TurnedAwayText);
    text_end();
}

void IgnoredOrdersText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

IgnoredOrdersText:
    text_far(_IgnoredOrdersText);
    text_end();
    // sets b, c, d, and e for the CalculateDamage routine in the case of an attack by the player mon
}

uint16_t GetDamageVarsForPlayerAttack() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

GetDamageVarsForPlayerAttack:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wDamage; // damage to eventually inflict, initialise to zero
    hli = a;
    hl = a;
    hl = wPlayerMovePower;
    a = hli;
    a &= a; zero = (a == 0); // TODO: set other flags
    d = a; // d = move power
    return; // return if move power is zero
    a = hl; // a = [wPlayerMoveType]
    zero = (a == SPECIAL); carry = (a < SPECIAL); // Compare // types >= SPECIAL are all special
    if (!carry) goto specialAttack;
    // physical attack
    hl = wEnemyMonDefense;
    a = hli;
    b = a;
    c = hl; // bc = enemy defense
    a = *wEnemyBattleStatus3;
    zero = ((a & (1 << HAS_REFLECT_UP)) == 0); // check for Reflect
    if (zero) goto physicalAttackCritCheck;
    // if the enemy has used Reflect, double the enemy's defense
    carry = (c & 0x80) != 0; c = (uint8_t)(c << 1); // SLA
    { uint8_t temp = b; b = (uint8_t)((b << 1) | (carry ? 1 : 0)); carry = (temp & 0x80) != 0; } // RL
physicalAttackCritCheck:
    hl = wBattleMonAttack;
    a = *wCriticalHitOrOHKO;
    a &= a; zero = (a == 0); // TODO: set other flags // check for critical hit
    if (zero) goto scaleStats;
    // in the case of a critical hit, reset the player's attack and the enemy's defense to their base values
    c = STAT_DEFENSE;
    if (carry) GetEnemyMonStat();
    a = hProduct + 2; // LDH (High RAM)
    b = a;
    a = hProduct + 3; // LDH (High RAM)
    c = a;
    /* PUSH bc - TODO: implement stack */
    hl = wPartyMon1Attack;
    a = *wPlayerMonNumber;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    /* POP bc - TODO: implement stack */
    goto scaleStats;
specialAttack:
    hl = wEnemyMonSpecial;
    a = hli;
    b = a;
    c = hl; // bc = enemy special
    a = *wEnemyBattleStatus3;
    zero = ((a & (1 << HAS_LIGHT_SCREEN_UP)) == 0); // check for Light Screen
    if (zero) goto specialAttackCritCheck;
    // if the enemy has used Light Screen, double the enemy's special
    carry = (c & 0x80) != 0; c = (uint8_t)(c << 1); // SLA
    { uint8_t temp = b; b = (uint8_t)((b << 1) | (carry ? 1 : 0)); carry = (temp & 0x80) != 0; } // RL
    // reflect and light screen boosts do not cap the stat at MAX_STAT_VALUE, so weird things will happen during stats scaling
    // if a Pokemon with 512 or more Defense has used Reflect, or if a Pokemon with 512 or more Special has used Light Screen
specialAttackCritCheck:
    hl = wBattleMonSpecial;
    a = *wCriticalHitOrOHKO;
    a &= a; zero = (a == 0); // TODO: set other flags // check for critical hit
    if (zero) goto scaleStats;
    // in the case of a critical hit, reset the player's and enemy's specials to their base values
    c = STAT_SPECIAL;
    if (carry) GetEnemyMonStat();
    a = hProduct + 2; // LDH (High RAM)
    b = a;
    a = hProduct + 3; // LDH (High RAM)
    c = a;
    /* PUSH bc - TODO: implement stack */
    hl = wPartyMon1Special;
    a = *wPlayerMonNumber;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    /* POP bc - TODO: implement stack */
    // if either the offensive or defensive stat is too large to store in a byte, scale both stats by dividing them by 4
    // this allows values with up to 10 bits (values up to 1023) to be handled
    // anything larger will wrap around
scaleStats:
    a = hli;
    l = hl;
    h = a; // hl = player's offensive stat
    a |= b; zero = (a == 0); // TODO: set other flags // is either high byte nonzero?
    if (zero) goto next; // if not, we don't need to scale
    // bc /= 4 (scale enemy's defensive stat)
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = c; c = (uint8_t)((c >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = c; c = (uint8_t)((c >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    // defensive stat can actually end up as 0, leading to a division by 0 freeze during damage calculation
    // hl /= 4 (scale player's offensive stat)
    carry = (h & 1) != 0; h = (uint8_t)(h >> 1); // SRL
    { uint8_t temp = l; l = (uint8_t)((l >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (h & 1) != 0; h = (uint8_t)(h >> 1); // SRL
    { uint8_t temp = l; l = (uint8_t)((l >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    a = l;
    a |= h; zero = (a == 0); // TODO: set other flags // is the player's offensive stat 0?
    if (!zero) goto next;
    l++; // TODO: set flags // if the player's offensive stat is 0, bump it up to 1
next:
    b = l; // b = player's offensive stat (possibly scaled)
    // ; (c already contains enemy's defensive stat (possibly scaled))
    a = *wBattleMonLevel;
    e = a; // e = level
    a = *wCriticalHitOrOHKO;
    a &= a; zero = (a == 0); // TODO: set other flags // check for critical hit
    if (zero) goto done;
    carry = (e & 0x80) != 0; e = (uint8_t)(e << 1); // SLA // double level if it was a critical hit
done:
    a = 1;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    // sets b, c, d, and e for the CalculateDamage routine in the case of an attack by the enemy mon
}

uint16_t GetDamageVarsForEnemyAttack() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

GetDamageVarsForEnemyAttack:
    hl = wDamage; // damage to eventually inflict, initialise to zero
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    hl = a;
    hl = wEnemyMovePower;
    a = hli;
    d = a; // d = move power
    a &= a; zero = (a == 0); // TODO: set other flags
    return; // return if move power is zero
    a = hl; // a = [wEnemyMoveType]
    zero = (a == SPECIAL); carry = (a < SPECIAL); // Compare // types >= SPECIAL are all special
    if (!carry) goto specialAttack;
    // physical attack
    hl = wBattleMonDefense;
    a = hli;
    b = a;
    c = hl; // bc = player defense
    a = *wPlayerBattleStatus3;
    zero = ((a & (1 << HAS_REFLECT_UP)) == 0); // check for Reflect
    if (zero) goto physicalAttackCritCheck;
    // if the player has used Reflect, double the player's defense
    carry = (c & 0x80) != 0; c = (uint8_t)(c << 1); // SLA
    { uint8_t temp = b; b = (uint8_t)((b << 1) | (carry ? 1 : 0)); carry = (temp & 0x80) != 0; } // RL
physicalAttackCritCheck:
    hl = wEnemyMonAttack;
    a = *wCriticalHitOrOHKO;
    a &= a; zero = (a == 0); // TODO: set other flags // check for critical hit
    if (zero) goto scaleStats;
    // in the case of a critical hit, reset the player's defense and the enemy's attack to their base values
    hl = wPartyMon1Defense;
    a = *wPlayerMonNumber;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    a = hli;
    b = a;
    c = hl;
    /* PUSH bc - TODO: implement stack */
    c = STAT_ATTACK;
    if (carry) GetEnemyMonStat();
    hl = hProduct + 2;
    /* POP bc - TODO: implement stack */
    goto scaleStats;
specialAttack:
    hl = wBattleMonSpecial;
    a = hli;
    b = a;
    c = hl;
    a = *wPlayerBattleStatus3;
    zero = ((a & (1 << HAS_LIGHT_SCREEN_UP)) == 0); // check for Light Screen
    if (zero) goto specialAttackCritCheck;
    // if the player has used Light Screen, double the player's special
    carry = (c & 0x80) != 0; c = (uint8_t)(c << 1); // SLA
    { uint8_t temp = b; b = (uint8_t)((b << 1) | (carry ? 1 : 0)); carry = (temp & 0x80) != 0; } // RL
    // reflect and light screen boosts do not cap the stat at MAX_STAT_VALUE, so weird things will happen during stats scaling
    // if a Pokemon with 512 or more Defense has used Reflect, or if a Pokemon with 512 or more Special has used Light Screen
specialAttackCritCheck:
    hl = wEnemyMonSpecial;
    a = *wCriticalHitOrOHKO;
    a &= a; zero = (a == 0); // TODO: set other flags // check for critical hit
    if (zero) goto scaleStats;
    // in the case of a critical hit, reset the player's and enemy's specials to their base values
    hl = wPartyMon1Special;
    a = *wPlayerMonNumber;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    a = hli;
    b = a;
    c = hl;
    /* PUSH bc - TODO: implement stack */
    c = STAT_SPECIAL;
    if (carry) GetEnemyMonStat();
    hl = hProduct + 2;
    /* POP bc - TODO: implement stack */
    // if either the offensive or defensive stat is too large to store in a byte, scale both stats by dividing them by 4
    // this allows values with up to 10 bits (values up to 1023) to be handled
    // anything larger will wrap around
scaleStats:
    a = hli;
    l = hl;
    h = a; // hl = enemy's offensive stat
    a |= b; zero = (a == 0); // TODO: set other flags // is either high byte nonzero?
    if (zero) goto next; // if not, we don't need to scale
    // bc /= 4 (scale player's defensive stat)
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = c; c = (uint8_t)((c >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = c; c = (uint8_t)((c >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    // defensive stat can actually end up as 0, leading to a division by 0 freeze during damage calculation
    // hl /= 4 (scale enemy's offensive stat)
    carry = (h & 1) != 0; h = (uint8_t)(h >> 1); // SRL
    { uint8_t temp = l; l = (uint8_t)((l >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (h & 1) != 0; h = (uint8_t)(h >> 1); // SRL
    { uint8_t temp = l; l = (uint8_t)((l >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    a = l;
    a |= h; zero = (a == 0); // TODO: set other flags // is the enemy's offensive stat 0?
    if (!zero) goto next;
    l++; // TODO: set flags // if the enemy's offensive stat is 0, bump it up to 1
next:
    b = l; // b = enemy's offensive stat (possibly scaled)
    // ; (c already contains player's defensive stat (possibly scaled))
    a = *wEnemyMonLevel;
    e = a;
    a = *wCriticalHitOrOHKO;
    a &= a; zero = (a == 0); // TODO: set other flags // check for critical hit
    if (zero) goto done;
    carry = (e & 0x80) != 0; e = (uint8_t)(e << 1); // SLA // double level if it was a critical hit
done:
    a = 0x1;
    a &= a; zero = (a == 0); // TODO: set other flags
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    // get stat c of enemy mon
    // c: stat to get (STAT_* constant)
}

uint16_t GetEnemyMonStat() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

GetEnemyMonStat:
    /* PUSH de - TODO: implement stack */
    /* PUSH bc - TODO: implement stack */
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto notLinkBattle;
    hl = wEnemyMon1Stats;
    c--; // TODO: set flags
    carry = (c & 0x80) != 0; c = (uint8_t)(c << 1); // SLA
    b = 0x0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = *wEnemyMonPartyPos;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    a = hli;
    hMultiplicand + 1 = a; // LDH (High RAM)
    a = hl;
    hMultiplicand + 2 = a; // LDH (High RAM)
    /* POP bc - TODO: implement stack */
    /* POP de - TODO: implement stack */
    return;
notLinkBattle:
    a = *wEnemyMonLevel;
    *wCurEnemyLevel = a;
    a = *wEnemyMonSpecies;
    *wCurSpecies = a;
    if (carry) GetMonHeader();
    hl = wEnemyMonDVs;
    de = wLoadedMonSpeedExp;
    a = hli;
    de = a;
    de++; // TODO: set flags
    a = hl;
    de = a;
    /* POP bc - TODO: implement stack */
    b = 0x0;
    hl = wLoadedMonSpeedExp - $b; // this base address makes CalcStat look in [wLoadedMonSpeedExp] for DVs
    if (carry) CalcStat();
    /* POP de - TODO: implement stack */
    return;
}

uint16_t CalculateDamage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CalculateDamage:
    // input:
    // b: attack
    // c: opponent defense
    // d: base power
    // e: level
    a = hWhoseTurn; // LDH (High RAM) // whose turn?
    a &= a; zero = (a == 0); // TODO: set other flags
    a = *wPlayerMoveEffect;
    if (zero) goto effect;
    a = *wEnemyMoveEffect;
effect:
    // EXPLODE_EFFECT halves defense.
    zero = (a == EXPLODE_EFFECT); carry = (a < EXPLODE_EFFECT); // Compare
    if (!zero) goto ok;
    carry = (c & 1) != 0; c = (uint8_t)(c >> 1); // SRL
    if (!zero) goto ok;
    c++; // TODO: set flags // ...with a minimum value of 1 (used as a divisor later on)
ok:
    // Multi-hit attacks may or may not have 0 bp.
    zero = (a == TWO_TO_FIVE_ATTACKS_EFFECT); carry = (a < TWO_TO_FIVE_ATTACKS_EFFECT); // Compare
    if (zero) goto skipbp;
    zero = (a == EFFECT_1E); carry = (a < EFFECT_1E); // Compare
    if (zero) goto skipbp;
    // Calculate OHKO damage based on remaining HP.
    zero = (a == OHKO_EFFECT); carry = (a < OHKO_EFFECT); // Compare
    if (zero) goto JumpToOHKOMoveEffect;
    // Don't calculate damage for moves that don't do any.
    a = d; // base power
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
skipbp:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = hDividend;
    hli = a;
    hli = a;
    hl = a;
    // Multiply level by 2
    a = e; // level
    a = (uint8_t)(a + a); // TODO: set flags
    if (!carry) goto nc;
    /* PUSH af - TODO: implement stack */
    a = 1;
    hl = a;
    /* POP af - TODO: implement stack */
nc:
    hl++; // TODO: set flags
    hli = a;
    // Divide by 5
    a = 5;
    hld = a;
    /* PUSH bc - TODO: implement stack */
    b = 4;
    if (carry) Divide();
    /* POP bc - TODO: implement stack */
    // Add 2
    hl++; // TODO: set flags
    hl++; // TODO: set flags
    hl++; // TODO: set flags // multiplier
    // Multiply by attack base power
    hl = d;
    if (carry) Multiply();
    // Multiply by attack stat
    hl = b;
    if (carry) Multiply();
    // Divide by defender's defense stat
    hl = c;
    b = 4;
    if (carry) Divide();
    // Divide by 50
    hl = 50;
    b = 4;
    if (carry) Divide();
    // Update wCurDamage.
    // Capped at MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE: 999 - 2 = 997.
    hl = wDamage;
    b = hl;
    a = hQuotient + 3; // LDH (High RAM)
    a = (uint8_t)(a + b); // TODO: set flags
    hQuotient + 3 = a; // LDH (High RAM)
    if (!carry) goto dont_cap_1;
    a = hQuotient + 2; // LDH (High RAM)
    a++; // TODO: set flags
    hQuotient + 2 = a; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto cap;
dont_cap_1:
    a = hQuotient; // LDH (High RAM)
    b = a;
    a = hQuotient + 1; // LDH (High RAM)
    a |= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto cap;
    a = hQuotient + 2; // LDH (High RAM)
    zero = (a == HIGH(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1)); carry = (a < HIGH(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1)); // Compare
    if (carry) goto dont_cap_2;
    zero = (a == HIGH(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1) + 1); carry = (a < HIGH(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1) + 1); // Compare
    if (!carry) goto cap;
    a = hQuotient + 3; // LDH (High RAM)
    zero = (a == LOW(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1)); carry = (a < LOW(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1)); // Compare
    if (!carry) goto cap;
dont_cap_2:
    hl++; // TODO: set flags
    a = hQuotient + 3; // LDH (High RAM)
    b = hl;
    a = (uint8_t)(a + b); // TODO: set flags
    hld = a;
    a = hQuotient + 2; // LDH (High RAM)
    b = hl;
    a = (uint8_t)(a + b + (carry ? 1 : 0)); // TODO: set flags
    hl = a;
    if (carry) goto cap;
    a = hl;
    zero = (a == HIGH(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1)); carry = (a < HIGH(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1)); // Compare
    if (carry) goto dont_cap_3;
    zero = (a == HIGH(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1) + 1); carry = (a < HIGH(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1) + 1); // Compare
    if (!carry) goto cap;
    hl++; // TODO: set flags
    a = hld;
    zero = (a == LOW(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1)); carry = (a < LOW(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE + 1)); // Compare
    if (carry) goto dont_cap_3;
cap:
    a = HIGH(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE);
    hli = a;
    a = LOW(MAX_NEUTRAL_DAMAGE - MIN_NEUTRAL_DAMAGE);
    hld = a;
dont_cap_3:
    // Add back MIN_NEUTRAL_DAMAGE (capping at 999).
    hl++; // TODO: set flags
    a = hl;
    a = (uint8_t)(a + MIN_NEUTRAL_DAMAGE); // TODO: set flags
    hld = a;
    if (!carry) goto dont_floor;
    hl++; // TODO: set flags
dont_floor:
    // Returns nz and nc.
    a = 1;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
}

uint8_t JumpToOHKOMoveEffect() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

JumpToOHKOMoveEffect:
    if (carry) JumpMoveEffect();
    a = *wMoveMissed;
    a--; // TODO: set flags
    return;
    /* include */
    // determines if attack is a critical hit
    // Azure Heights claims "the fastest pokémon (who are, not coincidentally,
    // among the most popular) tend to CH about 20 to 25% of the time."
}

uint16_t CriticalHitTest() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CriticalHitTest:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wCriticalHitOrOHKO = a;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    a = *wEnemyMonSpecies;
    if (!zero) goto handleEnemy;
    a = *wBattleMonSpecies;
handleEnemy:
    *wCurSpecies = a;
    if (carry) GetMonHeader();
    a = *wMonHBaseSpeed;
    b = a;
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL // (effective (base speed/2))
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    hl = wPlayerMovePower;
    de = wPlayerBattleStatus2;
    if (zero) goto calcCriticalHitProbability;
    hl = wEnemyMovePower;
    de = wEnemyBattleStatus2;
calcCriticalHitProbability:
    a = hld; // read base power from RAM
    a &= a; zero = (a == 0); // TODO: set other flags
    return; // do nothing if zero
    hl--; // TODO: set flags
    c = hl; // read move id
    a = de;
    zero = ((a & (1 << GETTING_PUMPED)) == 0); // test for focus energy
    if (!zero) goto focusEnergyUsed; // bug: using focus energy causes a shift to the right instead of left,
    // ; resulting in 1/4 the usual crit chance
    carry = (b & 0x80) != 0; b = (uint8_t)(b << 1); // SLA // (effective (base speed/2)*2)
    if (!carry) goto noFocusEnergyUsed;
    b = 0xff; // cap at 255/256
    goto noFocusEnergyUsed;
focusEnergyUsed:
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
noFocusEnergyUsed:
    hl = HighCriticalMoves; // table of high critical hit moves
Loop:
    a = hli; // read move from move table
    zero = (a == c); carry = (a < c); // Compare // does it match the move about to be used?
    if (zero) goto HighCritical; // if so, the move about to be used is a high critical hit ratio move
    a++; // TODO: set flags // move on to the next move, FF terminates loop
    if (!zero) goto Loop; // check the next move in HighCriticalMoves
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL // /2 for regular move (effective (base speed / 2))
    goto SkipHighCritical; // continue as a normal move
HighCritical:
    carry = (b & 0x80) != 0; b = (uint8_t)(b << 1); // SLA // *2 for high critical hit moves
    if (!carry) goto noCarry;
    b = 0xff; // cap at 255/256
noCarry:
    carry = (b & 0x80) != 0; b = (uint8_t)(b << 1); // SLA // *4 for high critical move (effective (base speed/2)*8))
    if (!carry) goto SkipHighCritical;
    b = 0xff;
SkipHighCritical:
    if (carry) BattleRandom(); // generates a random value, in "a"
    a = ((uint8_t)(a << 1) | (a >> 7)); // RLC
    a = ((uint8_t)(a << 1) | (a >> 7)); // RLC
    a = ((uint8_t)(a << 1) | (a >> 7)); // RLC
    zero = (a == b); carry = (a < b); // Compare // check a against calculated crit rate
    return; // no critical hit if no borrow
    a = 0x1;
    *wCriticalHitOrOHKO = a; // set critical hit flag
    return;
    /* include */
    // function to determine if Counter hits and if so, how much damage it does
}

uint16_t HandleCounterMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandleCounterMove:
    // The variables checked by Counter are updated whenever the cursor points to a new move in the battle selection menu.
    // This is irrelevant for the opponent's side outside of link battles, since the move selection is controlled by the AI.
    // However, in the scenario where the player switches out and the opponent uses Counter,
    // the outcome may be affected by the player's actions in the move selection menu prior to switching the Pokemon.
    // This might also lead to desync glitches in link battles.
    a = hWhoseTurn; // LDH (High RAM) // whose turn
    a &= a; zero = (a == 0); // TODO: set other flags
    // player's turn
    hl = wEnemySelectedMove;
    de = wEnemyMovePower;
    a = *wPlayerSelectedMove;
    if (zero) goto next;
    // enemy's turn
    hl = wPlayerSelectedMove;
    de = wPlayerMovePower;
    a = *wEnemySelectedMove;
next:
    zero = (a == COUNTER); carry = (a < COUNTER); // Compare
    return; // return if not using Counter
    a = 0x01;
    *wMoveMissed = a; // initialize the move missed variable to true (it is set to false below if the move hits)
    a = hl;
    zero = (a == COUNTER); carry = (a < COUNTER); // Compare
    return; // miss if the opponent's last selected move is Counter.
    a = de;
    a &= a; zero = (a == 0); // TODO: set other flags
    return; // miss if the opponent's last selected move's Base Power is 0.
    // check if the move the target last selected was Normal or Fighting type
    de++; // TODO: set flags
    a = de;
    a &= a; zero = (a == 0); // TODO: set other flags // normal type
    if (zero) goto counterableType;
    zero = (a == FIGHTING); carry = (a < FIGHTING); // Compare
    if (zero) goto counterableType;
    // if the move wasn't Normal or Fighting type, miss
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
counterableType:
    hl = wDamage;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    return; // If we made it here, Counter still misses if the last move used in battle did no damage to its target.
    // ; wDamage is shared by both players, so Counter may strike back damage dealt by the Counter user itself
    // ; if the conditions meet, even though 99% of the times damage will come from the target.
    // if it did damage, double it
    a = hl;
    a = (uint8_t)(a + a); // TODO: set flags
    hld = a;
    a = hl;
    a = (uint8_t)(a + a + (carry ? 1 : 0)); // TODO: set flags
    hl = a;
    if (!carry) goto noCarry;
    // damage is capped at 0xFFFF
    a = 0xff;
    hli = a;
    hl = a;
noCarry:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wMoveMissed = a;
    if (carry) MoveHitTest(); // do the normal move hit test in addition to Counter's special rules
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
}

void ApplyAttackToEnemyPokemon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ApplyAttackToEnemyPokemon:
    a = *wPlayerMoveEffect;
    zero = (a == OHKO_EFFECT); carry = (a < OHKO_EFFECT); // Compare
    if (zero) goto ApplyDamageToEnemyPokemon;
    zero = (a == SUPER_FANG_EFFECT); carry = (a < SUPER_FANG_EFFECT); // Compare
    if (zero) goto superFangEffect;
    zero = (a == SPECIAL_DAMAGE_EFFECT); carry = (a < SPECIAL_DAMAGE_EFFECT); // Compare
    if (zero) goto specialDamage;
    a = *wPlayerMovePower;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto ApplyAttackToEnemyPokemonDone; // no attack to apply if base power is 0
    goto ApplyDamageToEnemyPokemon;
superFangEffect:
    // set the damage to half the target's HP
    hl = wEnemyMonHP;
    de = wDamage;
    a = hli;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    de = a;
    de++; // TODO: set flags
    b = a;
    a = hl;
    { uint8_t temp = a; a = (uint8_t)((a >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    de = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto ApplyDamageToEnemyPokemon;
    // make sure Super Fang's damage is always at least 1
    a = 0x01;
    de = a;
    goto ApplyDamageToEnemyPokemon;
specialDamage:
    hl = wBattleMonLevel;
    a = hl;
    b = a; // Seismic Toss deals damage equal to the user's level
    a = *wPlayerMoveNum;
    zero = (a == SEISMIC_TOSS); carry = (a < SEISMIC_TOSS); // Compare
    if (zero) goto storeDamage;
    zero = (a == NIGHT_SHADE); carry = (a < NIGHT_SHADE); // Compare
    if (zero) goto storeDamage;
    b = SONICBOOM_DAMAGE; // 20
    zero = (a == SONICBOOM); carry = (a < SONICBOOM); // Compare
    if (zero) goto storeDamage;
    b = DRAGON_RAGE_DAMAGE; // 40
    zero = (a == DRAGON_RAGE); carry = (a < DRAGON_RAGE); // Compare
    if (zero) goto storeDamage;
    // Psywave
    a = hl;
    b = a;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    a = (uint8_t)(a + b); // TODO: set flags
    b = a; // b = level * 1.5
    // loop until a random number in the range [1, b) is found
loop:
    if (carry) BattleRandom();
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto loop;
    zero = (a == b); carry = (a < b); // Compare
    if (!carry) goto loop;
    b = a;
storeDamage:
    hl = wDamage;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    a = b;
    hl = a;
}

void ApplyDamageToEnemyPokemon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ApplyDamageToEnemyPokemon:
    hl = wDamage;
    a = hli;
    b = a;
    a = hl;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (zero) goto ApplyAttackToEnemyPokemonDone; // we're done if damage is 0
    a = *wEnemyBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0); // does the enemy have a substitute?
    if (!zero) goto AttackSubstitute;
    // subtract the damage from the pokemon's current HP
    // also, save the current HP at wHPBarOldHP
    a = hld;
    b = a;
    a = *wEnemyMonHP + 1;
    *wHPBarOldHP = a;
    a = (uint8_t)(a - b); // TODO: set flags
    *wEnemyMonHP + 1 = a;
    a = hl;
    b = a;
    a = *wEnemyMonHP;
    *wHPBarOldHP+1 = a;
    a = (uint8_t)(a - b - (carry ? 1 : 0)); // TODO: set flags
    *wEnemyMonHP = a;
    if (!carry) goto animateHpBar;
    // if more damage was done than the current HP, zero the HP and set the damage (wDamage)
    // equal to how much HP the pokemon had before the attack
    a = *wHPBarOldHP+1;
    hli = a;
    a = *wHPBarOldHP;
    hl = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wEnemyMonHP;
    hli = a;
    hl = a;
animateHpBar:
    hl = wEnemyMonMaxHP;
    a = hli;
    *wHPBarMaxHP+1 = a;
    a = hl;
    *wHPBarMaxHP = a;
    hl = wEnemyMonHP;
    a = hli;
    *wHPBarNewHP+1 = a;
    a = hl;
    *wHPBarNewHP = a;
    hl = hlcoord(2, 2);
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wHPBarType = a;
    predef(UpdateHPBar2); // animate the HP bar shortening
}

void ApplyAttackToEnemyPokemonDone() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ApplyAttackToEnemyPokemonDone:
    goto DrawHUDsAndHPBars;
}

void ApplyAttackToPlayerPokemon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ApplyAttackToPlayerPokemon:
    a = *wEnemyMoveEffect;
    zero = (a == OHKO_EFFECT); carry = (a < OHKO_EFFECT); // Compare
    if (zero) goto ApplyDamageToPlayerPokemon;
    zero = (a == SUPER_FANG_EFFECT); carry = (a < SUPER_FANG_EFFECT); // Compare
    if (zero) goto superFangEffect;
    zero = (a == SPECIAL_DAMAGE_EFFECT); carry = (a < SPECIAL_DAMAGE_EFFECT); // Compare
    if (zero) goto specialDamage;
    a = *wEnemyMovePower;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto ApplyAttackToPlayerPokemonDone;
    goto ApplyDamageToPlayerPokemon;
superFangEffect:
    // set the damage to half the target's HP
    hl = wBattleMonHP;
    de = wDamage;
    a = hli;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    de = a;
    de++; // TODO: set flags
    b = a;
    a = hl;
    { uint8_t temp = a; a = (uint8_t)((a >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    de = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto ApplyDamageToPlayerPokemon;
    // make sure Super Fang's damage is always at least 1
    a = 0x01;
    de = a;
    goto ApplyDamageToPlayerPokemon;
specialDamage:
    hl = wEnemyMonLevel;
    a = hl;
    b = a;
    a = *wEnemyMoveNum;
    zero = (a == SEISMIC_TOSS); carry = (a < SEISMIC_TOSS); // Compare
    if (zero) goto storeDamage;
    zero = (a == NIGHT_SHADE); carry = (a < NIGHT_SHADE); // Compare
    if (zero) goto storeDamage;
    b = SONICBOOM_DAMAGE;
    zero = (a == SONICBOOM); carry = (a < SONICBOOM); // Compare
    if (zero) goto storeDamage;
    b = DRAGON_RAGE_DAMAGE;
    zero = (a == DRAGON_RAGE); carry = (a < DRAGON_RAGE); // Compare
    if (zero) goto storeDamage;
    // Psywave
    a = hl;
    b = a;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    a = (uint8_t)(a + b); // TODO: set flags
    b = a; // b = attacker's level * 1.5
    // loop until a random number in the range [0, b) is found
    // this differs from the range when the player attacks, which is [1, b)
    // it's possible for the enemy to do 0 damage with Psywave, but the player always does at least 1 damage
loop:
    if (carry) BattleRandom();
    zero = (a == b); carry = (a < b); // Compare
    if (!carry) goto loop;
    b = a;
storeDamage:
    hl = wDamage;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    a = b;
    hl = a;
}

void ApplyDamageToPlayerPokemon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ApplyDamageToPlayerPokemon:
    hl = wDamage;
    a = hli;
    b = a;
    a = hl;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (zero) goto ApplyAttackToPlayerPokemonDone; // we're done if damage is 0
    a = *wPlayerBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0); // does the player have a substitute?
    if (!zero) goto AttackSubstitute;
    // subtract the damage from the pokemon's current HP
    // also, save the current HP at wHPBarOldHP and the new HP at wHPBarNewHP
    a = hld;
    b = a;
    a = *wBattleMonHP + 1;
    *wHPBarOldHP = a;
    a = (uint8_t)(a - b); // TODO: set flags
    *wBattleMonHP + 1 = a;
    *wHPBarNewHP = a;
    b = hl;
    a = *wBattleMonHP;
    *wHPBarOldHP+1 = a;
    a = (uint8_t)(a - b - (carry ? 1 : 0)); // TODO: set flags
    *wBattleMonHP = a;
    *wHPBarNewHP+1 = a;
    if (!carry) goto animateHpBar;
    // if more damage was done than the current HP, zero the HP and set the damage (wDamage)
    // equal to how much HP the pokemon had before the attack
    a = *wHPBarOldHP+1;
    hli = a;
    a = *wHPBarOldHP;
    hl = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wBattleMonHP;
    hli = a;
    hl = a;
    hl = wHPBarNewHP;
    hli = a;
    hl = a;
animateHpBar:
    hl = wBattleMonMaxHP;
    a = hli;
    *wHPBarMaxHP+1 = a;
    a = hl;
    *wHPBarMaxHP = a;
    hl = hlcoord(10, 9);
    a = 0x01;
    *wHPBarType = a;
    predef(UpdateHPBar2); // animate the HP bar shortening
}

void ApplyAttackToPlayerPokemonDone() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ApplyAttackToPlayerPokemonDone:
    goto DrawHUDsAndHPBars;
}

uint16_t AttackSubstitute() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AttackSubstitute:
    // Unlike the two ApplyAttackToPokemon functions, Attack Substitute is shared by player and enemy.
    // Self-confusion damage as well as Hi-Jump Kick and Jump Kick recoil cause a momentary turn swap before being applied.
    // If the user has a Substitute up and would take damage because of that,
    // damage will be applied to the other player's Substitute.
    // Normal recoil such as from Double-Edge isn't affected by this glitch,
    // because this function is never called in that case.
    hl = SubstituteTookDamageText;
    if (carry) PrintText();
    // values for player turn
    de = wEnemySubstituteHP;
    bc = wEnemyBattleStatus2;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto applyDamageToSubstitute;
    // values for enemy turn
    de = wPlayerSubstituteHP;
    bc = wPlayerBattleStatus2;
applyDamageToSubstitute:
    hl = wDamage;
    a = hli;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto substituteBroke; // damage > 0xFF always breaks substitutes
    // subtract damage from HP of substitute
    a = de;
    a = (uint8_t)(a - hl); // TODO: set flags
    de = a;
    return;
substituteBroke:
    // If the target's Substitute breaks, wDamage isn't updated with the amount of HP
    // the Substitute had before being attacked.
    h = b;
    l = c;
    hl &= ~(1 << HAS_SUBSTITUTE_UP); // unset the substitute bit
    hl = SubstituteBrokeText;
    if (carry) PrintText();
    // flip whose turn it is for the next function call
    a = hWhoseTurn; // LDH (High RAM)
    a ^= 0x01; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    callfar(HideSubstituteShowMonAnim); // animate the substitute breaking
    // flip the turn back to the way it was
    a = hWhoseTurn; // LDH (High RAM)
    a ^= 0x01; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    hl = wPlayerMoveEffect; // value for player's turn
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto nullifyEffect;
    hl = wEnemyMoveEffect; // value for enemy's turn
nullifyEffect:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = a; // zero the effect of the attacker's move
    goto DrawHUDsAndHPBars;
}

void SubstituteTookDamageText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SubstituteTookDamageText:
    text_far(_SubstituteTookDamageText);
    text_end();
}

void SubstituteBrokeText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SubstituteBrokeText:
    text_far(_SubstituteBrokeText);
    text_end();
    // this function raises the attack modifier of a pokemon using Rage when that pokemon is attacked
}

uint16_t HandleBuildingRage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandleBuildingRage:
    // values for the player turn
    hl = wEnemyBattleStatus2;
    de = wEnemyMonStatMods;
    bc = wEnemyMoveNum;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto next;
    // values for the enemy turn
    hl = wPlayerBattleStatus2;
    de = wPlayerMonStatMods;
    bc = wPlayerMoveNum;
next:
    zero = ((hl & (1 << USING_RAGE)) == 0); // is the pokemon being attacked under the effect of Rage?
    return; // return if not
    a = de;
    zero = (a == 0x0d); carry = (a < 0x0d); // Compare // maximum stat modifier value
    return; // return if attack modifier is already maxed
    a = hWhoseTurn; // LDH (High RAM)
    a ^= 0x01; zero = (a == 0); carry = false; // XOR clears carry // flip turn for the stat modifier raising function
    hWhoseTurn = a; // LDH (High RAM)
    // temporarily change the target pokemon's move to $00 and the effect to the one
    // that causes the attack modifier to go up one stage
    h = b;
    l = c;
    hl = 0x00; // null move number
    hl++; // TODO: set flags
    hl = ATTACK_UP1_EFFECT;
    /* PUSH hl - TODO: implement stack */
    hl = BuildingRageText;
    if (carry) PrintText();
    if (carry) StatModifierUpEffect(); // stat modifier raising function
    /* POP hl - TODO: implement stack */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hld = a; // null move effect
    a = RAGE;
    hl = a; // restore the target pokemon's move number to Rage
    a = hWhoseTurn; // LDH (High RAM)
    a ^= 0x01; zero = (a == 0); carry = false; // XOR clears carry // flip turn back to the way it was
    hWhoseTurn = a; // LDH (High RAM)
    return;
}

void BuildingRageText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

BuildingRageText:
    text_far(_BuildingRageText);
    text_end();
    // copy last move for Mirror Move
    // sets zero flag on failure and unsets zero flag on success
}

uint16_t MirrorMoveCopyMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MirrorMoveCopyMove:
    // Mirror Move makes use of wPlayerUsedMove and wEnemyUsedMove,
    // which are mainly used to print the "[Pokemon] used [Move]" text.
    // Both are set to 0 whenever a new Pokemon is sent out
    // wPlayerUsedMove is also set to 0 whenever the player is fast asleep or frozen solid.
    // wEnemyUsedMove is also set to 0 whenever the enemy is fast asleep or frozen solid.
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    // values for player turn
    a = *wEnemyUsedMove;
    hl = wPlayerSelectedMove;
    de = wPlayerMoveNum;
    if (zero) goto next;
    // values for enemy turn
    a = *wPlayerUsedMove;
    de = wEnemyMoveNum;
    hl = wEnemySelectedMove;
next:
    hl = a;
    zero = (a == MIRROR_MOVE); carry = (a < MIRROR_MOVE); // Compare // did the target Pokemon last use Mirror Move, and miss?
    if (zero) goto mirrorMoveFailed;
    a &= a; zero = (a == 0); // TODO: set other flags // has the target selected any move yet?
    if (!zero) goto ReloadMoveData;
mirrorMoveFailed:
    hl = MirrorMoveFailedText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
}

void MirrorMoveFailedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MirrorMoveFailedText:
    text_far(_MirrorMoveFailedText);
    text_end();
    // function used to reload move data for moves like Mirror Move and Metronome
}

uint16_t ReloadMoveData() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ReloadMoveData:
    *wNamedObjectIndex = a;
    a--; // TODO: set flags
    hl = Moves;
    bc = MOVE_LENGTH;
    if (carry) AddNTimes();
    a = BANK(Moves);
    if (carry) FarCopyData(); // copy the move's stats
    if (carry) IncrementMovePP();
    // the follow two function calls are used to reload the move name
    if (carry) GetMoveName();
    if (carry) CopyToStringBuffer();
    a = 0x01;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    // function that picks a random move for metronome
}

void MetronomePickMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MetronomePickMove:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = METRONOME;
    if (carry) PlayMoveAnimation(); // play Metronome's animation
    // values for player turn
    de = wPlayerMoveNum;
    hl = wPlayerSelectedMove;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto pickMoveLoop;
    // values for enemy turn
    de = wEnemyMoveNum;
    hl = wEnemySelectedMove;
    // loop to pick a random number in the range of valid moves used by Metronome
pickMoveLoop:
    if (carry) BattleRandom();
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto pickMoveLoop;
    zero = (a == STRUGGLE); carry = (a < STRUGGLE); // Compare
    /* assert */ // random numbers greater than STRUGGLE are not moves
    if (!carry) goto pickMoveLoop;
    zero = (a == METRONOME); carry = (a < METRONOME); // Compare
    if (zero) goto pickMoveLoop;
    hl = a;
    goto ReloadMoveData;
    // this function increments the current move's PP
    // it's used to prevent moves that run another move within the same turn
    // (like Mirror Move and Metronome) from losing 2 PP
}

uint16_t IncrementMovePP() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

IncrementMovePP:
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    // values for player turn
    hl = wBattleMonPP;
    de = wPartyMon1PP;
    a = *wPlayerMoveListIndex;
    if (zero) goto next;
    // values for enemy turn
    hl = wEnemyMonPP;
    de = wEnemyMon1PP;
    a = *wEnemyMoveListIndex;
next:
    b = 0x00;
    c = a;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    hl++; // TODO: set flags // increment PP in the currently battling pokemon memory location
    h = d;
    l = e;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    a = *wPlayerMonNumber; // value for player turn
    if (zero) goto updatePP;
    a = *wEnemyMonPartyPos; // value for enemy turn
updatePP:
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    hl++; // TODO: set flags // increment PP in the party memory location
    return;
    // function to adjust the base damage of an attack to account for type effectiveness
}

uint16_t AdjustDamageForMoveType() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AdjustDamageForMoveType:
    // values for player turn
    hl = wBattleMonType;
    a = hli;
    b = a; // b = type 1 of attacker
    c = hl; // c = type 2 of attacker
    hl = wEnemyMonType;
    a = hli;
    d = a; // d = type 1 of defender
    e = hl; // e = type 2 of defender
    a = *wPlayerMoveType;
    *wMoveType = a;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto next;
    // values for enemy turn
    hl = wEnemyMonType;
    a = hli;
    b = a; // b = type 1 of attacker
    c = hl; // c = type 2 of attacker
    hl = wBattleMonType;
    a = hli;
    d = a; // d = type 1 of defender
    e = hl; // e = type 2 of defender
    a = *wEnemyMoveType;
    *wMoveType = a;
next:
    a = *wMoveType;
    zero = (a == b); carry = (a < b); // Compare // does the move type match type 1 of the attacker?
    if (zero) goto sameTypeAttackBonus;
    zero = (a == c); carry = (a < c); // Compare // does the move type match type 2 of the attacker?
    if (zero) goto sameTypeAttackBonus;
    goto skipSameTypeAttackBonus;
sameTypeAttackBonus:
    // if the move type matches one of the attacker's types
    hl = wDamage + 1;
    a = hld;
    h = hl;
    l = a; // hl = damage
    b = h;
    c = l; // bc = damage
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = c; c = (uint8_t)((c >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR // bc = floor(0.5 * damage)
    hl = (uint16_t)(hl + bc); // TODO: set flags // hl = floor(1.5 * damage)
    // store damage
    a = h;
    *wDamage = a;
    a = l;
    *wDamage + 1 = a;
    hl = wDamageMultipliers;
    hl |= (1 << BIT_STAB_DAMAGE);
skipSameTypeAttackBonus:
    a = *wMoveType;
    b = a;
    hl = TypeEffects;
loop:
    a = hli; // a = "attacking type" of the current type pair
    zero = (a == 0xff); carry = (a < 0xff); // Compare
    if (zero) goto done;
    zero = (a == b); carry = (a < b); // Compare // does move type match "attacking type"?
    if (!zero) goto nextTypePair;
    a = hl; // a = "defending type" of the current type pair
    zero = (a == d); carry = (a < d); // Compare // does type 1 of defender match "defending type"?
    if (zero) goto matchingPairFound;
    zero = (a == e); carry = (a < e); // Compare // does type 2 of defender match "defending type"?
    if (zero) goto matchingPairFound;
    goto nextTypePair;
matchingPairFound:
    // if the move type matches the "attacking type" and one of the defender's types matches the "defending type"
    /* PUSH hl - TODO: implement stack */
    /* PUSH bc - TODO: implement stack */
    hl++; // TODO: set flags
    a = *wDamageMultipliers;
    a &= 1 << BIT_STAB_DAMAGE; zero = (a == 0); // TODO: set other flags
    b = a;
    a = hl; // a = damage multiplier
    hMultiplier = a; // LDH (High RAM)
    a = (uint8_t)(a + b); // TODO: set flags
    *wDamageMultipliers = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hMultiplicand = a; // LDH (High RAM)
    hl = wDamage;
    a = hli;
    hMultiplicand + 1 = a; // LDH (High RAM)
    a = hld;
    hMultiplicand + 2 = a; // LDH (High RAM)
    if (carry) Multiply();
    a = 10;
    hDivisor = a; // LDH (High RAM)
    b = 4;
    if (carry) Divide();
    a = hQuotient + 2; // LDH (High RAM)
    hli = a;
    b = a;
    a = hQuotient + 3; // LDH (High RAM)
    hl = a;
    a |= b; zero = (a == 0); // TODO: set other flags // is damage 0?
    if (!zero) goto skipTypeImmunity;
    // if damage is 0, make the move miss
    // this only occurs if a move that would do 2 or 3 damage is 0.25x effective against the target
    a++; // TODO: set flags
    *wMoveMissed = a;
skipTypeImmunity:
    /* POP bc - TODO: implement stack */
    /* POP hl - TODO: implement stack */
nextTypePair:
    hl++; // TODO: set flags
    hl++; // TODO: set flags
    goto loop;
done:
    return;
    // function to tell how effective the type of an enemy attack is on the player's current pokemon
    // this doesn't take into account the effects that dual types can have
    // (e.g. 4x weakness / resistance, weaknesses and resistances canceling)
    // the result is stored in [wTypeEffectiveness]
    // as far is can tell, this is only used once in some AI code to help decide which move to use
}

uint16_t AIGetTypeEffectiveness() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AIGetTypeEffectiveness:
    a = *wEnemyMoveType;
    d = a; // d = type of enemy move
    hl = wBattleMonType;
    b = hl; // b = type 1 of player's pokemon
    hl++; // TODO: set flags
    c = hl; // c = type 2 of player's pokemon
    // ; initialize to neutral effectiveness
    a = 0x10; // bug: should be EFFECTIVE (10)
    *wTypeEffectiveness = a;
    hl = TypeEffects;
loop:
    a = hli;
    zero = (a == 0xff); carry = (a < 0xff); // Compare
    return;
    zero = (a == d); carry = (a < d); // Compare // match the type of the move
    if (!zero) goto nextTypePair1;
    a = hli;
    zero = (a == b); carry = (a < b); // Compare // match with type 1 of pokemon
    if (zero) goto done;
    zero = (a == c); carry = (a < c); // Compare // or match with type 2 of pokemon
    if (zero) goto done;
    goto nextTypePair2;
nextTypePair1:
    hl++; // TODO: set flags
nextTypePair2:
    hl++; // TODO: set flags
    goto loop;
done:
    a = hl;
    *wTypeEffectiveness = a; // store damage multiplier
    return;
    /* include */
    // some tests that need to pass for a move to hit
}

uint16_t MoveHitTest() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

MoveHitTest:
    // player's turn
    hl = wEnemyBattleStatus1;
    de = wPlayerMoveEffect;
    bc = wEnemyMonStatus;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto dreamEaterCheck;
    // enemy's turn
    hl = wPlayerBattleStatus1;
    de = wEnemyMoveEffect;
    bc = wBattleMonStatus;
dreamEaterCheck:
    a = de;
    zero = (a == DREAM_EATER_EFFECT); carry = (a < DREAM_EATER_EFFECT); // Compare
    if (!zero) goto swiftCheck;
    a = bc;
    a &= SLP_MASK; zero = (a == 0); // TODO: set other flags
    if (zero) goto moveMissed;
swiftCheck:
    a = de;
    zero = (a == SWIFT_EFFECT); carry = (a < SWIFT_EFFECT); // Compare
    return; // Swift never misses (this was fixed from the Japanese versions)
    if (carry) CheckTargetSubstitute(); // substitute check (note that this overwrites a)
    if (zero) goto checkForDigOrFlyStatus;
    // The fix for Swift broke this code. It's supposed to prevent HP draining moves from working on Substitutes.
    // Since CheckTargetSubstitute overwrites a with either $00 or $01, it never works.
    zero = (a == DRAIN_HP_EFFECT); carry = (a < DRAIN_HP_EFFECT); // Compare
    if (zero) goto moveMissed;
    zero = (a == DREAM_EATER_EFFECT); carry = (a < DREAM_EATER_EFFECT); // Compare
    if (zero) goto moveMissed;
checkForDigOrFlyStatus:
    zero = ((hl & (1 << INVULNERABLE)) == 0);
    if (!zero) goto moveMissed;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto enemyTurn;
    // player's turn
    // this checks if the move effect is disallowed by mist
    a = *wPlayerMoveEffect;
    zero = (a == ATTACK_DOWN1_EFFECT); carry = (a < ATTACK_DOWN1_EFFECT); // Compare
    if (carry) goto skipEnemyMistCheck;
    zero = (a == HAZE_EFFECT + 1); carry = (a < HAZE_EFFECT + 1); // Compare
    if (carry) goto enemyMistCheck;
    zero = (a == ATTACK_DOWN2_EFFECT); carry = (a < ATTACK_DOWN2_EFFECT); // Compare
    if (carry) goto skipEnemyMistCheck;
    zero = (a == REFLECT_EFFECT + 1); carry = (a < REFLECT_EFFECT + 1); // Compare
    if (carry) goto enemyMistCheck;
    goto skipEnemyMistCheck;
enemyMistCheck:
    // if move effect is from $12 to $19 inclusive or $3a to $41 inclusive
    // i.e. the following moves
    // GROWL, TAIL WHIP, LEER, STRING SHOT, SAND-ATTACK, SMOKESCREEN, KINESIS,
    // FLASH, CONVERSION*, HAZE*, SCREECH, LIGHT SCREEN*, REFLECT*
    // the moves that are marked with an asterisk are not affected since this
    // function is not called when those moves are used
    a = *wEnemyBattleStatus2;
    zero = ((a & (1 << PROTECTED_BY_MIST)) == 0); // is mon protected by mist?
    if (!zero) goto moveMissed;
skipEnemyMistCheck:
    a = *wPlayerBattleStatus2;
    zero = ((a & (1 << USING_X_ACCURACY)) == 0); // is the player using X Accuracy?
    return; // if so, always hit regardless of accuracy/evasion
    goto calcHitChance;
enemyTurn:
    a = *wEnemyMoveEffect;
    zero = (a == ATTACK_DOWN1_EFFECT); carry = (a < ATTACK_DOWN1_EFFECT); // Compare
    if (carry) goto skipPlayerMistCheck;
    zero = (a == HAZE_EFFECT + 1); carry = (a < HAZE_EFFECT + 1); // Compare
    if (carry) goto playerMistCheck;
    zero = (a == ATTACK_DOWN2_EFFECT); carry = (a < ATTACK_DOWN2_EFFECT); // Compare
    if (carry) goto skipPlayerMistCheck;
    zero = (a == REFLECT_EFFECT + 1); carry = (a < REFLECT_EFFECT + 1); // Compare
    if (carry) goto playerMistCheck;
    goto skipPlayerMistCheck;
playerMistCheck:
    // similar to enemy mist check
    a = *wPlayerBattleStatus2;
    zero = ((a & (1 << PROTECTED_BY_MIST)) == 0); // is mon protected by mist?
    if (!zero) goto moveMissed;
skipPlayerMistCheck:
    a = *wEnemyBattleStatus2;
    zero = ((a & (1 << USING_X_ACCURACY)) == 0); // is the enemy using X Accuracy?
    return; // if so, always hit regardless of accuracy/evasion
calcHitChance:
    if (carry) CalcHitChance(); // scale the move accuracy according to attacker's accuracy and target's evasion
    a = *wPlayerMoveAccuracy;
    b = a;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto doAccuracyCheck;
    a = *wEnemyMoveAccuracy;
    b = a;
doAccuracyCheck:
    // if the random number generated is greater than or equal to the scaled accuracy, the move misses
    // note that this means that even the highest accuracy is still just a 255/256 chance, not 100%
    if (carry) BattleRandom();
    zero = (a == b); carry = (a < b); // Compare
    if (!carry) goto moveMissed;
    return;
moveMissed:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wDamage; // zero the damage
    hli = a;
    hl = a;
    a++; // TODO: set flags
    *wMoveMissed = a;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto playerTurn;
    // enemy's turn
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE); // end multi-turn attack e.g. wrap
    return;
playerTurn:
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE); // end multi-turn attack e.g. wrap
    return;
    // values for player turn
}

uint16_t CalcHitChance() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CalcHitChance:
    hl = wPlayerMoveAccuracy;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    a = *wPlayerMonAccuracyMod;
    b = a;
    a = *wEnemyMonEvasionMod;
    c = a;
    if (zero) goto next;
    // values for enemy turn
    hl = wEnemyMoveAccuracy;
    a = *wEnemyMonAccuracyMod;
    b = a;
    a = *wPlayerMonEvasionMod;
    c = a;
next:
    a = 0x0e;
    a = (uint8_t)(a - c); // TODO: set flags
    c = a; // c = 14 - EVASIONMOD (this "reflects" the value over 7, so that an increase in the target's evasion
    // ; decreases the hit chance instead of increasing the hit chance)
    // zero the high bytes of the multiplicand
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hMultiplicand = a; // LDH (High RAM)
    hMultiplicand + 1 = a; // LDH (High RAM)
    a = hl;
    hMultiplicand + 2 = a; // LDH (High RAM) // set multiplicand to move accuracy
    /* PUSH hl - TODO: implement stack */
    d = 0x02; // loop has two iterations
    // loop to do the calculations, the first iteration multiplies by the accuracy ratio and
    // the second iteration multiplies by the evasion ratio
loop:
    /* PUSH bc - TODO: implement stack */
    hl = StatModifierRatios; // stat modifier ratios
    b--; // TODO: set flags
    carry = (b & 0x80) != 0; b = (uint8_t)(b << 1); // SLA
    c = b;
    b = 0x00;
    hl = (uint16_t)(hl + bc); // TODO: set flags // hl = address of stat modifier ratio
    /* POP bc - TODO: implement stack */
    a = hli;
    hMultiplier = a; // LDH (High RAM) // set multiplier to the numerator of the ratio
    if (carry) Multiply();
    a = hl;
    hDivisor = a; // LDH (High RAM) // set divisor to the the denominator of the ratio
    // ; (the dividend is the product of the previous multiplication)
    b = 0x04; // number of bytes in the dividend
    if (carry) Divide();
    a = hQuotient + 3; // LDH (High RAM)
    b = a;
    a = hQuotient + 2; // LDH (High RAM)
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto nextCalculation;
    // make sure the result is always at least one
    hQuotient + 2 = a; // LDH (High RAM)
    a = 0x01;
    hQuotient + 3 = a; // LDH (High RAM)
nextCalculation:
    b = c;
    d--; // TODO: set flags
    if (!zero) goto loop;
    a = hQuotient + 2; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags // is the calculated hit chance over 0xFF?
    a = hQuotient + 3; // LDH (High RAM)
    if (zero) goto storeAccuracy;
    // if calculated hit chance over 0xFF
    a = 0xff; // set the hit chance to 0xFF
storeAccuracy:
    /* POP hl - TODO: implement stack */
    hl = a; // store the hit chance in the move accuracy variable
    return;
    // multiplies damage by a random percentage from ~85% to 100%
}

uint16_t RandomizeDamage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

RandomizeDamage:
    hl = wDamage;
    a = hli;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto DamageGreaterThanOne;
    a = hl;
    zero = (a == 2); carry = (a < 2); // Compare
    return; // return if damage is equal to 0 or 1
DamageGreaterThanOne:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hMultiplicand = a; // LDH (High RAM)
    hl--; // TODO: set flags
    a = hli;
    hMultiplicand + 1 = a; // LDH (High RAM)
    a = hl;
    hMultiplicand + 2 = a; // LDH (High RAM)
    // loop until a random number greater than or equal to 217 is generated
loop:
    if (carry) BattleRandom();
    zero = (a == 85 percent + 1); carry = (a < 85 percent + 1); // Compare
    if (carry) goto loop;
    hMultiplier = a; // LDH (High RAM)
    if (carry) Multiply(); // multiply damage by the random number, which is in the range [217, 255]
    a = 255;
    hDivisor = a; // LDH (High RAM)
    b = 0x4;
    if (carry) Divide(); // divide the result by 255
    // store the modified damage
    a = hQuotient + 2; // LDH (High RAM)
    hl = wDamage;
    hli = a;
    a = hQuotient + 3; // LDH (High RAM)
    hl = a;
    return;
    // for more detailed commentary, see equivalent function for player side (ExecutePlayerMove)
}

uint8_t ExecuteEnemyMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ExecuteEnemyMove:
    a = *wEnemySelectedMove;
    /* assert */
    a++; // TODO: set flags
    if (zero) goto ExecuteEnemyMoveDone;
    if (carry) PrintGhostText();
    if (zero) goto ExecuteEnemyMoveDone;
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto executeEnemyMove;
    b = 0x1;
    a = *wSerialExchangeNybbleReceiveData;
    zero = (a == LINKBATTLE_STRUGGLE); carry = (a < LINKBATTLE_STRUGGLE); // Compare
    if (zero) goto executeEnemyMove;
    zero = (a == 4); carry = (a < 4); // Compare
    return;
executeEnemyMove:
    hl = wAILayer2Encouragement;
    hl++; // TODO: set flags
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wMoveMissed = a;
    *wMoveDidntMiss = a;
    a = EFFECTIVE;
    *wDamageMultipliers = a;
    if (carry) CheckEnemyStatusConditions();
    if (!zero) goto enemyHasNoSpecialConditions;
    goto hl;
enemyHasNoSpecialConditions:
    hl = wEnemyBattleStatus1;
    zero = ((hl & (1 << CHARGING_UP)) == 0); // is the enemy charging up for attack?
    if (!zero) goto EnemyCanExecuteChargingMove; // if so, jump
    if (carry) GetCurrentMove();
}

void CheckIfEnemyNeedsToChargeUp() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CheckIfEnemyNeedsToChargeUp:
    a = *wEnemyMoveEffect;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    if (zero) goto JumpMoveEffect;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    if (zero) goto JumpMoveEffect;
    goto EnemyCanExecuteMove;
}

void EnemyCanExecuteChargingMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemyCanExecuteChargingMove:
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << CHARGING_UP); // no longer charging up for attack
    hl &= ~(1 << INVULNERABLE); // no longer invulnerable to typical attacks
    a = *wEnemyMoveNum;
    *wNameListIndex = a;
    a = BANK(MoveNames);
    *wPredefBank = a;
    a = MOVE_NAME;
    *wNameListType = a;
    if (carry) GetName();
    de = wNameBuffer;
    if (carry) CopyToStringBuffer();
}

void EnemyCanExecuteMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemyCanExecuteMove:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wMonIsDisobedient = a;
    if (carry) DisplayUsedMoveText();
    a = *wEnemyMoveEffect;
    hl = ResidualEffects1;
    de = 0x1;
    if (carry) IsInArray();
    if (carry) goto JumpMoveEffect;
    a = *wEnemyMoveEffect;
    hl = SpecialEffectsCont;
    de = 0x1;
    if (carry) IsInArray();
    if (carry) c();
}

void EnemyCalcMoveDamage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemyCalcMoveDamage:
    if (carry) SwapPlayerAndEnemyLevels();
    a = *wEnemyMoveEffect;
    hl = SetDamageEffects;
    de = 0x1;
    if (carry) IsInArray();
    if (carry) goto EnemyMoveHitTest;
    if (carry) CriticalHitTest();
    if (carry) HandleCounterMove();
    if (zero) goto HandleIfEnemyMoveMissed;
    if (carry) SwapPlayerAndEnemyLevels();
    if (carry) GetDamageVarsForEnemyAttack();
    if (carry) SwapPlayerAndEnemyLevels();
    if (carry) CalculateDamage();
    if (zero) goto EnemyCheckIfFlyOrChargeEffect;
    if (carry) AdjustDamageForMoveType();
    if (carry) RandomizeDamage();
}

void EnemyMoveHitTest() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemyMoveHitTest:
    if (carry) MoveHitTest();
}

void HandleIfEnemyMoveMissed() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandleIfEnemyMoveMissed:
    a = *wMoveMissed;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto moveDidNotMiss;
    a = *wEnemyMoveEffect;
    zero = (a == EXPLODE_EFFECT); carry = (a < EXPLODE_EFFECT); // Compare
    if (zero) goto HandleExplosionMiss;
    goto EnemyCheckIfFlyOrChargeEffect;
moveDidNotMiss:
    if (carry) SwapPlayerAndEnemyLevels();
}

void GetEnemyAnimationType() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

GetEnemyAnimationType:
    a = *wEnemyMoveEffect;
    a &= a; zero = (a == 0); // TODO: set other flags
    a = ANIMATIONTYPE_SHAKE_SCREEN_VERTICALLY;
    if (zero) goto PlayEnemyMoveAnimation;
    a = ANIMATIONTYPE_SHAKE_SCREEN_HORIZONTALLY_HEAVY;
    goto PlayEnemyMoveAnimation;
}

void HandleExplosionMiss() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandleExplosionMiss:
    if (carry) SwapPlayerAndEnemyLevels();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
}

void PlayEnemyMoveAnimation() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PlayEnemyMoveAnimation:
    /* PUSH af - TODO: implement stack */
    a = *wEnemyBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0); // does mon have a substitute?
    hl = HideSubstituteShowMonAnim;
    b = BANK(HideSubstituteShowMonAnim);
    if (carry) nz();
    /* POP af - TODO: implement stack */
    *wAnimationType = a;
    a = *wEnemyMoveNum;
    if (carry) PlayMoveAnimation();
    if (carry) HandleExplodingAnimation();
    if (carry) DrawEnemyHUDAndHPBar();
    a = *wEnemyBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0); // does mon have a substitute?
    hl = ReshowSubstituteAnim;
    b = BANK(ReshowSubstituteAnim);
    if (carry) nz(); // slide the substitute's sprite out
    goto EnemyCheckIfMirrorMoveEffect;
}

void EnemyCheckIfFlyOrChargeEffect() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemyCheckIfFlyOrChargeEffect:
    if (carry) SwapPlayerAndEnemyLevels();
    c = 30;
    if (carry) DelayFrames();
    a = *wEnemyMoveEffect;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    if (zero) goto playAnim;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    if (zero) goto playAnim;
    goto EnemyCheckIfMirrorMoveEffect;
playAnim:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = STATUS_AFFECTED_ANIM;
    if (carry) PlayMoveAnimation();
}

uint16_t EnemyCheckIfMirrorMoveEffect() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

EnemyCheckIfMirrorMoveEffect:
    a = *wEnemyMoveEffect;
    zero = (a == MIRROR_MOVE_EFFECT); carry = (a < MIRROR_MOVE_EFFECT); // Compare
    if (!zero) goto notMirrorMoveEffect;
    if (carry) MirrorMoveCopyMove();
    if (zero) goto ExecuteEnemyMoveDone;
    goto CheckIfEnemyNeedsToChargeUp;
notMirrorMoveEffect:
    zero = (a == METRONOME_EFFECT); carry = (a < METRONOME_EFFECT); // Compare
    if (!zero) goto notMetronomeEffect;
    if (carry) MetronomePickMove();
    goto CheckIfEnemyNeedsToChargeUp;
notMetronomeEffect:
    a = *wEnemyMoveEffect;
    hl = ResidualEffects2;
    de = 0x1;
    if (carry) IsInArray();
    if (carry) goto JumpMoveEffect;
    a = *wMoveMissed;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto moveDidNotMiss;
    if (carry) PrintMoveFailureText();
    a = *wEnemyMoveEffect;
    zero = (a == EXPLODE_EFFECT); carry = (a < EXPLODE_EFFECT); // Compare
    if (zero) goto handleExplosionMiss;
    goto ExecuteEnemyMoveDone;
moveDidNotMiss:
    if (carry) ApplyAttackToPlayerPokemon();
    if (carry) PrintCriticalOHKOText();
    callfar(DisplayEffectiveness);
    a = 1;
    *wMoveDidntMiss = a;
handleExplosionMiss:
    a = *wEnemyMoveEffect;
    hl = AlwaysHappenSideEffects;
    de = 0x1;
    if (carry) IsInArray();
    if (carry) c();
    hl = wBattleMonHP;
    a = hli;
    b = hl;
    a |= b; zero = (a == 0); // TODO: set other flags
    return;
    if (carry) HandleBuildingRage();
    hl = wEnemyBattleStatus1;
    zero = ((hl & (1 << ATTACKING_MULTIPLE_TIMES)) == 0); // is mon hitting multiple times? (example: double kick)
    if (zero) goto notMultiHitMove;
    /* PUSH hl - TODO: implement stack */
    hl = wEnemyNumAttacksLeft;
    hl--; // TODO: set flags
    /* POP hl - TODO: implement stack */
    if (!zero) goto GetEnemyAnimationType;
    hl &= ~(1 << ATTACKING_MULTIPLE_TIMES); // mon is no longer hitting multiple times
    hl = HitXTimesText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wEnemyNumHits = a;
notMultiHitMove:
    a = *wEnemyMoveEffect;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto ExecuteEnemyMoveDone;
    hl = SpecialEffects;
    de = 0x1;
    if (carry) IsInArray();
    if (carry) nc();
    goto ExecuteEnemyMoveDone;
}

void HitXTimesText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HitXTimesText:
    text_far(_HitXTimesText);
    text_end();
}

void ExecuteEnemyMoveDone() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ExecuteEnemyMoveDone:
    b = 0x1;
    return;
    // checks for various status conditions affecting the enemy mon
    // stores whether the mon cannot use a move this turn in Z flag
}

uint16_t CheckEnemyStatusConditions() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CheckEnemyStatusConditions:
    hl = wEnemyMonStatus;
    a = hl;
    a &= SLP_MASK; zero = (a == 0); // TODO: set other flags
    if (zero) goto checkIfFrozen;
    a--; // TODO: set flags // decrement number of turns left
    *wEnemyMonStatus = a;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto wokeUp; // if the number of turns hit 0, wake up
    hl = FastAsleepText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = SLP_ANIM;
    if (carry) PlayMoveAnimation();
    goto sleepDone;
wokeUp:
    hl = WokeUpText;
    if (carry) PrintText();
sleepDone:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wEnemyUsedMove = a;
    hl = ExecuteEnemyMoveDone; // enemy can't move this turn
    goto enemyReturnToHL;
checkIfFrozen:
    zero = ((hl & (1 << FRZ)) == 0);
    if (zero) goto checkIfTrapped;
    hl = IsFrozenText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wEnemyUsedMove = a;
    hl = ExecuteEnemyMoveDone; // enemy can't move this turn
    goto enemyReturnToHL;
checkIfTrapped:
    a = *wPlayerBattleStatus1;
    zero = ((a & (1 << USING_TRAPPING_MOVE)) == 0); // is the player using a multi-turn attack like warp
    if (zero) goto checkIfFlinched;
    hl = CantMoveText;
    if (carry) PrintText();
    hl = ExecuteEnemyMoveDone; // enemy can't move this turn
    goto enemyReturnToHL;
checkIfFlinched:
    hl = wEnemyBattleStatus1;
    zero = ((hl & (1 << FLINCHED)) == 0); // check if enemy mon flinched
    if (zero) goto checkIfMustRecharge;
    hl &= ~(1 << FLINCHED);
    hl = FlinchedText;
    if (carry) PrintText();
    hl = ExecuteEnemyMoveDone; // enemy can't move this turn
    goto enemyReturnToHL;
checkIfMustRecharge:
    hl = wEnemyBattleStatus2;
    zero = ((hl & (1 << NEEDS_TO_RECHARGE)) == 0); // check if enemy mon has to recharge after using a move
    if (zero) goto checkIfAnyMoveDisabled;
    hl &= ~(1 << NEEDS_TO_RECHARGE);
    hl = MustRechargeText;
    if (carry) PrintText();
    hl = ExecuteEnemyMoveDone; // enemy can't move this turn
    goto enemyReturnToHL;
checkIfAnyMoveDisabled:
    hl = wEnemyDisabledMove;
    a = hl;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto checkIfConfused;
    a--; // TODO: set flags // decrement disable counter
    hl = a;
    a &= 0xf; zero = (a == 0); // TODO: set other flags // did disable counter hit 0?
    if (!zero) goto checkIfConfused;
    hl = a;
    *wEnemyDisabledMoveNumber = a;
    hl = DisabledNoMoreText;
    if (carry) PrintText();
checkIfConfused:
    a = *wEnemyBattleStatus1;
    a = (uint8_t)(a + a); // TODO: set flags // check if enemy mon is confused
    if (!carry) goto checkIfTriedToUseDisabledMove;
    hl = wEnemyConfusedCounter;
    hl--; // TODO: set flags
    if (!zero) goto isConfused;
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << CONFUSED); // if confused counter hit 0, reset confusion status
    hl = ConfusedNoMoreText;
    if (carry) PrintText();
    goto checkIfTriedToUseDisabledMove;
isConfused:
    hl = IsConfusedText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = CONF_ANIM;
    if (carry) PlayMoveAnimation();
    if (carry) BattleRandom();
    zero = (a == 0x80); carry = (a < 0x80); // Compare
    if (carry) goto checkIfTriedToUseDisabledMove;
    hl = wEnemyBattleStatus1;
    a = hl;
    a &= 1 << CONFUSED; zero = (a == 0); // TODO: set other flags // if mon hurts itself, clear every other status from wEnemyBattleStatus1
    hl = a;
    hl = HurtItselfText;
    if (carry) PrintText();
    hl = wBattleMonDefense;
    a = hli;
    /* PUSH af - TODO: implement stack */
    a = hld;
    /* PUSH af - TODO: implement stack */
    a = *wEnemyMonDefense;
    hli = a;
    a = *wEnemyMonDefense + 1;
    hl = a;
    hl = wEnemyMoveEffect;
    /* PUSH hl - TODO: implement stack */
    a = hl;
    /* PUSH af - TODO: implement stack */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    *wCriticalHitOrOHKO = a;
    a = 40;
    hli = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = a;
    if (carry) GetDamageVarsForEnemyAttack();
    if (carry) CalculateDamage();
    /* POP af - TODO: implement stack */
    /* POP hl - TODO: implement stack */
    hl = a;
    hl = wBattleMonDefense + 1;
    /* POP af - TODO: implement stack */
    hld = a;
    /* POP af - TODO: implement stack */
    hl = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    hWhoseTurn = a; // LDH (High RAM)
    a = POUND;
    if (carry) PlayMoveAnimation();
    a = 0x1;
    hWhoseTurn = a; // LDH (High RAM)
    if (carry) ApplyDamageToEnemyPokemon();
    goto monHurtItselfOrFullyParalysed;
checkIfTriedToUseDisabledMove:
    // prevents a disabled move that was selected before being disabled from being used
    a = *wEnemyDisabledMoveNumber;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto checkIfParalysed;
    hl = wEnemySelectedMove;
    zero = (a == hl); carry = (a < hl); // Compare
    if (!zero) goto checkIfParalysed;
    if (carry) PrintMoveIsDisabledText();
    hl = ExecuteEnemyMoveDone; // if a disabled move was somehow selected, player can't move this turn
    goto enemyReturnToHL;
checkIfParalysed:
    hl = wEnemyMonStatus;
    zero = ((hl & (1 << PAR)) == 0);
    if (zero) goto checkIfUsingBide;
    if (carry) BattleRandom();
    zero = (a == 25 percent); carry = (a < 25 percent); // Compare // chance to be fully paralysed
    if (!carry) goto checkIfUsingBide;
    hl = FullyParalyzedText;
    if (carry) PrintText();
monHurtItselfOrFullyParalysed:
    hl = wEnemyBattleStatus1;
    a = hl;
    // ; clear bide, thrashing about, charging up, and multi-turn moves such as warp
    a &= ~((1 << STORING_ENERGY) | (1 << THRASHING_ABOUT) | (1 << CHARGING_UP) | (1 << USING_TRAPPING_MOVE)); zero = (a == 0); // TODO: set other flags
    hl = a;
    a = *wEnemyMoveEffect;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    if (zero) goto flyOrChargeEffect;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    if (zero) goto flyOrChargeEffect;
    goto notFlyOrChargeEffect;
flyOrChargeEffect:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wAnimationType = a;
    a = STATUS_AFFECTED_ANIM;
    if (carry) PlayMoveAnimation();
notFlyOrChargeEffect:
    hl = ExecuteEnemyMoveDone;
    goto enemyReturnToHL; // if using a two-turn move, enemy needs to recharge the first turn
checkIfUsingBide:
    hl = wEnemyBattleStatus1;
    zero = ((hl & (1 << STORING_ENERGY)) == 0); // is mon using bide?
    if (zero) goto checkIfThrashingAbout;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wEnemyMoveNum = a;
    hl = wDamage;
    a = hli;
    b = a;
    c = hl;
    hl = wEnemyBideAccumulatedDamage + 1;
    a = hl;
    a = (uint8_t)(a + c); // TODO: set flags // accumulate damage taken
    hld = a;
    a = hl;
    a = (uint8_t)(a + b + (carry ? 1 : 0)); // TODO: set flags
    hl = a;
    hl = wEnemyNumAttacksLeft;
    hl--; // TODO: set flags // did Bide counter hit 0?
    if (zero) goto unleashEnergy;
    hl = ExecuteEnemyMoveDone;
    goto enemyReturnToHL; // unless mon unleashes energy, can't move this turn
unleashEnergy:
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << STORING_ENERGY); // not using bide any more
    hl = UnleashedEnergyText;
    if (carry) PrintText();
    a = 0x1;
    *wEnemyMovePower = a;
    hl = wEnemyBideAccumulatedDamage + 1;
    a = hld;
    a = (uint8_t)(a + a); // TODO: set flags
    b = a;
    *wDamage + 1 = a;
    a = hl;
    { uint8_t temp = a; a = (uint8_t)((a << 1) | (carry ? 1 : 0)); carry = (temp & 0x80) != 0; } // RL // double the damage
    *wDamage = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto next;
    a = 0x1;
    *wMoveMissed = a;
next:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    hl = a;
    a = BIDE;
    *wEnemyMoveNum = a;
    if (carry) SwapPlayerAndEnemyLevels();
    hl = HandleIfEnemyMoveMissed; // skip damage calculation, DecrementPP and MoveHitTest
    goto enemyReturnToHL;
checkIfThrashingAbout:
    zero = ((hl & (1 << THRASHING_ABOUT)) == 0); // is mon using thrash or petal dance?
    if (zero) goto checkIfUsingMultiturnMove;
    a = THRASH;
    *wEnemyMoveNum = a;
    hl = ThrashingAboutText;
    if (carry) PrintText();
    hl = wEnemyNumAttacksLeft;
    hl--; // TODO: set flags // did Thrashing About counter hit 0?
    hl = EnemyCalcMoveDamage; // skip DecrementPP
    if (!zero) goto enemyReturnToHL;
    /* PUSH hl - TODO: implement stack */
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << THRASHING_ABOUT); // mon is no longer using thrash or petal dance
    hl |= (1 << CONFUSED); // mon is now confused
    if (carry) BattleRandom();
    a &= 0x3; zero = (a == 0); // TODO: set other flags
    a++; // TODO: set flags
    a++; // TODO: set flags // confused for 2-5 turns
    *wEnemyConfusedCounter = a;
    /* POP hl - TODO: implement stack */ // skip DecrementPP
    goto enemyReturnToHL;
checkIfUsingMultiturnMove:
    zero = ((hl & (1 << USING_TRAPPING_MOVE)) == 0); // is mon using multi-turn move?
    if (zero) goto checkIfUsingRage;
    hl = AttackContinuesText;
    if (carry) PrintText();
    hl = wEnemyNumAttacksLeft;
    hl--; // TODO: set flags
    hl = GetEnemyAnimationType; // skip damage calculation (deal damage equal to last hit),
    // ; DecrementPP and MoveHitTest
    if (!zero) goto enemyReturnToHL; // redundant leftover code, the case wEnemyNumAttacksLeft == 0
    // ; is handled within CheckNumAttacksLeft
    goto enemyReturnToHL;
checkIfUsingRage:
    a = *wEnemyBattleStatus2;
    zero = ((a & (1 << USING_RAGE)) == 0); // is mon using rage?
    if (zero) goto checkEnemyStatusConditionsDone; // if we made it this far, mon can move normally this turn
    a = RAGE;
    *wNamedObjectIndex = a;
    if (carry) GetMoveName();
    if (carry) CopyToStringBuffer();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wEnemyMoveEffect = a;
    hl = EnemyCanExecuteMove;
    goto enemyReturnToHL;
enemyReturnToHL:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // set Z flag
    return;
checkEnemyStatusConditionsDone:
    a = 0x1;
    a &= a; zero = (a == 0); // TODO: set other flags // clear Z flag
    return;
}

void GetCurrentMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

GetCurrentMove:
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto player;
    de = wEnemyMoveNum;
    a = *wEnemySelectedMove;
    goto selected;
player:
    de = wPlayerMoveNum;
    // ; Apply InitBattleVariables to TestBattle.
    a = *wStatusFlags7;
    zero = ((a & (1 << BIT_TEST_BATTLE)) == 0);
    a = *wTestBattlePlayerSelectedMove;
    if (!zero) goto selected;
    a = *wPlayerSelectedMove;
selected:
    *wNameListIndex = a;
    a--; // TODO: set flags
    hl = Moves;
    bc = MOVE_LENGTH;
    if (carry) AddNTimes();
    a = BANK(Moves);
    if (carry) FarCopyData();
    a = BANK(MoveNames);
    *wPredefBank = a;
    a = MOVE_NAME;
    *wNameListType = a;
    if (carry) GetName();
    de = wNameBuffer;
    goto CopyToStringBuffer;
}

uint16_t LoadEnemyMonData() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

LoadEnemyMonData:
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (zero) goto LoadEnemyMonFromParty;
    a = *wEnemyMonSpecies2;
    *wEnemyMonSpecies = a;
    *wCurSpecies = a;
    if (carry) GetMonHeader();
    a = *wEnemyBattleStatus3;
    zero = ((a & (1 << TRANSFORMED)) == 0); // is enemy mon transformed?
    hl = wTransformedEnemyMonOriginalDVs; // original DVs before transforming
    a = hli;
    b = hl;
    if (!zero) goto storeDVs;
    a = *wIsInBattle;
    zero = (a == 0x2); carry = (a < 0x2); // Compare // is it a trainer battle?
    // fixed DVs for trainer mon
    a = ATKDEFDV_TRAINER;
    b = SPDSPCDV_TRAINER;
    if (zero) goto storeDVs;
    // random DVs for wild mon
    if (carry) BattleRandom();
    b = a;
    if (carry) BattleRandom();
storeDVs:
    hl = wEnemyMonDVs;
    hli = a;
    hl = b;
    de = wEnemyMonLevel;
    a = *wCurEnemyLevel;
    de = a;
    de++; // TODO: set flags
    b = 0x0;
    hl = wEnemyMonHP;
    /* PUSH hl - TODO: implement stack */
    if (carry) CalcStats();
    /* POP hl - TODO: implement stack */
    a = *wIsInBattle;
    zero = (a == 0x2); carry = (a < 0x2); // Compare // is it a trainer battle?
    if (zero) goto copyHPAndStatusFromPartyData;
    a = *wEnemyBattleStatus3;
    zero = ((a & (1 << TRANSFORMED)) == 0); // is enemy mon transformed?
    if (!zero) goto copyTypes; // if transformed, jump
    // if it's a wild mon and not transformed, init the current HP to max HP and the status to 0
    a = *wEnemyMonMaxHP;
    hli = a;
    a = *wEnemyMonMaxHP+1;
    hli = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl++; // TODO: set flags
    hl = a; // init status to 0
    goto copyTypes;
    // if it's a trainer mon, copy the HP and status from the enemy party data
copyHPAndStatusFromPartyData:
    hl = wEnemyMon1HP;
    a = *wWhichPokemon;
    bc = wEnemyMon2 - wEnemyMon1;
    if (carry) AddNTimes();
    a = hli;
    *wEnemyMonHP = a;
    a = hli;
    *wEnemyMonHP + 1 = a;
    a = *wWhichPokemon;
    *wEnemyMonPartyPos = a;
    hl++; // TODO: set flags
    a = hl;
    *wEnemyMonStatus = a;
    goto copyTypes;
copyTypes:
    hl = wMonHTypes;
    de = wEnemyMonType;
    a = hli; // copy type 1
    de = a;
    de++; // TODO: set flags
    a = hli; // copy type 2
    de = a;
    de++; // TODO: set flags
    a = hli; // copy catch rate
    de = a;
    de++; // TODO: set flags
    a = *wIsInBattle;
    zero = (a == 0x2); carry = (a < 0x2); // Compare // is it a trainer battle?
    if (!zero) goto copyStandardMoves;
    // if it's a trainer battle, copy moves from enemy party data
    hl = wEnemyMon1Moves;
    a = *wWhichPokemon;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    bc = NUM_MOVES;
    if (carry) CopyData();
    goto loadMovePPs;
copyStandardMoves:
    // for a wild mon, first copy default moves from the mon header
    hl = wMonHMoves;
    a = hli;
    de = a;
    de++; // TODO: set flags
    a = hli;
    de = a;
    de++; // TODO: set flags
    a = hli;
    de = a;
    de++; // TODO: set flags
    a = hl;
    de = a;
    de--; // TODO: set flags
    de--; // TODO: set flags
    de--; // TODO: set flags
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wLearningMovesFromDayCare = a;
    predef(WriteMonMoves); // get moves based on current level
loadMovePPs:
    hl = wEnemyMonMoves;
    de = wEnemyMonPP - 1;
    predef(LoadMovePPs);
    hl = wMonHBaseStats;
    de = wEnemyMonBaseStats;
    b = NUM_STATS;
copyBaseStatsLoop:
    a = hli;
    de = a;
    de++; // TODO: set flags
    b--; // TODO: set flags
    if (!zero) goto copyBaseStatsLoop;
    hl = wMonHCatchRate;
    a = hli;
    de = a;
    de++; // TODO: set flags
    a = hl; // base exp
    de = a;
    a = *wEnemyMonSpecies2;
    *wNamedObjectIndex = a;
    if (carry) GetMonName();
    hl = wNameBuffer;
    de = wEnemyMonNick;
    bc = NAME_LENGTH;
    if (carry) CopyData();
    a = *wEnemyMonSpecies2;
    *wPokedexNum = a;
    predef(IndexToPokedex);
    a = *wPokedexNum;
    a--; // TODO: set flags
    c = a;
    b = FLAG_SET;
    hl = wPokedexSeen;
    predef(FlagActionPredef); // mark this mon as seen in the pokedex
    hl = wEnemyMonLevel;
    de = wEnemyMonUnmodifiedLevel;
    bc = 1 + NUM_STATS * 2;
    if (carry) CopyData();
    a = 0x7; // default stat mod
    b = NUM_STAT_MODS; // number of stat mods
    hl = wEnemyMonStatMods;
statModLoop:
    hli = a;
    b--; // TODO: set flags
    if (!zero) goto statModLoop;
    return;
    // calls BattleTransition to show the battle transition animation and initializes some battle variables
}

uint16_t DoBattleTransitionAndInitBattleVariables() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DoBattleTransitionAndInitBattleVariables:
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto next;
    // link battle
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wMenuJoypadPollCount = a;
    callfar(DisplayLinkBattleVersusTextBox);
    a = 0x1;
    *wUpdateSpritesEnabled = a;
    if (carry) ClearScreen();
next:
    if (carry) DelayFrame();
    predef(BattleTransition);
    callfar(LoadHudAndHpBarAndStatusTilePatterns);
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    a = 0xff;
    *wUpdateSpritesEnabled = a;
    if (carry) ClearSprites();
    if (carry) ClearScreen();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    hWY = a; // LDH (High RAM)
    rWY = a; // LDH (High RAM)
    hTileAnimations = a; // LDH (High RAM)
    hl = wPlayerStatsToDouble;
    hli = a;
    hli = a;
    hli = a;
    hli = a;
    hl = a;
    *wPlayerDisabledMove = a;
    return;
    // swaps the level values of the BattleMon and EnemyMon structs
}

uint8_t SwapPlayerAndEnemyLevels() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

SwapPlayerAndEnemyLevels:
    /* PUSH bc - TODO: implement stack */
    a = *wBattleMonLevel;
    b = a;
    a = *wEnemyMonLevel;
    *wBattleMonLevel = a;
    a = b;
    *wEnemyMonLevel = a;
    /* POP bc - TODO: implement stack */
    return;
    // loads either red back pic or old man back pic
    // also writes OAM data and loads tile patterns for the Red or Old Man back sprite's head
    // (for use when scrolling the player sprite and enemy's silhouettes on screen)
}

void LoadPlayerBackPic() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

LoadPlayerBackPic:
    a = *wBattleType;
    a--; // TODO: set flags // is it the old man tutorial?
    de = RedPicBack;
    if (!zero) goto next;
    de = OldManPicBack;
next:
    a = BANK(RedPicBack);
    /* assert */
    if (carry) UncompressSpriteFromDE();
    predef(ScaleSpriteByTwo);
    hl = wShadowOAM;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hOAMTile = a; // LDH (High RAM) // initial tile number
    b = 0x7; // 7 columns
    e = 0xa0; // X for the left-most column
loop:
    c = 0x3; // 3 tiles per column
    d = 0x38; // Y for the top of each column
innerLoop:
    hl = d; // OAM Y
    hl++; // TODO: set flags
    hl = e; // OAM X
    a = TILE_HEIGHT;
    a = (uint8_t)(a + d); // TODO: set flags // increase Y by height of tile
    d = a;
    hl++; // TODO: set flags
    a = hOAMTile; // LDH (High RAM)
    hli = a; // OAM tile number
    a++; // TODO: set flags // increment tile number
    hOAMTile = a; // LDH (High RAM)
    hl++; // TODO: set flags
    c--; // TODO: set flags
    if (!zero) goto innerLoop;
    a = hOAMTile; // LDH (High RAM)
    a = (uint8_t)(a + 0x4); // TODO: set flags // increase tile number by 4
    hOAMTile = a; // LDH (High RAM)
    a = TILE_WIDTH;
    a = (uint8_t)(a + e); // TODO: set flags // increase X by width of tile
    e = a;
    b--; // TODO: set flags
    if (!zero) goto loop;
    de = vBackPic;
    if (carry) InterlaceMergeSpriteBuffers();
    a = RAMG_SRAM_ENABLE;
    rRAMG = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    rRAMB = a;
    hl = vSprites;
    de = sSpriteBuffer1;
    a = hLoadedROMBank; // LDH (High RAM)
    b = a;
    c = PIC_SIZE;
    if (carry) CopyVideoData();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    rRAMG = a;
    a = 0x31;
    hStartTileID = a; // LDH (High RAM)
    hl = hlcoord(1, 5);
    /* predef_jump */
    // does nothing since no stats are ever selected (barring glitches)
}

void DoubleOrHalveSelectedStats() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DoubleOrHalveSelectedStats:
    callfar(DoubleSelectedStats);
    jpfar(HalveSelectedStats);
}

void ScrollTrainerPicAfterBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ScrollTrainerPicAfterBattle:
    jpfar(_ScrollTrainerPicAfterBattle);
}

void ApplyBurnAndParalysisPenaltiesToPlayer() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ApplyBurnAndParalysisPenaltiesToPlayer:
    a = 0x1;
    goto ApplyBurnAndParalysisPenalties;
}

void ApplyBurnAndParalysisPenaltiesToEnemy() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ApplyBurnAndParalysisPenaltiesToEnemy:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
}

void ApplyBurnAndParalysisPenalties() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ApplyBurnAndParalysisPenalties:
    hWhoseTurn = a; // LDH (High RAM)
    if (carry) QuarterSpeedDueToParalysis();
    goto HalveAttackDueToBurn;
}

uint16_t QuarterSpeedDueToParalysis() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

QuarterSpeedDueToParalysis:
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto playerTurn;
    // enemy's turn, quarter the player's speed
    a = *wBattleMonStatus;
    a &= 1 << PAR; zero = (a == 0); // TODO: set other flags
    return; // return if player not paralysed
    hl = wBattleMonSpeed + 1;
    a = hld;
    b = a;
    a = hl;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    { uint8_t temp = b; b = (uint8_t)((b >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    { uint8_t temp = b; b = (uint8_t)((b >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    hli = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto storePlayerSpeed;
    b = 1; // give the player a minimum of at least one speed point
storePlayerSpeed:
    hl = b;
    return;
playerTurn:
    a = *wEnemyMonStatus;
    a &= 1 << PAR; zero = (a == 0); // TODO: set other flags
    return; // return if enemy not paralysed
    hl = wEnemyMonSpeed + 1;
    a = hld;
    b = a;
    a = hl;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    { uint8_t temp = b; b = (uint8_t)((b >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    { uint8_t temp = b; b = (uint8_t)((b >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    hli = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto storeEnemySpeed;
    b = 1; // give the enemy a minimum of at least one speed point
storeEnemySpeed:
    hl = b;
    return;
}

uint16_t HalveAttackDueToBurn() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HalveAttackDueToBurn:
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto playerTurn;
    // enemy's turn, halve the player's attack
    a = *wBattleMonStatus;
    a &= 1 << BRN; zero = (a == 0); // TODO: set other flags
    return; // return if player not burnt
    hl = wBattleMonAttack + 1;
    a = hld;
    b = a;
    a = hl;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    { uint8_t temp = b; b = (uint8_t)((b >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    hli = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto storePlayerAttack;
    b = 1; // give the player a minimum of at least one attack point
storePlayerAttack:
    hl = b;
    return;
playerTurn:
    a = *wEnemyMonStatus;
    a &= 1 << BRN; zero = (a == 0); // TODO: set other flags
    return; // return if enemy not burnt
    hl = wEnemyMonAttack + 1;
    a = hld;
    b = a;
    a = hl;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    { uint8_t temp = b; b = (uint8_t)((b >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    hli = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto storeEnemyAttack;
    b = 1; // give the enemy a minimum of at least one attack point
storeEnemyAttack:
    hl = b;
    return;
}

uint8_t CalculateModifiedStats() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CalculateModifiedStats:
    c = 0;
loop:
    if (carry) CalculateModifiedStat();
    c++; // TODO: set flags
    a = c;
    zero = (a == NUM_STATS - 1); carry = (a < NUM_STATS - 1); // Compare
    if (!zero) goto loop;
    return;
    // calculate modified stat for stat c (0 = attack, 1 = defense, 2 = speed, 3 = special)
}

uint16_t CalculateModifiedStat() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CalculateModifiedStat:
    /* PUSH bc - TODO: implement stack */
    /* PUSH bc - TODO: implement stack */
    a = *wCalculateWhoseStats;
    a &= a; zero = (a == 0); // TODO: set other flags
    a = c;
    hl = wBattleMonAttack;
    de = wPlayerMonUnmodifiedAttack;
    bc = wPlayerMonStatMods;
    if (zero) goto next;
    hl = wEnemyMonAttack;
    de = wEnemyMonUnmodifiedAttack;
    bc = wEnemyMonStatMods;
next:
    a = (uint8_t)(a + c); // TODO: set flags
    c = a;
    if (!carry) goto noCarry1;
    b++; // TODO: set flags
noCarry1:
    a = bc;
    /* POP bc - TODO: implement stack */
    b = a;
    /* PUSH bc - TODO: implement stack */
    carry = (c & 0x80) != 0; c = (uint8_t)(c << 1); // SLA
    b = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = c;
    a = (uint8_t)(a + e); // TODO: set flags
    e = a;
    if (!carry) goto noCarry2;
    d++; // TODO: set flags
noCarry2:
    /* POP bc - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
    hl = StatModifierRatios;
    b--; // TODO: set flags
    carry = (b & 0x80) != 0; b = (uint8_t)(b << 1); // SLA
    c = b;
    b = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hMultiplicand = a; // LDH (High RAM)
    a = de;
    hMultiplicand + 1 = a; // LDH (High RAM)
    de++; // TODO: set flags
    a = de;
    hMultiplicand + 2 = a; // LDH (High RAM)
    a = hli;
    hMultiplier = a; // LDH (High RAM)
    if (carry) Multiply();
    a = hl;
    hDivisor = a; // LDH (High RAM)
    b = 0x4;
    if (carry) Divide();
    /* POP hl - TODO: implement stack */
    a = hDividend + 3; // LDH (High RAM)
    a = (uint8_t)(a - LOW(MAX_STAT_VALUE)); // TODO: set flags
    a = hDividend + 2; // LDH (High RAM)
    a = (uint8_t)(a - HIGH(MAX_STAT_VALUE) - (carry ? 1 : 0)); // TODO: set flags
    if (carry) goto storeNewStatValue;
    // cap the stat at MAX_STAT_VALUE (999)
    a = HIGH(MAX_STAT_VALUE);
    hDividend + 2 = a; // LDH (High RAM)
    a = LOW(MAX_STAT_VALUE);
    hDividend + 3 = a; // LDH (High RAM)
storeNewStatValue:
    a = hDividend + 2; // LDH (High RAM)
    hli = a;
    b = a;
    a = hDividend + 3; // LDH (High RAM)
    hl = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    if (!zero) goto done;
    hl++; // TODO: set flags // if the stat is 0, bump it up to 1
done:
    /* POP bc - TODO: implement stack */
    return;
}

uint16_t ApplyBadgeStatBoosts() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ApplyBadgeStatBoosts:
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    return; // return if link battle
    a = *wObtainedBadges;
    b = a;
    hl = wBattleMonAttack;
    c = 0x4;
    // the boost is applied for badges whose bit position is even
    // the order of boosts matches the order they are laid out in RAM
    // Boulder (bit 0) - attack
    // Thunder (bit 2) - defense
    // Soul (bit 4) - speed
    // Volcano (bit 6) - special
loop:
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    if (carry) c();
    hl++; // TODO: set flags
    hl++; // TODO: set flags
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    c--; // TODO: set flags
    if (!zero) goto loop;
    return;
    // multiply stat at hl by 1.125
    // cap stat at MAX_STAT_VALUE
applyBoostToStat:
    a = hli;
    d = a;
    e = hl;
    carry = (d & 1) != 0; d = (uint8_t)(d >> 1); // SRL
    { uint8_t temp = e; e = (uint8_t)((e >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (d & 1) != 0; d = (uint8_t)(d >> 1); // SRL
    { uint8_t temp = e; e = (uint8_t)((e >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (d & 1) != 0; d = (uint8_t)(d >> 1); // SRL
    { uint8_t temp = e; e = (uint8_t)((e >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    a = hl;
    a = (uint8_t)(a + e); // TODO: set flags
    hld = a;
    a = hl;
    a = (uint8_t)(a + d + (carry ? 1 : 0)); // TODO: set flags
    hli = a;
    a = hld;
    a = (uint8_t)(a - LOW(MAX_STAT_VALUE)); // TODO: set flags
    a = hl;
    a = (uint8_t)(a - HIGH(MAX_STAT_VALUE) - (carry ? 1 : 0)); // TODO: set flags
    return;
    a = HIGH(MAX_STAT_VALUE);
    hli = a;
    a = LOW(MAX_STAT_VALUE);
    hld = a;
    return;
}

void LoadHudAndHpBarAndStatusTilePatterns() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

LoadHudAndHpBarAndStatusTilePatterns:
    if (carry) LoadHpBarAndStatusTilePatterns();
}

void LoadHudTilePatterns() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

LoadHudTilePatterns:
    a = rLCDC; // LDH (High RAM)
    a = (uint8_t)(a + a); // TODO: set flags // is LCD disabled?
    if (carry) goto lcdEnabled;
    // LCD disabled
    hl = BattleHudTiles1;
    de = vChars2 tile $6d;
    bc = BattleHudTiles1End - BattleHudTiles1;
    a = BANK(BattleHudTiles1);
    if (carry) FarCopyDataDouble();
    hl = BattleHudTiles2;
    de = vChars2 tile $73;
    bc = BattleHudTiles3End - BattleHudTiles2;
    a = BANK(BattleHudTiles2);
    goto FarCopyDataDouble;
lcdEnabled:
    de = BattleHudTiles1;
    hl = vChars2 tile $6d;
    lb(bc, BANK(BattleHudTiles1), (BattleHudTiles1End - BattleHudTiles1) / TILE_1BPP_SIZE);
    if (carry) CopyVideoDataDouble();
    de = BattleHudTiles2;
    hl = vChars2 tile $73;
    lb(bc, BANK(BattleHudTiles2), (BattleHudTiles3End - BattleHudTiles2) / TILE_1BPP_SIZE);
    goto CopyVideoDataDouble;
}

void PrintEmptyString() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PrintEmptyString:
    hl = emptyString;
    goto PrintText;
emptyString:
    db("@");
}

uint16_t BattleRandom() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

BattleRandom:
    // Link battles use a shared PRNG.
    a = *wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    if (!zero) goto Random;
    /* PUSH hl - TODO: implement stack */
    /* PUSH bc - TODO: implement stack */
    a = *wLinkBattleRandomNumberListIndex;
    c = a;
    b = 0;
    hl = wLinkBattleRandomNumberList;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a++; // TODO: set flags
    *wLinkBattleRandomNumberListIndex = a;
    zero = (a == SERIAL_RNS_LENGTH - 1); carry = (a < SERIAL_RNS_LENGTH - 1); // Compare
    a = hl;
    /* POP bc - TODO: implement stack */
    /* POP hl - TODO: implement stack */
    /* vc_hook */
    /* vc_patch */
    /* if */
    return;
    /* else */
    return;
    /* endc */
    /* vc_patch_end */
    // if we picked the last seed, we need to recalculate the nine seeds
    /* PUSH hl - TODO: implement stack */
    /* PUSH bc - TODO: implement stack */
    /* PUSH af - TODO: implement stack */
    // point to seed 0 so we pick the first number the next time
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wLinkBattleRandomNumberListIndex = a;
    hl = wLinkBattleRandomNumberList;
    b = SERIAL_RNS_LENGTH - 1;
loop:
    a = hl;
    c = a;
    // multiply by 5
    a = (uint8_t)(a + a); // TODO: set flags
    a = (uint8_t)(a + a); // TODO: set flags
    a = (uint8_t)(a + c); // TODO: set flags
    // add 1
    a++; // TODO: set flags
    hli = a;
    b--; // TODO: set flags
    if (!zero) goto loop;
    /* POP af - TODO: implement stack */
    /* POP bc - TODO: implement stack */
    /* POP hl - TODO: implement stack */
    return;
}

uint16_t HandleExplodingAnimation() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

HandleExplodingAnimation:
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    hl = wEnemyMonType1;
    de = wEnemyBattleStatus1;
    a = *wPlayerMoveNum;
    if (zero) goto player;
    hl = wBattleMonType1;
    de = wEnemyBattleStatus1;
    a = *wEnemyMoveNum;
player:
    zero = (a == SELFDESTRUCT); carry = (a < SELFDESTRUCT); // Compare
    if (zero) goto isExplodingMove;
    zero = (a == EXPLOSION); carry = (a < EXPLOSION); // Compare
    return;
isExplodingMove:
    a = de;
    zero = ((a & (1 << INVULNERABLE)) == 0); // fly/dig
    return;
    a = hli;
    zero = (a == GHOST); carry = (a < GHOST); // Compare
    return;
    a = hl;
    zero = (a == GHOST); carry = (a < GHOST); // Compare
    return;
    a = *wMoveMissed;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    a = ANIMATIONTYPE_SHAKE_SCREEN_HORIZONTALLY_LIGHT;
    *wAnimationType = a;
    /* assert */
    // ; ld a, MEGA_PUNCH
    // fallthrough
}

void PlayMoveAnimation() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

PlayMoveAnimation:
    *wAnimationID = a;
    /* vc_hook_red */
    if (carry) Delay3();
    /* vc_hook_red */
    /* predef_jump */
}

void InitBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

InitBattle:
    a = *wCurOpponent;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto DetermineWildOpponent;
}

void InitOpponent() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

InitOpponent:
    a = *wCurOpponent;
    *wCurPartySpecies = a;
    *wEnemyMonSpecies2 = a;
    goto InitBattleCommon;
}

uint8_t DetermineWildOpponent() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

DetermineWildOpponent:
    a = *wStatusFlags6;
    zero = ((a & (1 << BIT_DEBUG_MODE)) == 0);
    if (zero) goto notDebugMode;
    a = hJoyHeld; // LDH (High RAM)
    zero = ((a & (1 << B_PAD_B)) == 0); // disable wild encounters
    return;
notDebugMode:
    a = *wNumberOfNoRandomBattleStepsLeft;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
    callfar(TryDoWildEncounter);
    return;
}

void InitBattleCommon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

InitBattleCommon:
    a = *wMapPalOffset;
    /* PUSH af - TODO: implement stack */
    hl = wLetterPrintingDelayFlags;
    a = hl;
    /* PUSH af - TODO: implement stack */
    hl &= ~(1 << BIT_TEXT_DELAY); // no delay
    callfar(InitBattleVariables);
    a = *wEnemyMonSpecies2;
    a = (uint8_t)(a - OPP_ID_OFFSET); // TODO: set flags
    if (carry) goto InitWildBattle;
    *wTrainerClass = a;
    if (carry) GetTrainerInformation();
    callfar(ReadTrainer);
    if (carry) DoBattleTransitionAndInitBattleVariables();
    if (carry) _LoadTrainerPic();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wEnemyMonSpecies2 = a;
    hStartTileID = a; // LDH (High RAM)
    a--; // TODO: set flags
    *wAICount = a;
    hl = hlcoord(12, 0);
    predef(CopyUncompressedPicToTilemap);
    a = 0xff;
    *wEnemyMonPartyPos = a;
    a = 0x2;
    *wIsInBattle = a;
    goto _InitBattleCommon;
}

void InitWildBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

InitWildBattle:
    a = 0x1;
    *wIsInBattle = a;
    if (carry) LoadEnemyMonData();
    if (carry) DoBattleTransitionAndInitBattleVariables();
    a = *wCurOpponent;
    zero = (a == RESTLESS_SOUL); carry = (a < RESTLESS_SOUL); // Compare
    if (zero) goto isGhost;
    if (carry) IsGhostBattle();
    if (!zero) goto isNoGhost;
isGhost:
    hl = wMonHSpriteDim;
    a = 0x66;
    hli = a; // write sprite dimensions
    bc = GhostPic;
    a = c;
    hli = a; // write front sprite pointer
    hl = b;
    hl = wEnemyMonNick; // set name to "GHOST"
    /* ld_hli_a_string */
    a = *wCurPartySpecies;
    /* PUSH af - TODO: implement stack */
    a = MON_GHOST;
    *wCurPartySpecies = a;
    de = vFrontPic;
    if (carry) LoadMonFrontSprite(); // load ghost sprite
    /* POP af - TODO: implement stack */
    *wCurPartySpecies = a;
    goto spriteLoaded;
isNoGhost:
    de = vFrontPic;
    if (carry) LoadMonFrontSprite(); // load mon sprite
spriteLoaded:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wTrainerClass = a;
    hStartTileID = a; // LDH (High RAM)
    hl = hlcoord(12, 0);
    predef(CopyUncompressedPicToTilemap);
    // common code that executes after init battle code specific to trainer or wild battles
}

uint16_t _InitBattleCommon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

_InitBattleCommon:
    b = SET_PAL_BATTLE_BLACK;
    if (carry) RunPaletteCommand();
    if (carry) SlidePlayerAndEnemySilhouettesOnScreen();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    hl = emptyString;
    if (carry) PrintText();
    if (carry) SaveScreenTilesToBuffer1();
    if (carry) ClearScreen();
    a = HIGH(vBGMap0);
    hAutoBGTransferDest + 1 = a; // LDH (High RAM)
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    if (carry) Delay3();
    a = HIGH(vBGMap1);
    hAutoBGTransferDest + 1 = a; // LDH (High RAM)
    if (carry) LoadScreenTilesFromBuffer1();
    hl = hlcoord(9, 7);
    lb(bc, 5, 10);
    if (carry) ClearScreenArea();
    hl = hlcoord(1, 0);
    lb(bc, 4, 10);
    if (carry) ClearScreenArea();
    if (carry) ClearSprites();
    a = *wIsInBattle;
    a--; // TODO: set flags // is it a wild battle?
    if (carry) z(); // draw enemy HUD and HP bar if it's a wild battle
    if (carry) StartBattle();
    callfar(EndOfBattle);
    /* POP af - TODO: implement stack */
    *wLetterPrintingDelayFlags = a;
    /* POP af - TODO: implement stack */
    *wMapPalOffset = a;
    a = *wSavedTileAnimations;
    hTileAnimations = a; // LDH (High RAM)
    /* scf */
    return;
emptyString:
    db("@");
}

void _LoadTrainerPic() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

_LoadTrainerPic:
    a = *wTrainerPicPointer;
    e = a;
    a = *wTrainerPicPointer + 1;
    d = a; // de contains pointer to trainer pic
    a = *wLinkState;
    a &= a; zero = (a == 0); // TODO: set other flags
    a = BANK("Trainer Pics");
    if (zero) goto loadSprite;
    a = BANK(RedPicFront);
loadSprite:
    if (carry) UncompressSpriteFromDE();
    de = vFrontPic;
    a = 0x77;
    c = a;
    goto LoadUncompressedSpriteData;
    // unreferenced
}

void ResetCryModifiers() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

ResetCryModifiers:
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wFrequencyModifier = a;
    *wTempoModifier = a;
    goto PlaySound;
    // animates the mon "growing" out of the pokeball
}

void AnimateSendingOutMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

AnimateSendingOutMon:
    a = *wPredefHL;
    h = a;
    a = *wPredefHL + 1;
    l = a;
    a = hStartTileID; // LDH (High RAM)
    hBaseTileID = a; // LDH (High RAM)
    b = 0x4c;
    a = *wIsInBattle;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (zero) goto notInBattle;
    a = (uint8_t)(a + b); // TODO: set flags
    hl = a;
    if (carry) Delay3();
    bc = -(SCREEN_WIDTH * 2 + 1);
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = 1;
    *wDownscaledMonSize = a;
    lb(bc, 3, 3);
    predef(CopyDownscaledMonTiles);
    c = 4;
    if (carry) DelayFrames();
    bc = -(SCREEN_WIDTH * 2 + 1);
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    *wDownscaledMonSize = a;
    lb(bc, 5, 5);
    predef(CopyDownscaledMonTiles);
    c = 5;
    if (carry) DelayFrames();
    bc = -(SCREEN_WIDTH * 2 + 1);
    goto next;
notInBattle:
    bc = -(SCREEN_WIDTH * 6 + 3);
next:
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hBaseTileID; // LDH (High RAM)
    a = (uint8_t)(a + 0x31); // TODO: set flags
    goto CopyUncompressedPicToHL;
}

void CopyUncompressedPicToTilemap() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CopyUncompressedPicToTilemap:
    a = *wPredefHL;
    h = a;
    a = *wPredefHL + 1;
    l = a;
    a = hStartTileID; // LDH (High RAM)
}

uint16_t CopyUncompressedPicToHL() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

CopyUncompressedPicToHL:
    lb(bc, 7, 7);
    de = SCREEN_WIDTH;
    /* PUSH af - TODO: implement stack */
    a = *wSpriteFlipped;
    a &= a; zero = (a == 0); // TODO: set other flags
    if (!zero) goto flipped;
    /* POP af - TODO: implement stack */
loop:
    /* PUSH bc - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
innerLoop:
    hl = a;
    hl = (uint16_t)(hl + de); // TODO: set flags
    a++; // TODO: set flags
    c--; // TODO: set flags
    if (!zero) goto innerLoop;
    /* POP hl - TODO: implement stack */
    hl++; // TODO: set flags
    /* POP bc - TODO: implement stack */
    b--; // TODO: set flags
    if (!zero) goto loop;
    return;
flipped:
    /* PUSH bc - TODO: implement stack */
    b = 0;
    c--; // TODO: set flags
    hl = (uint16_t)(hl + bc); // TODO: set flags
    /* POP bc - TODO: implement stack */
    /* POP af - TODO: implement stack */
flippedLoop:
    /* PUSH bc - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
flippedInnerLoop:
    hl = a;
    hl = (uint16_t)(hl + de); // TODO: set flags
    a++; // TODO: set flags
    c--; // TODO: set flags
    if (!zero) goto flippedInnerLoop;
    /* POP hl - TODO: implement stack */
    hl--; // TODO: set flags
    /* POP bc - TODO: implement stack */
    b--; // TODO: set flags
    if (!zero) goto flippedLoop;
    return;
}

void LoadMonBackPic() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

LoadMonBackPic:
    // Assumes the monster's attributes have
    // been loaded with GetMonHeader.
    a = *wBattleMonSpecies2;
    *wCurPartySpecies = a;
    hl = hlcoord(1, 5);
    b = 7;
    c = 8;
    if (carry) ClearScreenArea();
    hl = wMonHBackSprite - wMonHeader;
    if (carry) UncompressMonSprite();
    predef(ScaleSpriteByTwo);
    de = vBackPic;
    if (carry) InterlaceMergeSpriteBuffers(); // combine the two buffers to a single 2bpp sprite
    hl = vSprites;
    de = vBackPic;
    c = (2 * SPRITEBUFFERSIZE) / TILE_SIZE; // count of 16-byte chunks to be copied
    a = hLoadedROMBank; // LDH (High RAM)
    b = a;
    goto CopyVideoData;
}

