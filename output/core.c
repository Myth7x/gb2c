// Generated C code from Game Boy Assembly
// WARNING: This is a best-effort conversion and may need manual adjustment

#include <stdint.h>
#include <stdbool.h>

// Global variables
uint8_t hAutoBGTransferDest + 1;
uint8_t hAutoBGTransferEnabled;
uint8_t hBaseTileID;
uint8_t hDividend;
uint8_t hDividend + 1;
uint8_t hDividend + 2;
uint8_t hDividend + 3;
uint8_t hDivisor;
uint8_t hEnemySpeed;
uint8_t hEnemySpeed + 1;
uint8_t hJoyHeld;
uint8_t hLoadedROMBank;
uint8_t hMultiplicand;
uint8_t hMultiplicand + 1;
uint8_t hMultiplicand + 2;
uint8_t hMultiplier;
uint8_t hOAMTile;
uint8_t hProduct + 2;
uint8_t hProduct + 3;
uint8_t hQuotient;
uint8_t hQuotient + 1;
uint8_t hQuotient + 2;
uint8_t hQuotient + 3;
uint8_t hSCX;
uint8_t hSCY;
uint8_t hSerialConnectionStatus;
uint8_t hSlideAmount;
uint8_t hStartTileID;
uint8_t hTileAnimations;
uint8_t hUILayoutFlags;
uint8_t hWY;
uint8_t hWhoseTurn;
volatile volatile uint8_t rBGP;
volatile volatile uint8_t rLCDC;
volatile volatile uint8_t rLY;
volatile volatile uint8_t rOBP0;
volatile volatile uint8_t rOBP1;
volatile volatile uint8_t rRAMB;
volatile volatile uint8_t rRAMG;
volatile volatile uint8_t rSCX;
volatile volatile uint8_t rWY;

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
uint8_t DoUseNextMonDialogue();
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
uint8_t SelectEnemyMove();
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
void PrintGhostText();
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
uint8_t CheckForDisobedience();
void LoafingAroundText();
void BeganToNapText();
void WontObeyText();
void TurnedAwayText();
void IgnoredOrdersText();
uint16_t GetDamageVarsForPlayerAttack();
uint16_t GetDamageVarsForEnemyAttack();
uint16_t GetEnemyMonStat();
uint8_t CalculateDamage();
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
uint8_t QuarterSpeedDueToParalysis();
uint8_t HalveAttackDueToBurn();
uint8_t CalculateModifiedStats();
uint16_t CalculateModifiedStat();
uint8_t ApplyBadgeStatBoosts();
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

    if (carry) LoadPlayerBackPic();
    a = MESSAGE_BOX; // the usual text box at the bottom of the screen
    wTextBoxID = a;
    if (carry) DisplayTextBoxID();
    /* hlcoord */
    /* lb */
    if (carry) ClearScreenArea();
    if (carry) DisableLCD();
    if (carry) LoadFontTilePatterns();
    if (carry) LoadHudAndHpBarAndStatusTilePatterns();
    hl = vBGMap0;
    bc = TILEMAP_AREA;
    a = ' ';
    hli = a;
    bc--; // TODO: set flags
    a = b;
    a |= c; zero = (a == 0); // TODO: set other flags
    goto nz;
    // copy the work RAM tile map to VRAM
    /* hlcoord */
    de = vBGMap0;
    b = SCREEN_HEIGHT;
    c = SCREEN_WIDTH;
    a = hli;
    de = a;
    e++; // TODO: set flags
    c--; // TODO: set flags
    goto nz;
    a = 12; // number of off screen tiles to the right of screen in VRAM
    a = (uint8_t)(a + e); // TODO: set flags // skip the off screen tiles
    e = a;
    goto nc;
    d++; // TODO: set flags
    b--; // TODO: set flags
    goto nz;
    if (carry) EnableLCD();
    a = 0x90;
    hWY = a; // LDH (High RAM)
    rWY = a; // LDH (High RAM)
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hTileAnimations = a; // LDH (High RAM)
    hSCY = a; // LDH (High RAM)
    a--; // TODO: set flags
    wUpdateSpritesEnabled = a;
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
    goto nz;
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    a = 0x31;
    hStartTileID = a; // LDH (High RAM)
    /* hlcoord */
    /* predef */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hWY = a; // LDH (High RAM)
    rWY = a; // LDH (High RAM)
    a++; // TODO: set flags
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    if (carry) Delay3();
    b = SET_PAL_BATTLE;
    if (carry) RunPaletteCommand();
    if (carry) HideSprites();
    goto PrintBeginningBattleText;
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
    hl--; // TODO: set flags // decrement X
    hl--; // TODO: set flags // decrement X
    hl = (uint16_t)(hl + de); // TODO: set flags // next OAM entry
    c--; // TODO: set flags
    goto nz;
    /* POP bc - TODO: implement stack */
    return;
}

uint8_t SetScrollXForSlidingPlayerBodyLeft() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = rLY; // LDH (High RAM)
    zero = (a == l); carry = (a < l); // Compare
    goto nz;
    a = h;
    rSCX = a; // LDH (High RAM)
    a = rLY; // LDH (High RAM)
    zero = (a == h); carry = (a < h); // Compare
    goto z;
    return;
}

uint16_t StartBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wPartyGainExpFlags = a;
    wPartyFoughtCurrentEnemyFlags = a;
    wActionResultOrTookBattleTurn = a;
    a++; // TODO: set flags
    wFirstMonsNotOutYet = a;
    hl = wEnemyMon1HP;
    bc = PARTYMON_STRUCT_LENGTH - 1;
    d = 0x3;
    d++; // TODO: set flags
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    goto nz;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    goto .findFirstAliveEnemyMonLoop;
    a = d;
    wSerialExchangeNybbleReceiveData = a;
    a = wIsInBattle;
    a--; // TODO: set flags // is it a trainer battle?
    if (carry) nz(); // if it is a trainer battle, send out enemy mon
    c = 40;
    if (carry) DelayFrames();
    if (carry) SaveScreenTilesToBuffer1();
    if (carry) AnyPartyAlive();
    a = d;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z; // jump if no mon is alive
    if (carry) LoadScreenTilesFromBuffer1();
    a = wBattleType;
    a &= a; zero = (a == 0); // TODO: set other flags // is it a normal battle?
    goto z; // if so, send out player mon
    // safari zone battle
    if (carry) DisplayBattleMenu();
    return; // return if the player ran from battle
}

void EnemyRan() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) LoadScreenTilesFromBuffer1();
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    hl = WildRanText;
    goto nz;
    // link battle
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wBattleResult = a;
    hl = EnemyRanText;
    if (carry) PrintText();
    a = SFX_RUN;
    if (carry) PlaySoundWaitForCurrent();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    goto AnimationSlideEnemyMonOff;
}

void WildRanText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void EnemyRanText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

uint16_t MainInBattleLoop() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) ReadPlayerMonCurHPAndStatus();
    hl = wBattleMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // is battle mon HP 0?
    goto z; // if battle mon HP is 0, jump
    hl = wEnemyMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // is enemy mon HP 0?
    goto z; // if enemy mon HP is 0, jump
    if (carry) SaveScreenTilesToBuffer1();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wFirstMonsNotOutYet = a;
    a = wPlayerBattleStatus2;
    a &= (1 << NEEDS_TO_RECHARGE) | (1 << USING_RAGE); zero = (a == 0); // TODO: set other flags // check if the player is using Rage or needs to recharge
    goto nz;
    // the player is not using Rage and doesn't need to recharge
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << FLINCHED); // reset flinch bit
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << FLINCHED); // reset flinch bit
    a = hl;
    a &= (1 << THRASHING_ABOUT) | (1 << CHARGING_UP); zero = (a == 0); // TODO: set other flags // check if the player is thrashing about or charging for an attack
    goto nz; // if so, jump
    // the player is neither thrashing about nor charging for an attack
    if (carry) DisplayBattleMenu(); // show battle menu
    return; // return if player ran from battle
}

uint16_t HandlePoisonBurnLeechSeed() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = wBattleMonHP;
    de = wBattleMonStatus;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    hl = wEnemyMonHP;
    de = wEnemyMonStatus;
    a = de;
    a &= (1 << BRN) | (1 << PSN); zero = (a == 0); // TODO: set other flags
    goto z;
    /* PUSH hl - TODO: implement stack */
    hl = HurtByPoisonText;
    a = de;
    a &= 1 << BRN; zero = (a == 0); // TODO: set other flags
    goto z;
    hl = HurtByBurnText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
    a = BURN_PSN_ANIM;
    if (carry) PlayMoveAnimation(); // play burn/poison animation
    /* POP hl - TODO: implement stack */
    if (carry) HandlePoisonBurnLeechSeed_DecreaseOwnHP();
    de = wPlayerBattleStatus2;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    de = wEnemyBattleStatus2;
    a = de;
    a = (uint8_t)(a + a); // TODO: set flags
    goto nc;
    /* PUSH hl - TODO: implement stack */
    a = hWhoseTurn; // LDH (High RAM)
    /* PUSH af - TODO: implement stack */
    a ^= 0x1; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
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
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    return; // test if fainted
}

void HurtByPoisonText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void HurtByBurnText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void HurtByLeechSeedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // decreases the mon's current HP by 1/16 of the Max HP (multiplied by number of toxic ticks if active)
    // note that the toxic ticks are considered even if the damage is not poison (hence the Leech Seed glitch)
    // hl: HP pointer
    // bc (out): total damage
}

uint16_t HandlePoisonBurnLeechSeed_DecreaseOwnHP() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* PUSH hl - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
    bc = 0xe; // skip to max HP
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hli; // load max HP
    wHPBarMaxHP+1 = a;
    b = a;
    a = hl;
    wHPBarMaxHP = a;
    c = a;
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = c; c = (uint8_t)((c >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL
    { uint8_t temp = c; c = (uint8_t)((c >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR
    carry = (c & 1) != 0; c = (uint8_t)(c >> 1); // SRL
    carry = (c & 1) != 0; c = (uint8_t)(c >> 1); // SRL // c = max HP/16 (assumption: HP < 1024)
    a = c;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto nz;
    c++; // TODO: set flags // damage is at least 1
    hl = wPlayerBattleStatus3;
    de = wPlayerToxicCounter;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    hl = wEnemyBattleStatus3;
    de = wEnemyToxicCounter;
    zero = ((hl & (1 << BADLY_POISONED)) == 0);
    goto z;
    a = de; // increment toxic counter
    a++; // TODO: set flags
    de = a;
    hl = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a--; // TODO: set flags
    goto nz;
    b = h; // bc = damage * toxic counter
    c = l;
    /* POP hl - TODO: implement stack */
    hl++; // TODO: set flags
    a = hl; // subtract total damage from current HP
    wHPBarOldHP = a;
    a = (uint8_t)(a - c); // TODO: set flags
    hld = a;
    wHPBarNewHP = a;
    a = hl;
    wHPBarOldHP+1 = a;
    a = (uint8_t)(a - b - (carry ? 1 : 0)); // TODO: set flags
    hl = a;
    wHPBarNewHP+1 = a;
    goto nc;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // overkill: zero HP
    hli = a;
    hl = a;
    wHPBarNewHP = a;
    wHPBarNewHP+1 = a;
    if (carry) UpdateCurMonHPBar();
    /* POP hl - TODO: implement stack */
    return;
}

uint16_t HandlePoisonBurnLeechSeed_IncreaseEnemyHP() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* PUSH hl - TODO: implement stack */
    hl = wEnemyMonMaxHP;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    hl = wBattleMonMaxHP;
    a = hli;
    wHPBarMaxHP+1 = a;
    a = hl;
    wHPBarMaxHP = a;
    de = wBattleMonHP - wBattleMonMaxHP;
    hl = (uint16_t)(hl + de); // TODO: set flags // skip back from max hp to current hp
    a = hl;
    wHPBarOldHP = a; // add bc to current HP
    a = (uint8_t)(a + c); // TODO: set flags
    hld = a;
    wHPBarNewHP = a;
    a = hl;
    wHPBarOldHP+1 = a;
    a = (uint8_t)(a + b + (carry ? 1 : 0)); // TODO: set flags
    hli = a;
    wHPBarNewHP+1 = a;
    a = wHPBarMaxHP;
    c = a;
    a = hld;
    a = (uint8_t)(a - c); // TODO: set flags
    a = wHPBarMaxHP+1;
    b = a;
    a = hl;
    a = (uint8_t)(a - b - (carry ? 1 : 0)); // TODO: set flags
    goto c;
    a = b; // overfull heal, set HP to max HP
    hli = a;
    wHPBarNewHP+1 = a;
    a = c;
    hl = a;
    wHPBarNewHP = a;
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

    /* hlcoord */ // tile pointer to player HP bar
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    a = 0x1;
    goto z;
    /* hlcoord */ // tile pointer to enemy HP bar
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    /* PUSH bc - TODO: implement stack */
    wHPBarType = a;
    /* predef */
    /* POP bc - TODO: implement stack */
    return;
}

uint16_t CheckNumAttacksLeft() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPlayerNumAttacksLeft;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto nz;
    // player has 0 attacks left
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE); // player not using multi-turn attack like wrap any more
    a = wEnemyNumAttacksLeft;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
}

uint16_t HandleEnemyMonFainted() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wInHandlePlayerMonFainted = a;
    if (carry) FaintEnemyPokemon();
    if (carry) AnyPartyAlive();
    a = d;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z; // if no party mons are alive, the player blacks out
    hl = wBattleMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // is battle mon HP zero?
    if (carry) nz(); // if battle mon HP is not zero, draw player HD and HP bar
    a = wIsInBattle;
    a--; // TODO: set flags
    return; // return if it's a wild battle
}

uint16_t FaintEnemyPokemon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) ReadPlayerMonCurHPAndStatus();
    a = wIsInBattle;
    a--; // TODO: set flags
    goto z;
    a = wEnemyMonPartyPos;
    hl = wEnemyMon1HP;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    hl = a;
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
    wPlayerBideAccumulatedDamage = a;
    hl = wEnemyStatsToDouble; // clear enemy statuses
    hli = a;
    hli = a;
    hli = a;
    hli = a;
    hl = a;
    wEnemyDisabledMove = a;
    wEnemyDisabledMoveNumber = a;
    wEnemyMonMinimized = a;
    hl = wPlayerUsedMove;
    hli = a;
    hl = a;
    /* hlcoord */
    /* decoord */
    if (carry) SlideDownFaintedMonPic();
    /* hlcoord */
    /* lb */
    if (carry) ClearScreenArea();
    a = wIsInBattle;
    a--; // TODO: set flags
    goto z;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wFrequencyModifier = a;
    wTempoModifier = a;
    a = SFX_FAINT_FALL;
    if (carry) PlaySoundWaitForCurrent();
    a = wChannelSoundIDs + CHAN5;
    zero = (a == SFX_FAINT_FALL); carry = (a < SFX_FAINT_FALL); // Compare
    goto z;
    a = SFX_FAINT_THUD;
    if (carry) PlaySound();
    if (carry) WaitForSoundToFinish();
    goto .sfxplayed;
    if (carry) EndLowHealthAlarm();
    a = MUSIC_DEFEATED_WILD_MON;
    if (carry) PlayBattleVictoryMusic();
    // bug: win sfx is played for wild battles before checking for player mon HP
    // this can lead to odd scenarios where both player and enemy faint, as the win sfx plays yet the player never won the battle
    hl = wBattleMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    goto nz;
    a = wInHandlePlayerMonFainted;
    a &= a; zero = (a == 0); // TODO: set other flags // was this called by HandlePlayerMonFainted?
    goto nz; // if so, don't call RemoveFaintedPlayerMon twice
    if (carry) RemoveFaintedPlayerMon();
    if (carry) AnyPartyAlive();
    a = d;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
}

void EnemyMonFaintedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

uint8_t EndLowHealthAlarm() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // This function is called when the player has the won the battle. It turns off
    // the low health alarm and prevents it from reactivating until the next battle.
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wLowHealthAlarm = a; // turn off low health alarm
    wChannelSoundIDs + CHAN5 = a;
    a++; // TODO: set flags
    wLowHealthAlarmDisabled = a; // prevent it from reactivating
    return;
}

uint16_t AnyEnemyPokemonAliveCheck() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wEnemyPartyCount;
    b = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wEnemyMon1HP;
    de = PARTYMON_STRUCT_LENGTH;
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl++; // TODO: set flags
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl--; // TODO: set flags
    hl = (uint16_t)(hl + de); // TODO: set flags
    b--; // TODO: set flags
    goto nz;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
}

uint16_t ReplaceFaintedEnemyMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = wEnemyHPBarColor;
    e = 0x30;
    if (carry) GetBattleHealthBarColor();
    if (carry) DrawEnemyPokeballs();
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto nz;
    // link battle
    if (carry) LinkBattleExchangeData();
    a = wSerialExchangeNybbleReceiveData;
    zero = (a == LINKBATTLE_RUN); carry = (a < LINKBATTLE_RUN); // Compare
    return;
}

uint16_t TrainerBattleVictory() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) EndLowHealthAlarm();
    b = MUSIC_DEFEATED_GYM_LEADER;
    a = wGymLeaderNo;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto nz;
    b = MUSIC_DEFEATED_TRAINER;
    a = wTrainerClass;
    zero = (a == RIVAL3); carry = (a < RIVAL3); // Compare // final battle against rival
    goto nz;
    b = MUSIC_DEFEATED_GYM_LEADER;
    hl = wStatusFlags7;
    hl |= (1 << BIT_NO_MAP_MUSIC);
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    a = b;
    if (carry) nz();
    hl = TrainerDefeatedText;
    if (carry) PrintText();
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    return;
}

void MoneyForWinningText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void TrainerDefeatedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void PlayBattleVictoryMusic() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* PUSH af - TODO: implement stack */
    a = SFX_STOP_ALL_MUSIC;
    wNewSoundID = a;
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

    a = 1;
    wInHandlePlayerMonFainted = a;
    if (carry) RemoveFaintedPlayerMon();
    if (carry) AnyPartyAlive(); // test if any more mons are alive
    a = d;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    hl = wEnemyMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // is enemy mon's HP 0?
    goto nz; // if not, jump
    // the enemy mon has 0 HP
    if (carry) FaintEnemyPokemon();
    a = wIsInBattle;
    a--; // TODO: set flags
    return; // if wild encounter, battle is over
}

uint16_t RemoveFaintedPlayerMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPlayerMonNumber;
    c = a;
    hl = wPartyGainExpFlags;
    b = FLAG_RESET;
    /* predef */ // clear gain exp flag for fainted mon
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << ATTACKING_MULTIPLE_TIMES);
    a = wLowHealthAlarm;
    zero = ((a & (1 << BIT_LOW_HEALTH_ALARM)) == 0);
    goto z;
    a = DISABLE_LOW_HEALTH_ALARM;
    wLowHealthAlarm = a;
    if (carry) WaitForSoundToFinish();
    // a is 0, so this zeroes the enemy's accumulated damage.
    hl = wEnemyBideAccumulatedDamage;
    hli = a;
    hl = a;
    wBattleMonStatus = a;
    if (carry) ReadPlayerMonCurHPAndStatus();
    /* hlcoord */
    /* lb */
    if (carry) ClearScreenArea();
    /* hlcoord */
    /* decoord */
    if (carry) SlideDownFaintedMonPic();
    a = 0x1;
    wBattleResult = a;
    // When the player mon and enemy mon faint at the same time and the fact that the
    // enemy mon has fainted is detected first (e.g. when the player mon knocks out
    // the enemy mon using a move with recoil and faints due to the recoil), don't
    // play the player mon's cry or show the "[player mon] fainted!" message.
    a = wInHandlePlayerMonFainted;
    a &= a; zero = (a == 0); // TODO: set other flags // was this called by HandleEnemyMonFainted?
    return; // if so, return
}

void PlayerMonFaintedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // asks if you want to use next mon
    // stores whether you ran in C flag
}

uint8_t DoUseNextMonDialogue() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) PrintEmptyString();
    if (carry) SaveScreenTilesToBuffer1();
    a = wIsInBattle;
    a &= a; zero = (a == 0); // TODO: set other flags
    a--; // TODO: set flags
    return; // return if it's a trainer battle
}

void UseNextMonText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // choose next player mon to send out
    // stores whether enemy mon has no HP left in Z flag
}

uint16_t ChooseNextMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = BATTLE_PARTY_MENU;
    wPartyMenuTypeOrMessageID = a;
    if (carry) DisplayPartyMenu();
    goto nc;
    if (carry) GoBackToPartyMenu();
    goto .checkIfMonChosen;
    if (carry) HasMonFainted();
    goto z; // if mon fainted, you have to choose another
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto nz;
    a++; // TODO: set flags // 1
    wActionResultOrTookBattleTurn = a;
    if (carry) LinkBattleExchangeData();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wActionResultOrTookBattleTurn = a;
    if (carry) ClearSprites();
    a = wWhichPokemon;
    wPlayerMonNumber = a;
    c = a;
    hl = wPartyGainExpFlags;
    b = FLAG_SET;
    /* PUSH bc - TODO: implement stack */
    /* predef */
    /* POP bc - TODO: implement stack */
    hl = wPartyFoughtCurrentEnemyFlags;
    /* predef */
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
}

uint16_t HandlePlayerBlackOut() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto z;
    a = wCurOpponent;
    zero = (a == OPP_RIVAL1); carry = (a < OPP_RIVAL1); // Compare
    goto nz;
    /* hlcoord */ // rival 1 battle
    /* lb */
    if (carry) ClearScreenArea();
    if (carry) ScrollTrainerPicAfterBattle();
    c = 40;
    if (carry) DelayFrames();
    hl = Rival1WinText;
    if (carry) PrintText();
    a = wCurMap;
    zero = (a == OAKS_LAB); carry = (a < OAKS_LAB); // Compare
    return; // starter battle in oak's lab: don't black out
}

void Rival1WinText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void PlayerBlackedOutText2() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void LinkBattleLostText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // slides pic of fainted mon downwards until it disappears
    // bug: when this is called, [hAutoBGTransferEnabled] is non-zero, so there is screen tearing
}

uint16_t SlideDownFaintedMonPic() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wStatusFlags5;
    /* PUSH af - TODO: implement stack */
    a |= (1 << BIT_NO_TEXT_DELAY);
    wStatusFlags5 = a;
    b = PIC_HEIGHT; // number of times to slide
    /* PUSH bc - TODO: implement stack */
    /* PUSH de - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
    b = PIC_HEIGHT - 1; // number of rows
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
    goto nz;
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
    goto nz;
    /* POP af - TODO: implement stack */
    wStatusFlags5 = a;
    return;
}

void SevenSpacesText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* ds */
    /* db */
    // slides the player or enemy trainer off screen
    // a is the number of tiles to slide it horizontally (always 9 for the player trainer or 8 for the enemy trainer)
    // if a is 8, the slide is to the right, else it is to the left
    // bug: when this is called, [hAutoBGTransferEnabled] is non-zero, so there is screen tearing
}

uint16_t SlideTrainerPicOffScreen() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hSlideAmount = a; // LDH (High RAM)
    c = a;
    /* PUSH bc - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
    b = PIC_HEIGHT; // number of rows
    /* PUSH hl - TODO: implement stack */
    a = hSlideAmount; // LDH (High RAM)
    c = a;
    a = hSlideAmount; // LDH (High RAM)
    zero = (a == 8); carry = (a < 8); // Compare
    goto z;
    // slide player sprite left off screen
    a = hld;
    hli = a;
    hl++; // TODO: set flags
    goto .nextColumn;
    a = hli;
    hld = a;
    hl--; // TODO: set flags
    c--; // TODO: set flags
    goto nz;
    /* POP hl - TODO: implement stack */
    de = SCREEN_WIDTH;
    hl = (uint16_t)(hl + de); // TODO: set flags
    b--; // TODO: set flags
    goto nz;
    c = 2;
    if (carry) DelayFrames();
    /* POP hl - TODO: implement stack */
    /* POP bc - TODO: implement stack */
    c--; // TODO: set flags
    goto nz;
    return;
}

void EnemySendOut() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = wPartyGainExpFlags;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = a;
    a = wPlayerMonNumber;
    c = a;
    b = FLAG_SET;
    /* PUSH bc - TODO: implement stack */
    /* predef */
    hl = wPartyFoughtCurrentEnemyFlags;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = a;
    /* POP bc - TODO: implement stack */
    /* predef */
    // don't change wPartyGainExpFlags or wPartyFoughtCurrentEnemyFlags
}

uint16_t EnemySendOutFirstMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wEnemyStatsToDouble; // clear enemy statuses
    hli = a;
    hli = a;
    hli = a;
    hli = a;
    hl = a;
    wEnemyDisabledMove = a;
    wEnemyDisabledMoveNumber = a;
    wEnemyMonMinimized = a;
    hl = wPlayerUsedMove;
    hli = a;
    hl = a;
    a--; // TODO: set flags
    wAICount = a;
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE);
    /* hlcoord */
    a = 8;
    if (carry) SlideTrainerPicOffScreen();
    if (carry) PrintEmptyString();
    if (carry) SaveScreenTilesToBuffer1();
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto nz;
    a = wSerialExchangeNybbleReceiveData;
    a = (uint8_t)(a - 4); // TODO: set flags
    wWhichPokemon = a;
    goto .next3;
    b = 0xff;
    b++; // TODO: set flags
    a = wEnemyMonPartyPos;
    zero = (a == b); carry = (a < b); // Compare
    goto z;
    hl = wEnemyMon1;
    a = b;
    wWhichPokemon = a;
    /* PUSH bc - TODO: implement stack */
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    /* POP bc - TODO: implement stack */
    hl++; // TODO: set flags
    a = hli;
    c = a;
    a = hl;
    a |= c; zero = (a == 0); // TODO: set other flags
    goto z;
    a = wWhichPokemon;
    hl = wEnemyMon1Level;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    a = hl;
    wCurEnemyLevel = a;
    a = wWhichPokemon;
    a++; // TODO: set flags
    hl = wEnemyPartyCount;
    c = a;
    b = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl;
    wEnemyMonSpecies2 = a;
    wCurPartySpecies = a;
    if (carry) LoadEnemyMonData();
    hl = wEnemyMonHP;
    a = hli;
    wLastSwitchInEnemyMonHP = a;
    a = hl;
    wLastSwitchInEnemyMonHP + 1 = a;
    a = 1;
    wCurrentMenuItem = a;
    a = wFirstMonsNotOutYet;
    a--; // TODO: set flags
    goto z;
    a = wPartyCount;
    a--; // TODO: set flags
    goto z;
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto z;
    a = wOptions;
    zero = ((a & (1 << BIT_BATTLE_SHIFT)) == 0);
    goto nz;
    hl = TrainerAboutToUseText;
    if (carry) PrintText();
    /* hlcoord */
    /* lb */
    a = TWO_OPTION_MENU;
    wTextBoxID = a;
    if (carry) DisplayTextBoxID();
    a = wCurrentMenuItem;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto nz;
    a = BATTLE_PARTY_MENU;
    wPartyMenuTypeOrMessageID = a;
    if (carry) DisplayPartyMenu();
    a = 1;
    wCurrentMenuItem = a;
    goto c;
    hl = wPlayerMonNumber;
    a = wWhichPokemon;
    zero = (a == hl); carry = (a < hl); // Compare
    goto nz;
    hl = AlreadyOutText;
    if (carry) PrintText();
    if (carry) GoBackToPartyMenu();
    goto .next9;
    if (carry) HasMonFainted();
    goto z;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wCurrentMenuItem = a;
    if (carry) GBPalWhiteOut();
    if (carry) LoadHudTilePatterns();
    if (carry) LoadScreenTilesFromBuffer1();
    if (carry) ClearSprites();
    /* hlcoord */
    /* lb */
    if (carry) ClearScreenArea();
    b = SET_PAL_BATTLE;
    if (carry) RunPaletteCommand();
    if (carry) GBPalNormal();
    hl = TrainerSentOutText;
    if (carry) PrintText();
    a = wEnemyMonSpecies2;
    wCurPartySpecies = a;
    wCurSpecies = a;
    if (carry) GetMonHeader();
    de = vFrontPic;
    if (carry) LoadMonFrontSprite();
    a = -$31;
    hStartTileID = a; // LDH (High RAM)
    /* hlcoord */
    /* predef */
    a = wEnemyMonSpecies2;
    if (carry) PlayCry();
    if (carry) DrawEnemyHUDAndHPBar();
    a = wCurrentMenuItem;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
}

void TrainerAboutToUseText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void TrainerSentOutText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // tests if the player has any pokemon that are not fainted
    // sets d = 0 if all fainted, d != 0 if some mons are still alive
}

uint16_t AnyPartyAlive() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPartyCount;
    e = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wPartyMon1HP;
    bc = PARTYMON_STRUCT_LENGTH - 1;
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl++; // TODO: set flags
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl = (uint16_t)(hl + bc); // TODO: set flags
    e--; // TODO: set flags
    goto nz;
    d = a;
    return;
}

uint16_t HasMonFainted() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wWhichPokemon;
    hl = wPartyMon1HP;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    return;
}

void NoWillText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // try to run from battle (hl = player speed, de = enemy speed)
    // stores whether the attempt was successful in carry flag
}

uint16_t TryRunningFromBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) IsGhostBattle();
    goto z; // jump if it's a ghost battle
    a = wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    goto z; // jump if it's a safari battle
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto z;
    a = wIsInBattle;
    a--; // TODO: set flags
    goto nz; // jump if it's a trainer battle
    a = wNumRunAttempts;
    a++; // TODO: set flags
    wNumRunAttempts = a;
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
    goto nc; // jump if player speed greater than enemy speed
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
    goto z; // jump if enemy speed divided by 4, mod 256 is 0
    hDivisor = a; // LDH (High RAM) // ((enemy speed / 4) % 256)
    b = 0x2;
    if (carry) Divide(); // divide (player speed * 32) by ((enemy speed / 4) % 256)
    a = hQuotient + 2; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags // is the quotient greater than 256?
    goto nz; // if so, the player can escape
    a = wNumRunAttempts;
    c = a;
    // add 30 to the quotient for each run attempt
    c--; // TODO: set flags
    goto z;
    b = 30;
    a = hQuotient + 3; // LDH (High RAM)
    a = (uint8_t)(a + b); // TODO: set flags
    hQuotient + 3 = a; // LDH (High RAM)
    goto c;
    goto .loop;
    if (carry) BattleRandom();
    b = a;
    a = hQuotient + 3; // LDH (High RAM)
    zero = (a == b); carry = (a < b); // Compare
    goto nc; // if the random value was less than or equal to the quotient
    // ; plus 30 times the number of attempts, the player can escape
    // can't escape
    a = 0x1;
    wActionResultOrTookBattleTurn = a; // you lose your turn when you can't escape
    hl = CantEscapeText;
    goto .printCantEscapeOrNoRunningText;
    hl = NoRunningText;
    if (carry) PrintText();
    a = 1;
    wForcePlayerToChooseMon = a;
    if (carry) SaveScreenTilesToBuffer1();
    a &= a; zero = (a == 0); // TODO: set other flags // reset carry
    return;
}

void CantEscapeText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void NoRunningText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void GotAwayText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // copies from party data to battle mon data when sending out a new player mon
}

uint16_t LoadBattleMonFromParty() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wWhichPokemon;
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
    a = wBattleMonSpecies2;
    wCurSpecies = a;
    if (carry) GetMonHeader();
    hl = wPartyMonNicks;
    a = wPlayerMonNumber;
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
    hli = a;
    b--; // TODO: set flags
    goto nz;
    return;
}

uint16_t LoadEnemyMonFromParty() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wWhichPokemon;
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
    a = wEnemyMonSpecies;
    wCurSpecies = a;
    if (carry) GetMonHeader();
    hl = wEnemyMonNicks;
    a = wWhichPokemon;
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
    a = hli;
    de = a;
    de++; // TODO: set flags
    b--; // TODO: set flags
    goto nz;
    a = 0x7; // default stat modifier
    b = NUM_STAT_MODS;
    hl = wEnemyMonStatMods;
    hli = a;
    b--; // TODO: set flags
    goto nz;
    a = wWhichPokemon;
    wEnemyMonPartyPos = a;
    return;
}

void SendOutMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) PrintSendOutMonMessage();
    hl = wEnemyMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags // is enemy mon HP zero?
    goto z; // if HP is zero, skip drawing the HUD and HP bar
    if (carry) DrawEnemyHUDAndHPBar();
    if (carry) DrawPlayerHUDAndHPBar();
    /* predef */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hStartTileID = a; // LDH (High RAM)
    hl = wBattleAndStartSavedMenuItem;
    hli = a;
    hl = a;
    wBoostExpByExpAll = a;
    wDamageMultipliers = a;
    wPlayerMoveNum = a;
    hl = wPlayerUsedMove;
    hli = a;
    hl = a;
    hl = wPlayerStatsToDouble;
    hli = a;
    hli = a;
    hli = a;
    hli = a;
    hl = a;
    wPlayerDisabledMove = a;
    wPlayerDisabledMoveNumber = a;
    wPlayerMonMinimized = a;
    b = SET_PAL_BATTLE;
    if (carry) RunPaletteCommand();
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE);
    a = 0x1;
    hWhoseTurn = a; // LDH (High RAM)
    a = POOF_ANIM;
    if (carry) PlayMoveAnimation();
    /* hlcoord */
    /* predef */
    a = wCurPartySpecies;
    if (carry) PlayCry();
    if (carry) PrintEmptyString();
    goto SaveScreenTilesToBuffer1;
    // show 2 stages of the player mon getting smaller before disappearing
}

void AnimateRetreatingPlayerMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* hlcoord */
    /* lb */
    if (carry) ClearScreenArea();
    /* hlcoord */
    /* lb */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wDownscaledMonSize = a;
    hBaseTileID = a; // LDH (High RAM)
    /* predef */
    c = 4;
    if (carry) DelayFrames();
    if (carry) .clearScreenArea();
    /* hlcoord */
    /* lb */
    a = 1;
    wDownscaledMonSize = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hBaseTileID = a; // LDH (High RAM)
    /* predef */
    if (carry) Delay3();
    if (carry) .clearScreenArea();
    a = 0x4c;
    /* ldcoord_a */
    /* hlcoord */
    /* lb */
    goto ClearScreenArea;
    // Copies player's current pokemon's current HP, party pos, and status into the party
    // struct data so it stays after battle or switching
}

void ReadPlayerMonCurHPAndStatus() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPlayerMonNumber;
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

    if (carry) DrawPlayerHUDAndHPBar();
    goto DrawEnemyHUDAndHPBar;
}

uint16_t DrawPlayerHUDAndHPBar() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    /* hlcoord */
    /* lb */
    if (carry) ClearScreenArea();
    if (carry) PlacePlayerHUDTiles();
    /* hlcoord */
    hl = 0x73;
    de = wBattleMonNick;
    /* hlcoord */
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
    /* hlcoord */
    /* PUSH hl - TODO: implement stack */
    hl++; // TODO: set flags
    de = wLoadedMonStatus;
    if (carry) PrintStatusConditionNotFainted();
    /* POP hl - TODO: implement stack */
    goto nz;
    if (carry) PrintLevel();
    a = wLoadedMonSpecies;
    wCurPartySpecies = a;
    /* hlcoord */
    /* predef */
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    hl = wPlayerHPBarColor;
    if (carry) GetBattleHealthBarColor();
    hl = wBattleMonHP;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    goto z;
    a = wLowHealthAlarmDisabled;
    a &= a; zero = (a == 0); // TODO: set other flags // has the alarm been disabled because the player has already won?
    return; // if so, return
}

void DrawEnemyHUDAndHPBar() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    /* hlcoord */
    /* lb */
    if (carry) ClearScreenArea();
    if (carry) PlaceEnemyHUDTiles();
    de = wEnemyMonNick;
    /* hlcoord */
    if (carry) CenterMonName();
    if (carry) PlaceString();
    /* hlcoord */
    /* PUSH hl - TODO: implement stack */
    hl++; // TODO: set flags
    de = wEnemyMonStatus;
    if (carry) PrintStatusConditionNotFainted();
    /* POP hl - TODO: implement stack */
    goto nz; // if the mon has a status condition, skip printing the level
    a = wEnemyMonLevel;
    wLoadedMonLevel = a;
    if (carry) PrintLevel();
    hl = wEnemyMonHP;
    a = hli;
    hMultiplicand + 1 = a; // LDH (High RAM)
    a = hld;
    hMultiplicand + 2 = a; // LDH (High RAM)
    a |= hl; zero = (a == 0); // TODO: set other flags // is current HP zero?
    goto nz;
    // current HP is 0
    // set variables for DrawHPBar
    c = a;
    e = a;
    d = 0x6;
    goto .drawHPBar;
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
    goto z;
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
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wHPBarType = a;
    /* hlcoord */
    if (carry) DrawHPBar();
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    hl = wEnemyHPBarColor;
}

uint16_t GetBattleHealthBarColor() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    b = hl;
    if (carry) GetHealthBarColor();
    a = hl;
    zero = (a == b); carry = (a < b); // Compare
    return;
}

uint16_t CenterMonName() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* PUSH de - TODO: implement stack */
    hl++; // TODO: set flags
    hl++; // TODO: set flags
    b = 0x2;
    de++; // TODO: set flags
    a = de;
    zero = (a == '@'); carry = (a < '@'); // Compare
    goto z;
    de++; // TODO: set flags
    a = de;
    zero = (a == '@'); carry = (a < '@'); // Compare
    goto z;
    hl--; // TODO: set flags
    b--; // TODO: set flags
    goto nz;
    /* POP de - TODO: implement stack */
    return;
}

void DisplayBattleMenu() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) LoadScreenTilesFromBuffer1(); // restore saved screen
    a = wBattleType;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto nz;
    if (carry) DrawHUDsAndHPBars();
    if (carry) PrintEmptyString();
    if (carry) SaveScreenTilesToBuffer1();
    a = wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    a = BATTLE_MENU_TEMPLATE;
    goto nz;
    a = SAFARI_BATTLE_MENU_TEMPLATE;
    wTextBoxID = a;
    if (carry) DisplayTextBoxID();
    // ; handle menu input if it's not the old man tutorial
    a = wBattleType;
    /* assert */
    a--; // TODO: set flags
    goto nz;
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
    hl = .oldManName;
    de = wPlayerName;
    bc = NAME_LENGTH;
    if (carry) CopyData();
    // the following simulates the keystrokes by drawing menus on screen
    /* hlcoord */
    hl = '▶';
    c = 80;
    if (carry) DelayFrames();
    hl = ' ';
    /* hlcoord */
    hl = '▶';
    c = 50;
    if (carry) DelayFrames();
    hl = '▷';
    a = 0x2; // select the "ITEM" menu
    goto .upperLeftMenuItemWasNotSelected;
    /* db */
    a = wBattleAndStartSavedMenuItem;
    wCurrentMenuItem = a;
    wLastMenuItem = a;
    a = (uint8_t)(a - 2); // TODO: set flags // check if the cursor is in the left column
    goto c;
    // cursor is in the right column
    wCurrentMenuItem = a;
    wLastMenuItem = a;
    goto .rightColumn;
    a = wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    a = ' ';
    goto z;
    // put cursor in left column for normal battle menu (i.e. when it's not a Safari battle)
    /* ldcoord_a */ // clear upper cursor position in right column
    /* ldcoord_a */ // clear lower cursor position in right column
    b = 0x9; // top menu item X
    goto .leftColumn_WaitForInput;
    /* ldcoord_a */
    /* ldcoord_a */
    /* hlcoord */
    de = wNumSafariBalls;
    /* lb */
    if (carry) PrintNumber();
    b = 0x1; // top menu item X
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
    goto nz;
    goto .AButtonPressed; // the A button was pressed
    a = wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    a = ' ';
    goto z;
    // put cursor in right column for normal battle menu (i.e. when it's not a Safari battle)
    /* ldcoord_a */ // clear upper cursor position in left column
    /* ldcoord_a */ // clear lower cursor position in left column
    b = 0xf; // top menu item X
    goto .rightColumn_WaitForInput;
    /* ldcoord_a */ // clear upper cursor position in left column
    /* ldcoord_a */ // clear lower cursor position in left column
    /* hlcoord */
    de = wNumSafariBalls;
    /* lb */
    if (carry) PrintNumber();
    b = 0xd; // top menu item X
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
    goto nz; // if left was pressed, jump
    a = wCurrentMenuItem;
    a = (uint8_t)(a + 0x2); // TODO: set flags // if we're in the right column, the actual id is +2
    wCurrentMenuItem = a;
    if (carry) PlaceUnfilledArrowMenuCursor();
    a = wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    a = wCurrentMenuItem;
    wBattleAndStartSavedMenuItem = a;
    goto z;
    // not Safari battle
    // swap the IDs of the item menu and party menu (this is probably because they swapped the positions
    // of these menu items in first generation English versions)
    zero = (a == 0x1); carry = (a < 0x1); // Compare // was the item menu selected?
    goto nz;
    // item menu was selected
    a++; // TODO: set flags // increment a to 2
    goto .handleMenuSelection;
    zero = (a == 0x2); carry = (a < 0x2); // Compare // was the party menu selected?
    goto nz;
    // party menu selected
    a--; // TODO: set flags // decrement a to 1
    a &= a; zero = (a == 0); // TODO: set other flags
    goto nz;
    // the upper left menu item was selected
    a = wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    goto z;
    // the "FIGHT" menu was selected
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wNumRunAttempts = a;
    goto LoadScreenTilesFromBuffer1; // restore saved screen and return
    a = SAFARI_BALL;
    wCurItem = a;
    goto UseBagItem;
    zero = (a == 0x2); carry = (a < 0x2); // Compare
    goto nz;
    // either the bag (normal battle) or bait (safari battle) was selected
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto nz;
    // can't use items in link battles
    hl = ItemsCantBeUsedHereText;
    if (carry) PrintText();
    goto DisplayBattleMenu;
    if (carry) SaveScreenTilesToBuffer2();
    a = wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    goto nz;
    // bait was selected
    a = SAFARI_BAIT;
    wCurItem = a;
    goto UseBagItem;
}

void BagWasSelected() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) LoadScreenTilesFromBuffer1();
    a = wBattleType;
    a &= a; zero = (a == 0); // TODO: set other flags // is it a normal battle?
    goto nz;
    // normal battle
    if (carry) DrawHUDsAndHPBars();
    a = wBattleType;
    a--; // TODO: set flags // is it the old man tutorial?
    goto nz; // no, it is a normal battle
    hl = OldManItemList;
    a = l;
    wListPointer = a;
    a = h;
    wListPointer + 1 = a;
    goto DisplayBagMenu;
}

void OldManItemList() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* db */ // # items
    /* db */
    /* db */ // end
}

void DisplayPlayerBag() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // ; get the pointer to player's bag when in a normal battle
    hl = wNumBagItems;
    a = l;
    wListPointer = a;
    a = h;
    wListPointer + 1 = a;
}

void DisplayBagMenu() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wPrintItemPrices = a;
    a = ITEMLISTMENU;
    wListMenuID = a;
    a = wBagSavedMenuItem;
    wCurrentMenuItem = a;
    if (carry) DisplayListMenuID();
    a = wCurrentMenuItem;
    wBagSavedMenuItem = a;
    a = 0x0;
    wMenuWatchMovingOutOfBounds = a;
    wMenuItemToSwap = a;
    goto c; // go back to battle menu if an item was not selected
}

uint16_t UseBagItem() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // ; either use an item from the bag or use a safari zone item
    a = wCurItem;
    wNamedObjectIndex = a;
    if (carry) GetItemName();
    if (carry) CopyToStringBuffer();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wPseudoItemID = a;
    if (carry) UseItem();
    if (carry) LoadHudTilePatterns();
    if (carry) ClearSprites();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wCurrentMenuItem = a;
    a = wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    goto z;
    a = wActionResultOrTookBattleTurn;
    a &= a; zero = (a == 0); // TODO: set other flags // was the item used successfully?
    goto z; // if not, go back to the bag menu
    a = wPlayerBattleStatus1;
    zero = ((a & (1 << USING_TRAPPING_MOVE)) == 0); // is the player using a multi-turn move like wrap?
    goto z;
    hl = wPlayerNumAttacksLeft;
    hl--; // TODO: set flags
    goto nz;
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << USING_TRAPPING_MOVE); // not using multi-turn move any more
    a = wCapturedMonSpecies;
    a &= a; zero = (a == 0); // TODO: set other flags // was the enemy mon captured with a ball?
    goto nz;
    a = wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    goto z;
    // not a safari battle
    if (carry) LoadScreenTilesFromBuffer1();
    if (carry) DrawHUDsAndHPBars();
    if (carry) Delay3();
    if (carry) GBPalNormal();
    a &= a; zero = (a == 0); // TODO: set other flags // reset carry
    return;
}

void ItemsCantBeUsedHereText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void PartyMenuOrRockOrRun() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a--; // TODO: set flags // was Run selected?
    goto nz;
    // party menu or rock was selected
    if (carry) SaveScreenTilesToBuffer2();
    a = wBattleType;
    zero = (a == BATTLE_TYPE_SAFARI); carry = (a < BATTLE_TYPE_SAFARI); // Compare
    goto nz;
    // safari battle
    a = SAFARI_ROCK;
    wCurItem = a;
    goto UseBagItem;
    if (carry) LoadScreenTilesFromBuffer1();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // NORMAL_PARTY_MENU
    wPartyMenuTypeOrMessageID = a;
    wMenuItemToSwap = a;
    if (carry) DisplayPartyMenu();
    goto nc; // if a party mon was selected, jump, else we quit the party menu
    if (carry) ClearSprites();
    if (carry) GBPalWhiteOut();
    if (carry) LoadHudTilePatterns();
    if (carry) LoadScreenTilesFromBuffer2();
    if (carry) RunDefaultPaletteCommand();
    if (carry) GBPalNormal();
    goto DisplayBattleMenu;
    /* hlcoord */
    bc = 6 * SCREEN_WIDTH + 9;
    a = ' ';
    if (carry) FillMemory();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // NORMAL_PARTY_MENU
    wPartyMenuTypeOrMessageID = a;
    if (carry) GoBackToPartyMenu();
    goto .checkIfPartyMonWasSelected;
    a = SWITCH_STATS_CANCEL_MENU_TEMPLATE;
    wTextBoxID = a;
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
    goto nz; // if B was pressed, jump
    // A was pressed
    if (carry) PlaceUnfilledArrowMenuCursor();
    a = wCurrentMenuItem;
    zero = (a == 0x2); carry = (a < 0x2); // Compare // was Cancel selected?
    goto z; // if so, quit the party menu entirely
    a &= a; zero = (a == 0); // TODO: set other flags // was Switch selected?
    goto z; // if so, jump
    // Stats was selected
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // PLAYER_PARTY_DATA
    wMonDataLocation = a;
    hl = wPartyMon1;
    if (carry) ClearSprites();
    // display the two status screens
    /* predef */
    /* predef */
    // now we need to reload the enemy mon pic
    a = wEnemyBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0); // does the enemy mon have a substitute?
    hl = AnimationSubstitute;
    goto nz;
    // enemy mon doesn't have substitute
    a = wEnemyMonMinimized;
    a &= a; zero = (a == 0); // TODO: set other flags // has the enemy mon used Minimize?
    hl = AnimationMinimizeMon;
    goto nz;
    // enemy mon is not minimized
    a = wEnemyMonSpecies;
    wCurPartySpecies = a;
    wCurSpecies = a;
    if (carry) GetMonHeader();
    de = vFrontPic;
    if (carry) LoadMonFrontSprite();
    goto .enemyMonPicReloaded;
    b = BANK(AnimationSubstitute); // BANK(AnimationMinimizeMon)
    if (carry) Bankswitch();
    goto .partyMenuWasSelected;
    a = wPlayerMonNumber;
    d = a;
    a = wWhichPokemon;
    zero = (a == d); carry = (a < d); // Compare // check if the mon to switch to is already out
    goto nz;
    // mon is already out
    hl = AlreadyOutText;
    if (carry) PrintText();
    goto .partyMonDeselected;
    if (carry) HasMonFainted();
    goto z; // can't switch to fainted mon
    a = 0x1;
    wActionResultOrTookBattleTurn = a;
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

    if (carry) RetreatMon();
    c = 50;
    if (carry) DelayFrames();
    if (carry) AnimateRetreatingPlayerMon();
    a = wWhichPokemon;
    wPlayerMonNumber = a;
    c = a;
    b = FLAG_SET;
    /* PUSH bc - TODO: implement stack */
    hl = wPartyGainExpFlags;
    /* predef */
    /* POP bc - TODO: implement stack */
    hl = wPartyFoughtCurrentEnemyFlags;
    /* predef */
    if (carry) LoadBattleMonFromParty();
    if (carry) SendOutMon();
    if (carry) SaveScreenTilesToBuffer1();
    a = 0x2;
    wCurrentMenuItem = a;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
}

