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

// Function: Pl_change
// Address: 0x155800 - 0x155a54
void Pl_change_0x155800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_change_0x155800");
#endif

    switch (ctx->pc) {
        case 0x155800u: goto label_155800;
        case 0x155804u: goto label_155804;
        case 0x155808u: goto label_155808;
        case 0x15580cu: goto label_15580c;
        case 0x155810u: goto label_155810;
        case 0x155814u: goto label_155814;
        case 0x155818u: goto label_155818;
        case 0x15581cu: goto label_15581c;
        case 0x155820u: goto label_155820;
        case 0x155824u: goto label_155824;
        case 0x155828u: goto label_155828;
        case 0x15582cu: goto label_15582c;
        case 0x155830u: goto label_155830;
        case 0x155834u: goto label_155834;
        case 0x155838u: goto label_155838;
        case 0x15583cu: goto label_15583c;
        case 0x155840u: goto label_155840;
        case 0x155844u: goto label_155844;
        case 0x155848u: goto label_155848;
        case 0x15584cu: goto label_15584c;
        case 0x155850u: goto label_155850;
        case 0x155854u: goto label_155854;
        case 0x155858u: goto label_155858;
        case 0x15585cu: goto label_15585c;
        case 0x155860u: goto label_155860;
        case 0x155864u: goto label_155864;
        case 0x155868u: goto label_155868;
        case 0x15586cu: goto label_15586c;
        case 0x155870u: goto label_155870;
        case 0x155874u: goto label_155874;
        case 0x155878u: goto label_155878;
        case 0x15587cu: goto label_15587c;
        case 0x155880u: goto label_155880;
        case 0x155884u: goto label_155884;
        case 0x155888u: goto label_155888;
        case 0x15588cu: goto label_15588c;
        case 0x155890u: goto label_155890;
        case 0x155894u: goto label_155894;
        case 0x155898u: goto label_155898;
        case 0x15589cu: goto label_15589c;
        case 0x1558a0u: goto label_1558a0;
        case 0x1558a4u: goto label_1558a4;
        case 0x1558a8u: goto label_1558a8;
        case 0x1558acu: goto label_1558ac;
        case 0x1558b0u: goto label_1558b0;
        case 0x1558b4u: goto label_1558b4;
        case 0x1558b8u: goto label_1558b8;
        case 0x1558bcu: goto label_1558bc;
        case 0x1558c0u: goto label_1558c0;
        case 0x1558c4u: goto label_1558c4;
        case 0x1558c8u: goto label_1558c8;
        case 0x1558ccu: goto label_1558cc;
        case 0x1558d0u: goto label_1558d0;
        case 0x1558d4u: goto label_1558d4;
        case 0x1558d8u: goto label_1558d8;
        case 0x1558dcu: goto label_1558dc;
        case 0x1558e0u: goto label_1558e0;
        case 0x1558e4u: goto label_1558e4;
        case 0x1558e8u: goto label_1558e8;
        case 0x1558ecu: goto label_1558ec;
        case 0x1558f0u: goto label_1558f0;
        case 0x1558f4u: goto label_1558f4;
        case 0x1558f8u: goto label_1558f8;
        case 0x1558fcu: goto label_1558fc;
        case 0x155900u: goto label_155900;
        case 0x155904u: goto label_155904;
        case 0x155908u: goto label_155908;
        case 0x15590cu: goto label_15590c;
        case 0x155910u: goto label_155910;
        case 0x155914u: goto label_155914;
        case 0x155918u: goto label_155918;
        case 0x15591cu: goto label_15591c;
        case 0x155920u: goto label_155920;
        case 0x155924u: goto label_155924;
        case 0x155928u: goto label_155928;
        case 0x15592cu: goto label_15592c;
        case 0x155930u: goto label_155930;
        case 0x155934u: goto label_155934;
        case 0x155938u: goto label_155938;
        case 0x15593cu: goto label_15593c;
        case 0x155940u: goto label_155940;
        case 0x155944u: goto label_155944;
        case 0x155948u: goto label_155948;
        case 0x15594cu: goto label_15594c;
        case 0x155950u: goto label_155950;
        case 0x155954u: goto label_155954;
        case 0x155958u: goto label_155958;
        case 0x15595cu: goto label_15595c;
        case 0x155960u: goto label_155960;
        case 0x155964u: goto label_155964;
        case 0x155968u: goto label_155968;
        case 0x15596cu: goto label_15596c;
        case 0x155970u: goto label_155970;
        case 0x155974u: goto label_155974;
        case 0x155978u: goto label_155978;
        case 0x15597cu: goto label_15597c;
        case 0x155980u: goto label_155980;
        case 0x155984u: goto label_155984;
        case 0x155988u: goto label_155988;
        case 0x15598cu: goto label_15598c;
        case 0x155990u: goto label_155990;
        case 0x155994u: goto label_155994;
        case 0x155998u: goto label_155998;
        case 0x15599cu: goto label_15599c;
        case 0x1559a0u: goto label_1559a0;
        case 0x1559a4u: goto label_1559a4;
        case 0x1559a8u: goto label_1559a8;
        case 0x1559acu: goto label_1559ac;
        case 0x1559b0u: goto label_1559b0;
        case 0x1559b4u: goto label_1559b4;
        case 0x1559b8u: goto label_1559b8;
        case 0x1559bcu: goto label_1559bc;
        case 0x1559c0u: goto label_1559c0;
        case 0x1559c4u: goto label_1559c4;
        case 0x1559c8u: goto label_1559c8;
        case 0x1559ccu: goto label_1559cc;
        case 0x1559d0u: goto label_1559d0;
        case 0x1559d4u: goto label_1559d4;
        case 0x1559d8u: goto label_1559d8;
        case 0x1559dcu: goto label_1559dc;
        case 0x1559e0u: goto label_1559e0;
        case 0x1559e4u: goto label_1559e4;
        case 0x1559e8u: goto label_1559e8;
        case 0x1559ecu: goto label_1559ec;
        case 0x1559f0u: goto label_1559f0;
        case 0x1559f4u: goto label_1559f4;
        case 0x1559f8u: goto label_1559f8;
        case 0x1559fcu: goto label_1559fc;
        case 0x155a00u: goto label_155a00;
        case 0x155a04u: goto label_155a04;
        case 0x155a08u: goto label_155a08;
        case 0x155a0cu: goto label_155a0c;
        case 0x155a10u: goto label_155a10;
        case 0x155a14u: goto label_155a14;
        case 0x155a18u: goto label_155a18;
        case 0x155a1cu: goto label_155a1c;
        case 0x155a20u: goto label_155a20;
        case 0x155a24u: goto label_155a24;
        case 0x155a28u: goto label_155a28;
        case 0x155a2cu: goto label_155a2c;
        case 0x155a30u: goto label_155a30;
        case 0x155a34u: goto label_155a34;
        case 0x155a38u: goto label_155a38;
        case 0x155a3cu: goto label_155a3c;
        case 0x155a40u: goto label_155a40;
        case 0x155a44u: goto label_155a44;
        case 0x155a48u: goto label_155a48;
        case 0x155a4cu: goto label_155a4c;
        case 0x155a50u: goto label_155a50;
        default: break;
    }

    ctx->pc = 0x155800u;

