#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Get_em_dir_type
// Address: 0x1625e0 - 0x162a8c
void Get_em_dir_type_0x1625e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_em_dir_type_0x1625e0");
#endif

    switch (ctx->pc) {
        case 0x1625e0u: goto label_1625e0;
        case 0x1625e4u: goto label_1625e4;
        case 0x1625e8u: goto label_1625e8;
        case 0x1625ecu: goto label_1625ec;
        case 0x1625f0u: goto label_1625f0;
        case 0x1625f4u: goto label_1625f4;
        case 0x1625f8u: goto label_1625f8;
        case 0x1625fcu: goto label_1625fc;
        case 0x162600u: goto label_162600;
        case 0x162604u: goto label_162604;
        case 0x162608u: goto label_162608;
        case 0x16260cu: goto label_16260c;
        case 0x162610u: goto label_162610;
        case 0x162614u: goto label_162614;
        case 0x162618u: goto label_162618;
        case 0x16261cu: goto label_16261c;
        case 0x162620u: goto label_162620;
        case 0x162624u: goto label_162624;
        case 0x162628u: goto label_162628;
        case 0x16262cu: goto label_16262c;
        case 0x162630u: goto label_162630;
        case 0x162634u: goto label_162634;
        case 0x162638u: goto label_162638;
        case 0x16263cu: goto label_16263c;
        case 0x162640u: goto label_162640;
        case 0x162644u: goto label_162644;
        case 0x162648u: goto label_162648;
        case 0x16264cu: goto label_16264c;
        case 0x162650u: goto label_162650;
        case 0x162654u: goto label_162654;
        case 0x162658u: goto label_162658;
        case 0x16265cu: goto label_16265c;
        case 0x162660u: goto label_162660;
        case 0x162664u: goto label_162664;
        case 0x162668u: goto label_162668;
        case 0x16266cu: goto label_16266c;
        case 0x162670u: goto label_162670;
        case 0x162674u: goto label_162674;
        case 0x162678u: goto label_162678;
        case 0x16267cu: goto label_16267c;
        case 0x162680u: goto label_162680;
        case 0x162684u: goto label_162684;
        case 0x162688u: goto label_162688;
        case 0x16268cu: goto label_16268c;
        case 0x162690u: goto label_162690;
        case 0x162694u: goto label_162694;
        case 0x162698u: goto label_162698;
        case 0x16269cu: goto label_16269c;
        case 0x1626a0u: goto label_1626a0;
        case 0x1626a4u: goto label_1626a4;
        case 0x1626a8u: goto label_1626a8;
        case 0x1626acu: goto label_1626ac;
        case 0x1626b0u: goto label_1626b0;
        case 0x1626b4u: goto label_1626b4;
        case 0x1626b8u: goto label_1626b8;
        case 0x1626bcu: goto label_1626bc;
        case 0x1626c0u: goto label_1626c0;
        case 0x1626c4u: goto label_1626c4;
        case 0x1626c8u: goto label_1626c8;
        case 0x1626ccu: goto label_1626cc;
        case 0x1626d0u: goto label_1626d0;
        case 0x1626d4u: goto label_1626d4;
        case 0x1626d8u: goto label_1626d8;
        case 0x1626dcu: goto label_1626dc;
        case 0x1626e0u: goto label_1626e0;
        case 0x1626e4u: goto label_1626e4;
        case 0x1626e8u: goto label_1626e8;
        case 0x1626ecu: goto label_1626ec;
        case 0x1626f0u: goto label_1626f0;
        case 0x1626f4u: goto label_1626f4;
        case 0x1626f8u: goto label_1626f8;
        case 0x1626fcu: goto label_1626fc;
        case 0x162700u: goto label_162700;
        case 0x162704u: goto label_162704;
        case 0x162708u: goto label_162708;
        case 0x16270cu: goto label_16270c;
        case 0x162710u: goto label_162710;
        case 0x162714u: goto label_162714;
        case 0x162718u: goto label_162718;
        case 0x16271cu: goto label_16271c;
        case 0x162720u: goto label_162720;
        case 0x162724u: goto label_162724;
        case 0x162728u: goto label_162728;
        case 0x16272cu: goto label_16272c;
        case 0x162730u: goto label_162730;
        case 0x162734u: goto label_162734;
        case 0x162738u: goto label_162738;
        case 0x16273cu: goto label_16273c;
        case 0x162740u: goto label_162740;
        case 0x162744u: goto label_162744;
        case 0x162748u: goto label_162748;
        case 0x16274cu: goto label_16274c;
        case 0x162750u: goto label_162750;
        case 0x162754u: goto label_162754;
        case 0x162758u: goto label_162758;
        case 0x16275cu: goto label_16275c;
        case 0x162760u: goto label_162760;
        case 0x162764u: goto label_162764;
        case 0x162768u: goto label_162768;
        case 0x16276cu: goto label_16276c;
        case 0x162770u: goto label_162770;
        case 0x162774u: goto label_162774;
        case 0x162778u: goto label_162778;
        case 0x16277cu: goto label_16277c;
        case 0x162780u: goto label_162780;
        case 0x162784u: goto label_162784;
        case 0x162788u: goto label_162788;
        case 0x16278cu: goto label_16278c;
        case 0x162790u: goto label_162790;
        case 0x162794u: goto label_162794;
        case 0x162798u: goto label_162798;
        case 0x16279cu: goto label_16279c;
        case 0x1627a0u: goto label_1627a0;
        case 0x1627a4u: goto label_1627a4;
        case 0x1627a8u: goto label_1627a8;
        case 0x1627acu: goto label_1627ac;
        case 0x1627b0u: goto label_1627b0;
        case 0x1627b4u: goto label_1627b4;
        case 0x1627b8u: goto label_1627b8;
        case 0x1627bcu: goto label_1627bc;
        case 0x1627c0u: goto label_1627c0;
        case 0x1627c4u: goto label_1627c4;
        case 0x1627c8u: goto label_1627c8;
        case 0x1627ccu: goto label_1627cc;
        case 0x1627d0u: goto label_1627d0;
        case 0x1627d4u: goto label_1627d4;
        case 0x1627d8u: goto label_1627d8;
        case 0x1627dcu: goto label_1627dc;
        case 0x1627e0u: goto label_1627e0;
        case 0x1627e4u: goto label_1627e4;
        case 0x1627e8u: goto label_1627e8;
        case 0x1627ecu: goto label_1627ec;
        case 0x1627f0u: goto label_1627f0;
        case 0x1627f4u: goto label_1627f4;
        case 0x1627f8u: goto label_1627f8;
        case 0x1627fcu: goto label_1627fc;
        case 0x162800u: goto label_162800;
        case 0x162804u: goto label_162804;
        case 0x162808u: goto label_162808;
        case 0x16280cu: goto label_16280c;
        case 0x162810u: goto label_162810;
        case 0x162814u: goto label_162814;
        case 0x162818u: goto label_162818;
        case 0x16281cu: goto label_16281c;
        case 0x162820u: goto label_162820;
        case 0x162824u: goto label_162824;
        case 0x162828u: goto label_162828;
        case 0x16282cu: goto label_16282c;
        case 0x162830u: goto label_162830;
        case 0x162834u: goto label_162834;
        case 0x162838u: goto label_162838;
        case 0x16283cu: goto label_16283c;
        case 0x162840u: goto label_162840;
        case 0x162844u: goto label_162844;
        case 0x162848u: goto label_162848;
        case 0x16284cu: goto label_16284c;
        case 0x162850u: goto label_162850;
        case 0x162854u: goto label_162854;
        case 0x162858u: goto label_162858;
        case 0x16285cu: goto label_16285c;
        case 0x162860u: goto label_162860;
        case 0x162864u: goto label_162864;
        case 0x162868u: goto label_162868;
        case 0x16286cu: goto label_16286c;
        case 0x162870u: goto label_162870;
        case 0x162874u: goto label_162874;
        case 0x162878u: goto label_162878;
        case 0x16287cu: goto label_16287c;
        case 0x162880u: goto label_162880;
        case 0x162884u: goto label_162884;
        case 0x162888u: goto label_162888;
        case 0x16288cu: goto label_16288c;
        case 0x162890u: goto label_162890;
        case 0x162894u: goto label_162894;
        case 0x162898u: goto label_162898;
        case 0x16289cu: goto label_16289c;
        case 0x1628a0u: goto label_1628a0;
        case 0x1628a4u: goto label_1628a4;
        case 0x1628a8u: goto label_1628a8;
        case 0x1628acu: goto label_1628ac;
        case 0x1628b0u: goto label_1628b0;
        case 0x1628b4u: goto label_1628b4;
        case 0x1628b8u: goto label_1628b8;
        case 0x1628bcu: goto label_1628bc;
        case 0x1628c0u: goto label_1628c0;
        case 0x1628c4u: goto label_1628c4;
        case 0x1628c8u: goto label_1628c8;
        case 0x1628ccu: goto label_1628cc;
        case 0x1628d0u: goto label_1628d0;
        case 0x1628d4u: goto label_1628d4;
        case 0x1628d8u: goto label_1628d8;
        case 0x1628dcu: goto label_1628dc;
        case 0x1628e0u: goto label_1628e0;
        case 0x1628e4u: goto label_1628e4;
        case 0x1628e8u: goto label_1628e8;
        case 0x1628ecu: goto label_1628ec;
        case 0x1628f0u: goto label_1628f0;
        case 0x1628f4u: goto label_1628f4;
        case 0x1628f8u: goto label_1628f8;
        case 0x1628fcu: goto label_1628fc;
        case 0x162900u: goto label_162900;
        case 0x162904u: goto label_162904;
        case 0x162908u: goto label_162908;
        case 0x16290cu: goto label_16290c;
        case 0x162910u: goto label_162910;
        case 0x162914u: goto label_162914;
        case 0x162918u: goto label_162918;
        case 0x16291cu: goto label_16291c;
        case 0x162920u: goto label_162920;
        case 0x162924u: goto label_162924;
        case 0x162928u: goto label_162928;
        case 0x16292cu: goto label_16292c;
        case 0x162930u: goto label_162930;
        case 0x162934u: goto label_162934;
        case 0x162938u: goto label_162938;
        case 0x16293cu: goto label_16293c;
        case 0x162940u: goto label_162940;
        case 0x162944u: goto label_162944;
        case 0x162948u: goto label_162948;
        case 0x16294cu: goto label_16294c;
        case 0x162950u: goto label_162950;
        case 0x162954u: goto label_162954;
        case 0x162958u: goto label_162958;
        case 0x16295cu: goto label_16295c;
        case 0x162960u: goto label_162960;
        case 0x162964u: goto label_162964;
        case 0x162968u: goto label_162968;
        case 0x16296cu: goto label_16296c;
        case 0x162970u: goto label_162970;
        case 0x162974u: goto label_162974;
        case 0x162978u: goto label_162978;
        case 0x16297cu: goto label_16297c;
        case 0x162980u: goto label_162980;
        case 0x162984u: goto label_162984;
        case 0x162988u: goto label_162988;
        case 0x16298cu: goto label_16298c;
        case 0x162990u: goto label_162990;
        case 0x162994u: goto label_162994;
        case 0x162998u: goto label_162998;
        case 0x16299cu: goto label_16299c;
        case 0x1629a0u: goto label_1629a0;
        case 0x1629a4u: goto label_1629a4;
        case 0x1629a8u: goto label_1629a8;
        case 0x1629acu: goto label_1629ac;
        case 0x1629b0u: goto label_1629b0;
        case 0x1629b4u: goto label_1629b4;
        case 0x1629b8u: goto label_1629b8;
        case 0x1629bcu: goto label_1629bc;
        case 0x1629c0u: goto label_1629c0;
        case 0x1629c4u: goto label_1629c4;
        case 0x1629c8u: goto label_1629c8;
        case 0x1629ccu: goto label_1629cc;
        case 0x1629d0u: goto label_1629d0;
        case 0x1629d4u: goto label_1629d4;
        case 0x1629d8u: goto label_1629d8;
        case 0x1629dcu: goto label_1629dc;
        case 0x1629e0u: goto label_1629e0;
        case 0x1629e4u: goto label_1629e4;
        case 0x1629e8u: goto label_1629e8;
        case 0x1629ecu: goto label_1629ec;
        case 0x1629f0u: goto label_1629f0;
        case 0x1629f4u: goto label_1629f4;
        case 0x1629f8u: goto label_1629f8;
        case 0x1629fcu: goto label_1629fc;
        case 0x162a00u: goto label_162a00;
        case 0x162a04u: goto label_162a04;
        case 0x162a08u: goto label_162a08;
        case 0x162a0cu: goto label_162a0c;
        case 0x162a10u: goto label_162a10;
        case 0x162a14u: goto label_162a14;
        case 0x162a18u: goto label_162a18;
        case 0x162a1cu: goto label_162a1c;
        case 0x162a20u: goto label_162a20;
        case 0x162a24u: goto label_162a24;
        case 0x162a28u: goto label_162a28;
        case 0x162a2cu: goto label_162a2c;
        case 0x162a30u: goto label_162a30;
        case 0x162a34u: goto label_162a34;
        case 0x162a38u: goto label_162a38;
        case 0x162a3cu: goto label_162a3c;
        case 0x162a40u: goto label_162a40;
        case 0x162a44u: goto label_162a44;
        case 0x162a48u: goto label_162a48;
        case 0x162a4cu: goto label_162a4c;
        case 0x162a50u: goto label_162a50;
        case 0x162a54u: goto label_162a54;
        case 0x162a58u: goto label_162a58;
        case 0x162a5cu: goto label_162a5c;
        case 0x162a60u: goto label_162a60;
        case 0x162a64u: goto label_162a64;
        case 0x162a68u: goto label_162a68;
        case 0x162a6cu: goto label_162a6c;
        case 0x162a70u: goto label_162a70;
        case 0x162a74u: goto label_162a74;
        case 0x162a78u: goto label_162a78;
        case 0x162a7cu: goto label_162a7c;
        case 0x162a80u: goto label_162a80;
        case 0x162a84u: goto label_162a84;
        case 0x162a88u: goto label_162a88;
        default: break;
    }

    ctx->pc = 0x1625e0u;