void AlreadyOutText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

uint16_t BattleMenu_RunWasSelected() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) LoadScreenTilesFromBuffer1();
    a = 0x3;
    wCurrentMenuItem = a;
    hl = wBattleMonSpeed;
    de = wEnemyMonSpeed;
    if (carry) TryRunningFromBattle();
    a = 0;
    wForcePlayerToChooseMon = a;
    return;
}

uint8_t MoveSelectionMenu() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wMoveMenuType;
    a--; // TODO: set flags
    goto z;
    a--; // TODO: set flags
    goto z;
    goto .regularmenu;
    de = wMoves;
    bc = NUM_MOVES;
    if (carry) CopyData();
    if (carry) FormatMovesString();
    return;
}

uint16_t SelectMenuItem() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wMoveMenuType;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    a--; // TODO: set flags
    goto nz;
    /* hlcoord */
    de = WhichTechniqueString;
    if (carry) PlaceString();
    goto .select;
    // ; Hide move swap cursor in TestBattle.
    a = wStatusFlags7;
    zero = ((a & (1 << BIT_TEST_BATTLE)) == 0);
    // ; This causes PrintMenuItem to not run in TestBattle.
    // ; MoveSelectionMenu still draws part of its window, an issue
    // ; which did not seem to exist in the Japanese versions.
    goto nz;
    if (carry) PrintMenuItem();
    a = wMenuItemToSwap;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    /* hlcoord */
    a--; // TODO: set flags
    bc = SCREEN_WIDTH;
    if (carry) AddNTimes();
    hl = '▷';
    hl = hUILayoutFlags;
    hl |= (1 << BIT_DOUBLE_SPACED_MENU);
    if (carry) HandleMenuInput();
    hl = hUILayoutFlags;
    hl &= ~(1 << BIT_DOUBLE_SPACED_MENU);
    zero = ((a & (1 << B_PAD_UP)) == 0);
    goto nz;
    zero = ((a & (1 << B_PAD_DOWN)) == 0);
    goto nz;
    zero = ((a & (1 << B_PAD_SELECT)) == 0);
    goto nz;
    zero = ((a & (1 << B_PAD_B)) == 0);
    /* PUSH af - TODO: implement stack */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wMenuItemToSwap = a;
    a = wCurrentMenuItem;
    a--; // TODO: set flags
    wCurrentMenuItem = a;
    b = a;
    a = wMoveMenuType;
    a--; // TODO: set flags // if not mimic
    goto nz;
    /* POP af - TODO: implement stack */
    return;
}

void MoveNoPPText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void MoveDisabledText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void WhichTechniqueString() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* db */
}

void SelectMenuItem_CursorUp() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wCurrentMenuItem;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto nz;
    if (carry) EraseMenuCursor();
    a = wNumMovesMinusOne;
    a++; // TODO: set flags
    wCurrentMenuItem = a;
    goto SelectMenuItem;
}

void SelectMenuItem_CursorDown() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wCurrentMenuItem;
    b = a;
    a = wNumMovesMinusOne;
    a++; // TODO: set flags
    a++; // TODO: set flags
    zero = (a == b); carry = (a < b); // Compare
    goto nz;
    if (carry) EraseMenuCursor();
    a = 0x1;
    wCurrentMenuItem = a;
    goto SelectMenuItem;
}

uint16_t AnyMoveToSelect() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // return z and Struggle as the selected move if all moves have 0 PP and/or are disabled
    a = STRUGGLE;
    wPlayerSelectedMove = a;
    a = wPlayerDisabledMove;
    a &= a; zero = (a == 0); // TODO: set other flags
    hl = wBattleMonPP;
    goto nz;
    a = hli;
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl++; // TODO: set flags
    a |= hl; zero = (a == 0); // TODO: set other flags
    hl++; // TODO: set flags
    a |= hl; zero = (a == 0); // TODO: set other flags
    a &= PP_MASK; zero = (a == 0); // TODO: set other flags
    return;
}

void NoMovesLeftText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

uint16_t SwapMovesInMenu() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wMenuItemToSwap;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    hl = wBattleMonMoves;
    if (carry) .swapBytes(); // swap moves
    hl = wBattleMonPP;
    if (carry) .swapBytes(); // swap move PP
    // update the index of the disabled move if necessary
    hl = wPlayerDisabledMove;
    a = hl;
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a &= 0xf; zero = (a == 0); // TODO: set other flags
    b = a;
    a = wCurrentMenuItem;
    zero = (a == b); carry = (a < b); // Compare
    goto nz;
    a = hl;
    a &= 0xf; zero = (a == 0); // TODO: set other flags
    b = a;
    a = wMenuItemToSwap;
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a = (uint8_t)(a + b); // TODO: set flags
    hl = a;
    goto .swapMovesInPartyMon;
    a = wMenuItemToSwap;
    zero = (a == b); carry = (a < b); // Compare
    goto nz;
    a = hl;
    a &= 0xf; zero = (a == 0); // TODO: set other flags
    b = a;
    a = wCurrentMenuItem;
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a = (uint8_t)(a + b); // TODO: set flags
    hl = a;
    hl = wPartyMon1Moves;
    a = wPlayerMonNumber;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    /* PUSH hl - TODO: implement stack */
    if (carry) .swapBytes(); // swap moves
    /* POP hl - TODO: implement stack */
    bc = MON_PP - MON_MOVES;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    if (carry) .swapBytes(); // swap move PP
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wMenuItemToSwap = a; // deselect the item
    goto MoveSelectionMenu;
    /* PUSH hl - TODO: implement stack */
    a = wMenuItemToSwap;
    a--; // TODO: set flags
    c = a;
    b = 0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    d = h;
    e = l;
    /* POP hl - TODO: implement stack */
    a = wCurrentMenuItem;
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
}

void PrintMenuItem() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    /* hlcoord */
    b = 3;
    c = 9;
    if (carry) TextBoxBorder();
    a = wPlayerDisabledMove;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    a = (uint8_t)((a >> 4) | (a << 4)); // SWAP
    a &= 0xf; zero = (a == 0); // TODO: set other flags
    b = a;
    a = wCurrentMenuItem;
    zero = (a == b); carry = (a < b); // Compare
    goto nz;
    /* hlcoord */
    de = DisabledText;
    if (carry) PlaceString();
    goto .moveDisabled;
    hl = wCurrentMenuItem;
    hl--; // TODO: set flags
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM)
    hl = wBattleMonMoves;
    a = wCurrentMenuItem;
    c = a;
    b = 0x0; // which item in the menu is the cursor pointing to? (0-3)
    hl = (uint16_t)(hl + bc); // TODO: set flags // point to the item (move) in memory
    a = hl;
    wPlayerSelectedMove = a; // update wPlayerSelectedMove even if the move
    // ; isn't actually selected (just pointed to by the cursor)
    a = wPlayerMonNumber;
    wWhichPokemon = a;
    a = BATTLE_MON_DATA;
    wMonDataLocation = a;
    if (carry) GetMaxPP();
    hl = wCurrentMenuItem;
    c = hl;
    hl++; // TODO: set flags
    b = 0x0;
    hl = wBattleMonPP;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hl;
    a &= PP_MASK; zero = (a == 0); // TODO: set other flags
    wBattleMenuCurrentPP = a;
    // print TYPE/<type> and <curPP>/<maxPP>
    /* hlcoord */
    de = TypeText;
    if (carry) PlaceString();
    /* hlcoord */
    hl = '/';
    /* hlcoord */
    hl = '/';
    /* hlcoord */
    de = wBattleMenuCurrentPP;
    /* lb */
    if (carry) PrintNumber();
    /* hlcoord */
    de = wMaxPP;
    /* lb */
    if (carry) PrintNumber();
    if (carry) GetCurrentMove();
    /* hlcoord */
    /* predef */
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    goto Delay3;
}

void DisabledText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* db */
}

void TypeText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* db */
}

uint8_t SelectEnemyMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wLinkState;
    a = (uint8_t)(a - LINK_STATE_BATTLING); // TODO: set flags
    goto nz;
    // link battle
    if (carry) SaveScreenTilesToBuffer1();
    if (carry) LinkBattleExchangeData();
    if (carry) LoadScreenTilesFromBuffer1();
    a = wSerialExchangeNybbleReceiveData;
    zero = (a == LINKBATTLE_STRUGGLE); carry = (a < LINKBATTLE_STRUGGLE); // Compare
    goto z;
    zero = (a == LINKBATTLE_NO_ACTION); carry = (a < LINKBATTLE_NO_ACTION); // Compare
    goto z;
    zero = (a == 4); carry = (a < 4); // Compare
    return;
}

uint8_t LinkBattleExchangeData() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = 0xff;
    wSerialExchangeNybbleReceiveData = a;
    a = wPlayerMoveListIndex;
    zero = (a == LINKBATTLE_RUN); carry = (a < LINKBATTLE_RUN); // Compare // is the player running from battle?
    goto z;
    a = wActionResultOrTookBattleTurn;
    a &= a; zero = (a == 0); // TODO: set other flags // is the player switching in another mon?
    goto nz;
    // the player used a move
    a = wPlayerSelectedMove;
    zero = (a == STRUGGLE); carry = (a < STRUGGLE); // Compare
    b = LINKBATTLE_STRUGGLE;
    goto z;
    b--; // TODO: set flags // LINKBATTLE_NO_ACTION
    /* assert */
    a++; // TODO: set flags
    goto z;
    a = wPlayerMoveListIndex;
    goto .doExchange;
    a = wWhichPokemon;
    a = (uint8_t)(a + 4); // TODO: set flags
    b = a;
    a = b;
    wSerialExchangeNybbleSendData = a;
    /* vc_hook */
    if (carry) PrintWaitingText();
    if (carry) Serial_ExchangeNybble();
    if (carry) DelayFrame();
    a = wSerialExchangeNybbleReceiveData;
    a++; // TODO: set flags
    goto z;
    /* vc_hook */
    /* vc_patch */
    /* if */
    b = 26;
    /* else */
    b = 10;
    /* endc */
    /* vc_patch_end */
    if (carry) DelayFrame();
    if (carry) Serial_ExchangeNybble();
    b--; // TODO: set flags
    goto nz;
    /* vc_hook */
    /* vc_patch */
    /* if */
    b = 26;
    /* else */
    b = 10;
    /* endc */
    /* vc_patch_end */
    if (carry) DelayFrame();
    if (carry) Serial_SendZeroByte();
    b--; // TODO: set flags
    goto nz;
    /* vc_hook */
    return;
}

void ExecutePlayerMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hWhoseTurn = a; // LDH (High RAM) // set player's turn
    a = wPlayerSelectedMove;
    /* assert */
    a++; // TODO: set flags
    goto z; // if the player cannot move, skip most of their turn
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wMoveMissed = a;
    wMonIsDisobedient = a;
    wMoveDidntMiss = a;
    a = EFFECTIVE;
    wDamageMultipliers = a;
    a = wActionResultOrTookBattleTurn;
    a &= a; zero = (a == 0); // TODO: set other flags // has the player already used the turn (e.g. by using an item, trying to run or switching pokemon)
    goto nz;
    if (carry) PrintGhostText();
    goto z;
    if (carry) CheckPlayerStatusConditions();
    goto nz;
    goto hl;
    if (carry) GetCurrentMove();
    hl = wPlayerBattleStatus1;
    zero = ((hl & (1 << CHARGING_UP)) == 0); // charging up for attack
    goto nz;
    if (carry) CheckForDisobedience();
    goto z;
}

void CheckIfPlayerNeedsToChargeUp() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPlayerMoveEffect;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    goto z;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    goto z;
    goto PlayerCanExecuteMove;
    // in-battle stuff
}

void PlayerCanExecuteChargingMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

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

    if (carry) DisplayUsedMoveText();
    hl = DecrementPP;
    de = wPlayerSelectedMove; // pointer to the move just used
    b = BANK(DecrementPP);
    if (carry) Bankswitch();
    a = wPlayerMoveEffect; // effect of the move just used
    hl = ResidualEffects1;
    de = 1;
    if (carry) IsInArray();
    goto c; // ResidualEffects1 moves skip damage calculation and accuracy tests
    // ; unless executed as part of their exclusive effect functions
    a = wPlayerMoveEffect;
    hl = SpecialEffectsCont;
    de = 1;
    if (carry) IsInArray();
    if (carry) c(); // execute the effects of SpecialEffectsCont moves (e.g. Wrap, Thrash) but don't skip anything
}

void PlayerCalcMoveDamage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPlayerMoveEffect;
    hl = SetDamageEffects;
    de = 1;
    if (carry) IsInArray();
    goto c; // SetDamageEffects moves (e.g. Seismic Toss and Super Fang) skip damage calculation
    if (carry) CriticalHitTest();
    if (carry) HandleCounterMove();
    goto z;
    if (carry) GetDamageVarsForPlayerAttack();
    if (carry) CalculateDamage();
    goto z; // for moves with 0 BP, skip any further damage calculation and, for now, skip MoveHitTest
    // ; for these moves, accuracy tests will only occur if they are called as part of the effect itself
    if (carry) AdjustDamageForMoveType();
    if (carry) RandomizeDamage();
    if (carry) MoveHitTest();
}

void HandleIfPlayerMoveMissed() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wMoveMissed;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    a = wPlayerMoveEffect;
    a = (uint8_t)(a - EXPLODE_EFFECT); // TODO: set flags
    goto z; // don't play any animation if the move missed, unless it was EXPLODE_EFFECT
    goto PlayerCheckIfFlyOrChargeEffect;
}

void GetPlayerAnimationType() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPlayerMoveEffect;
    a &= a; zero = (a == 0); // TODO: set other flags
    a = ANIMATIONTYPE_BLINK_ENEMY_MON_SPRITE; // move has no effect other than dealing damage
    goto z;
    a = ANIMATIONTYPE_SHAKE_SCREEN_HORIZONTALLY_LIGHT; // move has effect
}

void PlayPlayerMoveAnimation() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* PUSH af - TODO: implement stack */
    a = wPlayerBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0);
    hl = HideSubstituteShowMonAnim;
    b = BANK(HideSubstituteShowMonAnim);
    if (carry) nz();
    /* POP af - TODO: implement stack */
    wAnimationType = a;
    a = wPlayerMoveNum;
    if (carry) PlayMoveAnimation();
    if (carry) HandleExplodingAnimation();
    if (carry) DrawPlayerHUDAndHPBar();
    a = wPlayerBattleStatus2;
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

    c = 30;
    if (carry) DelayFrames();
    a = wPlayerMoveEffect;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    goto z;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    goto z;
    goto MirrorMoveCheck;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
    a = STATUS_AFFECTED_ANIM;
    if (carry) PlayMoveAnimation();
}

uint16_t MirrorMoveCheck() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPlayerMoveEffect;
    zero = (a == MIRROR_MOVE_EFFECT); carry = (a < MIRROR_MOVE_EFFECT); // Compare
    goto nz;
    if (carry) MirrorMoveCopyMove();
    goto z;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wMonIsDisobedient = a;
    goto CheckIfPlayerNeedsToChargeUp; // if Mirror Move was successful go back to damage calculation for copied move
    zero = (a == METRONOME_EFFECT); carry = (a < METRONOME_EFFECT); // Compare
    goto nz;
    if (carry) MetronomePickMove();
    goto CheckIfPlayerNeedsToChargeUp; // Go back to damage calculation for the move picked by Metronome
    a = wPlayerMoveEffect;
    hl = ResidualEffects2;
    de = 1;
    if (carry) IsInArray();
    goto c; // done here after executing effects of ResidualEffects2
    a = wMoveMissed;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    if (carry) PrintMoveFailureText();
    a = wPlayerMoveEffect;
    zero = (a == EXPLODE_EFFECT); carry = (a < EXPLODE_EFFECT); // Compare // even if Explosion or Selfdestruct missed, its effect still needs to be activated
    goto z;
    goto ExecutePlayerMoveDone; // otherwise, we're done if the move missed
    if (carry) ApplyAttackToEnemyPokemon();
    if (carry) PrintCriticalOHKOText();
    if (carry) DisplayEffectiveness();
    a = 1;
    wMoveDidntMiss = a;
    a = wPlayerMoveEffect;
    hl = AlwaysHappenSideEffects;
    de = 1;
    if (carry) IsInArray();
    if (carry) c(); // not done after executing effects of AlwaysHappenSideEffects
    hl = wEnemyMonHP;
    a = hli;
    b = hl;
    a |= b; zero = (a == 0); // TODO: set other flags
    return; // don't do anything else if the enemy fainted
}

