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

// Function: SndBgmStop
// Address: 0x19f270 - 0x19f2d0
void SndBgmStop_0x19f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndBgmStop_0x19f270");
#endif

    switch (ctx->pc) {
        case 0x19f2acu: goto label_19f2ac;
        default: break;
    }

    ctx->pc = 0x19f270u;

    // 0x19f270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f274: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19f274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19f278: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19f278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19f27c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f280: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19f280u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19f284: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19f284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f288: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f28c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19f28cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f290: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19f290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19f294: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19F294u;
    {
        const bool branch_taken_0x19f294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f294) {
            ctx->pc = 0x19F2C0u;
            goto label_19f2c0;
        }
    }
    ctx->pc = 0x19F29Cu;
    // 0x19f29c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f2a0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x19f2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f2a4: 0xc0ce520  jal         func_339480
    ctx->pc = 0x19F2A4u;
    SET_GPR_U32(ctx, 31, 0x19F2ACu);
    ctx->pc = 0x339480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339480u, 0x19F2A4u, 0x19F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2ACu;
label_19f2ac:
    // 0x19f2ac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f2b0: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19f2b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f2b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f2bc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19f2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_19f2c0:
    // 0x19f2c0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19f2c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f2c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19f2c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F2D0u;
}
