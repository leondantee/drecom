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

// Function: Em1c_R1_wait_air
// Address: 0x36e270 - 0x36e30c
void Em1c_R1_wait_air_0x36e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_wait_air_0x36e270");
#endif

    switch (ctx->pc) {
        case 0x36e2c4u: goto label_36e2c4;
        case 0x36e2e4u: goto label_36e2e4;
        case 0x36e2f0u: goto label_36e2f0;
        case 0x36e2fcu: goto label_36e2fc;
        default: break;
    }

    ctx->pc = 0x36e270u;

    // 0x36e270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e274: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36e278: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36e27c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e280: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e284: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e28c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36E28Cu;
    {
        const bool branch_taken_0x36e28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e28c) {
            ctx->pc = 0x36E2D4u;
            goto label_36e2d4;
        }
    }
    ctx->pc = 0x36E294u;
    // 0x36e294: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E294u;
    {
        const bool branch_taken_0x36e294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e294) {
            ctx->pc = 0x36E2A4u;
            goto label_36e2a4;
        }
    }
    ctx->pc = 0x36E29Cu;
    // 0x36e29c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36E29Cu;
    {
        const bool branch_taken_0x36e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e29c) {
            ctx->pc = 0x36E2FCu;
            goto label_36e2fc;
        }
    }
    ctx->pc = 0x36E2A4u;
label_36e2a4:
    // 0x36e2a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e2a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e2ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e2b0: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x36e2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x36e2b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e2b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e2bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E2BCu;
    SET_GPR_U32(ctx, 31, 0x36E2C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E2BCu, 0x36E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2C4u;
label_36e2c4:
    // 0x36e2c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e2c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e2cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e2d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e2d4:
    // 0x36e2d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e2d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e2d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e2dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E2DCu;
    SET_GPR_U32(ctx, 31, 0x36E2E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E2DCu, 0x36E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2E4u;
label_36e2e4:
    // 0x36e2e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e2e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E2E8u;
    SET_GPR_U32(ctx, 31, 0x36E2F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E2E8u, 0x36E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2F0u;
label_36e2f0:
    // 0x36e2f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e2f4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E2F4u;
    SET_GPR_U32(ctx, 31, 0x36E2FCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E2F4u, 0x36E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2FCu;
label_36e2fc:
    // 0x36e2fc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e2fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e300: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36e304: 0x3e00008  jr          $ra
    ctx->pc = 0x36E304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E30Cu;
}