label_155800:
    // 0x155800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_155804:
    // 0x155804: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x155804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_155808:
    // 0x155808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15580c:
    // 0x15580c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x15580cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_155810:
    // 0x155810: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_155814:
    // 0x155814: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x155814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
label_155818:
    // 0x155818: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x155818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_15581c:
    // 0x15581c: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x15581cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_155820:
    // 0x155820: 0x10200087  beqz        $at, . + 4 + (0x87 << 2)
label_155824:
    if (ctx->pc == 0x155824u) {
        ctx->pc = 0x155828u;
        goto label_155828;
    }
    ctx->pc = 0x155820u;
    {
        const bool branch_taken_0x155820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x155820) {
            ctx->pc = 0x155A40u;
            goto label_155a40;
        }
    }
    ctx->pc = 0x155828u;
label_155828:
    // 0x155828: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x155828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_15582c:
    // 0x15582c: 0x2464e9b0  addiu       $a0, $v1, -0x1650
    ctx->pc = 0x15582cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961584));
label_155830:
    // 0x155830: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x155830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_155834:
    // 0x155834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_155838:
    // 0x155838: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x155838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15583c:
    // 0x15583c: 0x600008  jr          $v1
label_155840:
    if (ctx->pc == 0x155840u) {
        ctx->pc = 0x155844u;
        goto label_155844;
    }
    ctx->pc = 0x15583Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15583Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x155844u;
