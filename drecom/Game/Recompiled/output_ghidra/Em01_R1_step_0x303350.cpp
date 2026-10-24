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

// Function: Em01_R1_step
// Address: 0x303350 - 0x303668
void Em01_R1_step_0x303350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_step_0x303350");
#endif

    switch (ctx->pc) {
        case 0x3033b4u: goto label_3033b4;
        case 0x303454u: goto label_303454;
        case 0x30347cu: goto label_30347c;
        case 0x3034a4u: goto label_3034a4;
        case 0x3034c4u: goto label_3034c4;
        case 0x3034d0u: goto label_3034d0;
        case 0x3034e0u: goto label_3034e0;
        case 0x3034ecu: goto label_3034ec;
        case 0x3035acu: goto label_3035ac;
        default: break;
    }

    ctx->pc = 0x303350u;

    // 0x303350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x303350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x303354: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x303354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x303358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30335c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30335cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x303360: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303364: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x303364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x303368: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x303368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30336c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303370: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x303370u;
    {
        const bool branch_taken_0x303370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x303370) {
            ctx->pc = 0x3034B4u;
            goto label_3034b4;
        }
    }
    ctx->pc = 0x303378u;
    // 0x303378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303378u;
    {
        const bool branch_taken_0x303378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x303378) {
            ctx->pc = 0x303388u;
            goto label_303388;
        }
    }
    ctx->pc = 0x303380u;
    // 0x303380: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x303380u;
    {
        const bool branch_taken_0x303380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303380) {
            ctx->pc = 0x303654u;
            goto label_303654;
        }
    }
    ctx->pc = 0x303388u;
label_303388:
    // 0x303388: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x303388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x30338c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30338cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303390: 0xac43136c  sw          $v1, 0x136C($v0)
    ctx->pc = 0x303390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4972), GPR_U32(ctx, 3));
    // 0x303394: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303398: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30339c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3033a0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3033a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3033a4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3033a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3033a8: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x3033a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x3033ac: 0xc05cc90  jal         func_173240
    ctx->pc = 0x3033ACu;
    SET_GPR_U32(ctx, 31, 0x3033B4u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x3033ACu, 0x3033B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033B4u;
label_3033b4:
    // 0x3033b4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3033b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3033b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3033b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3033bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3033bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3033c0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3033c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x3033c4: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x3033c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x3033c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3033C8u;
    {
        const bool branch_taken_0x3033c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3033c8) {
            ctx->pc = 0x3033D8u;
            goto label_3033d8;
        }
    }
    ctx->pc = 0x3033D0u;
    // 0x3033d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3033d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3033d4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x3033d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_3033d8:
    // 0x3033d8: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x3033d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x3033dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3033DCu;
    {
        const bool branch_taken_0x3033dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3033dc) {
            ctx->pc = 0x3033FCu;
            goto label_3033fc;
        }
    }
    ctx->pc = 0x3033E4u;
    // 0x3033e4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3033e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3033e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3033E8u;
    {
        const bool branch_taken_0x3033e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3033e8) {
            ctx->pc = 0x3033FCu;
            goto label_3033fc;
        }
    }
    ctx->pc = 0x3033F0u;
    // 0x3033f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3033f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3033f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3033f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3033f8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3033f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_3033fc:
    // 0x3033fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3033fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303400: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x303400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x303404: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x303404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x303408: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x303408u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30340c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x303410: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x303410u;
    {
        const bool branch_taken_0x303410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303410) {
            ctx->pc = 0x303484u;
            goto label_303484;
        }
    }
    ctx->pc = 0x303418u;
    // 0x303418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30341c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30341Cu;
    {
        const bool branch_taken_0x30341c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30341c) {
            ctx->pc = 0x30345Cu;
            goto label_30345c;
        }
    }
    ctx->pc = 0x303424u;
    // 0x303424: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x303424u;
    {
        const bool branch_taken_0x303424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303424) {
            ctx->pc = 0x303434u;
            goto label_303434;
        }
    }
    ctx->pc = 0x30342Cu;
    // 0x30342c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30342Cu;
    {
        const bool branch_taken_0x30342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30342c) {
            ctx->pc = 0x3034A4u;
            goto label_3034a4;
        }
    }
    ctx->pc = 0x303434u;
label_303434:
    // 0x303434: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303438: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30343c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30343cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x303440: 0x24060a05  addiu       $a2, $zero, 0xA05
    ctx->pc = 0x303440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2565));
    // 0x303444: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303448: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30344c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30344Cu;
    SET_GPR_U32(ctx, 31, 0x303454u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30344Cu, 0x303454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303454u;
label_303454:
    // 0x303454: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x303454u;
    {
        const bool branch_taken_0x303454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303454) {
            ctx->pc = 0x3034A4u;
            goto label_3034a4;
        }
    }
    ctx->pc = 0x30345Cu;
label_30345c:
    // 0x30345c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30345cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303460: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303464: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x303464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x303468: 0x24060a06  addiu       $a2, $zero, 0xA06
    ctx->pc = 0x303468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2566));
    // 0x30346c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30346cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303470: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x303474: 0xc0965d0  jal         func_259740
    ctx->pc = 0x303474u;
    SET_GPR_U32(ctx, 31, 0x30347Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x303474u, 0x30347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30347Cu;
label_30347c:
    // 0x30347c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30347Cu;
    {
        const bool branch_taken_0x30347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30347c) {
            ctx->pc = 0x3034A4u;
            goto label_3034a4;
        }
    }
    ctx->pc = 0x303484u;