void MultiHitText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

uint8_t ExecutePlayerMoveDone() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wActionResultOrTookBattleTurn = a;
    b = 1;
    return;
}

void PrintGhostText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // print the ghost battle messages
    if (carry) IsGhostBattle();
    return;
}

void ScaredText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void GetOutText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

uint8_t IsGhostBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wIsInBattle;
    a--; // TODO: set flags
    return;
}

uint16_t CheckPlayerStatusConditions() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = wBattleMonStatus;
    a = hl;
    a &= SLP_MASK; zero = (a == 0); // TODO: set other flags
    goto z;
    // sleeping
    a--; // TODO: set flags
    wBattleMonStatus = a; // decrement number of turns left
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z; // if the number of turns hit 0, wake up
    // fast asleep
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
    a = SLP_PLAYER_ANIM;
    if (carry) PlayMoveAnimation();
    hl = FastAsleepText;
    if (carry) PrintText();
    goto .sleepDone;
    hl = WokeUpText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wPlayerUsedMove = a;
    hl = ExecutePlayerMoveDone; // player can't move this turn
    goto .returnToHL;
    zero = ((hl & (1 << FRZ)) == 0); // frozen?
    goto z;
    hl = IsFrozenText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wPlayerUsedMove = a;
    hl = ExecutePlayerMoveDone; // player can't move this turn
    goto .returnToHL;
    a = wEnemyBattleStatus1;
    zero = ((a & (1 << USING_TRAPPING_MOVE)) == 0); // is enemy using a multi-turn move like wrap?
    goto z;
    hl = CantMoveText;
    if (carry) PrintText();
    hl = ExecutePlayerMoveDone; // player can't move this turn
    goto .returnToHL;
    hl = wPlayerBattleStatus1;
    zero = ((hl & (1 << FLINCHED)) == 0);
    goto z;
    hl &= ~(1 << FLINCHED); // reset player's flinch status
    hl = FlinchedText;
    if (carry) PrintText();
    hl = ExecutePlayerMoveDone; // player can't move this turn
    goto .returnToHL;
    hl = wPlayerBattleStatus2;
    zero = ((hl & (1 << NEEDS_TO_RECHARGE)) == 0);
    goto z;
    hl &= ~(1 << NEEDS_TO_RECHARGE); // reset player's recharge status
    hl = MustRechargeText;
    if (carry) PrintText();
    hl = ExecutePlayerMoveDone; // player can't move this turn
    goto .returnToHL;
    hl = wPlayerDisabledMove;
    a = hl;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    a--; // TODO: set flags
    hl = a;
    a &= 0xf; zero = (a == 0); // TODO: set other flags // did Disable counter hit 0?
    goto nz;
    hl = a;
    wPlayerDisabledMoveNumber = a;
    hl = DisabledNoMoreText;
    if (carry) PrintText();
    a = wPlayerBattleStatus1;
    a = (uint8_t)(a + a); // TODO: set flags // is player confused?
    goto nc;
    hl = wPlayerConfusedCounter;
    hl--; // TODO: set flags
    goto nz;
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << CONFUSED); // if confused counter hit 0, reset confusion status
    hl = ConfusedNoMoreText;
    if (carry) PrintText();
    goto .TriedToUseDisabledMoveCheck;
    hl = IsConfusedText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
    a = CONF_PLAYER_ANIM;
    if (carry) PlayMoveAnimation();
    if (carry) BattleRandom();
    zero = (a == 50 percent + 1); carry = (a < 50 percent + 1); // Compare // chance to hurt itself
    goto c;
    hl = wPlayerBattleStatus1;
    a = hl;
    a &= 1 << CONFUSED; zero = (a == 0); // TODO: set other flags // if mon hurts itself, clear every other status from wPlayerBattleStatus1
    hl = a;
    if (carry) HandleSelfConfusionDamage();
    goto .MonHurtItselfOrFullyParalysed;
    // prevents a disabled move that was selected before being disabled from being used
    a = wPlayerDisabledMoveNumber;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    hl = wPlayerSelectedMove;
    zero = (a == hl); carry = (a < hl); // Compare
    goto nz;
    if (carry) PrintMoveIsDisabledText();
    hl = ExecutePlayerMoveDone; // if a disabled move was somehow selected, player can't move this turn
    goto .returnToHL;
    hl = wBattleMonStatus;
    zero = ((hl & (1 << PAR)) == 0);
    goto z;
    if (carry) BattleRandom();
    zero = (a == 25 percent); carry = (a < 25 percent); // Compare // chance to be fully paralyzed
    goto nc;
    hl = FullyParalyzedText;
    if (carry) PrintText();
    hl = wPlayerBattleStatus1;
    a = hl;
    // ; clear bide, thrashing, charging up, and trapping moves such as warp (already cleared for confusion damage)
    a &= ~((1 << STORING_ENERGY) | (1 << THRASHING_ABOUT) | (1 << CHARGING_UP) | (1 << USING_TRAPPING_MOVE)); zero = (a == 0); // TODO: set other flags
    hl = a;
    a = wPlayerMoveEffect;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    goto z;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    goto z;
    goto .NotFlyOrChargeEffect;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
    a = STATUS_AFFECTED_ANIM;
    if (carry) PlayMoveAnimation();
    hl = ExecutePlayerMoveDone;
    goto .returnToHL; // if using a two-turn move, we need to recharge the first turn
    hl = wPlayerBattleStatus1;
    zero = ((hl & (1 << STORING_ENERGY)) == 0); // is mon using bide?
    goto z;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wPlayerMoveNum = a;
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
    goto z;
    hl = ExecutePlayerMoveDone;
    goto .returnToHL; // unless mon unleashes energy, can't move this turn
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << STORING_ENERGY); // not using bide any more
    hl = UnleashedEnergyText;
    if (carry) PrintText();
    a = 1;
    wPlayerMovePower = a;
    hl = wPlayerBideAccumulatedDamage + 1;
    a = hld;
    a = (uint8_t)(a + a); // TODO: set flags
    b = a;
    wDamage + 1 = a;
    a = hl;
    { uint8_t temp = a; a = (uint8_t)((a << 1) | (carry ? 1 : 0)); carry = (temp & 0x80) != 0; } // RL // double the damage
    wDamage = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    goto nz;
    a = 1;
    wMoveMissed = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    hl = a;
    a = BIDE;
    wPlayerMoveNum = a;
    hl = HandleIfPlayerMoveMissed; // skip damage calculation, DecrementPP and MoveHitTest
    goto .returnToHL;
    zero = ((hl & (1 << THRASHING_ABOUT)) == 0); // is mon using thrash or petal dance?
    goto z;
    a = THRASH;
    wPlayerMoveNum = a;
    hl = ThrashingAboutText;
    if (carry) PrintText();
    hl = wPlayerNumAttacksLeft;
    hl--; // TODO: set flags // did Thrashing About counter hit 0?
    hl = PlayerCalcMoveDamage; // skip DecrementPP
    goto nz;
    /* PUSH hl - TODO: implement stack */
    hl = wPlayerBattleStatus1;
    hl &= ~(1 << THRASHING_ABOUT); // no longer thrashing about
    hl |= (1 << CONFUSED); // confused
    if (carry) BattleRandom();
    a &= 3; zero = (a == 0); // TODO: set other flags
    a++; // TODO: set flags
    a++; // TODO: set flags // confused for 2-5 turns
    wPlayerConfusedCounter = a;
    /* POP hl - TODO: implement stack */ // skip DecrementPP
    goto .returnToHL;
    zero = ((hl & (1 << USING_TRAPPING_MOVE)) == 0); // is mon using multi-turn move?
    goto z;
    hl = AttackContinuesText;
    if (carry) PrintText();
    a = wPlayerNumAttacksLeft;
    a--; // TODO: set flags
    wPlayerNumAttacksLeft = a;
    hl = GetPlayerAnimationType; // skip damage calculation (deal damage equal to last hit),
    // ; DecrementPP and MoveHitTest
    goto nz; // redundant leftover code, the case wEnemyNumAttacksLeft == 0
    // ; is handled within CheckNumAttacksLeft
    goto .returnToHL;
    a = wPlayerBattleStatus2;
    zero = ((a & (1 << USING_RAGE)) == 0); // is mon using rage?
    goto z; // if we made it this far, mon can move normally this turn
    a = RAGE;
    wNamedObjectIndex = a;
    if (carry) GetMoveName();
    if (carry) CopyToStringBuffer();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wPlayerMoveEffect = a;
    hl = PlayerCanExecuteMove;
    goto .returnToHL;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
}

void FastAsleepText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void WokeUpText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void IsFrozenText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void FullyParalyzedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void FlinchedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void MustRechargeText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void DisabledNoMoreText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void IsConfusedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void HurtItselfText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void ConfusedNoMoreText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void SavingEnergyText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void UnleashedEnergyText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void ThrashingAboutText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void AttackContinuesText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void CantMoveText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void PrintMoveIsDisabledText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = wPlayerSelectedMove;
    de = wPlayerBattleStatus1;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    hl++; // TODO: set flags
    de = wEnemyBattleStatus1;
    a = de;
    a &= ~(1 << CHARGING_UP); // end the pokemon's
    de = a;
    a = hl;
    wNamedObjectIndex = a;
    if (carry) GetMoveName();
    hl = MoveIsDisabledText;
    goto PrintText;
}

void MoveIsDisabledText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void HandleSelfConfusionDamage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = HurtItselfText;
    if (carry) PrintText();
    hl = wEnemyMonDefense;
    a = hli;
    /* PUSH af - TODO: implement stack */
    a = hld;
    /* PUSH af - TODO: implement stack */
    a = wBattleMonDefense;
    hli = a;
    a = wBattleMonDefense + 1;
    hl = a;
    hl = wPlayerMoveEffect;
    /* PUSH hl - TODO: implement stack */
    a = hl;
    /* PUSH af - TODO: implement stack */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    wCriticalHitOrOHKO = a; // self-inflicted confusion damage can't be a Critical Hit
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
    wAnimationType = a;
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

    de = wPlayerMoveEffect;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    de = wEnemyMoveEffect;
    hl = DoesntAffectMonText;
    a = wDamageMultipliers;
    a &= EFFECTIVENESS_MASK; zero = (a == 0); // TODO: set other flags
    goto z;
    hl = AttackMissedText;
    a = wCriticalHitOrOHKO;
    zero = (a == 0xff); carry = (a < 0xff); // Compare
    goto nz;
    hl = UnaffectedText;
    /* PUSH de - TODO: implement stack */
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wCriticalHitOrOHKO = a;
    /* POP de - TODO: implement stack */
    a = de;
    zero = (a == JUMP_KICK_EFFECT); carry = (a < JUMP_KICK_EFFECT); // Compare
    return;
}

void AttackMissedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void KeptGoingAndCrashedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void UnaffectedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void PrintDoesntAffectText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = DoesntAffectMonText;
    goto PrintText;
}

void DoesntAffectMonText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // if there was a critical hit or an OHKO was successful, print the corresponding text
}

void PrintCriticalOHKOText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wCriticalHitOrOHKO;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z; // do nothing if there was no critical hit or successful OHKO
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
    wCriticalHitOrOHKO = a;
    c = 20;
    goto DelayFrames;
}

void CriticalOHKOTextPointers() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* dw */
    /* dw */
}

void CriticalHitText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void OHKOText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // checks if a traded mon will disobey due to lack of badges
    // stores whether the mon will use a move in Z flag
}

uint8_t CheckForDisobedience() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wMonIsDisobedient = a;
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto nz;
    a = 0x1;
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
}

void LoafingAroundText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void BeganToNapText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void WontObeyText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void TurnedAwayText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void IgnoredOrdersText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // sets b, c, d, and e for the CalculateDamage routine in the case of an attack by the player mon
}

uint16_t GetDamageVarsForPlayerAttack() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wDamage; // damage to eventually inflict, initialise to zero
    hli = a;
    hl = a;
    hl = wPlayerMovePower;
    a = hli;
    a &= a; zero = (a == 0); // TODO: set other flags
    d = a; // d = move power
    return; // return if move power is zero
}

uint16_t GetDamageVarsForEnemyAttack() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = wDamage; // damage to eventually inflict, initialise to zero
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    hl = a;
    hl = wEnemyMovePower;
    a = hli;
    d = a; // d = move power
    a &= a; zero = (a == 0); // TODO: set other flags
    return; // return if move power is zero
}

uint16_t GetEnemyMonStat() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* PUSH de - TODO: implement stack */
    /* PUSH bc - TODO: implement stack */
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto nz;
    hl = wEnemyMon1Stats;
    c--; // TODO: set flags
    carry = (c & 0x80) != 0; c = (uint8_t)(c << 1); // SLA
    b = 0x0;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = wEnemyMonPartyPos;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    a = hli;
    hMultiplicand + 1 = a; // LDH (High RAM)
    a = hl;
    hMultiplicand + 2 = a; // LDH (High RAM)
    /* POP bc - TODO: implement stack */
    /* POP de - TODO: implement stack */
    return;
}

uint8_t CalculateDamage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // input:
    // b: attack
    // c: opponent defense
    // d: base power
    // e: level
    a = hWhoseTurn; // LDH (High RAM) // whose turn?
    a &= a; zero = (a == 0); // TODO: set other flags
    a = wPlayerMoveEffect;
    goto z;
    a = wEnemyMoveEffect;
    // EXPLODE_EFFECT halves defense.
    zero = (a == EXPLODE_EFFECT); carry = (a < EXPLODE_EFFECT); // Compare
    goto nz;
    carry = (c & 1) != 0; c = (uint8_t)(c >> 1); // SRL
    goto nz;
    c++; // TODO: set flags // ...with a minimum value of 1 (used as a divisor later on)
    // Multi-hit attacks may or may not have 0 bp.
    zero = (a == TWO_TO_FIVE_ATTACKS_EFFECT); carry = (a < TWO_TO_FIVE_ATTACKS_EFFECT); // Compare
    goto z;
    zero = (a == EFFECT_1E); carry = (a < EFFECT_1E); // Compare
    goto z;
    // Calculate OHKO damage based on remaining HP.
    zero = (a == OHKO_EFFECT); carry = (a < OHKO_EFFECT); // Compare
    goto z;
    // Don't calculate damage for moves that don't do any.
    a = d; // base power
    a &= a; zero = (a == 0); // TODO: set other flags
    return;
}

uint8_t JumpToOHKOMoveEffect() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) JumpMoveEffect();
    a = wMoveMissed;
    a--; // TODO: set flags
    return;
}

uint16_t CriticalHitTest() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wCriticalHitOrOHKO = a;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    a = wEnemyMonSpecies;
    goto nz;
    a = wBattleMonSpecies;
    wCurSpecies = a;
    if (carry) GetMonHeader();
    a = wMonHBaseSpeed;
    b = a;
    carry = (b & 1) != 0; b = (uint8_t)(b >> 1); // SRL // (effective (base speed/2))
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    hl = wPlayerMovePower;
    de = wPlayerBattleStatus2;
    goto z;
    hl = wEnemyMovePower;
    de = wEnemyBattleStatus2;
    a = hld; // read base power from RAM
    a &= a; zero = (a == 0); // TODO: set other flags
    return; // do nothing if zero
}

uint16_t HandleCounterMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

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
    a = wPlayerSelectedMove;
    goto z;
    // enemy's turn
    hl = wPlayerSelectedMove;
    de = wPlayerMovePower;
    a = wEnemySelectedMove;
    zero = (a == COUNTER); carry = (a < COUNTER); // Compare
    return; // return if not using Counter
}