label_155844:
    // 0x155844: 0x8e041340  lw          $a0, 0x1340($s0)
    ctx->pc = 0x155844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
label_155848:
    // 0x155848: 0x8e051330  lw          $a1, 0x1330($s0)
    ctx->pc = 0x155848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_15584c:
    // 0x15584c: 0x8e061338  lw          $a2, 0x1338($s0)
    ctx->pc = 0x15584cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
label_155850:
    // 0x155850: 0xc050f5c  jal         func_143D70
label_155854:
    if (ctx->pc == 0x155854u) {
        ctx->pc = 0x155858u;
        goto label_155858;
    }
    ctx->pc = 0x155850u;
    SET_GPR_U32(ctx, 31, 0x155858u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x155850u, 0x155858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155858u;
label_155858:
    // 0x155858: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_15585c:
    // 0x15585c: 0xa0600090  sb          $zero, 0x90($v1)
    ctx->pc = 0x15585cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 144), (uint8_t)GPR_U32(ctx, 0));
label_155860:
    // 0x155860: 0x10000077  b           . + 4 + (0x77 << 2)
label_155864:
    if (ctx->pc == 0x155864u) {
        ctx->pc = 0x155868u;
        goto label_155868;
    }
    ctx->pc = 0x155860u;
    {
        const bool branch_taken_0x155860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155860) {
            ctx->pc = 0x155A40u;
            goto label_155a40;
        }
    }
    ctx->pc = 0x155868u;
label_155868:
    // 0x155868: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
label_15586c:
    // 0x15586c: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x15586cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
label_155870:
    // 0x155870: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x155870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_155874:
    // 0x155874: 0xc050f5c  jal         func_143D70
label_155878:
    if (ctx->pc == 0x155878u) {
        ctx->pc = 0x15587Cu;
        goto label_15587c;
    }
    ctx->pc = 0x155874u;
    SET_GPR_U32(ctx, 31, 0x15587Cu);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x155874u, 0x15587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15587Cu;
label_15587c:
    // 0x15587c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155880:
    // 0x155880: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155884:
    // 0x155884: 0xa06402d0  sb          $a0, 0x2D0($v1)
    ctx->pc = 0x155884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 4));
label_155888:
    // 0x155888: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_15588c:
    // 0x15588c: 0xa0600b40  sb          $zero, 0xB40($v1)
    ctx->pc = 0x15588cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2880), (uint8_t)GPR_U32(ctx, 0));
label_155890:
    // 0x155890: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155894:
    // 0x155894: 0xa0600bd0  sb          $zero, 0xBD0($v1)
    ctx->pc = 0x155894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3024), (uint8_t)GPR_U32(ctx, 0));
label_155898:
    // 0x155898: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_15589c:
    // 0x15589c: 0xa0600c60  sb          $zero, 0xC60($v1)
    ctx->pc = 0x15589cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3168), (uint8_t)GPR_U32(ctx, 0));
label_1558a0:
    // 0x1558a0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1558a4:
    // 0x1558a4: 0xa0600cf0  sb          $zero, 0xCF0($v1)
    ctx->pc = 0x1558a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3312), (uint8_t)GPR_U32(ctx, 0));
label_1558a8:
    // 0x1558a8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1558ac:
    // 0x1558ac: 0xa0600d80  sb          $zero, 0xD80($v1)
    ctx->pc = 0x1558acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3456), (uint8_t)GPR_U32(ctx, 0));
