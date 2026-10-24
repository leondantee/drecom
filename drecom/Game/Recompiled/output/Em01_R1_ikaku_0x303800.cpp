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

// Function: Em01_R1_ikaku
// Address: 0x303800 - 0x303904
void Em01_R1_ikaku_0x303800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_ikaku_0x303800");
#endif

    switch (ctx->pc) {
        case 0x303854u: goto label_303854;
        case 0x30388cu: goto label_30388c;
        case 0x303898u: goto label_303898;
        case 0x3038a8u: goto label_3038a8;
        case 0x3038b4u: goto label_3038b4;
        default: break;
    }

    ctx->pc = 0x303800u;

    // 0x303800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x303800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x303804: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x303804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x303808: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x303808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30380c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30380cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303810: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x303810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x303814: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x303814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x303818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x303818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30381c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30381Cu;
    {
        const bool branch_taken_0x30381c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30381c) {
            ctx->pc = 0x30386Cu;
            goto label_30386c;
        }
    }
    ctx->pc = 0x303824u;
    // 0x303824: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303824u;
    {
        const bool branch_taken_0x303824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x303824) {
            ctx->pc = 0x303834u;
            goto label_303834;
        }
    }
    ctx->pc = 0x30382Cu;
    // 0x30382c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x30382Cu;
    {
        const bool branch_taken_0x30382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30382c) {
            ctx->pc = 0x3038F4u;
            goto label_3038f4;
        }
    }
    ctx->pc = 0x303834u;
label_303834:
    // 0x303834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303838: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30383c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30383cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x303840: 0x24062826  addiu       $a2, $zero, 0x2826
    ctx->pc = 0x303840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10278));
    // 0x303844: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303848: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30384c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30384Cu;
    SET_GPR_U32(ctx, 31, 0x303854u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30384Cu, 0x303854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303854u;
label_303854:
    // 0x303854: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303858: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x303858u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30385c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303860: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x303860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x303864: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303868: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x303868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30386c:
    // 0x30386c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303870: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x303870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x303874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303878: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x303878u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30387c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30387cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303880: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303884: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x303884u;
    SET_GPR_U32(ctx, 31, 0x30388Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x303884u, 0x30388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30388Cu;
label_30388c:
    // 0x30388c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303890: 0xc05cd10  jal         func_173440
    ctx->pc = 0x303890u;
    SET_GPR_U32(ctx, 31, 0x303898u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x303890u, 0x303898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303898u;
label_303898:
    // 0x303898: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30389c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30389cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3038a0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3038A0u;
    SET_GPR_U32(ctx, 31, 0x3038A8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3038A0u, 0x3038A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038A8u;
label_3038a8:
    // 0x3038a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3038a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038ac: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3038ACu;
    SET_GPR_U32(ctx, 31, 0x3038B4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3038ACu, 0x3038B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038B4u;
label_3038b4:
    // 0x3038b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3038b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3038bc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3038BCu;
    {
        const bool branch_taken_0x3038bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3038bc) {
            ctx->pc = 0x3038F4u;
            goto label_3038f4;
        }
    }
    ctx->pc = 0x3038C4u;
    // 0x3038c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3038c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3038c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3038ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3038d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3038d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3038d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3038d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3038dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3038e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3038e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3038e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3038ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3038f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3038f4:
    // 0x3038f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3038f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3038f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3038f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3038fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3038FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3038FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303904u;
}