label_1625e0:
    // 0x1625e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1625e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1625e4:
    // 0x1625e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1625e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1625e8:
    // 0x1625e8: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x1625e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1625ec:
    // 0x1625ec: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1625ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1625f0:
    // 0x1625f0: 0xa3a40048  sb          $a0, 0x48($sp)
    ctx->pc = 0x1625f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 4));
label_1625f4:
    // 0x1625f4: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x1625f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1625f8:
    // 0x1625f8: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1625f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1625fc:
    // 0x1625fc: 0xc058f20  jal         func_163C80
label_162600:
    if (ctx->pc == 0x162600u) {
        ctx->pc = 0x162604u;
        goto label_162604;
    }
    ctx->pc = 0x1625FCu;
    SET_GPR_U32(ctx, 31, 0x162604u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1625FCu, 0x162604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162604u;
label_162604:
    // 0x162604: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_162608:
    // 0x162608: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x162608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
label_16260c:
    // 0x16260c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16260cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_162610:
    // 0x162610: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x162610u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_162614:
    // 0x162614: 0x102000ea  beqz        $at, . + 4 + (0xEA << 2)
label_162618:
    if (ctx->pc == 0x162618u) {
        ctx->pc = 0x16261Cu;
        goto label_16261c;
    }
    ctx->pc = 0x162614u;
    {
        const bool branch_taken_0x162614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x162614) {
            ctx->pc = 0x1629C0u;
            goto label_1629c0;
        }
    }
    ctx->pc = 0x16261Cu;
