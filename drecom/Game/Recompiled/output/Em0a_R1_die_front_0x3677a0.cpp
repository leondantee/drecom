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

// Function: Em0a_R1_die_front
// Address: 0x3677a0 - 0x367ad4
void Em0a_R1_die_front_0x3677a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_die_front_0x3677a0");
#endif

    switch (ctx->pc) {
        case 0x3677a0u: goto label_3677a0;
        case 0x3677a4u: goto label_3677a4;
        case 0x3677a8u: goto label_3677a8;
        case 0x3677acu: goto label_3677ac;
        case 0x3677b0u: goto label_3677b0;
        case 0x3677b4u: goto label_3677b4;
        case 0x3677b8u: goto label_3677b8;
        case 0x3677bcu: goto label_3677bc;
        case 0x3677c0u: goto label_3677c0;
        case 0x3677c4u: goto label_3677c4;
        case 0x3677c8u: goto label_3677c8;
        case 0x3677ccu: goto label_3677cc;
        case 0x3677d0u: goto label_3677d0;
        case 0x3677d4u: goto label_3677d4;
        case 0x3677d8u: goto label_3677d8;
        case 0x3677dcu: goto label_3677dc;
        case 0x3677e0u: goto label_3677e0;
        case 0x3677e4u: goto label_3677e4;
        case 0x3677e8u: goto label_3677e8;
        case 0x3677ecu: goto label_3677ec;
        case 0x3677f0u: goto label_3677f0;
        case 0x3677f4u: goto label_3677f4;
        case 0x3677f8u: goto label_3677f8;
        case 0x3677fcu: goto label_3677fc;
        case 0x367800u: goto label_367800;
        case 0x367804u: goto label_367804;
        case 0x367808u: goto label_367808;
        case 0x36780cu: goto label_36780c;
        case 0x367810u: goto label_367810;
        case 0x367814u: goto label_367814;
        case 0x367818u: goto label_367818;
        case 0x36781cu: goto label_36781c;
        case 0x367820u: goto label_367820;
        case 0x367824u: goto label_367824;
        case 0x367828u: goto label_367828;
        case 0x36782cu: goto label_36782c;
        case 0x367830u: goto label_367830;
        case 0x367834u: goto label_367834;
        case 0x367838u: goto label_367838;
        case 0x36783cu: goto label_36783c;
        case 0x367840u: goto label_367840;
        case 0x367844u: goto label_367844;
        case 0x367848u: goto label_367848;
        case 0x36784cu: goto label_36784c;
        case 0x367850u: goto label_367850;
        case 0x367854u: goto label_367854;
        case 0x367858u: goto label_367858;
        case 0x36785cu: goto label_36785c;
        case 0x367860u: goto label_367860;
        case 0x367864u: goto label_367864;
        case 0x367868u: goto label_367868;
        case 0x36786cu: goto label_36786c;
        case 0x367870u: goto label_367870;
        case 0x367874u: goto label_367874;
        case 0x367878u: goto label_367878;
        case 0x36787cu: goto label_36787c;
        case 0x367880u: goto label_367880;
        case 0x367884u: goto label_367884;
        case 0x367888u: goto label_367888;
        case 0x36788cu: goto label_36788c;
        case 0x367890u: goto label_367890;
        case 0x367894u: goto label_367894;
        case 0x367898u: goto label_367898;
        case 0x36789cu: goto label_36789c;
        case 0x3678a0u: goto label_3678a0;
        case 0x3678a4u: goto label_3678a4;
        case 0x3678a8u: goto label_3678a8;
        case 0x3678acu: goto label_3678ac;
        case 0x3678b0u: goto label_3678b0;
        case 0x3678b4u: goto label_3678b4;
        case 0x3678b8u: goto label_3678b8;
        case 0x3678bcu: goto label_3678bc;
        case 0x3678c0u: goto label_3678c0;
        case 0x3678c4u: goto label_3678c4;
        case 0x3678c8u: goto label_3678c8;
        case 0x3678ccu: goto label_3678cc;
        case 0x3678d0u: goto label_3678d0;
        case 0x3678d4u: goto label_3678d4;
        case 0x3678d8u: goto label_3678d8;
        case 0x3678dcu: goto label_3678dc;
        case 0x3678e0u: goto label_3678e0;
        case 0x3678e4u: goto label_3678e4;
        case 0x3678e8u: goto label_3678e8;
        case 0x3678ecu: goto label_3678ec;
        case 0x3678f0u: goto label_3678f0;
        case 0x3678f4u: goto label_3678f4;
        case 0x3678f8u: goto label_3678f8;
        case 0x3678fcu: goto label_3678fc;
        case 0x367900u: goto label_367900;
        case 0x367904u: goto label_367904;
        case 0x367908u: goto label_367908;
        case 0x36790cu: goto label_36790c;
        case 0x367910u: goto label_367910;
        case 0x367914u: goto label_367914;
        case 0x367918u: goto label_367918;
        case 0x36791cu: goto label_36791c;
        case 0x367920u: goto label_367920;
        case 0x367924u: goto label_367924;
        case 0x367928u: goto label_367928;
        case 0x36792cu: goto label_36792c;
        case 0x367930u: goto label_367930;
        case 0x367934u: goto label_367934;
        case 0x367938u: goto label_367938;
        case 0x36793cu: goto label_36793c;
        case 0x367940u: goto label_367940;
        case 0x367944u: goto label_367944;
        case 0x367948u: goto label_367948;
        case 0x36794cu: goto label_36794c;
        case 0x367950u: goto label_367950;
        case 0x367954u: goto label_367954;
        case 0x367958u: goto label_367958;
        case 0x36795cu: goto label_36795c;
        case 0x367960u: goto label_367960;
        case 0x367964u: goto label_367964;
        case 0x367968u: goto label_367968;
        case 0x36796cu: goto label_36796c;
        case 0x367970u: goto label_367970;
        case 0x367974u: goto label_367974;
        case 0x367978u: goto label_367978;
        case 0x36797cu: goto label_36797c;
        case 0x367980u: goto label_367980;
        case 0x367984u: goto label_367984;
        case 0x367988u: goto label_367988;
        case 0x36798cu: goto label_36798c;
        case 0x367990u: goto label_367990;
        case 0x367994u: goto label_367994;
        case 0x367998u: goto label_367998;
        case 0x36799cu: goto label_36799c;
        case 0x3679a0u: goto label_3679a0;
        case 0x3679a4u: goto label_3679a4;
        case 0x3679a8u: goto label_3679a8;
        case 0x3679acu: goto label_3679ac;
        case 0x3679b0u: goto label_3679b0;
        case 0x3679b4u: goto label_3679b4;
        case 0x3679b8u: goto label_3679b8;
        case 0x3679bcu: goto label_3679bc;
        case 0x3679c0u: goto label_3679c0;
        case 0x3679c4u: goto label_3679c4;
        case 0x3679c8u: goto label_3679c8;
        case 0x3679ccu: goto label_3679cc;
        case 0x3679d0u: goto label_3679d0;
        case 0x3679d4u: goto label_3679d4;
        case 0x3679d8u: goto label_3679d8;
        case 0x3679dcu: goto label_3679dc;
        case 0x3679e0u: goto label_3679e0;
        case 0x3679e4u: goto label_3679e4;
        case 0x3679e8u: goto label_3679e8;
        case 0x3679ecu: goto label_3679ec;
        case 0x3679f0u: goto label_3679f0;
        case 0x3679f4u: goto label_3679f4;
        case 0x3679f8u: goto label_3679f8;
        case 0x3679fcu: goto label_3679fc;
        case 0x367a00u: goto label_367a00;
        case 0x367a04u: goto label_367a04;
        case 0x367a08u: goto label_367a08;
        case 0x367a0cu: goto label_367a0c;
        case 0x367a10u: goto label_367a10;
        case 0x367a14u: goto label_367a14;
        case 0x367a18u: goto label_367a18;
        case 0x367a1cu: goto label_367a1c;
        case 0x367a20u: goto label_367a20;
        case 0x367a24u: goto label_367a24;
        case 0x367a28u: goto label_367a28;
        case 0x367a2cu: goto label_367a2c;
        case 0x367a30u: goto label_367a30;
        case 0x367a34u: goto label_367a34;
        case 0x367a38u: goto label_367a38;
        case 0x367a3cu: goto label_367a3c;
        case 0x367a40u: goto label_367a40;
        case 0x367a44u: goto label_367a44;
        case 0x367a48u: goto label_367a48;
        case 0x367a4cu: goto label_367a4c;
        case 0x367a50u: goto label_367a50;
        case 0x367a54u: goto label_367a54;
        case 0x367a58u: goto label_367a58;
        case 0x367a5cu: goto label_367a5c;
        case 0x367a60u: goto label_367a60;
        case 0x367a64u: goto label_367a64;
        case 0x367a68u: goto label_367a68;
        case 0x367a6cu: goto label_367a6c;
        case 0x367a70u: goto label_367a70;
        case 0x367a74u: goto label_367a74;
        case 0x367a78u: goto label_367a78;
        case 0x367a7cu: goto label_367a7c;
        case 0x367a80u: goto label_367a80;
        case 0x367a84u: goto label_367a84;
        case 0x367a88u: goto label_367a88;
        case 0x367a8cu: goto label_367a8c;
        case 0x367a90u: goto label_367a90;
        case 0x367a94u: goto label_367a94;
        case 0x367a98u: goto label_367a98;
        case 0x367a9cu: goto label_367a9c;
        case 0x367aa0u: goto label_367aa0;
        case 0x367aa4u: goto label_367aa4;
        case 0x367aa8u: goto label_367aa8;
        case 0x367aacu: goto label_367aac;
        case 0x367ab0u: goto label_367ab0;
        case 0x367ab4u: goto label_367ab4;
        case 0x367ab8u: goto label_367ab8;
        case 0x367abcu: goto label_367abc;
        case 0x367ac0u: goto label_367ac0;
        case 0x367ac4u: goto label_367ac4;
        case 0x367ac8u: goto label_367ac8;
        case 0x367accu: goto label_367acc;
        case 0x367ad0u: goto label_367ad0;
        default: break;
    }

    ctx->pc = 0x3677a0u;

