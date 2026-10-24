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

// Function: e2d_id48_type04
// Address: 0x2b5aa0 - 0x2b5adc
void e2d_id48_type04_0x2b5aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id48_type04_0x2b5aa0");
#endif

    ctx->pc = 0x2b5aa0u;

    // 0x2b5aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5aa4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b5aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b5aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5aac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5ab0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b5ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5ab4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2b5ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b5ab8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5abc: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b5abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5ac0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b5ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5ac8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5acc: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5ad0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b5ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5ADCu;
}