label_16261c:
    // 0x16261c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x16261cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_162620:
    // 0x162620: 0x2443ea50  addiu       $v1, $v0, -0x15B0
    ctx->pc = 0x162620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
label_162624:
    // 0x162624: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x162624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_162628:
    // 0x162628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16262c:
    // 0x16262c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_162630:
    // 0x162630: 0x400008  jr          $v0
label_162634:
    if (ctx->pc == 0x162634u) {
        ctx->pc = 0x162638u;
        goto label_162638;
    }
    ctx->pc = 0x162630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x162638u;
label_162638:
    // 0x162638: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
label_16263c:
    // 0x16263c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162640:
    // 0x162640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162644:
    // 0x162644: 0x0  nop
    ctx->pc = 0x162644u;
    // NOP
label_162648:
    // 0x162648: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x162648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_16264c:
    // 0x16264c: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x16264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
label_162650:
    // 0x162650: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_162654:
    // 0x162654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162658:
    // 0x162658: 0x0  nop
    ctx->pc = 0x162658u;
    // NOP
label_16265c:
    // 0x16265c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x16265cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_162660:
    // 0x162660: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_162664:
    // 0x162664: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162668:
    // 0x162668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16266c:
    // 0x16266c: 0x0  nop
    ctx->pc = 0x16266cu;
    // NOP