label_303484:
    // 0x303484: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303488: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30348c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30348cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x303490: 0x24061407  addiu       $a2, $zero, 0x1407
    ctx->pc = 0x303490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5127));
    // 0x303494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303498: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30349c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30349Cu;
    SET_GPR_U32(ctx, 31, 0x3034A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30349Cu, 0x3034A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034A4u;
label_3034a4:
    // 0x3034a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3034a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3034a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3034ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3034acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3034b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3034b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3034b4:
    // 0x3034b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3034b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3034b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3034bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3034BCu;
    SET_GPR_U32(ctx, 31, 0x3034C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3034BCu, 0x3034C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034C4u;
label_3034c4:
    // 0x3034c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3034c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034c8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3034C8u;
    SET_GPR_U32(ctx, 31, 0x3034D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3034C8u, 0x3034D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034D0u;
label_3034d0:
    // 0x3034d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3034d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3034d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3034d8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3034D8u;
    SET_GPR_U32(ctx, 31, 0x3034E0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3034D8u, 0x3034E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034E0u;
label_3034e0:
    // 0x3034e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3034e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034e4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3034E4u;
    SET_GPR_U32(ctx, 31, 0x3034ECu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3034E4u, 0x3034ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034ECu;
label_3034ec:
    // 0x3034ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3034ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034f0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3034f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3034f4: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x3034F4u;
    {
        const bool branch_taken_0x3034f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3034f4) {
            ctx->pc = 0x303654u;
            goto label_303654;
        }
    }
    ctx->pc = 0x3034FCu;
    // 0x3034fc: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x3034fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x303500: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303504: 0xac64136c  sw          $a0, 0x136C($v1)
    ctx->pc = 0x303504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4972), GPR_U32(ctx, 4));
    // 0x303508: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x303508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30350c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303510: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x303510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x303514: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x303514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303518: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30351c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30351cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x303520: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303524: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x303528: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30352c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30352cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x303530: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303534: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x303538: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30353c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x30353cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x303540: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x303540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x303544: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x303544u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x303548: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x303548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30354c: 0x14830041  bne         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x30354Cu;
    {
        const bool branch_taken_0x30354c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30354c) {
            ctx->pc = 0x303654u;
            goto label_303654;
        }
    }
    ctx->pc = 0x303554u;
    // 0x303554: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x303554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303558: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x303558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30355c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x30355cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x303560: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x303560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x303564: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x303564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x303568: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30356c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30356cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x303570: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x303570u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x303574: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x303574u;
    {
        const bool branch_taken_0x303574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x303574) {
            ctx->pc = 0x303654u;
            goto label_303654;
        }
    }
    ctx->pc = 0x30357Cu;
    // 0x30357c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303580: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x303580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x303584: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303588: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x303588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x30358c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x303590: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x303590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x303594: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x303594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x303598: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x303598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30359c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3035a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3035a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3035a4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3035A4u;
    SET_GPR_U32(ctx, 31, 0x3035ACu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3035A4u, 0x3035ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3035ACu;
label_3035ac:
    // 0x3035ac: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3035ACu;
    {
        const bool branch_taken_0x3035ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3035ac) {
            ctx->pc = 0x303654u;
            goto label_303654;
        }
    }
    ctx->pc = 0x3035B4u;
    // 0x3035b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3035b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3035b8: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x3035b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x3035bc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3035bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3035c0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3035c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3035c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3035c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3035c8: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3035C8u;
    {
        const bool branch_taken_0x3035c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3035c8) {
            ctx->pc = 0x303624u;
            goto label_303624;
        }
    }
    ctx->pc = 0x3035D0u;
    // 0x3035d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3035d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3035d4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3035D4u;
    {
        const bool branch_taken_0x3035d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3035d4) {
            ctx->pc = 0x3035ECu;
            goto label_3035ec;
        }
    }
    ctx->pc = 0x3035DCu;
    // 0x3035dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3035DCu;
    {
        const bool branch_taken_0x3035dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3035dc) {
            ctx->pc = 0x3035ECu;
            goto label_3035ec;
        }
    }
    ctx->pc = 0x3035E4u;
    // 0x3035e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3035E4u;
    {
        const bool branch_taken_0x3035e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3035e4) {
            ctx->pc = 0x303654u;
            goto label_303654;
        }
    }
    ctx->pc = 0x3035ECu;
label_3035ec:
    // 0x3035ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3035ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3035f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3035f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3035f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3035f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3035f8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3035f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3035fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3035fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303600: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x303600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x303604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303608: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30360c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303610: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x303610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x303614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303618: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30361c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30361Cu;
    {
        const bool branch_taken_0x30361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30361c) {
            ctx->pc = 0x303654u;
            goto label_303654;
        }
    }
    ctx->pc = 0x303624u;
label_303624:
    // 0x303624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x303624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303628: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30362c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30362cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x303630: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x303630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x303634: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303638: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x303638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30363c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303640: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x303644: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303648: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x303648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30364c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30364cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303650: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_303654:
    // 0x303654: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x303654u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30365c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30365cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303660: 0x3e00008  jr          $ra
    ctx->pc = 0x303660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303668u;
}
