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

// Function: Em01_R1_dm_handgun
// Address: 0x306590 - 0x306970
void Em01_R1_dm_handgun_0x306590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_dm_handgun_0x306590");
#endif

    switch (ctx->pc) {
        case 0x30660cu: goto label_30660c;
        case 0x306630u: goto label_306630;
        case 0x306654u: goto label_306654;
        case 0x306688u: goto label_306688;
        case 0x306694u: goto label_306694;
        case 0x3066a4u: goto label_3066a4;
        case 0x3066b0u: goto label_3066b0;
        case 0x306768u: goto label_306768;
        case 0x30681cu: goto label_30681c;
        case 0x3068acu: goto label_3068ac;
        case 0x306924u: goto label_306924;
        default: break;
    }

    ctx->pc = 0x306590u;

    // 0x306590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306594: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x306594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x306598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x306598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30659c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30659cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3065a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3065a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3065a4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3065a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3065a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3065a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3065ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3065acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3065b0: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3065B0u;
    {
        const bool branch_taken_0x3065b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3065b0) {
            ctx->pc = 0x306678u;
            goto label_306678;
        }
    }
    ctx->pc = 0x3065B8u;
    // 0x3065b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3065B8u;
    {
        const bool branch_taken_0x3065b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3065b8) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x3065C0u;
    // 0x3065c0: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x3065C0u;
    {
        const bool branch_taken_0x3065c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3065c0) {
            ctx->pc = 0x30695Cu;
            goto label_30695c;
        }
    }
    ctx->pc = 0x3065C8u;
label_3065c8:
    // 0x3065c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3065c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3065cc: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x3065ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x3065d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3065d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3065d4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x3065d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3065d8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3065D8u;
    {
        const bool branch_taken_0x3065d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3065d8) {
            ctx->pc = 0x30661Cu;
            goto label_30661c;
        }
    }
    ctx->pc = 0x3065E0u;
    // 0x3065e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3065e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3065e4: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x3065e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x3065e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3065e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3065ec: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3065ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3065f0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3065F0u;
    {
        const bool branch_taken_0x3065f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3065f0) {
            ctx->pc = 0x30661Cu;
            goto label_30661c;
        }
    }
    ctx->pc = 0x3065F8u;
    // 0x3065f8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3065f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3065fc: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x3065fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x306600: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306604: 0xc05cd90  jal         func_173640
    ctx->pc = 0x306604u;
    SET_GPR_U32(ctx, 31, 0x30660Cu);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x306604u, 0x30660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30660Cu;
label_30660c:
    // 0x30660c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x30660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x306610: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x306610u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x306614: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x306614u;
    {
        const bool branch_taken_0x306614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306614) {
            ctx->pc = 0x306634u;
            goto label_306634;
        }
    }
    ctx->pc = 0x30661Cu;
