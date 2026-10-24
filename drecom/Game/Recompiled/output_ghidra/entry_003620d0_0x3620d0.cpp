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

// Function: entry_003620d0
// Address: 0x3620d0 - 0x3620f8
void entry_003620d0_0x3620d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003620d0_0x3620d0");
#endif

    switch (ctx->pc) {
        case 0x3620e8u: goto label_3620e8;
        default: break;
    }

    ctx->pc = 0x3620d0u;

    // 0x3620d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3620d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3620d4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3620d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3620d8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x3620d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3620dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3620dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3620e0: 0xc056964  jal         func_15A590
    ctx->pc = 0x3620E0u;
    SET_GPR_U32(ctx, 31, 0x3620E8u);
    ctx->pc = 0x15A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A590u, 0x3620E0u, 0x3620E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3620E8u;
label_3620e8:
    // 0x3620e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3620e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3620ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x3620ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3620f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3620F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3620F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3620F8u;
}