label_1558b0:
    // 0x1558b0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1558b4:
    // 0x1558b4: 0xa0600e10  sb          $zero, 0xE10($v1)
    ctx->pc = 0x1558b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3600), (uint8_t)GPR_U32(ctx, 0));
label_1558b8:
    // 0x1558b8: 0x10000061  b           . + 4 + (0x61 << 2)
label_1558bc:
    if (ctx->pc == 0x1558BCu) {
        ctx->pc = 0x1558C0u;
        goto label_1558c0;
    }
    ctx->pc = 0x1558B8u;
    {
        const bool branch_taken_0x1558b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1558b8) {
            ctx->pc = 0x155A40u;
            goto label_155a40;
        }
    }
    ctx->pc = 0x1558C0u;
label_1558c0:
    // 0x1558c0: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x1558c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
label_1558c4:
    // 0x1558c4: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x1558c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
label_1558c8:
    // 0x1558c8: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x1558c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1558cc:
    // 0x1558cc: 0xc050f5c  jal         func_143D70
label_1558d0:
    if (ctx->pc == 0x1558D0u) {
        ctx->pc = 0x1558D4u;
        goto label_1558d4;
    }
    ctx->pc = 0x1558CCu;
    SET_GPR_U32(ctx, 31, 0x1558D4u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x1558CCu, 0x1558D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558D4u;
label_1558d4:
    // 0x1558d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1558d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1558d8:
    // 0x1558d8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1558dc:
    // 0x1558dc: 0xa06402d0  sb          $a0, 0x2D0($v1)
    ctx->pc = 0x1558dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 4));
label_1558e0:
    // 0x1558e0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1558e4:
    // 0x1558e4: 0xa0600b40  sb          $zero, 0xB40($v1)
    ctx->pc = 0x1558e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2880), (uint8_t)GPR_U32(ctx, 0));
label_1558e8:
    // 0x1558e8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1558ec:
    // 0x1558ec: 0xa0600bd0  sb          $zero, 0xBD0($v1)
    ctx->pc = 0x1558ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3024), (uint8_t)GPR_U32(ctx, 0));
label_1558f0:
    // 0x1558f0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1558f4:
    // 0x1558f4: 0xa0600c60  sb          $zero, 0xC60($v1)
    ctx->pc = 0x1558f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3168), (uint8_t)GPR_U32(ctx, 0));
label_1558f8:
    // 0x1558f8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1558fc:
    // 0x1558fc: 0xa0600cf0  sb          $zero, 0xCF0($v1)
    ctx->pc = 0x1558fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3312), (uint8_t)GPR_U32(ctx, 0));
label_155900:
    // 0x155900: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155904:
    // 0x155904: 0xa0600d80  sb          $zero, 0xD80($v1)
    ctx->pc = 0x155904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3456), (uint8_t)GPR_U32(ctx, 0));
label_155908:
    // 0x155908: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_15590c:
    // 0x15590c: 0xa0600e10  sb          $zero, 0xE10($v1)
    ctx->pc = 0x15590cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3600), (uint8_t)GPR_U32(ctx, 0));
label_155910:
    // 0x155910: 0x1000004b  b           . + 4 + (0x4B << 2)
label_155914:
    if (ctx->pc == 0x155914u) {
        ctx->pc = 0x155918u;
        goto label_155918;
    }
    ctx->pc = 0x155910u;
    {
        const bool branch_taken_0x155910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155910) {
            ctx->pc = 0x155A40u;
            goto label_155a40;
        }
    }
    ctx->pc = 0x155918u;
label_155918:
    // 0x155918: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x155918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
label_15591c:
    // 0x15591c: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x15591cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
label_155920:
    // 0x155920: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x155920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_155924:
    // 0x155924: 0xc050f5c  jal         func_143D70
label_155928:
    if (ctx->pc == 0x155928u) {
        ctx->pc = 0x15592Cu;
        goto label_15592c;
    }
    ctx->pc = 0x155924u;
    SET_GPR_U32(ctx, 31, 0x15592Cu);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x155924u, 0x15592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15592Cu;