label_162670:
    // 0x162670: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x162670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_162674:
    // 0x162674: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x162674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
label_162678:
    // 0x162678: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_16267c:
    // 0x16267c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16267cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162680:
    // 0x162680: 0x0  nop
    ctx->pc = 0x162680u;
    // NOP
label_162684:
    // 0x162684: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x162684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_162688:
    // 0x162688: 0x100000cd  b           . + 4 + (0xCD << 2)
label_16268c:
    if (ctx->pc == 0x16268Cu) {
        ctx->pc = 0x162690u;
        goto label_162690;
    }
    ctx->pc = 0x162688u;
    {
        const bool branch_taken_0x162688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162688) {
            ctx->pc = 0x1629C0u;
            goto label_1629c0;
        }
    }
    ctx->pc = 0x162690u;
label_162690:
    // 0x162690: 0x3c02bf7b  lui         $v0, 0xBF7B
    ctx->pc = 0x162690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49019 << 16));
label_162694:
    // 0x162694: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x162694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
label_162698:
    // 0x162698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16269c:
    // 0x16269c: 0x0  nop
    ctx->pc = 0x16269cu;
    // NOP
label_1626a0:
    // 0x1626a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1626a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1626a4:
    // 0x1626a4: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x1626a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
label_1626a8:
    // 0x1626a8: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1626a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_1626ac:
    // 0x1626ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1626acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1626b0:
    // 0x1626b0: 0x0  nop
    ctx->pc = 0x1626b0u;
    // NOP
label_1626b4:
    // 0x1626b4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1626b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1626b8:
    // 0x1626b8: 0x3c023f7b  lui         $v0, 0x3F7B
    ctx->pc = 0x1626b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16251 << 16));
label_1626bc:
    // 0x1626bc: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x1626bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
label_1626c0:
    // 0x1626c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1626c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1626c4:
    // 0x1626c4: 0x0  nop
    ctx->pc = 0x1626c4u;
    // NOP
label_1626c8:
    // 0x1626c8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1626c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1626cc:
    // 0x1626cc: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1626ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
label_1626d0:
    // 0x1626d0: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1626d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_1626d4:
    // 0x1626d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1626d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1626d8:
    // 0x1626d8: 0x0  nop
    ctx->pc = 0x1626d8u;
    // NOP
label_1626dc:
    // 0x1626dc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1626dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1626e0:
    // 0x1626e0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1626e4:
    if (ctx->pc == 0x1626E4u) {
        ctx->pc = 0x1626E8u;
        goto label_1626e8;
    }
    ctx->pc = 0x1626E0u;
    {
        const bool branch_taken_0x1626e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1626e0) {
            ctx->pc = 0x1629C0u;
            goto label_1629c0;
        }
    }
    ctx->pc = 0x1626E8u;
label_1626e8:
    // 0x1626e8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1626e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1626ec:
    // 0x1626ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1626ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1626f0:
    // 0x1626f0: 0x0  nop
    ctx->pc = 0x1626f0u;
    // NOP
label_1626f4:
    // 0x1626f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1626f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1626f8:
    // 0x1626f8: 0x0  nop
    ctx->pc = 0x1626f8u;
    // NOP
label_1626fc:
    // 0x1626fc: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_162700:
    if (ctx->pc == 0x162700u) {
        ctx->pc = 0x162704u;
        goto label_162704;
    }
    ctx->pc = 0x1626FCu;
    {
        const bool branch_taken_0x1626fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1626fc) {
            ctx->pc = 0x162794u;
            goto label_162794;
        }
    }
    ctx->pc = 0x162704u;
label_162704:
    // 0x162704: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162708:
    // 0x162708: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
label_16270c:
    // 0x16270c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16270cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162710:
    // 0x162710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162714:
    // 0x162714: 0x0  nop
    ctx->pc = 0x162714u;
    // NOP
label_162718:
    // 0x162718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16271c:
    // 0x16271c: 0x0  nop
    ctx->pc = 0x16271cu;
    // NOP
label_162720:
    // 0x162720: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_162724:
    if (ctx->pc == 0x162724u) {
        ctx->pc = 0x162728u;
        goto label_162728;
    }
    ctx->pc = 0x162720u;
    {
        const bool branch_taken_0x162720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162720) {
            ctx->pc = 0x162734u;
            goto label_162734;
        }
    }
    ctx->pc = 0x162728u;
label_162728:
    // 0x162728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16272c:
    // 0x16272c: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_162730:
    if (ctx->pc == 0x162730u) {
        ctx->pc = 0x162734u;
        goto label_162734;
    }
    ctx->pc = 0x16272Cu;
    {
        const bool branch_taken_0x16272c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16272c) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162734u;
label_162734:
    // 0x162734: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162738:
    // 0x162738: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x162738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
label_16273c:
    // 0x16273c: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x16273cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_162740:
    // 0x162740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162744:
    // 0x162744: 0x0  nop
    ctx->pc = 0x162744u;
    // NOP
label_162748:
    // 0x162748: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16274c:
    // 0x16274c: 0x0  nop
    ctx->pc = 0x16274cu;
    // NOP