void ApplyAttackToEnemyPokemon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPlayerMoveEffect;
    zero = (a == OHKO_EFFECT); carry = (a < OHKO_EFFECT); // Compare
    goto z;
    zero = (a == SUPER_FANG_EFFECT); carry = (a < SUPER_FANG_EFFECT); // Compare
    goto z;
    zero = (a == SPECIAL_DAMAGE_EFFECT); carry = (a < SPECIAL_DAMAGE_EFFECT); // Compare
    goto z;
    a = wPlayerMovePower;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z; // no attack to apply if base power is 0
    goto ApplyDamageToEnemyPokemon;
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
    goto nz;
    // make sure Super Fang's damage is always at least 1
    a = 0x01;
    de = a;
    goto ApplyDamageToEnemyPokemon;
    hl = wBattleMonLevel;
    a = hl;
    b = a; // Seismic Toss deals damage equal to the user's level
    a = wPlayerMoveNum;
    zero = (a == SEISMIC_TOSS); carry = (a < SEISMIC_TOSS); // Compare
    goto z;
    zero = (a == NIGHT_SHADE); carry = (a < NIGHT_SHADE); // Compare
    goto z;
    b = SONICBOOM_DAMAGE; // 20
    zero = (a == SONICBOOM); carry = (a < SONICBOOM); // Compare
    goto z;
    b = DRAGON_RAGE_DAMAGE; // 40
    zero = (a == DRAGON_RAGE); carry = (a < DRAGON_RAGE); // Compare
    goto z;
    // Psywave
    a = hl;
    b = a;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    a = (uint8_t)(a + b); // TODO: set flags
    b = a; // b = level * 1.5
    // loop until a random number in the range [1, b) is found
    if (carry) BattleRandom();
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    zero = (a == b); carry = (a < b); // Compare
    goto nc;
    b = a;
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

    hl = wDamage;
    a = hli;
    b = a;
    a = hl;
    a |= b; zero = (a == 0); // TODO: set other flags
    goto z; // we're done if damage is 0
    a = wEnemyBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0); // does the enemy have a substitute?
    goto nz;
    // subtract the damage from the pokemon's current HP
    // also, save the current HP at wHPBarOldHP
    a = hld;
    b = a;
    a = wEnemyMonHP + 1;
    wHPBarOldHP = a;
    a = (uint8_t)(a - b); // TODO: set flags
    wEnemyMonHP + 1 = a;
    a = hl;
    b = a;
    a = wEnemyMonHP;
    wHPBarOldHP+1 = a;
    a = (uint8_t)(a - b - (carry ? 1 : 0)); // TODO: set flags
    wEnemyMonHP = a;
    goto nc;
    // if more damage was done than the current HP, zero the HP and set the damage (wDamage)
    // equal to how much HP the pokemon had before the attack
    a = wHPBarOldHP+1;
    hli = a;
    a = wHPBarOldHP;
    hl = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wEnemyMonHP;
    hli = a;
    hl = a;
    hl = wEnemyMonMaxHP;
    a = hli;
    wHPBarMaxHP+1 = a;
    a = hl;
    wHPBarMaxHP = a;
    hl = wEnemyMonHP;
    a = hli;
    wHPBarNewHP+1 = a;
    a = hl;
    wHPBarNewHP = a;
    /* hlcoord */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wHPBarType = a;
    /* predef */ // animate the HP bar shortening
}

void ApplyAttackToEnemyPokemonDone() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    goto DrawHUDsAndHPBars;
}

void ApplyAttackToPlayerPokemon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wEnemyMoveEffect;
    zero = (a == OHKO_EFFECT); carry = (a < OHKO_EFFECT); // Compare
    goto z;
    zero = (a == SUPER_FANG_EFFECT); carry = (a < SUPER_FANG_EFFECT); // Compare
    goto z;
    zero = (a == SPECIAL_DAMAGE_EFFECT); carry = (a < SPECIAL_DAMAGE_EFFECT); // Compare
    goto z;
    a = wEnemyMovePower;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    goto ApplyDamageToPlayerPokemon;
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
    goto nz;
    // make sure Super Fang's damage is always at least 1
    a = 0x01;
    de = a;
    goto ApplyDamageToPlayerPokemon;
    hl = wEnemyMonLevel;
    a = hl;
    b = a;
    a = wEnemyMoveNum;
    zero = (a == SEISMIC_TOSS); carry = (a < SEISMIC_TOSS); // Compare
    goto z;
    zero = (a == NIGHT_SHADE); carry = (a < NIGHT_SHADE); // Compare
    goto z;
    b = SONICBOOM_DAMAGE;
    zero = (a == SONICBOOM); carry = (a < SONICBOOM); // Compare
    goto z;
    b = DRAGON_RAGE_DAMAGE;
    zero = (a == DRAGON_RAGE); carry = (a < DRAGON_RAGE); // Compare
    goto z;
    // Psywave
    a = hl;
    b = a;
    carry = (a & 1) != 0; a = (uint8_t)(a >> 1); // SRL
    a = (uint8_t)(a + b); // TODO: set flags
    b = a; // b = attacker's level * 1.5
    // loop until a random number in the range [0, b) is found
    // this differs from the range when the player attacks, which is [1, b)
    // it's possible for the enemy to do 0 damage with Psywave, but the player always does at least 1 damage
    if (carry) BattleRandom();
    zero = (a == b); carry = (a < b); // Compare
    goto nc;
    b = a;
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

    hl = wDamage;
    a = hli;
    b = a;
    a = hl;
    a |= b; zero = (a == 0); // TODO: set other flags
    goto z; // we're done if damage is 0
    a = wPlayerBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0); // does the player have a substitute?
    goto nz;
    // subtract the damage from the pokemon's current HP
    // also, save the current HP at wHPBarOldHP and the new HP at wHPBarNewHP
    a = hld;
    b = a;
    a = wBattleMonHP + 1;
    wHPBarOldHP = a;
    a = (uint8_t)(a - b); // TODO: set flags
    wBattleMonHP + 1 = a;
    wHPBarNewHP = a;
    b = hl;
    a = wBattleMonHP;
    wHPBarOldHP+1 = a;
    a = (uint8_t)(a - b - (carry ? 1 : 0)); // TODO: set flags
    wBattleMonHP = a;
    wHPBarNewHP+1 = a;
    goto nc;
    // if more damage was done than the current HP, zero the HP and set the damage (wDamage)
    // equal to how much HP the pokemon had before the attack
    a = wHPBarOldHP+1;
    hli = a;
    a = wHPBarOldHP;
    hl = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl = wBattleMonHP;
    hli = a;
    hl = a;
    hl = wHPBarNewHP;
    hli = a;
    hl = a;
    hl = wBattleMonMaxHP;
    a = hli;
    wHPBarMaxHP+1 = a;
    a = hl;
    wHPBarMaxHP = a;
    /* hlcoord */
    a = 0x01;
    wHPBarType = a;
    /* predef */ // animate the HP bar shortening
}

void ApplyAttackToPlayerPokemonDone() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    goto DrawHUDsAndHPBars;
}

uint16_t AttackSubstitute() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

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
    goto z;
    // values for enemy turn
    de = wPlayerSubstituteHP;
    bc = wPlayerBattleStatus2;
    hl = wDamage;
    a = hli;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto nz; // damage > 0xFF always breaks substitutes
    // subtract damage from HP of substitute
    a = de;
    a = (uint8_t)(a - hl); // TODO: set flags
    de = a;
    return;
}

void SubstituteTookDamageText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void SubstituteBrokeText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // this function raises the attack modifier of a pokemon using Rage when that pokemon is attacked
}

uint16_t HandleBuildingRage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // values for the player turn
    hl = wEnemyBattleStatus2;
    de = wEnemyMonStatMods;
    bc = wEnemyMoveNum;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    // values for the enemy turn
    hl = wPlayerBattleStatus2;
    de = wPlayerMonStatMods;
    bc = wPlayerMoveNum;
    zero = ((hl & (1 << USING_RAGE)) == 0); // is the pokemon being attacked under the effect of Rage?
    return; // return if not
}

void BuildingRageText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // copy last move for Mirror Move
    // sets zero flag on failure and unsets zero flag on success
}

uint16_t MirrorMoveCopyMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // Mirror Move makes use of wPlayerUsedMove and wEnemyUsedMove,
    // which are mainly used to print the "[Pokemon] used [Move]" text.
    // Both are set to 0 whenever a new Pokemon is sent out
    // wPlayerUsedMove is also set to 0 whenever the player is fast asleep or frozen solid.
    // wEnemyUsedMove is also set to 0 whenever the enemy is fast asleep or frozen solid.
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    // values for player turn
    a = wEnemyUsedMove;
    hl = wPlayerSelectedMove;
    de = wPlayerMoveNum;
    goto z;
    // values for enemy turn
    a = wPlayerUsedMove;
    de = wEnemyMoveNum;
    hl = wEnemySelectedMove;
    hl = a;
    zero = (a == MIRROR_MOVE); carry = (a < MIRROR_MOVE); // Compare // did the target Pokemon last use Mirror Move, and miss?
    goto z;
    a &= a; zero = (a == 0); // TODO: set other flags // has the target selected any move yet?
    goto nz;
    hl = MirrorMoveFailedText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    return;
}

void MirrorMoveFailedText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
    // function used to reload move data for moves like Mirror Move and Metronome
}

uint16_t ReloadMoveData() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    wNamedObjectIndex = a;
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
}

void MetronomePickMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
    a = METRONOME;
    if (carry) PlayMoveAnimation(); // play Metronome's animation
    // values for player turn
    de = wPlayerMoveNum;
    hl = wPlayerSelectedMove;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    // values for enemy turn
    de = wEnemyMoveNum;
    hl = wEnemySelectedMove;
    // loop to pick a random number in the range of valid moves used by Metronome
    if (carry) BattleRandom();
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    zero = (a == STRUGGLE); carry = (a < STRUGGLE); // Compare
    /* assert */ // random numbers greater than STRUGGLE are not moves
    goto nc;
    zero = (a == METRONOME); carry = (a < METRONOME); // Compare
    goto z;
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

    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    // values for player turn
    hl = wBattleMonPP;
    de = wPartyMon1PP;
    a = wPlayerMoveListIndex;
    goto z;
    // values for enemy turn
    hl = wEnemyMonPP;
    de = wEnemyMon1PP;
    a = wEnemyMoveListIndex;
    b = 0x00;
    c = a;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    hl++; // TODO: set flags // increment PP in the currently battling pokemon memory location
    h = d;
    l = e;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    a = wPlayerMonNumber; // value for player turn
    goto z;
    a = wEnemyMonPartyPos; // value for enemy turn
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    hl++; // TODO: set flags // increment PP in the party memory location
    return;
}

uint16_t AdjustDamageForMoveType() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // values for player turn
    hl = wBattleMonType;
    a = hli;
    b = a; // b = type 1 of attacker
    c = hl; // c = type 2 of attacker
    hl = wEnemyMonType;
    a = hli;
    d = a; // d = type 1 of defender
    e = hl; // e = type 2 of defender
    a = wPlayerMoveType;
    wMoveType = a;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    // values for enemy turn
    hl = wEnemyMonType;
    a = hli;
    b = a; // b = type 1 of attacker
    c = hl; // c = type 2 of attacker
    hl = wBattleMonType;
    a = hli;
    d = a; // d = type 1 of defender
    e = hl; // e = type 2 of defender
    a = wEnemyMoveType;
    wMoveType = a;
    a = wMoveType;
    zero = (a == b); carry = (a < b); // Compare // does the move type match type 1 of the attacker?
    goto z;
    zero = (a == c); carry = (a < c); // Compare // does the move type match type 2 of the attacker?
    goto z;
    goto .skipSameTypeAttackBonus;
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
    wDamage = a;
    a = l;
    wDamage + 1 = a;
    hl = wDamageMultipliers;
    hl |= (1 << BIT_STAB_DAMAGE);
    a = wMoveType;
    b = a;
    hl = TypeEffects;
    a = hli; // a = "attacking type" of the current type pair
    zero = (a == 0xff); carry = (a < 0xff); // Compare
    goto z;
    zero = (a == b); carry = (a < b); // Compare // does move type match "attacking type"?
    goto nz;
    a = hl; // a = "defending type" of the current type pair
    zero = (a == d); carry = (a < d); // Compare // does type 1 of defender match "defending type"?
    goto z;
    zero = (a == e); carry = (a < e); // Compare // does type 2 of defender match "defending type"?
    goto z;
    goto .nextTypePair;
    // if the move type matches the "attacking type" and one of the defender's types matches the "defending type"
    /* PUSH hl - TODO: implement stack */
    /* PUSH bc - TODO: implement stack */
    hl++; // TODO: set flags
    a = wDamageMultipliers;
    a &= 1 << BIT_STAB_DAMAGE; zero = (a == 0); // TODO: set other flags
    b = a;
    a = hl; // a = damage multiplier
    hMultiplier = a; // LDH (High RAM)
    a = (uint8_t)(a + b); // TODO: set flags
    wDamageMultipliers = a;
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
    goto nz;
    // if damage is 0, make the move miss
    // this only occurs if a move that would do 2 or 3 damage is 0.25x effective against the target
    a++; // TODO: set flags
    wMoveMissed = a;
    /* POP bc - TODO: implement stack */
    /* POP hl - TODO: implement stack */
    hl++; // TODO: set flags
    hl++; // TODO: set flags
    goto .loop;
    return;
}

uint16_t AIGetTypeEffectiveness() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wEnemyMoveType;
    d = a; // d = type of enemy move
    hl = wBattleMonType;
    b = hl; // b = type 1 of player's pokemon
    hl++; // TODO: set flags
    c = hl; // c = type 2 of player's pokemon
    // ; initialize to neutral effectiveness
    a = 0x10; // bug: should be EFFECTIVE (10)
    wTypeEffectiveness = a;
    hl = TypeEffects;
    a = hli;
    zero = (a == 0xff); carry = (a < 0xff); // Compare
    return;
}

uint16_t MoveHitTest() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // player's turn
    hl = wEnemyBattleStatus1;
    de = wPlayerMoveEffect;
    bc = wEnemyMonStatus;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    // enemy's turn
    hl = wPlayerBattleStatus1;
    de = wEnemyMoveEffect;
    bc = wBattleMonStatus;
    a = de;
    zero = (a == DREAM_EATER_EFFECT); carry = (a < DREAM_EATER_EFFECT); // Compare
    goto nz;
    a = bc;
    a &= SLP_MASK; zero = (a == 0); // TODO: set other flags
    goto z;
    a = de;
    zero = (a == SWIFT_EFFECT); carry = (a < SWIFT_EFFECT); // Compare
    return; // Swift never misses (this was fixed from the Japanese versions)
}

uint16_t CalcHitChance() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = wPlayerMoveAccuracy;
    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    a = wPlayerMonAccuracyMod;
    b = a;
    a = wEnemyMonEvasionMod;
    c = a;
    goto z;
    // values for enemy turn
    hl = wEnemyMoveAccuracy;
    a = wEnemyMonAccuracyMod;
    b = a;
    a = wPlayerMonEvasionMod;
    c = a;
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
    goto nz;
    // make sure the result is always at least one
    hQuotient + 2 = a; // LDH (High RAM)
    a = 0x01;
    hQuotient + 3 = a; // LDH (High RAM)
    b = c;
    d--; // TODO: set flags
    goto nz;
    a = hQuotient + 2; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags // is the calculated hit chance over 0xFF?
    a = hQuotient + 3; // LDH (High RAM)
    goto z;
    // if calculated hit chance over 0xFF
    a = 0xff; // set the hit chance to 0xFF
    /* POP hl - TODO: implement stack */
    hl = a; // store the hit chance in the move accuracy variable
    return;
}

uint16_t RandomizeDamage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = wDamage;
    a = hli;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto nz;
    a = hl;
    zero = (a == 2); carry = (a < 2); // Compare
    return; // return if damage is equal to 0 or 1
}

uint8_t ExecuteEnemyMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wEnemySelectedMove;
    /* assert */
    a++; // TODO: set flags
    goto z;
    if (carry) PrintGhostText();
    goto z;
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto nz;
    b = 0x1;
    a = wSerialExchangeNybbleReceiveData;
    zero = (a == LINKBATTLE_STRUGGLE); carry = (a < LINKBATTLE_STRUGGLE); // Compare
    goto z;
    zero = (a == 4); carry = (a < 4); // Compare
    return;
}

void CheckIfEnemyNeedsToChargeUp() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wEnemyMoveEffect;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    goto z;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    goto z;
    goto EnemyCanExecuteMove;
}

void EnemyCanExecuteChargingMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = wEnemyBattleStatus1;
    hl &= ~(1 << CHARGING_UP); // no longer charging up for attack
    hl &= ~(1 << INVULNERABLE); // no longer invulnerable to typical attacks
    a = wEnemyMoveNum;
    wNameListIndex = a;
    a = BANK(MoveNames);
    wPredefBank = a;
    a = MOVE_NAME;
    wNameListType = a;
    if (carry) GetName();
    de = wNameBuffer;
    if (carry) CopyToStringBuffer();
}

void EnemyCanExecuteMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wMonIsDisobedient = a;
    if (carry) DisplayUsedMoveText();
    a = wEnemyMoveEffect;
    hl = ResidualEffects1;
    de = 0x1;
    if (carry) IsInArray();
    goto c;
    a = wEnemyMoveEffect;
    hl = SpecialEffectsCont;
    de = 0x1;
    if (carry) IsInArray();
    if (carry) c();
}

void EnemyCalcMoveDamage() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) SwapPlayerAndEnemyLevels();
    a = wEnemyMoveEffect;
    hl = SetDamageEffects;
    de = 0x1;
    if (carry) IsInArray();
    goto c;
    if (carry) CriticalHitTest();
    if (carry) HandleCounterMove();
    goto z;
    if (carry) SwapPlayerAndEnemyLevels();
    if (carry) GetDamageVarsForEnemyAttack();
    if (carry) SwapPlayerAndEnemyLevels();
    if (carry) CalculateDamage();
    goto z;
    if (carry) AdjustDamageForMoveType();
    if (carry) RandomizeDamage();
}

void EnemyMoveHitTest() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) MoveHitTest();
}

void HandleIfEnemyMoveMissed() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wMoveMissed;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    a = wEnemyMoveEffect;
    zero = (a == EXPLODE_EFFECT); carry = (a < EXPLODE_EFFECT); // Compare
    goto z;
    goto EnemyCheckIfFlyOrChargeEffect;
    if (carry) SwapPlayerAndEnemyLevels();
}

void GetEnemyAnimationType() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wEnemyMoveEffect;
    a &= a; zero = (a == 0); // TODO: set other flags
    a = ANIMATIONTYPE_SHAKE_SCREEN_VERTICALLY;
    goto z;
    a = ANIMATIONTYPE_SHAKE_SCREEN_HORIZONTALLY_HEAVY;
    goto PlayEnemyMoveAnimation;
}

void HandleExplosionMiss() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) SwapPlayerAndEnemyLevels();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
}

void PlayEnemyMoveAnimation() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* PUSH af - TODO: implement stack */
    a = wEnemyBattleStatus2;
    zero = ((a & (1 << HAS_SUBSTITUTE_UP)) == 0); // does mon have a substitute?
    hl = HideSubstituteShowMonAnim;
    b = BANK(HideSubstituteShowMonAnim);
    if (carry) nz();
    /* POP af - TODO: implement stack */
    wAnimationType = a;
    a = wEnemyMoveNum;
    if (carry) PlayMoveAnimation();
    if (carry) HandleExplodingAnimation();
    if (carry) DrawEnemyHUDAndHPBar();
    a = wEnemyBattleStatus2;
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

    if (carry) SwapPlayerAndEnemyLevels();
    c = 30;
    if (carry) DelayFrames();
    a = wEnemyMoveEffect;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    goto z;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    goto z;
    goto EnemyCheckIfMirrorMoveEffect;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
    a = STATUS_AFFECTED_ANIM;
    if (carry) PlayMoveAnimation();
}

uint16_t EnemyCheckIfMirrorMoveEffect() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wEnemyMoveEffect;
    zero = (a == MIRROR_MOVE_EFFECT); carry = (a < MIRROR_MOVE_EFFECT); // Compare
    goto nz;
    if (carry) MirrorMoveCopyMove();
    goto z;
    goto CheckIfEnemyNeedsToChargeUp;
    zero = (a == METRONOME_EFFECT); carry = (a < METRONOME_EFFECT); // Compare
    goto nz;
    if (carry) MetronomePickMove();
    goto CheckIfEnemyNeedsToChargeUp;
    a = wEnemyMoveEffect;
    hl = ResidualEffects2;
    de = 0x1;
    if (carry) IsInArray();
    goto c;
    a = wMoveMissed;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    if (carry) PrintMoveFailureText();
    a = wEnemyMoveEffect;
    zero = (a == EXPLODE_EFFECT); carry = (a < EXPLODE_EFFECT); // Compare
    goto z;
    goto ExecuteEnemyMoveDone;
    if (carry) ApplyAttackToPlayerPokemon();
    if (carry) PrintCriticalOHKOText();
    if (carry) DisplayEffectiveness();
    a = 1;
    wMoveDidntMiss = a;
    a = wEnemyMoveEffect;
    hl = AlwaysHappenSideEffects;
    de = 0x1;
    if (carry) IsInArray();
    if (carry) c();
    hl = wBattleMonHP;
    a = hli;
    b = hl;
    a |= b; zero = (a == 0); // TODO: set other flags
    return;
}

void HitXTimesText() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* text_far */
    /* text_end */
}

void ExecuteEnemyMoveDone() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    b = 0x1;
    return;
}

uint16_t CheckEnemyStatusConditions() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = wEnemyMonStatus;
    a = hl;
    a &= SLP_MASK; zero = (a == 0); // TODO: set other flags
    goto z;
    a--; // TODO: set flags // decrement number of turns left
    wEnemyMonStatus = a;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z; // if the number of turns hit 0, wake up
    hl = FastAsleepText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
    a = SLP_ANIM;
    if (carry) PlayMoveAnimation();
    goto .sleepDone;
    hl = WokeUpText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wEnemyUsedMove = a;
    hl = ExecuteEnemyMoveDone; // enemy can't move this turn
    goto .enemyReturnToHL;
    zero = ((hl & (1 << FRZ)) == 0);
    goto z;
    hl = IsFrozenText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wEnemyUsedMove = a;
    hl = ExecuteEnemyMoveDone; // enemy can't move this turn
    goto .enemyReturnToHL;
    a = wPlayerBattleStatus1;
    zero = ((a & (1 << USING_TRAPPING_MOVE)) == 0); // is the player using a multi-turn attack like warp
    goto z;
    hl = CantMoveText;
    if (carry) PrintText();
    hl = ExecuteEnemyMoveDone; // enemy can't move this turn
    goto .enemyReturnToHL;
    hl = wEnemyBattleStatus1;
    zero = ((hl & (1 << FLINCHED)) == 0); // check if enemy mon flinched
    goto z;
    hl &= ~(1 << FLINCHED);
    hl = FlinchedText;
    if (carry) PrintText();
    hl = ExecuteEnemyMoveDone; // enemy can't move this turn
    goto .enemyReturnToHL;
    hl = wEnemyBattleStatus2;
    zero = ((hl & (1 << NEEDS_TO_RECHARGE)) == 0); // check if enemy mon has to recharge after using a move
    goto z;
    hl &= ~(1 << NEEDS_TO_RECHARGE);
    hl = MustRechargeText;
    if (carry) PrintText();
    hl = ExecuteEnemyMoveDone; // enemy can't move this turn
    goto .enemyReturnToHL;
    hl = wEnemyDisabledMove;
    a = hl;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    a--; // TODO: set flags // decrement disable counter
    hl = a;
    a &= 0xf; zero = (a == 0); // TODO: set other flags // did disable counter hit 0?
    goto nz;
    hl = a;
    wEnemyDisabledMoveNumber = a;
    hl = DisabledNoMoreText;
    if (carry) PrintText();
    a = wEnemyBattleStatus1;
    a = (uint8_t)(a + a); // TODO: set flags // check if enemy mon is confused
    goto nc;
    hl = wEnemyConfusedCounter;
    hl--; // TODO: set flags
    goto nz;
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << CONFUSED); // if confused counter hit 0, reset confusion status
    hl = ConfusedNoMoreText;
    if (carry) PrintText();
    goto .checkIfTriedToUseDisabledMove;
    hl = IsConfusedText;
    if (carry) PrintText();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
    a = CONF_ANIM;
    if (carry) PlayMoveAnimation();
    if (carry) BattleRandom();
    zero = (a == 0x80); carry = (a < 0x80); // Compare
    goto c;
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
    a = wEnemyMonDefense;
    hli = a;
    a = wEnemyMonDefense + 1;
    hl = a;
    hl = wEnemyMoveEffect;
    /* PUSH hl - TODO: implement stack */
    a = hl;
    /* PUSH af - TODO: implement stack */
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    wCriticalHitOrOHKO = a;
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
    wAnimationType = a;
    hWhoseTurn = a; // LDH (High RAM)
    a = POUND;
    if (carry) PlayMoveAnimation();
    a = 0x1;
    hWhoseTurn = a; // LDH (High RAM)
    if (carry) ApplyDamageToEnemyPokemon();
    goto .monHurtItselfOrFullyParalysed;
    // prevents a disabled move that was selected before being disabled from being used
    a = wEnemyDisabledMoveNumber;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    hl = wEnemySelectedMove;
    zero = (a == hl); carry = (a < hl); // Compare
    goto nz;
    if (carry) PrintMoveIsDisabledText();
    hl = ExecuteEnemyMoveDone; // if a disabled move was somehow selected, player can't move this turn
    goto .enemyReturnToHL;
    hl = wEnemyMonStatus;
    zero = ((hl & (1 << PAR)) == 0);
    goto z;
    if (carry) BattleRandom();
    zero = (a == 25 percent); carry = (a < 25 percent); // Compare // chance to be fully paralysed
    goto nc;
    hl = FullyParalyzedText;
    if (carry) PrintText();
    hl = wEnemyBattleStatus1;
    a = hl;
    // ; clear bide, thrashing about, charging up, and multi-turn moves such as warp
    a &= ~((1 << STORING_ENERGY) | (1 << THRASHING_ABOUT) | (1 << CHARGING_UP) | (1 << USING_TRAPPING_MOVE)); zero = (a == 0); // TODO: set other flags
    hl = a;
    a = wEnemyMoveEffect;
    zero = (a == FLY_EFFECT); carry = (a < FLY_EFFECT); // Compare
    goto z;
    zero = (a == CHARGE_EFFECT); carry = (a < CHARGE_EFFECT); // Compare
    goto z;
    goto .notFlyOrChargeEffect;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wAnimationType = a;
    a = STATUS_AFFECTED_ANIM;
    if (carry) PlayMoveAnimation();
    hl = ExecuteEnemyMoveDone;
    goto .enemyReturnToHL; // if using a two-turn move, enemy needs to recharge the first turn
    hl = wEnemyBattleStatus1;
    zero = ((hl & (1 << STORING_ENERGY)) == 0); // is mon using bide?
    goto z;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wEnemyMoveNum = a;
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
    goto z;
    hl = ExecuteEnemyMoveDone;
    goto .enemyReturnToHL; // unless mon unleashes energy, can't move this turn
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << STORING_ENERGY); // not using bide any more
    hl = UnleashedEnergyText;
    if (carry) PrintText();
    a = 0x1;
    wEnemyMovePower = a;
    hl = wEnemyBideAccumulatedDamage + 1;
    a = hld;
    a = (uint8_t)(a + a); // TODO: set flags
    b = a;
    wDamage + 1 = a;
    a = hl;
    { uint8_t temp = a; a = (uint8_t)((a << 1) | (carry ? 1 : 0)); carry = (temp & 0x80) != 0; } // RL // double the damage
    wDamage = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    goto nz;
    a = 0x1;
    wMoveMissed = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hli = a;
    hl = a;
    a = BIDE;
    wEnemyMoveNum = a;
    if (carry) SwapPlayerAndEnemyLevels();
    hl = HandleIfEnemyMoveMissed; // skip damage calculation, DecrementPP and MoveHitTest
    goto .enemyReturnToHL;
    zero = ((hl & (1 << THRASHING_ABOUT)) == 0); // is mon using thrash or petal dance?
    goto z;
    a = THRASH;
    wEnemyMoveNum = a;
    hl = ThrashingAboutText;
    if (carry) PrintText();
    hl = wEnemyNumAttacksLeft;
    hl--; // TODO: set flags // did Thrashing About counter hit 0?
    hl = EnemyCalcMoveDamage; // skip DecrementPP
    goto nz;
    /* PUSH hl - TODO: implement stack */
    hl = wEnemyBattleStatus1;
    hl &= ~(1 << THRASHING_ABOUT); // mon is no longer using thrash or petal dance
    hl |= (1 << CONFUSED); // mon is now confused
    if (carry) BattleRandom();
    a &= 0x3; zero = (a == 0); // TODO: set other flags
    a++; // TODO: set flags
    a++; // TODO: set flags // confused for 2-5 turns
    wEnemyConfusedCounter = a;
    /* POP hl - TODO: implement stack */ // skip DecrementPP
    goto .enemyReturnToHL;
    zero = ((hl & (1 << USING_TRAPPING_MOVE)) == 0); // is mon using multi-turn move?
    goto z;
    hl = AttackContinuesText;
    if (carry) PrintText();
    hl = wEnemyNumAttacksLeft;
    hl--; // TODO: set flags
    hl = GetEnemyAnimationType; // skip damage calculation (deal damage equal to last hit),
    // ; DecrementPP and MoveHitTest
    goto nz; // redundant leftover code, the case wEnemyNumAttacksLeft == 0
    // ; is handled within CheckNumAttacksLeft
    goto .enemyReturnToHL;
    a = wEnemyBattleStatus2;
    zero = ((a & (1 << USING_RAGE)) == 0); // is mon using rage?
    goto z; // if we made it this far, mon can move normally this turn
    a = RAGE;
    wNamedObjectIndex = a;
    if (carry) GetMoveName();
    if (carry) CopyToStringBuffer();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wEnemyMoveEffect = a;
    hl = EnemyCanExecuteMove;
    goto .enemyReturnToHL;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry // set Z flag
    return;
}

void GetCurrentMove() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    de = wEnemyMoveNum;
    a = wEnemySelectedMove;
    goto .selected;
    de = wPlayerMoveNum;
    // ; Apply InitBattleVariables to TestBattle.
    a = wStatusFlags7;
    zero = ((a & (1 << BIT_TEST_BATTLE)) == 0);
    a = wTestBattlePlayerSelectedMove;
    goto nz;
    a = wPlayerSelectedMove;
    wNameListIndex = a;
    a--; // TODO: set flags
    hl = Moves;
    bc = MOVE_LENGTH;
    if (carry) AddNTimes();
    a = BANK(Moves);
    if (carry) FarCopyData();
    a = BANK(MoveNames);
    wPredefBank = a;
    a = MOVE_NAME;
    wNameListType = a;
    if (carry) GetName();
    de = wNameBuffer;
    goto CopyToStringBuffer;
}

uint16_t LoadEnemyMonData() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto z;
    a = wEnemyMonSpecies2;
    wEnemyMonSpecies = a;
    wCurSpecies = a;
    if (carry) GetMonHeader();
    a = wEnemyBattleStatus3;
    zero = ((a & (1 << TRANSFORMED)) == 0); // is enemy mon transformed?
    hl = wTransformedEnemyMonOriginalDVs; // original DVs before transforming
    a = hli;
    b = hl;
    goto nz;
    a = wIsInBattle;
    zero = (a == 0x2); carry = (a < 0x2); // Compare // is it a trainer battle?
    // fixed DVs for trainer mon
    a = ATKDEFDV_TRAINER;
    b = SPDSPCDV_TRAINER;
    goto z;
    // random DVs for wild mon
    if (carry) BattleRandom();
    b = a;
    if (carry) BattleRandom();
    hl = wEnemyMonDVs;
    hli = a;
    hl = b;
    de = wEnemyMonLevel;
    a = wCurEnemyLevel;
    de = a;
    de++; // TODO: set flags
    b = 0x0;
    hl = wEnemyMonHP;
    /* PUSH hl - TODO: implement stack */
    if (carry) CalcStats();
    /* POP hl - TODO: implement stack */
    a = wIsInBattle;
    zero = (a == 0x2); carry = (a < 0x2); // Compare // is it a trainer battle?
    goto z;
    a = wEnemyBattleStatus3;
    zero = ((a & (1 << TRANSFORMED)) == 0); // is enemy mon transformed?
    goto nz; // if transformed, jump
    // if it's a wild mon and not transformed, init the current HP to max HP and the status to 0
    a = wEnemyMonMaxHP;
    hli = a;
    a = wEnemyMonMaxHP+1;
    hli = a;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hl++; // TODO: set flags
    hl = a; // init status to 0
    goto .copyTypes;
    // if it's a trainer mon, copy the HP and status from the enemy party data
    hl = wEnemyMon1HP;
    a = wWhichPokemon;
    bc = wEnemyMon2 - wEnemyMon1;
    if (carry) AddNTimes();
    a = hli;
    wEnemyMonHP = a;
    a = hli;
    wEnemyMonHP + 1 = a;
    a = wWhichPokemon;
    wEnemyMonPartyPos = a;
    hl++; // TODO: set flags
    a = hl;
    wEnemyMonStatus = a;
    goto .copyTypes;
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
    a = wIsInBattle;
    zero = (a == 0x2); carry = (a < 0x2); // Compare // is it a trainer battle?
    goto nz;
    // if it's a trainer battle, copy moves from enemy party data
    hl = wEnemyMon1Moves;
    a = wWhichPokemon;
    bc = PARTYMON_STRUCT_LENGTH;
    if (carry) AddNTimes();
    bc = NUM_MOVES;
    if (carry) CopyData();
    goto .loadMovePPs;
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
    wLearningMovesFromDayCare = a;
    /* predef */ // get moves based on current level
    hl = wEnemyMonMoves;
    de = wEnemyMonPP - 1;
    /* predef */
    hl = wMonHBaseStats;
    de = wEnemyMonBaseStats;
    b = NUM_STATS;
    a = hli;
    de = a;
    de++; // TODO: set flags
    b--; // TODO: set flags
    goto nz;
    hl = wMonHCatchRate;
    a = hli;
    de = a;
    de++; // TODO: set flags
    a = hl; // base exp
    de = a;
    a = wEnemyMonSpecies2;
    wNamedObjectIndex = a;
    if (carry) GetMonName();
    hl = wNameBuffer;
    de = wEnemyMonNick;
    bc = NAME_LENGTH;
    if (carry) CopyData();
    a = wEnemyMonSpecies2;
    wPokedexNum = a;
    /* predef */
    a = wPokedexNum;
    a--; // TODO: set flags
    c = a;
    b = FLAG_SET;
    hl = wPokedexSeen;
    /* predef */ // mark this mon as seen in the pokedex
    hl = wEnemyMonLevel;
    de = wEnemyMonUnmodifiedLevel;
    bc = 1 + NUM_STATS * 2;
    if (carry) CopyData();
    a = 0x7; // default stat mod
    b = NUM_STAT_MODS; // number of stat mods
    hl = wEnemyMonStatMods;
    hli = a;
    b--; // TODO: set flags
    goto nz;
    return;
}