label_15592c:
    // 0x15592c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x15592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155930:
    // 0x155930: 0xa06002d0  sb          $zero, 0x2D0($v1)
    ctx->pc = 0x155930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 0));
label_155934:
    // 0x155934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155938:
    // 0x155938: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_15593c:
    // 0x15593c: 0xa0640b40  sb          $a0, 0xB40($v1)
    ctx->pc = 0x15593cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2880), (uint8_t)GPR_U32(ctx, 4));
label_155940:
    // 0x155940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155944:
    // 0x155944: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155948:
    // 0x155948: 0xa0640bd0  sb          $a0, 0xBD0($v1)
    ctx->pc = 0x155948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3024), (uint8_t)GPR_U32(ctx, 4));
label_15594c:
    // 0x15594c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15594cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155950:
    // 0x155950: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155954:
    // 0x155954: 0xa0640c60  sb          $a0, 0xC60($v1)
    ctx->pc = 0x155954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3168), (uint8_t)GPR_U32(ctx, 4));
label_155958:
    // 0x155958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15595c:
    // 0x15595c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x15595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155960:
    // 0x155960: 0xa0640cf0  sb          $a0, 0xCF0($v1)
    ctx->pc = 0x155960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3312), (uint8_t)GPR_U32(ctx, 4));
label_155964:
    // 0x155964: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155968:
    // 0x155968: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_15596c:
    // 0x15596c: 0xa0640d80  sb          $a0, 0xD80($v1)
    ctx->pc = 0x15596cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3456), (uint8_t)GPR_U32(ctx, 4));
label_155970:
    // 0x155970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155974:
    // 0x155974: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155978:
    // 0x155978: 0xa0640e10  sb          $a0, 0xE10($v1)
    ctx->pc = 0x155978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3600), (uint8_t)GPR_U32(ctx, 4));
label_15597c:
    // 0x15597c: 0x10000030  b           . + 4 + (0x30 << 2)
label_155980:
    if (ctx->pc == 0x155980u) {
        ctx->pc = 0x155984u;
        goto label_155984;
    }
    ctx->pc = 0x15597Cu;
    {
        const bool branch_taken_0x15597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15597c) {
            ctx->pc = 0x155A40u;
            goto label_155a40;
        }
    }
    ctx->pc = 0x155984u;
label_155984:
    // 0x155984: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x155984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
label_155988:
    // 0x155988: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x155988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
label_15598c:
    // 0x15598c: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x15598cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_155990:
    // 0x155990: 0xc050f5c  jal         func_143D70
label_155994:
    if (ctx->pc == 0x155994u) {
        ctx->pc = 0x155998u;
        goto label_155998;
    }
    ctx->pc = 0x155990u;
    SET_GPR_U32(ctx, 31, 0x155998u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x155990u, 0x155998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155998u;
label_155998:
    // 0x155998: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15599c:
    // 0x15599c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x15599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1559a0:
    // 0x1559a0: 0xa06402d0  sb          $a0, 0x2D0($v1)
    ctx->pc = 0x1559a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 4));
label_1559a4:
    // 0x1559a4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1559a8:
    // 0x1559a8: 0xa0600b40  sb          $zero, 0xB40($v1)
    ctx->pc = 0x1559a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2880), (uint8_t)GPR_U32(ctx, 0));
label_1559ac:
    // 0x1559ac: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1559b0:
    // 0x1559b0: 0xa0600bd0  sb          $zero, 0xBD0($v1)
    ctx->pc = 0x1559b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3024), (uint8_t)GPR_U32(ctx, 0));
label_1559b4:
    // 0x1559b4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1559b8:
    // 0x1559b8: 0xa0600c60  sb          $zero, 0xC60($v1)
    ctx->pc = 0x1559b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3168), (uint8_t)GPR_U32(ctx, 0));
label_1559bc:
    // 0x1559bc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1559c0:
    // 0x1559c0: 0xa0600cf0  sb          $zero, 0xCF0($v1)
    ctx->pc = 0x1559c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3312), (uint8_t)GPR_U32(ctx, 0));