label_162750:
    // 0x162750: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_162754:
    if (ctx->pc == 0x162754u) {
        ctx->pc = 0x162758u;
        goto label_162758;
    }
    ctx->pc = 0x162750u;
    {
        const bool branch_taken_0x162750 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162750) {
            ctx->pc = 0x162764u;
            goto label_162764;
        }
    }
    ctx->pc = 0x162758u;
label_162758:
    // 0x162758: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x162758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16275c:
    // 0x16275c: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_162760:
    if (ctx->pc == 0x162760u) {
        ctx->pc = 0x162764u;
        goto label_162764;
    }
    ctx->pc = 0x16275Cu;
    {
        const bool branch_taken_0x16275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16275c) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162764u;
label_162764:
    // 0x162764: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162768:
    // 0x162768: 0x3c02c03c  lui         $v0, 0xC03C
    ctx->pc = 0x162768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49212 << 16));
label_16276c:
    // 0x16276c: 0x34427edd  ori         $v0, $v0, 0x7EDD
    ctx->pc = 0x16276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32477);
label_162770:
    // 0x162770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162774:
    // 0x162774: 0x0  nop
    ctx->pc = 0x162774u;
    // NOP
label_162778:
    // 0x162778: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16277c:
    // 0x16277c: 0x0  nop
    ctx->pc = 0x16277cu;
    // NOP
label_162780:
    // 0x162780: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_162784:
    if (ctx->pc == 0x162784u) {
        ctx->pc = 0x162788u;
        goto label_162788;
    }
    ctx->pc = 0x162780u;
    {
        const bool branch_taken_0x162780 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162780) {
            ctx->pc = 0x1627F4u;
            goto label_1627f4;
        }
    }
    ctx->pc = 0x162788u;
label_162788:
    // 0x162788: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16278c:
    // 0x16278c: 0x100000bb  b           . + 4 + (0xBB << 2)
label_162790:
    if (ctx->pc == 0x162790u) {
        ctx->pc = 0x162794u;
        goto label_162794;
    }
    ctx->pc = 0x16278Cu;
    {
        const bool branch_taken_0x16278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16278c) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162794u;
label_162794:
    // 0x162794: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162798:
    // 0x162798: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_16279c:
    // 0x16279c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16279cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1627a0:
    // 0x1627a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1627a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1627a4:
    // 0x1627a4: 0x0  nop
    ctx->pc = 0x1627a4u;
    // NOP
label_1627a8:
    // 0x1627a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1627a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1627ac:
    // 0x1627ac: 0x0  nop
    ctx->pc = 0x1627acu;
    // NOP
label_1627b0:
    // 0x1627b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1627b4:
    if (ctx->pc == 0x1627B4u) {
        ctx->pc = 0x1627B8u;
        goto label_1627b8;
    }
    ctx->pc = 0x1627B0u;
    {
        const bool branch_taken_0x1627b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1627b0) {
            ctx->pc = 0x1627C4u;
            goto label_1627c4;
        }
    }
    ctx->pc = 0x1627B8u;
label_1627b8:
    // 0x1627b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1627b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1627bc:
    // 0x1627bc: 0x100000af  b           . + 4 + (0xAF << 2)
label_1627c0:
    if (ctx->pc == 0x1627C0u) {
        ctx->pc = 0x1627C4u;
        goto label_1627c4;
    }
    ctx->pc = 0x1627BCu;
    {
        const bool branch_taken_0x1627bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627bc) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x1627C4u;
label_1627c4:
    // 0x1627c4: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1627c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1627c8:
    // 0x1627c8: 0x3c02400a  lui         $v0, 0x400A
    ctx->pc = 0x1627c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16394 << 16));
label_1627cc:
    // 0x1627cc: 0x34423ae6  ori         $v0, $v0, 0x3AE6
    ctx->pc = 0x1627ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15078);
label_1627d0:
    // 0x1627d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1627d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1627d4:
    // 0x1627d4: 0x0  nop
    ctx->pc = 0x1627d4u;
    // NOP
label_1627d8:
    // 0x1627d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1627d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1627dc:
    // 0x1627dc: 0x0  nop
    ctx->pc = 0x1627dcu;
    // NOP
label_1627e0:
    // 0x1627e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1627e4:
    if (ctx->pc == 0x1627E4u) {
        ctx->pc = 0x1627E8u;
        goto label_1627e8;
    }
    ctx->pc = 0x1627E0u;
    {
        const bool branch_taken_0x1627e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1627e0) {
            ctx->pc = 0x1627F4u;
            goto label_1627f4;
        }
    }
    ctx->pc = 0x1627E8u;
label_1627e8:
    // 0x1627e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1627e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1627ec:
    // 0x1627ec: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_1627f0:
    if (ctx->pc == 0x1627F0u) {
        ctx->pc = 0x1627F4u;
        goto label_1627f4;
    }
    ctx->pc = 0x1627ECu;
    {
        const bool branch_taken_0x1627ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627ec) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x1627F4u;
label_1627f4:
    // 0x1627f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1627f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1627f8:
    // 0x1627f8: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1627fc:
    if (ctx->pc == 0x1627FCu) {
        ctx->pc = 0x162800u;
        goto label_162800;
    }
    ctx->pc = 0x1627F8u;
    {
        const bool branch_taken_0x1627f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627f8) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162800u;
label_162800:
    // 0x162800: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162804:
    // 0x162804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162808:
    // 0x162808: 0x0  nop
    ctx->pc = 0x162808u;
    // NOP
label_16280c:
    // 0x16280c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16280cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162810:
    // 0x162810: 0x0  nop
    ctx->pc = 0x162810u;
    // NOP