uint16_t DoBattleTransitionAndInitBattleVariables() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto nz;
    // link battle
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wMenuJoypadPollCount = a;
    if (carry) DisplayLinkBattleVersusTextBox();
    a = 0x1;
    wUpdateSpritesEnabled = a;
    if (carry) ClearScreen();
    if (carry) DelayFrame();
    /* predef */
    if (carry) LoadHudAndHpBarAndStatusTilePatterns();
    a = 0x1;
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    a = 0xff;
    wUpdateSpritesEnabled = a;
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
    wPlayerDisabledMove = a;
    return;
}

uint8_t SwapPlayerAndEnemyLevels() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* PUSH bc - TODO: implement stack */
    a = wBattleMonLevel;
    b = a;
    a = wEnemyMonLevel;
    wBattleMonLevel = a;
    a = b;
    wEnemyMonLevel = a;
    /* POP bc - TODO: implement stack */
    return;
}

void LoadPlayerBackPic() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wBattleType;
    a--; // TODO: set flags // is it the old man tutorial?
    de = RedPicBack;
    goto nz;
    de = OldManPicBack;
    a = BANK(RedPicBack);
    /* assert */
    if (carry) UncompressSpriteFromDE();
    /* predef */
    hl = wShadowOAM;
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hOAMTile = a; // LDH (High RAM) // initial tile number
    b = 0x7; // 7 columns
    e = 0xa0; // X for the left-most column
    c = 0x3; // 3 tiles per column
    d = 0x38; // Y for the top of each column
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
    goto nz;
    a = hOAMTile; // LDH (High RAM)
    a = (uint8_t)(a + 0x4); // TODO: set flags // increase tile number by 4
    hOAMTile = a; // LDH (High RAM)
    a = TILE_WIDTH;
    a = (uint8_t)(a + e); // TODO: set flags // increase X by width of tile
    e = a;
    b--; // TODO: set flags
    goto nz;
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
    /* hlcoord */
    /* predef_jump */
    // does nothing since no stats are ever selected (barring glitches)
}

void DoubleOrHalveSelectedStats() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) DoubleSelectedStats();
    goto HalveSelectedStats;
}

void ScrollTrainerPicAfterBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    goto _ScrollTrainerPicAfterBattle;
}

void ApplyBurnAndParalysisPenaltiesToPlayer() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = 0x1;
    goto ApplyBurnAndParalysisPenalties;
}

void ApplyBurnAndParalysisPenaltiesToEnemy() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
}

void ApplyBurnAndParalysisPenalties() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hWhoseTurn = a; // LDH (High RAM)
    if (carry) QuarterSpeedDueToParalysis();
    goto HalveAttackDueToBurn;
}

uint8_t QuarterSpeedDueToParalysis() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    // enemy's turn, quarter the player's speed
    a = wBattleMonStatus;
    a &= 1 << PAR; zero = (a == 0); // TODO: set other flags
    return; // return if player not paralysed
}

uint8_t HalveAttackDueToBurn() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    // enemy's turn, halve the player's attack
    a = wBattleMonStatus;
    a &= 1 << BRN; zero = (a == 0); // TODO: set other flags
    return; // return if player not burnt
}

uint8_t CalculateModifiedStats() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    c = 0;
    if (carry) CalculateModifiedStat();
    c++; // TODO: set flags
    a = c;
    zero = (a == NUM_STATS - 1); carry = (a < NUM_STATS - 1); // Compare
    goto nz;
    return;
}

uint16_t CalculateModifiedStat() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* PUSH bc - TODO: implement stack */
    /* PUSH bc - TODO: implement stack */
    a = wCalculateWhoseStats;
    a &= a; zero = (a == 0); // TODO: set other flags
    a = c;
    hl = wBattleMonAttack;
    de = wPlayerMonUnmodifiedAttack;
    bc = wPlayerMonStatMods;
    goto z;
    hl = wEnemyMonAttack;
    de = wEnemyMonUnmodifiedAttack;
    bc = wEnemyMonStatMods;
    a = (uint8_t)(a + c); // TODO: set flags
    c = a;
    goto nc;
    b++; // TODO: set flags
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
    goto nc;
    d++; // TODO: set flags
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
    goto c;
    // cap the stat at MAX_STAT_VALUE (999)
    a = HIGH(MAX_STAT_VALUE);
    hDividend + 2 = a; // LDH (High RAM)
    a = LOW(MAX_STAT_VALUE);
    hDividend + 3 = a; // LDH (High RAM)
    a = hDividend + 2; // LDH (High RAM)
    hli = a;
    b = a;
    a = hDividend + 3; // LDH (High RAM)
    hl = a;
    a |= b; zero = (a == 0); // TODO: set other flags
    goto nz;
    hl++; // TODO: set flags // if the stat is 0, bump it up to 1
    /* POP bc - TODO: implement stack */
    return;
}

uint8_t ApplyBadgeStatBoosts() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    return; // return if link battle
}

void LoadHudAndHpBarAndStatusTilePatterns() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    if (carry) LoadHpBarAndStatusTilePatterns();
}

void LoadHudTilePatterns() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = rLCDC; // LDH (High RAM)
    a = (uint8_t)(a + a); // TODO: set flags // is LCD disabled?
    goto c;
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
    de = BattleHudTiles1;
    hl = vChars2 tile $6d;
    /* lb */
    if (carry) CopyVideoDataDouble();
    de = BattleHudTiles2;
    hl = vChars2 tile $73;
    /* lb */
    goto CopyVideoDataDouble;
}

void PrintEmptyString() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    hl = .emptyString;
    goto PrintText;
    /* db */
}

uint16_t BattleRandom() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // Link battles use a shared PRNG.
    a = wLinkState;
    zero = (a == LINK_STATE_BATTLING); carry = (a < LINK_STATE_BATTLING); // Compare
    goto nz;
    /* PUSH hl - TODO: implement stack */
    /* PUSH bc - TODO: implement stack */
    a = wLinkBattleRandomNumberListIndex;
    c = a;
    b = 0;
    hl = wLinkBattleRandomNumberList;
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a++; // TODO: set flags
    wLinkBattleRandomNumberListIndex = a;
    zero = (a == SERIAL_RNS_LENGTH - 1); carry = (a < SERIAL_RNS_LENGTH - 1); // Compare
    a = hl;
    /* POP bc - TODO: implement stack */
    /* POP hl - TODO: implement stack */
    /* vc_hook */
    /* vc_patch */
    /* if */
    return;
}

uint16_t HandleExplodingAnimation() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = hWhoseTurn; // LDH (High RAM)
    a &= a; zero = (a == 0); // TODO: set other flags
    hl = wEnemyMonType1;
    de = wEnemyBattleStatus1;
    a = wPlayerMoveNum;
    goto z;
    hl = wBattleMonType1;
    de = wEnemyBattleStatus1;
    a = wEnemyMoveNum;
    zero = (a == SELFDESTRUCT); carry = (a < SELFDESTRUCT); // Compare
    goto z;
    zero = (a == EXPLOSION); carry = (a < EXPLOSION); // Compare
    return;
}

void PlayMoveAnimation() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    wAnimationID = a;
    /* vc_hook_red */
    if (carry) Delay3();
    /* vc_hook_red */
    /* predef_jump */
}

void InitBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wCurOpponent;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
}

void InitOpponent() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wCurOpponent;
    wCurPartySpecies = a;
    wEnemyMonSpecies2 = a;
    goto InitBattleCommon;
}

uint8_t DetermineWildOpponent() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wStatusFlags6;
    zero = ((a & (1 << BIT_DEBUG_MODE)) == 0);
    goto z;
    a = hJoyHeld; // LDH (High RAM)
    zero = ((a & (1 << B_PAD_B)) == 0); // disable wild encounters
    return;
}

void InitBattleCommon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wMapPalOffset;
    /* PUSH af - TODO: implement stack */
    hl = wLetterPrintingDelayFlags;
    a = hl;
    /* PUSH af - TODO: implement stack */
    hl &= ~(1 << BIT_TEXT_DELAY); // no delay
    if (carry) InitBattleVariables();
    a = wEnemyMonSpecies2;
    a = (uint8_t)(a - OPP_ID_OFFSET); // TODO: set flags
    goto c;
    wTrainerClass = a;
    if (carry) GetTrainerInformation();
    if (carry) ReadTrainer();
    if (carry) DoBattleTransitionAndInitBattleVariables();
    if (carry) _LoadTrainerPic();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wEnemyMonSpecies2 = a;
    hStartTileID = a; // LDH (High RAM)
    a--; // TODO: set flags
    wAICount = a;
    /* hlcoord */
    /* predef */
    a = 0xff;
    wEnemyMonPartyPos = a;
    a = 0x2;
    wIsInBattle = a;
    goto _InitBattleCommon;
}

void InitWildBattle() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = 0x1;
    wIsInBattle = a;
    if (carry) LoadEnemyMonData();
    if (carry) DoBattleTransitionAndInitBattleVariables();
    a = wCurOpponent;
    zero = (a == RESTLESS_SOUL); carry = (a < RESTLESS_SOUL); // Compare
    goto z;
    if (carry) IsGhostBattle();
    goto nz;
    hl = wMonHSpriteDim;
    a = 0x66;
    hli = a; // write sprite dimensions
    bc = GhostPic;
    a = c;
    hli = a; // write front sprite pointer
    hl = b;
    hl = wEnemyMonNick; // set name to "GHOST"
    /* ld_hli_a_string */
    a = wCurPartySpecies;
    /* PUSH af - TODO: implement stack */
    a = MON_GHOST;
    wCurPartySpecies = a;
    de = vFrontPic;
    if (carry) LoadMonFrontSprite(); // load ghost sprite
    /* POP af - TODO: implement stack */
    wCurPartySpecies = a;
    goto .spriteLoaded;
    de = vFrontPic;
    if (carry) LoadMonFrontSprite(); // load mon sprite
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wTrainerClass = a;
    hStartTileID = a; // LDH (High RAM)
    /* hlcoord */
    /* predef */
    // common code that executes after init battle code specific to trainer or wild battles
}

uint16_t _InitBattleCommon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    b = SET_PAL_BATTLE_BLACK;
    if (carry) RunPaletteCommand();
    if (carry) SlidePlayerAndEnemySilhouettesOnScreen();
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    hAutoBGTransferEnabled = a; // LDH (High RAM)
    hl = .emptyString;
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
    /* hlcoord */
    /* lb */
    if (carry) ClearScreenArea();
    /* hlcoord */
    /* lb */
    if (carry) ClearScreenArea();
    if (carry) ClearSprites();
    a = wIsInBattle;
    a--; // TODO: set flags // is it a wild battle?
    if (carry) z(); // draw enemy HUD and HP bar if it's a wild battle
    if (carry) StartBattle();
    if (carry) EndOfBattle();
    /* POP af - TODO: implement stack */
    wLetterPrintingDelayFlags = a;
    /* POP af - TODO: implement stack */
    wMapPalOffset = a;
    a = wSavedTileAnimations;
    hTileAnimations = a; // LDH (High RAM)
    /* scf */
    return;
}

void _LoadTrainerPic() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wTrainerPicPointer;
    e = a;
    a = wTrainerPicPointer + 1;
    d = a; // de contains pointer to trainer pic
    a = wLinkState;
    a &= a; zero = (a == 0); // TODO: set other flags
    a = BANK("Trainer Pics");
    goto z;
    a = BANK(RedPicFront);
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

    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wFrequencyModifier = a;
    wTempoModifier = a;
    goto PlaySound;
    // animates the mon "growing" out of the pokeball
}

void AnimateSendingOutMon() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPredefHL;
    h = a;
    a = wPredefHL + 1;
    l = a;
    a = hStartTileID; // LDH (High RAM)
    hBaseTileID = a; // LDH (High RAM)
    b = 0x4c;
    a = wIsInBattle;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto z;
    a = (uint8_t)(a + b); // TODO: set flags
    hl = a;
    if (carry) Delay3();
    bc = -(SCREEN_WIDTH * 2 + 1);
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = 1;
    wDownscaledMonSize = a;
    /* lb */
    /* predef */
    c = 4;
    if (carry) DelayFrames();
    bc = -(SCREEN_WIDTH * 2 + 1);
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a ^= a; zero = (a == 0); carry = false; // XOR clears carry
    wDownscaledMonSize = a;
    /* lb */
    /* predef */
    c = 5;
    if (carry) DelayFrames();
    bc = -(SCREEN_WIDTH * 2 + 1);
    goto .next;
    bc = -(SCREEN_WIDTH * 6 + 3);
    hl = (uint16_t)(hl + bc); // TODO: set flags
    a = hBaseTileID; // LDH (High RAM)
    a = (uint8_t)(a + 0x31); // TODO: set flags
    goto CopyUncompressedPicToHL;
}

void CopyUncompressedPicToTilemap() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    a = wPredefHL;
    h = a;
    a = wPredefHL + 1;
    l = a;
    a = hStartTileID; // LDH (High RAM)
}

uint16_t CopyUncompressedPicToHL() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    /* lb */
    de = SCREEN_WIDTH;
    /* PUSH af - TODO: implement stack */
    a = wSpriteFlipped;
    a &= a; zero = (a == 0); // TODO: set other flags
    goto nz;
    /* POP af - TODO: implement stack */
    /* PUSH bc - TODO: implement stack */
    /* PUSH hl - TODO: implement stack */
    hl = a;
    hl = (uint16_t)(hl + de); // TODO: set flags
    a++; // TODO: set flags
    c--; // TODO: set flags
    goto nz;
    /* POP hl - TODO: implement stack */
    hl++; // TODO: set flags
    /* POP bc - TODO: implement stack */
    b--; // TODO: set flags
    goto nz;
    return;
}

void LoadMonBackPic() {
    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;
    uint16_t bc = 0, de = 0, hl = 0, sp = 0;
    bool carry = false, zero = false;

    // Assumes the monster's attributes have
    // been loaded with GetMonHeader.
    a = wBattleMonSpecies2;
    wCurPartySpecies = a;
    /* hlcoord */
    b = 7;
    c = 8;
    if (carry) ClearScreenArea();
    hl = wMonHBackSprite - wMonHeader;
    if (carry) UncompressMonSprite();
    /* predef */
    de = vBackPic;
    if (carry) InterlaceMergeSpriteBuffers(); // combine the two buffers to a single 2bpp sprite
    hl = vSprites;
    de = vBackPic;
    c = (2 * SPRITEBUFFERSIZE) / TILE_SIZE; // count of 16-byte chunks to be copied
    a = hLoadedROMBank; // LDH (High RAM)
    b = a;
    goto CopyVideoData;
}