label_1559c4:
    // 0x1559c4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1559c8:
    // 0x1559c8: 0xa0600d80  sb          $zero, 0xD80($v1)
    ctx->pc = 0x1559c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3456), (uint8_t)GPR_U32(ctx, 0));
label_1559cc:
    // 0x1559cc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1559d0:
    // 0x1559d0: 0xa0600e10  sb          $zero, 0xE10($v1)
    ctx->pc = 0x1559d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3600), (uint8_t)GPR_U32(ctx, 0));
label_1559d4:
    // 0x1559d4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1559d8:
    if (ctx->pc == 0x1559D8u) {
        ctx->pc = 0x1559DCu;
        goto label_1559dc;
    }
    ctx->pc = 0x1559D4u;
    {
        const bool branch_taken_0x1559d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1559d4) {
            ctx->pc = 0x155A40u;
            goto label_155a40;
        }
    }
    ctx->pc = 0x1559DCu;
label_1559dc:
    // 0x1559dc: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x1559dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
label_1559e0:
    // 0x1559e0: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x1559e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
label_1559e4:
    // 0x1559e4: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x1559e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1559e8:
    // 0x1559e8: 0xc050f5c  jal         func_143D70
label_1559ec:
    if (ctx->pc == 0x1559ECu) {
        ctx->pc = 0x1559F0u;
        goto label_1559f0;
    }
    ctx->pc = 0x1559E8u;
    SET_GPR_U32(ctx, 31, 0x1559F0u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x1559E8u, 0x1559F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559F0u;
label_1559f0:
    // 0x1559f0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1559f4:
    // 0x1559f4: 0xa06002d0  sb          $zero, 0x2D0($v1)
    ctx->pc = 0x1559f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 0));
label_1559f8:
    // 0x1559f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1559f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1559fc:
    // 0x1559fc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155a00:
    // 0x155a00: 0xa0640b40  sb          $a0, 0xB40($v1)
    ctx->pc = 0x155a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2880), (uint8_t)GPR_U32(ctx, 4));
label_155a04:
    // 0x155a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155a08:
    // 0x155a08: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155a0c:
    // 0x155a0c: 0xa0640bd0  sb          $a0, 0xBD0($v1)
    ctx->pc = 0x155a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3024), (uint8_t)GPR_U32(ctx, 4));
label_155a10:
    // 0x155a10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155a14:
    // 0x155a14: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155a18:
    // 0x155a18: 0xa0640c60  sb          $a0, 0xC60($v1)
    ctx->pc = 0x155a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3168), (uint8_t)GPR_U32(ctx, 4));
label_155a1c:
    // 0x155a1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155a20:
    // 0x155a20: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155a24:
    // 0x155a24: 0xa0640cf0  sb          $a0, 0xCF0($v1)
    ctx->pc = 0x155a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3312), (uint8_t)GPR_U32(ctx, 4));
label_155a28:
    // 0x155a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155a2c:
    // 0x155a2c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155a30:
    // 0x155a30: 0xa0640d80  sb          $a0, 0xD80($v1)
    ctx->pc = 0x155a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3456), (uint8_t)GPR_U32(ctx, 4));
label_155a34:
    // 0x155a34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155a38:
    // 0x155a38: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_155a3c:
    // 0x155a3c: 0xa0640e10  sb          $a0, 0xE10($v1)
    ctx->pc = 0x155a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3600), (uint8_t)GPR_U32(ctx, 4));
label_155a40:
    // 0x155a40: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x155a40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155a44:
    // 0x155a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_155a48:
    // 0x155a48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x155a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_155a4c:
    // 0x155a4c: 0x3e00008  jr          $ra
label_155a50:
    if (ctx->pc == 0x155A50u) {
        ctx->pc = 0x155A54u;
        goto label_fallthrough_0x155a4c;
    }
    ctx->pc = 0x155A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155a4c:
    ctx->pc = 0x155A54u;
}