label_162814:
    // 0x162814: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_162818:
    if (ctx->pc == 0x162818u) {
        ctx->pc = 0x16281Cu;
        goto label_16281c;
    }
    ctx->pc = 0x162814u;
    {
        const bool branch_taken_0x162814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162814) {
            ctx->pc = 0x16287Cu;
            goto label_16287c;
        }
    }
    ctx->pc = 0x16281Cu;
label_16281c:
    // 0x16281c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x16281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162820:
    // 0x162820: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
label_162824:
    // 0x162824: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162828:
    // 0x162828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16282c:
    // 0x16282c: 0x0  nop
    ctx->pc = 0x16282cu;
    // NOP
label_162830:
    // 0x162830: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162834:
    // 0x162834: 0x0  nop
    ctx->pc = 0x162834u;
    // NOP
label_162838:
    // 0x162838: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_16283c:
    if (ctx->pc == 0x16283Cu) {
        ctx->pc = 0x162840u;
        goto label_162840;
    }
    ctx->pc = 0x162838u;
    {
        const bool branch_taken_0x162838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162838) {
            ctx->pc = 0x16284Cu;
            goto label_16284c;
        }
    }
    ctx->pc = 0x162840u;
label_162840:
    // 0x162840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162844:
    // 0x162844: 0x1000008d  b           . + 4 + (0x8D << 2)
label_162848:
    if (ctx->pc == 0x162848u) {
        ctx->pc = 0x16284Cu;
        goto label_16284c;
    }
    ctx->pc = 0x162844u;
    {
        const bool branch_taken_0x162844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162844) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x16284Cu;
label_16284c:
    // 0x16284c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x16284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162850:
    // 0x162850: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x162850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
label_162854:
    // 0x162854: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_162858:
    // 0x162858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16285c:
    // 0x16285c: 0x0  nop
    ctx->pc = 0x16285cu;
    // NOP
label_162860:
    // 0x162860: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162864:
    // 0x162864: 0x0  nop
    ctx->pc = 0x162864u;
    // NOP
label_162868:
    // 0x162868: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_16286c:
    if (ctx->pc == 0x16286Cu) {
        ctx->pc = 0x162870u;
        goto label_162870;
    }
    ctx->pc = 0x162868u;
    {
        const bool branch_taken_0x162868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162868) {
            ctx->pc = 0x16290Cu;
            goto label_16290c;
        }
    }
    ctx->pc = 0x162870u;
label_162870:
    // 0x162870: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x162870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_162874:
    // 0x162874: 0x10000081  b           . + 4 + (0x81 << 2)
label_162878:
    if (ctx->pc == 0x162878u) {
        ctx->pc = 0x16287Cu;
        goto label_16287c;
    }
    ctx->pc = 0x162874u;
    {
        const bool branch_taken_0x162874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162874) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x16287Cu;
label_16287c:
    // 0x16287c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x16287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162880:
    // 0x162880: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_162884:
    // 0x162884: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162888:
    // 0x162888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16288c:
    // 0x16288c: 0x0  nop
    ctx->pc = 0x16288cu;
    // NOP
label_162890:
    // 0x162890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162894:
    // 0x162894: 0x0  nop
    ctx->pc = 0x162894u;
    // NOP
label_162898:
    // 0x162898: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_16289c:
    if (ctx->pc == 0x16289Cu) {
        ctx->pc = 0x1628A0u;
        goto label_1628a0;
    }
    ctx->pc = 0x162898u;
    {
        const bool branch_taken_0x162898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162898) {
            ctx->pc = 0x1628ACu;
            goto label_1628ac;
        }
    }
    ctx->pc = 0x1628A0u;
label_1628a0:
    // 0x1628a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1628a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1628a4:
    // 0x1628a4: 0x10000075  b           . + 4 + (0x75 << 2)
label_1628a8:
    if (ctx->pc == 0x1628A8u) {
        ctx->pc = 0x1628ACu;
        goto label_1628ac;
    }
    ctx->pc = 0x1628A4u;
    {
        const bool branch_taken_0x1628a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1628a4) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x1628ACu;
label_1628ac:
    // 0x1628ac: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1628acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1628b0:
    // 0x1628b0: 0x3c02400a  lui         $v0, 0x400A
    ctx->pc = 0x1628b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16394 << 16));
label_1628b4:
    // 0x1628b4: 0x34423ae6  ori         $v0, $v0, 0x3AE6
    ctx->pc = 0x1628b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15078);
label_1628b8:
    // 0x1628b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1628b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1628bc:
    // 0x1628bc: 0x0  nop
    ctx->pc = 0x1628bcu;
    // NOP
label_1628c0:
    // 0x1628c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1628c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1628c4:
    // 0x1628c4: 0x0  nop
    ctx->pc = 0x1628c4u;
    // NOP
label_1628c8:
    // 0x1628c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1628cc:
    if (ctx->pc == 0x1628CCu) {
        ctx->pc = 0x1628D0u;
        goto label_1628d0;
    }
    ctx->pc = 0x1628C8u;
    {
        const bool branch_taken_0x1628c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1628c8) {
            ctx->pc = 0x1628DCu;
            goto label_1628dc;
        }
    }
    ctx->pc = 0x1628D0u;
label_1628d0:
    // 0x1628d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1628d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1628d4:
    // 0x1628d4: 0x10000069  b           . + 4 + (0x69 << 2)
label_1628d8:
    if (ctx->pc == 0x1628D8u) {
        ctx->pc = 0x1628DCu;
        goto label_1628dc;
    }
    ctx->pc = 0x1628D4u;
    {
        const bool branch_taken_0x1628d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1628d4) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x1628DCu;