label_30661c:
    // 0x30661c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x306620: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x306620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x306624: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306628: 0xc05cd90  jal         func_173640
    ctx->pc = 0x306628u;
    SET_GPR_U32(ctx, 31, 0x306630u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x306628u, 0x306630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306630u;
label_306630:
    // 0x306630: 0x24500016  addiu       $s0, $v0, 0x16
    ctx->pc = 0x306630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
label_306634:
    // 0x306634: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306638: 0x36060600  ori         $a2, $s0, 0x600
    ctx->pc = 0x306638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1536);
    // 0x30663c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30663cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306640: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306644: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306648: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30664c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30664Cu;
    SET_GPR_U32(ctx, 31, 0x306654u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30664Cu, 0x306654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306654u;
label_306654:
    // 0x306654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306658: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x306658u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30665c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x30665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x306660: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306664: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x306664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x306668: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30666c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30666cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306674: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_306678:
    // 0x306678: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30667c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30667cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306680: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306680u;
    SET_GPR_U32(ctx, 31, 0x306688u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306680u, 0x306688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306688u;
label_306688:
    // 0x306688: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30668c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30668Cu;
    SET_GPR_U32(ctx, 31, 0x306694u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30668Cu, 0x306694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306694u;
label_306694:
    // 0x306694: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306698: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x306698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30669c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30669Cu;
    SET_GPR_U32(ctx, 31, 0x3066A4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30669Cu, 0x3066A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066A4u;
label_3066a4:
    // 0x3066a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3066a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066a8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3066A8u;
    SET_GPR_U32(ctx, 31, 0x3066B0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3066A8u, 0x3066B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066B0u;
label_3066b0:
    // 0x3066b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3066b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066b4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3066b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3066b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3066b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3066bc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3066bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3066c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3066c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3066c8: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3066C8u;
    {
        const bool branch_taken_0x3066c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3066c8) {
            ctx->pc = 0x30695Cu;
            goto label_30695c;
        }
    }
    ctx->pc = 0x3066D0u;
    // 0x3066d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3066d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3066d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3066d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3066dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3066dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3066e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3066e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3066e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3066ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3066f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3066f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3066f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3066fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x306700: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306704: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x306704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x306708: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x306708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x30670c: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x30670Cu;
    {
        const bool branch_taken_0x30670c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30670c) {
            ctx->pc = 0x3068E4u;
            goto label_3068e4;
        }
    }
    ctx->pc = 0x306714u;
    // 0x306714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306718: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x306718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30671c: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x30671cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x306720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306724: 0x0  nop
    ctx->pc = 0x306724u;
    // NOP
    // 0x306728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x306728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30672c: 0x0  nop
    ctx->pc = 0x30672cu;
    // NOP
    // 0x306730: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x306730u;
    {
        const bool branch_taken_0x306730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306730) {
            ctx->pc = 0x3067A0u;
            goto label_3067a0;
        }
    }
    ctx->pc = 0x306738u;
    // 0x306738: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30673c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30673cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x306740: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306744: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x306744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x306748: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x306748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30674c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30674cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x306750: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x306750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x306754: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x306754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x306758: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x306758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30675c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30675cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x306760: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x306760u;
    SET_GPR_U32(ctx, 31, 0x306768u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x306760u, 0x306768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306768u;
label_306768:
    // 0x306768: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x306768u;
    {
        const bool branch_taken_0x306768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306768) {
            ctx->pc = 0x3067A0u;
            goto label_3067a0;
        }
    }
    ctx->pc = 0x306770u;
    // 0x306770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306774: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306778: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x306778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30677c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x30677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x306780: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306784: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x306788: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30678c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30678cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x306790: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306794: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x306798: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30679c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30679cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3067a0:
    // 0x3067a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3067a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3067a4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3067a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3067a8: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x3067a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x3067ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3067acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3067b0: 0x0  nop
    ctx->pc = 0x3067b0u;
    // NOP
    // 0x3067b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3067b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3067b8: 0x0  nop
    ctx->pc = 0x3067b8u;
    // NOP
    // 0x3067bc: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x3067BCu;
    {
        const bool branch_taken_0x3067bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3067bc) {
            ctx->pc = 0x306854u;
            goto label_306854;
        }
    }
    ctx->pc = 0x3067C4u;
    // 0x3067c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3067c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3067c8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3067c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3067cc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x3067ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x3067d0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3067d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3067d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3067d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3067d8: 0x0  nop
    ctx->pc = 0x3067d8u;
    // NOP
    // 0x3067dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3067dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3067e0: 0x0  nop
    ctx->pc = 0x3067e0u;
    // NOP
    // 0x3067e4: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x3067E4u;
    {
        const bool branch_taken_0x3067e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3067e4) {
            ctx->pc = 0x306854u;
            goto label_306854;
        }
    }
    ctx->pc = 0x3067ECu;
    // 0x3067ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3067ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3067f0: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3067f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3067f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3067f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3067f8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x3067f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x3067fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3067fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x306800: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x306800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x306804: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x306804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x306808: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x306808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30680c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30680cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x306810: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x306810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x306814: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x306814u;
    SET_GPR_U32(ctx, 31, 0x30681Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x306814u, 0x30681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30681Cu;
label_30681c:
    // 0x30681c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30681Cu;
    {
        const bool branch_taken_0x30681c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30681c) {
            ctx->pc = 0x306854u;
            goto label_306854;
        }
    }
    ctx->pc = 0x306824u;
    // 0x306824: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306828: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30682c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30682cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x306830: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x306830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x306834: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306838: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30683c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306840: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x306840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x306844: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306848: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30684c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306850: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_306854:
    // 0x306854: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306858: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x306858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30685c: 0x3c034489  lui         $v1, 0x4489
    ctx->pc = 0x30685cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17545 << 16));
    // 0x306860: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x306860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x306864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306868: 0x0  nop
    ctx->pc = 0x306868u;
    // NOP
    // 0x30686c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30686cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x306870: 0x0  nop
    ctx->pc = 0x306870u;
    // NOP
    // 0x306874: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x306874u;
    {
        const bool branch_taken_0x306874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306874) {
            ctx->pc = 0x3068E4u;
            goto label_3068e4;
        }
    }
    ctx->pc = 0x30687Cu;
    // 0x30687c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x30687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x306880: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x306880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x306884: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x306884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x306888: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30688c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30688cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x306890: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306894: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x306894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x306898: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x306898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30689c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3068a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3068a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3068a4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3068A4u;
    SET_GPR_U32(ctx, 31, 0x3068ACu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3068A4u, 0x3068ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068ACu;
label_3068ac:
    // 0x3068ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3068ACu;
    {
        const bool branch_taken_0x3068ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3068ac) {
            ctx->pc = 0x3068E4u;
            goto label_3068e4;
        }
    }
    ctx->pc = 0x3068B4u;
    // 0x3068b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3068b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3068b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3068bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3068c0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3068c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3068c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3068c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3068cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3068d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3068d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3068d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3068dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3068e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3068e4:
    // 0x3068e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068e8: 0x8c63136c  lw          $v1, 0x136C($v1)
    ctx->pc = 0x3068e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4972)));
    // 0x3068ec: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3068ECu;
    {
        const bool branch_taken_0x3068ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3068ec) {
            ctx->pc = 0x30695Cu;
            goto label_30695c;
        }
    }
    ctx->pc = 0x3068F4u;
    // 0x3068f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3068f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068f8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3068f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3068fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306900: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x306900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x306904: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x306904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x306908: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x306908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30690c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x306910: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x306910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x306914: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x306914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x306918: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x306918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30691c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30691Cu;
    SET_GPR_U32(ctx, 31, 0x306924u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30691Cu, 0x306924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306924u;
label_306924:
    // 0x306924: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x306924u;
    {
        const bool branch_taken_0x306924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306924) {
            ctx->pc = 0x30695Cu;
            goto label_30695c;
        }
    }
    ctx->pc = 0x30692Cu;
    // 0x30692c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306930: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306934: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x306934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x306938: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x306938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30693c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306940: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x306944: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306948: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x306948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30694c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306950: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x306954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306958: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30695c:
    // 0x30695c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30695cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x306960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306964: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x306964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x306968: 0x3e00008  jr          $ra
    ctx->pc = 0x306968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306970u;
}