label_3677a0:
    // 0x3677a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3677a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3677a4:
    // 0x3677a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3677a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3677a8:
    // 0x3677a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3677a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3677ac:
    // 0x3677ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3677acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3677b0:
    // 0x3677b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3677b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3677b4:
    // 0x3677b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3677b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3677b8:
    // 0x3677b8: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x3677b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3677bc:
    // 0x3677bc: 0x102000c1  beqz        $at, . + 4 + (0xC1 << 2)
label_3677c0:
    if (ctx->pc == 0x3677C0u) {
        ctx->pc = 0x3677C4u;
        goto label_3677c4;
    }
    ctx->pc = 0x3677BCu;
    {
        const bool branch_taken_0x3677bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3677bc) {
            ctx->pc = 0x367AC4u;
            goto label_367ac4;
        }
    }
    ctx->pc = 0x3677C4u;
label_3677c4:
    // 0x3677c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3677c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_3677c8:
    // 0x3677c8: 0x24642b10  addiu       $a0, $v1, 0x2B10
    ctx->pc = 0x3677c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11024));
label_3677cc:
    // 0x3677cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3677ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3677d0:
    // 0x3677d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3677d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3677d4:
    // 0x3677d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3677d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3677d8:
    // 0x3677d8: 0x600008  jr          $v1