label_1628dc:
    // 0x1628dc: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1628dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1628e0:
    // 0x1628e0: 0x3c02403c  lui         $v0, 0x403C
    ctx->pc = 0x1628e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16444 << 16));
label_1628e4:
    // 0x1628e4: 0x34427edd  ori         $v0, $v0, 0x7EDD
    ctx->pc = 0x1628e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32477);
label_1628e8:
    // 0x1628e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1628e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1628ec:
    // 0x1628ec: 0x0  nop
    ctx->pc = 0x1628ecu;
    // NOP
label_1628f0:
    // 0x1628f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1628f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1628f4:
    // 0x1628f4: 0x0  nop
    ctx->pc = 0x1628f4u;
    // NOP
label_1628f8:
    // 0x1628f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1628fc:
    if (ctx->pc == 0x1628FCu) {
        ctx->pc = 0x162900u;
        goto label_162900;
    }
    ctx->pc = 0x1628F8u;
    {
        const bool branch_taken_0x1628f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1628f8) {
            ctx->pc = 0x16290Cu;
            goto label_16290c;
        }
    }
    ctx->pc = 0x162900u;
label_162900:
    // 0x162900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_162904:
    // 0x162904: 0x1000005d  b           . + 4 + (0x5D << 2)
label_162908:
    if (ctx->pc == 0x162908u) {
        ctx->pc = 0x16290Cu;
        goto label_16290c;
    }
    ctx->pc = 0x162904u;
    {
        const bool branch_taken_0x162904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162904) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x16290Cu;
label_16290c:
    // 0x16290c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_162910:
    // 0x162910: 0x1000005a  b           . + 4 + (0x5A << 2)
label_162914:
    if (ctx->pc == 0x162914u) {
        ctx->pc = 0x162918u;
        goto label_162918;
    }
    ctx->pc = 0x162910u;
    {
        const bool branch_taken_0x162910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162910) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162918u;
label_162918:
    // 0x162918: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
label_16291c:
    // 0x16291c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162920:
    // 0x162920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162924:
    // 0x162924: 0x0  nop
    ctx->pc = 0x162924u;
    // NOP
label_162928:
    // 0x162928: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x162928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_16292c:
    // 0x16292c: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x16292cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
label_162930:
    // 0x162930: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_162934:
    // 0x162934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162938:
    // 0x162938: 0x0  nop
    ctx->pc = 0x162938u;
    // NOP
label_16293c:
    // 0x16293c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x16293cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_162940:
    // 0x162940: 0x3c023f16  lui         $v0, 0x3F16
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16150 << 16));
label_162944:
    // 0x162944: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_162948:
    // 0x162948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16294c:
    // 0x16294c: 0x0  nop
    ctx->pc = 0x16294cu;
    // NOP
label_162950:
    // 0x162950: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x162950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_162954:
    // 0x162954: 0x3c024023  lui         $v0, 0x4023
    ctx->pc = 0x162954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16419 << 16));
label_162958:
    // 0x162958: 0x34425ce2  ori         $v0, $v0, 0x5CE2
    ctx->pc = 0x162958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23778);
label_16295c:
    // 0x16295c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16295cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162960:
    // 0x162960: 0x0  nop
    ctx->pc = 0x162960u;
    // NOP
label_162964:
    // 0x162964: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x162964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_162968:
    // 0x162968: 0x10000015  b           . + 4 + (0x15 << 2)
label_16296c:
    if (ctx->pc == 0x16296Cu) {
        ctx->pc = 0x162970u;
        goto label_162970;
    }
    ctx->pc = 0x162968u;
    {
        const bool branch_taken_0x162968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162968) {
            ctx->pc = 0x1629C0u;
            goto label_1629c0;
        }
    }
    ctx->pc = 0x162970u;
label_162970:
    // 0x162970: 0x3c02bf16  lui         $v0, 0xBF16
    ctx->pc = 0x162970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48918 << 16));
label_162974:
    // 0x162974: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_162978:
    // 0x162978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16297c:
    // 0x16297c: 0x0  nop
    ctx->pc = 0x16297cu;
    // NOP
label_162980:
    // 0x162980: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x162980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_162984:
    // 0x162984: 0x3c02c023  lui         $v0, 0xC023
    ctx->pc = 0x162984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49187 << 16));
label_162988:
    // 0x162988: 0x34425ce2  ori         $v0, $v0, 0x5CE2
    ctx->pc = 0x162988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23778);
label_16298c:
    // 0x16298c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16298cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162990:
    // 0x162990: 0x0  nop
    ctx->pc = 0x162990u;
    // NOP
label_162994:
    // 0x162994: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x162994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_162998:
    // 0x162998: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_16299c:
    // 0x16299c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16299cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1629a0:
    // 0x1629a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1629a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1629a4:
    // 0x1629a4: 0x0  nop
    ctx->pc = 0x1629a4u;
    // NOP
label_1629a8:
    // 0x1629a8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1629a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1629ac:
    // 0x1629ac: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1629acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
label_1629b0:
    // 0x1629b0: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1629b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_1629b4:
    // 0x1629b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1629b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1629b8:
    // 0x1629b8: 0x0  nop
    ctx->pc = 0x1629b8u;
    // NOP
label_1629bc:
    // 0x1629bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1629bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1629c0:
    // 0x1629c0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1629c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1629c4:
    // 0x1629c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1629c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1629c8:
    // 0x1629c8: 0x0  nop
    ctx->pc = 0x1629c8u;
    // NOP
label_1629cc:
    // 0x1629cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1629ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1629d0:
    // 0x1629d0: 0x0  nop
    ctx->pc = 0x1629d0u;
    // NOP
