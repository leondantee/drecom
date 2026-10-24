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

// Function: capVu0RotMatrixXYZ
// Address: 0x19e290 - 0x19e2f8
void capVu0RotMatrixXYZ_0x19e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0RotMatrixXYZ_0x19e290");
#endif

    switch (ctx->pc) {
        case 0x19e2b8u: goto label_19e2b8;
        case 0x19e2d0u: goto label_19e2d0;
        case 0x19e2e8u: goto label_19e2e8;
        default: break;
    }

    ctx->pc = 0x19e290u;

    // 0x19e290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e294: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19e294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19e298: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19e298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19e29c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19e29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19e2a0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x19e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x19e2a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19e2a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e2ac: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x19e2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19e2b0: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x19E2B0u;
    SET_GPR_U32(ctx, 31, 0x19E2B8u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x19E2B0u, 0x19E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2B8u;
label_19e2b8:
    // 0x19e2b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19e2bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e2c0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19e2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e2c4: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x19e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19e2c8: 0xc067808  jal         func_19E020
    ctx->pc = 0x19E2C8u;
    SET_GPR_U32(ctx, 31, 0x19E2D0u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x19E2C8u, 0x19E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2D0u;
label_19e2d0:
    // 0x19e2d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19e2d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19e2d8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e2dc: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x19e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19e2e0: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x19E2E0u;
    SET_GPR_U32(ctx, 31, 0x19E2E8u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x19E2E0u, 0x19E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2E8u;
label_19e2e8:
    // 0x19e2e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19e2e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e2ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19e2ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E2F8u;
}
