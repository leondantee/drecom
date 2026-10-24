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

// Function: e2d_id48_type00
// Address: 0x2b5570 - 0x2b55a0
void e2d_id48_type00_0x2b5570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id48_type00_0x2b5570");
#endif

    ctx->pc = 0x2b5570u;

    // 0x2b5570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5574: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b5574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b5578: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b557c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5580: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b5580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5584: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b5584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b5588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b558c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b558cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5590: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5594: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b5594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5598: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B55A0u;
}