label_1629d4:
    // 0x1629d4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1629d8:
    if (ctx->pc == 0x1629D8u) {
        ctx->pc = 0x1629DCu;
        goto label_1629dc;
    }
    ctx->pc = 0x1629D4u;
    {
        const bool branch_taken_0x1629d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1629d4) {
            ctx->pc = 0x162A30u;
            goto label_162a30;
        }
    }
    ctx->pc = 0x1629DCu;
label_1629dc:
    // 0x1629dc: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1629dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1629e0:
    // 0x1629e0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1629e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1629e4:
    // 0x1629e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1629e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1629e8:
    // 0x1629e8: 0x0  nop
    ctx->pc = 0x1629e8u;
    // NOP
label_1629ec:
    // 0x1629ec: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1629f0:
    if (ctx->pc == 0x1629F0u) {
        ctx->pc = 0x1629F4u;
        goto label_1629f4;
    }
    ctx->pc = 0x1629ECu;
    {
        const bool branch_taken_0x1629ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1629ec) {
            ctx->pc = 0x162A00u;
            goto label_162a00;
        }
    }
    ctx->pc = 0x1629F4u;
label_1629f4:
    // 0x1629f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1629f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1629f8:
    // 0x1629f8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1629fc:
    if (ctx->pc == 0x1629FCu) {
        ctx->pc = 0x162A00u;
        goto label_162a00;
    }
    ctx->pc = 0x1629F8u;
    {
        const bool branch_taken_0x1629f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1629f8) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162A00u;
label_162a00:
    // 0x162a00: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162a04:
    // 0x162a04: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x162a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162a08:
    // 0x162a08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162a0c:
    // 0x162a0c: 0x0  nop
    ctx->pc = 0x162a0cu;
    // NOP
label_162a10:
    // 0x162a10: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_162a14:
    if (ctx->pc == 0x162A14u) {
        ctx->pc = 0x162A18u;
        goto label_162a18;
    }
    ctx->pc = 0x162A10u;
    {
        const bool branch_taken_0x162a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162a10) {
            ctx->pc = 0x162A24u;
            goto label_162a24;
        }
    }
    ctx->pc = 0x162A18u;
label_162a18:
    // 0x162a18: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x162a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_162a1c:
    // 0x162a1c: 0x10000017  b           . + 4 + (0x17 << 2)
label_162a20:
    if (ctx->pc == 0x162A20u) {
        ctx->pc = 0x162A24u;
        goto label_162a24;
    }
    ctx->pc = 0x162A1Cu;
    {
        const bool branch_taken_0x162a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a1c) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162A24u;
label_162a24:
    // 0x162a24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_162a28:
    // 0x162a28: 0x10000014  b           . + 4 + (0x14 << 2)
label_162a2c:
    if (ctx->pc == 0x162A2Cu) {
        ctx->pc = 0x162A30u;
        goto label_162a30;
    }
    ctx->pc = 0x162A28u;
    {
        const bool branch_taken_0x162a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a28) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162A30u;
label_162a30:
    // 0x162a30: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162a34:
    // 0x162a34: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x162a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162a38:
    // 0x162a38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162a3c:
    // 0x162a3c: 0x0  nop
    ctx->pc = 0x162a3cu;
    // NOP
label_162a40:
    // 0x162a40: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_162a44:
    if (ctx->pc == 0x162A44u) {
        ctx->pc = 0x162A48u;
        goto label_162a48;
    }
    ctx->pc = 0x162A40u;
    {
        const bool branch_taken_0x162a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162a40) {
            ctx->pc = 0x162A54u;
            goto label_162a54;
        }
    }
    ctx->pc = 0x162A48u;
label_162a48:
    // 0x162a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162a4c:
    // 0x162a4c: 0x1000000b  b           . + 4 + (0xB << 2)
label_162a50:
    if (ctx->pc == 0x162A50u) {
        ctx->pc = 0x162A54u;
        goto label_162a54;
    }
    ctx->pc = 0x162A4Cu;
    {
        const bool branch_taken_0x162a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a4c) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162A54u;
label_162a54:
    // 0x162a54: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162a58:
    // 0x162a58: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x162a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162a5c:
    // 0x162a5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162a60:
    // 0x162a60: 0x0  nop
    ctx->pc = 0x162a60u;
    // NOP
label_162a64:
    // 0x162a64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_162a68:
    if (ctx->pc == 0x162A68u) {
        ctx->pc = 0x162A6Cu;
        goto label_162a6c;
    }
    ctx->pc = 0x162A64u;
    {
        const bool branch_taken_0x162a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162a64) {
            ctx->pc = 0x162A78u;
            goto label_162a78;
        }
    }
    ctx->pc = 0x162A6Cu;
label_162a6c:
    // 0x162a6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x162a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_162a70:
    // 0x162a70: 0x10000002  b           . + 4 + (0x2 << 2)
label_162a74:
    if (ctx->pc == 0x162A74u) {
        ctx->pc = 0x162A78u;
        goto label_162a78;
    }
    ctx->pc = 0x162A70u;
    {
        const bool branch_taken_0x162a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a70) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162A78u;
label_162a78:
    // 0x162a78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_162a7c:
    // 0x162a7c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x162a7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_162a80:
    // 0x162a80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x162a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_162a84:
    // 0x162a84: 0x3e00008  jr          $ra
label_162a88:
    if (ctx->pc == 0x162A88u) {
        ctx->pc = 0x162A8Cu;
        goto label_fallthrough_0x162a84;
    }
    ctx->pc = 0x162A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x162a84:
    ctx->pc = 0x162A8Cu;
}