label_3677dc:
    if (ctx->pc == 0x3677DCu) {
        ctx->pc = 0x3677E0u;
        goto label_3677e0;
    }
    ctx->pc = 0x3677D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3677D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3677E0u;
label_3677e0:
    // 0x3677e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3677e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3677e4:
    // 0x3677e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3677e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3677e8:
    // 0x3677e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3677e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_3677ec:
    // 0x3677ec: 0x2406050c  addiu       $a2, $zero, 0x50C
    ctx->pc = 0x3677ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_3677f0:
    // 0x3677f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3677f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3677f4:
    // 0x3677f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3677f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3677f8:
    // 0x3677f8: 0xc0965d0  jal         func_259740
label_3677fc:
    if (ctx->pc == 0x3677FCu) {
        ctx->pc = 0x367800u;
        goto label_367800;
    }
    ctx->pc = 0x3677F8u;
    SET_GPR_U32(ctx, 31, 0x367800u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3677F8u, 0x367800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367800u;
label_367800:
    // 0x367800: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367804:
    // 0x367804: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x367804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_367808:
    // 0x367808: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36780c:
    // 0x36780c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x36780cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_367810:
    // 0x367810: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367814:
    // 0x367814: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x367814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
label_367818:
    // 0x367818: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x367818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_36781c:
    // 0x36781c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x36781cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_367820:
    // 0x367820: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x367820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
label_367824:
    // 0x367824: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367828:
    // 0x367828: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_36782c:
    // 0x36782c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_367830:
    // 0x367830: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_367834:
    // 0x367834: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x367834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_367838:
    // 0x367838: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_36783c:
    // 0x36783c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x36783cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_367840:
    // 0x367840: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367844:
    // 0x367844: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367848:
    // 0x367848: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x367848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36784c:
    // 0x36784c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x36784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_367850:
    // 0x367850: 0xc058f50  jal         func_163D40
label_367854:
    if (ctx->pc == 0x367854u) {
        ctx->pc = 0x367858u;
        goto label_367858;
    }
    ctx->pc = 0x367850u;
    SET_GPR_U32(ctx, 31, 0x367858u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x367850u, 0x367858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367858u;
label_367858:
    // 0x367858: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36785c:
    // 0x36785c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36785cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_367860:
    // 0x367860: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367864:
    // 0x367864: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367864u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_367868:
    // 0x367868: 0xc096b40  jal         func_25AD00
label_36786c:
    if (ctx->pc == 0x36786Cu) {
        ctx->pc = 0x367870u;
        goto label_367870;
    }
    ctx->pc = 0x367868u;
    SET_GPR_U32(ctx, 31, 0x367870u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367868u, 0x367870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367870u;
label_367870:
    // 0x367870: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367874:
    // 0x367874: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367878:
    // 0x367878: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x367878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36787c:
    // 0x36787c: 0xc05cd58  jal         func_173560
label_367880:
    if (ctx->pc == 0x367880u) {
        ctx->pc = 0x367884u;
        goto label_367884;
    }
    ctx->pc = 0x36787Cu;
    SET_GPR_U32(ctx, 31, 0x367884u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x36787Cu, 0x367884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367884u;
label_367884:
    // 0x367884: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367888:
    // 0x367888: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36788c:
    // 0x36788c: 0xc05cec4  jal         func_173B10
label_367890:
    if (ctx->pc == 0x367890u) {
        ctx->pc = 0x367894u;
        goto label_367894;
    }
    ctx->pc = 0x36788Cu;
    SET_GPR_U32(ctx, 31, 0x367894u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36788Cu, 0x367894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367894u;
label_367894:
    // 0x367894: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367898:
    // 0x367898: 0xc097478  jal         func_25D1E0
label_36789c:
    if (ctx->pc == 0x36789Cu) {
        ctx->pc = 0x3678A0u;
        goto label_3678a0;
    }
    ctx->pc = 0x367898u;
    SET_GPR_U32(ctx, 31, 0x3678A0u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367898u, 0x3678A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3678A0u;
label_3678a0:
    // 0x3678a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3678a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3678a4:
    // 0x3678a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3678a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_3678a8:
    // 0x3678a8: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
label_3678ac:
    if (ctx->pc == 0x3678ACu) {
        ctx->pc = 0x3678B0u;
        goto label_3678b0;
    }
    ctx->pc = 0x3678A8u;
    {
        const bool branch_taken_0x3678a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3678a8) {
            ctx->pc = 0x367AC4u;
            goto label_367ac4;
        }
    }
    ctx->pc = 0x3678B0u;
label_3678b0:
    // 0x3678b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3678b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3678b4:
    // 0x3678b4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3678b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_3678b8:
    // 0x3678b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3678b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3678bc:
    // 0x3678bc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3678bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3678c0:
    // 0x3678c0: 0x10000080  b           . + 4 + (0x80 << 2)
label_3678c4:
    if (ctx->pc == 0x3678C4u) {
        ctx->pc = 0x3678C8u;
        goto label_3678c8;
    }
    ctx->pc = 0x3678C0u;
    {
        const bool branch_taken_0x3678c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3678c0) {
            ctx->pc = 0x367AC4u;
            goto label_367ac4;
        }
    }
    ctx->pc = 0x3678C8u;
label_3678c8:
    // 0x3678c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3678c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3678cc:
    // 0x3678cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3678ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3678d0:
    // 0x3678d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3678d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_3678d4:
    // 0x3678d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3678d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3678d8:
    // 0x3678d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3678d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3678dc:
    // 0x3678dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3678dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3678e0:
    // 0x3678e0: 0xc0965d0  jal         func_259740
label_3678e4:
    if (ctx->pc == 0x3678E4u) {
        ctx->pc = 0x3678E8u;
        goto label_3678e8;
    }
    ctx->pc = 0x3678E0u;
    SET_GPR_U32(ctx, 31, 0x3678E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3678E0u, 0x3678E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3678E8u;
label_3678e8:
    // 0x3678e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3678e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3678ec:
    // 0x3678ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3678ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3678f0:
    // 0x3678f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3678f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3678f4:
    // 0x3678f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3678f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3678f8:
    // 0x3678f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3678f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3678fc:
    // 0x3678fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3678fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_367900:
    // 0x367900: 0xc096b40  jal         func_25AD00
label_367904:
    if (ctx->pc == 0x367904u) {
        ctx->pc = 0x367908u;
        goto label_367908;
    }
    ctx->pc = 0x367900u;
    SET_GPR_U32(ctx, 31, 0x367908u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367900u, 0x367908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367908u;
label_367908:
    // 0x367908: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36790c:
    // 0x36790c: 0xc05cd10  jal         func_173440
label_367910:
    if (ctx->pc == 0x367910u) {
        ctx->pc = 0x367914u;
        goto label_367914;
    }
    ctx->pc = 0x36790Cu;
    SET_GPR_U32(ctx, 31, 0x367914u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36790Cu, 0x367914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367914u;
label_367914:
    // 0x367914: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367918:
    // 0x367918: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_36791c:
    // 0x36791c: 0xc05cec4  jal         func_173B10
label_367920:
    if (ctx->pc == 0x367920u) {
        ctx->pc = 0x367924u;
        goto label_367924;
    }
    ctx->pc = 0x36791Cu;
    SET_GPR_U32(ctx, 31, 0x367924u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36791Cu, 0x367924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367924u;
label_367924:
    // 0x367924: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367928:
    // 0x367928: 0xc097478  jal         func_25D1E0
label_36792c:
    if (ctx->pc == 0x36792Cu) {
        ctx->pc = 0x367930u;
        goto label_367930;
    }
    ctx->pc = 0x367928u;
    SET_GPR_U32(ctx, 31, 0x367930u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367928u, 0x367930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367930u;
label_367930:
    // 0x367930: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367934:
    // 0x367934: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_367938:
    // 0x367938: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_36793c:
    if (ctx->pc == 0x36793Cu) {
        ctx->pc = 0x367940u;
        goto label_367940;
    }
    ctx->pc = 0x367938u;
    {
        const bool branch_taken_0x367938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367938) {
            ctx->pc = 0x367AC4u;
            goto label_367ac4;
        }
    }
    ctx->pc = 0x367940u;
label_367940:
    // 0x367940: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367944:
    // 0x367944: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_367948:
    // 0x367948: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_36794c:
    // 0x36794c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x36794cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_367950:
    // 0x367950: 0x1000005c  b           . + 4 + (0x5C << 2)
label_367954:
    if (ctx->pc == 0x367954u) {
        ctx->pc = 0x367958u;
        goto label_367958;
    }
    ctx->pc = 0x367950u;
    {
        const bool branch_taken_0x367950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367950) {
            ctx->pc = 0x367AC4u;
            goto label_367ac4;
        }
    }
    ctx->pc = 0x367958u;
label_367958:
    // 0x367958: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36795c:
    // 0x36795c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367960:
    // 0x367960: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_367964:
    // 0x367964: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x367964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_367968:
    // 0x367968: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36796c:
    // 0x36796c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36796cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_367970:
    // 0x367970: 0xc0965d0  jal         func_259740
label_367974:
    if (ctx->pc == 0x367974u) {
        ctx->pc = 0x367978u;
        goto label_367978;
    }
    ctx->pc = 0x367970u;
    SET_GPR_U32(ctx, 31, 0x367978u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367970u, 0x367978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367978u;
label_367978:
    // 0x367978: 0xc067694  jal         func_19DA50
label_36797c:
    if (ctx->pc == 0x36797Cu) {
        ctx->pc = 0x367980u;
        goto label_367980;
    }
    ctx->pc = 0x367978u;
    SET_GPR_U32(ctx, 31, 0x367980u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x367978u, 0x367980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367980u;
label_367980:
    // 0x367980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_367984:
    // 0x367984: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x367984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_367988:
    // 0x367988: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x367988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_36798c:
    // 0x36798c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36798cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_367990:
    // 0x367990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367994:
    // 0x367994: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x367994u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_367998:
    // 0x367998: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36799c:
    // 0x36799c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36799cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3679a0:
    // 0x3679a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3679a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3679a4:
    // 0x3679a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3679a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3679a8:
    // 0x3679a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3679a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3679ac:
    // 0x3679ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3679acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3679b0:
    // 0x3679b0: 0xc096b40  jal         func_25AD00
label_3679b4:
    if (ctx->pc == 0x3679B4u) {
        ctx->pc = 0x3679B8u;
        goto label_3679b8;
    }
    ctx->pc = 0x3679B0u;
    SET_GPR_U32(ctx, 31, 0x3679B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3679B0u, 0x3679B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679B8u;
label_3679b8:
    // 0x3679b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3679b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3679bc:
    // 0x3679bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3679bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3679c0:
    // 0x3679c0: 0xc05cec4  jal         func_173B10
label_3679c4:
    if (ctx->pc == 0x3679C4u) {
        ctx->pc = 0x3679C8u;
        goto label_3679c8;
    }
    ctx->pc = 0x3679C0u;
    SET_GPR_U32(ctx, 31, 0x3679C8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3679C0u, 0x3679C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679C8u;
label_3679c8:
    // 0x3679c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3679c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3679cc:
    // 0x3679cc: 0xc097478  jal         func_25D1E0
label_3679d0:
    if (ctx->pc == 0x3679D0u) {
        ctx->pc = 0x3679D4u;
        goto label_3679d4;
    }
    ctx->pc = 0x3679CCu;
    SET_GPR_U32(ctx, 31, 0x3679D4u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3679CCu, 0x3679D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679D4u;
label_3679d4:
    // 0x3679d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3679d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3679d8:
    // 0x3679d8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3679d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_3679dc:
    // 0x3679dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3679e0:
    if (ctx->pc == 0x3679E0u) {
        ctx->pc = 0x3679E4u;
        goto label_3679e4;
    }
    ctx->pc = 0x3679DCu;
    {
        const bool branch_taken_0x3679dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3679dc) {
            ctx->pc = 0x3679FCu;
            goto label_3679fc;
        }
    }
    ctx->pc = 0x3679E4u;
label_3679e4:
    // 0x3679e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3679e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3679e8:
    // 0x3679e8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3679e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_3679ec:
    // 0x3679ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3679ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3679f0:
    // 0x3679f0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3679f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_3679f4:
    // 0x3679f4: 0x10000033  b           . + 4 + (0x33 << 2)
label_3679f8:
    if (ctx->pc == 0x3679F8u) {
        ctx->pc = 0x3679FCu;
        goto label_3679fc;
    }
    ctx->pc = 0x3679F4u;
    {
        const bool branch_taken_0x3679f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3679f4) {
            ctx->pc = 0x367AC4u;
            goto label_367ac4;
        }
    }
    ctx->pc = 0x3679FCu;
label_3679fc:
    // 0x3679fc: 0xc067694  jal         func_19DA50
label_367a00:
    if (ctx->pc == 0x367A00u) {
        ctx->pc = 0x367A04u;
        goto label_367a04;
    }
    ctx->pc = 0x3679FCu;
    SET_GPR_U32(ctx, 31, 0x367A04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3679FCu, 0x367A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A04u;
label_367a04:
    // 0x367a04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_367a08:
    // 0x367a08: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x367a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_367a0c:
    // 0x367a0c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x367a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_367a10:
    // 0x367a10: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x367a10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_367a14:
    // 0x367a14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367a18:
    // 0x367a18: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x367a18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_367a1c:
    // 0x367a1c: 0xc067694  jal         func_19DA50
label_367a20:
    if (ctx->pc == 0x367A20u) {
        ctx->pc = 0x367A24u;
        goto label_367a24;
    }
    ctx->pc = 0x367A1Cu;
    SET_GPR_U32(ctx, 31, 0x367A24u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x367A1Cu, 0x367A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A24u;
label_367a24:
    // 0x367a24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x367a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_367a28:
    // 0x367a28: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x367a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_367a2c:
    // 0x367a2c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_367a30:
    if (ctx->pc == 0x367A30u) {
        ctx->pc = 0x367A34u;
        goto label_367a34;
    }
    ctx->pc = 0x367A2Cu;
    {
        const bool branch_taken_0x367a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x367a2c) {
            ctx->pc = 0x367AC4u;
            goto label_367ac4;
        }
    }
    ctx->pc = 0x367A34u;
label_367a34:
    // 0x367a34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367a38:
    // 0x367a38: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_367a3c:
    // 0x367a3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_367a40:
    // 0x367a40: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x367a40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_367a44:
    // 0x367a44: 0x1000001f  b           . + 4 + (0x1F << 2)
label_367a48:
    if (ctx->pc == 0x367A48u) {
        ctx->pc = 0x367A4Cu;
        goto label_367a4c;
    }
    ctx->pc = 0x367A44u;
    {
        const bool branch_taken_0x367a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367a44) {
            ctx->pc = 0x367AC4u;
            goto label_367ac4;
        }
    }
    ctx->pc = 0x367A4Cu;
label_367a4c:
    // 0x367a4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367a50:
    // 0x367a50: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367a54:
    // 0x367a54: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_367a58:
    // 0x367a58: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x367a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_367a5c:
    // 0x367a5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_367a60:
    // 0x367a60: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_367a64:
    // 0x367a64: 0xc0965d0  jal         func_259740
label_367a68:
    if (ctx->pc == 0x367A68u) {
        ctx->pc = 0x367A6Cu;
        goto label_367a6c;
    }
    ctx->pc = 0x367A64u;
    SET_GPR_U32(ctx, 31, 0x367A6Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367A64u, 0x367A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A6Cu;
label_367a6c:
    // 0x367a6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367a70:
    // 0x367a70: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_367a74:
    // 0x367a74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_367a78:
    // 0x367a78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_367a7c:
    // 0x367a7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367a80:
    // 0x367a80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_367a84:
    // 0x367a84: 0xc096b40  jal         func_25AD00
label_367a88:
    if (ctx->pc == 0x367A88u) {
        ctx->pc = 0x367A8Cu;
        goto label_367a8c;
    }
    ctx->pc = 0x367A84u;
    SET_GPR_U32(ctx, 31, 0x367A8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367A84u, 0x367A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A8Cu;
label_367a8c:
    // 0x367a8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367a90:
    // 0x367a90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_367a94:
    // 0x367a94: 0xc05cec4  jal         func_173B10
label_367a98:
    if (ctx->pc == 0x367A98u) {
        ctx->pc = 0x367A9Cu;
        goto label_367a9c;
    }
    ctx->pc = 0x367A94u;
    SET_GPR_U32(ctx, 31, 0x367A9Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367A94u, 0x367A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A9Cu;
label_367a9c:
    // 0x367a9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367aa0:
    // 0x367aa0: 0xc097478  jal         func_25D1E0
label_367aa4:
    if (ctx->pc == 0x367AA4u) {
        ctx->pc = 0x367AA8u;
        goto label_367aa8;
    }
    ctx->pc = 0x367AA0u;
    SET_GPR_U32(ctx, 31, 0x367AA8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367AA0u, 0x367AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AA8u;
label_367aa8:
    // 0x367aa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367aac:
    // 0x367aac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_367ab0:
    // 0x367ab0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_367ab4:
    if (ctx->pc == 0x367AB4u) {
        ctx->pc = 0x367AB8u;
        goto label_367ab8;
    }
    ctx->pc = 0x367AB0u;
    {
        const bool branch_taken_0x367ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367ab0) {
            ctx->pc = 0x367AC4u;
            goto label_367ac4;
        }
    }
    ctx->pc = 0x367AB8u;
label_367ab8:
    // 0x367ab8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x367ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_367abc:
    // 0x367abc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367ac0:
    // 0x367ac0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x367ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_367ac4:
    // 0x367ac4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x367ac4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_367ac8:
    // 0x367ac8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x367ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_367acc:
    // 0x367acc: 0x3e00008  jr          $ra
label_367ad0:
    if (ctx->pc == 0x367AD0u) {
        ctx->pc = 0x367AD4u;
        goto label_fallthrough_0x367acc;
    }
    ctx->pc = 0x367ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x367acc:
    ctx->pc = 0x367AD4u;
}
