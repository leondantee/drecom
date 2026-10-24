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

// Function: e2d_id97_type00
// Address: 0x2bedb0 - 0x2bedd4
void e2d_id97_type00_0x2bedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id97_type00_0x2bedb0");
#endif

    ctx->pc = 0x2bedb0u;

    // 0x2bedb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bedb4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bedb8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2bedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2bedbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bedbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bedc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bedc4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bedc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bedc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bedc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bedcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDD4u;
}
