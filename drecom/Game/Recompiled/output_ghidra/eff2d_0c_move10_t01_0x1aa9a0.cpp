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

// Function: eff2d_0c_move10_t01
// Address: 0x1aa9a0 - 0x1aa9e8
void eff2d_0c_move10_t01_0x1aa9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0c_move10_t01_0x1aa9a0");
#endif

    switch (ctx->pc) {
        case 0x1aa9bcu: goto label_1aa9bc;
        default: break;
    }

    ctx->pc = 0x1aa9a0u;

    // 0x1aa9a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aa9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aa9a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1aa9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1aa9a8: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1aa9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1aa9ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aa9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aa9b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1aa9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aa9b4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1AA9B4u;
    SET_GPR_U32(ctx, 31, 0x1AA9BCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1AA9B4u, 0x1AA9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9BCu;
label_1aa9bc:
    // 0x1aa9bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1aa9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1aa9c0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1aa9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1aa9c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aa9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa9c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1aa9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1aa9cc: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1aa9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x1aa9d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1aa9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1aa9d4: 0xac60012c  sw          $zero, 0x12C($v1)
    ctx->pc = 0x1aa9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
    // 0x1aa9d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1aa9d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa9dc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1aa9dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1aa9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA9E8u;
}
