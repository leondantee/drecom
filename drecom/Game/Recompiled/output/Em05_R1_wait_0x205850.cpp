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

// Function: Em05_R1_wait
// Address: 0x205850 - 0x20590c
void Em05_R1_wait_0x205850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_wait_0x205850");
#endif

    switch (ctx->pc) {
        case 0x2058a4u: goto label_2058a4;
        case 0x2058e0u: goto label_2058e0;
        case 0x2058f0u: goto label_2058f0;
        case 0x2058fcu: goto label_2058fc;
        default: break;
    }

    ctx->pc = 0x205850u;

    // 0x205850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205854: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x205854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x205858: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x205858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x20585c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20585cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205860: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x205860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x205864: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x205864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x205868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20586c: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20586Cu;
    {
        const bool branch_taken_0x20586c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20586c) {
            ctx->pc = 0x2058C4u;
            goto label_2058c4;
        }
    }
    ctx->pc = 0x205874u;
    // 0x205874: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205874u;
    {
        const bool branch_taken_0x205874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205874) {
            ctx->pc = 0x205884u;
            goto label_205884;
        }
    }
    ctx->pc = 0x20587Cu;
    // 0x20587c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x20587Cu;
    {
        const bool branch_taken_0x20587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20587c) {
            ctx->pc = 0x2058FCu;
            goto label_2058fc;
        }
    }
    ctx->pc = 0x205884u;
label_205884:
    // 0x205884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205888: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20588c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20588cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x205890: 0x24065a1c  addiu       $a2, $zero, 0x5A1C
    ctx->pc = 0x205890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23068));
    // 0x205894: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x205894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205898: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x205898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20589c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20589Cu;
    SET_GPR_U32(ctx, 31, 0x2058A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20589Cu, 0x2058A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058A4u;
label_2058a4:
    // 0x2058a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2058a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058a8: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x2058a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2058ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2058acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058b0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2058b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2058b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2058b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2058b8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2058b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2058bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2058BCu;
    {
        const bool branch_taken_0x2058bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058bc) {
            ctx->pc = 0x2058FCu;
            goto label_2058fc;
        }
    }
    ctx->pc = 0x2058C4u;
label_2058c4:
    // 0x2058c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2058c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058c8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2058c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2058cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2058ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2058d0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2058d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2058d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2058d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058d8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2058D8u;
    SET_GPR_U32(ctx, 31, 0x2058E0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2058D8u, 0x2058E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058E0u;
label_2058e0:
    // 0x2058e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2058e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2058e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2058e8: 0xc080f60  jal         func_203D80
    ctx->pc = 0x2058E8u;
    SET_GPR_U32(ctx, 31, 0x2058F0u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2058E8u, 0x2058F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058F0u;
label_2058f0:
    // 0x2058f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2058f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058f4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2058F4u;
    SET_GPR_U32(ctx, 31, 0x2058FCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2058F4u, 0x2058FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058FCu;
label_2058fc:
    // 0x2058fc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2058fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205900: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x205900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x205904: 0x3e00008  jr          $ra
    ctx->pc = 0x205904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20590Cu;
}
